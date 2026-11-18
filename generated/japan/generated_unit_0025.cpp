#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0025[4092] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0,
    14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71,
    0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92,
    0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0,
    115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0,
    0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148,
    0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158,
    0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200,
    0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0,
    0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0,
    264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0,
    0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 0,
    286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 296,
    0, 0, 297, 0, 298, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0,
    306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0,
    0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 0, 0, 329,
    0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0,
    0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394,
    0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437,
    0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 455,
    0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0,
    464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496,
    0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0,
    0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0, 517,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532,
    0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 541,
    0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    568, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0,
    0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 588, 589, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0,
    603, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0,
    0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0,
    0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0,
    0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 638, 639, 0, 0, 640,
    0, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652,
    0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 660, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 672, 0, 0, 0, 0, 0,
    0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688,
    0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704,
    0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720,
    0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736,
    0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 745, 0, 0, 746, 747, 0, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0,
    751, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 755, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    758, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766,
    0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0,
    776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 780, 0, 781, 0,
    0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788,
    0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0,
    791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0,
    800, 0, 0, 801, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806,
    0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0,
    0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0,
    0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0,
    0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826,
    0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0,
    832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0,
    0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0,
    0, 842, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0,
    0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0,
    0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0,
    0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0,
    863, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0,
    868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0,
    873, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0,
    0, 0, 0, 878, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0,
    883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0,
    0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0,
    0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 898,
    0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0, 0,
    0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 909,
    0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 911, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0,
    914, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 919, 0, 0, 0, 0,
    0, 920, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 0, 0, 0, 0, 924,
};
void recomp_unit_0025_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08868004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0025[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08868004;
    case 2u: goto L_0886800C;
    case 3u: goto L_08868014;
    case 4u: goto L_08868040;
    case 5u: goto L_08868048;
    case 6u: goto L_08868074;
    case 7u: goto L_0886807C;
    case 8u: goto L_08868084;
    case 9u: goto L_088680AC;
    case 10u: goto L_088680B4;
    case 11u: goto L_088680E0;
    case 12u: goto L_088680E8;
    case 13u: goto L_088680FC;
    case 14u: goto L_08868104;
    case 15u: goto L_0886810C;
    case 16u: goto L_08868118;
    case 17u: goto L_08868124;
    case 18u: goto L_0886812C;
    case 19u: goto L_08868134;
    case 20u: goto L_08868144;
    case 21u: goto L_08868154;
    case 22u: goto L_08868164;
    case 23u: goto L_08868170;
    case 24u: goto L_08868184;
    case 25u: goto L_088681AC;
    case 26u: goto L_088681C4;
    case 27u: goto L_088681D0;
    case 28u: goto L_088681DC;
    case 29u: goto L_088681E8;
    case 30u: goto L_088681F0;
    case 31u: goto L_08868204;
    case 32u: goto L_08868214;
    case 33u: goto L_08868228;
    case 34u: goto L_08868238;
    case 35u: goto L_0886823C;
    case 36u: goto L_08868244;
    case 37u: goto L_0886824C;
    case 38u: goto L_08868280;
    case 39u: goto L_08868284;
    case 40u: goto L_088682A4;
    case 41u: goto L_088682C4;
    case 42u: goto L_088682D8;
    case 43u: goto L_08868300;
    case 44u: goto L_0886832C;
    case 45u: goto L_0886833C;
    case 46u: goto L_08868354;
    case 47u: goto L_08868360;
    case 48u: goto L_08868374;
    case 49u: goto L_08868384;
    case 50u: goto L_08868398;
    case 51u: goto L_088683A0;
    case 52u: goto L_088683AC;
    case 53u: goto L_088683D8;
    case 54u: goto L_088683DC;
    case 55u: goto L_088683E4;
    case 56u: goto L_08868418;
    case 57u: goto L_08868420;
    case 58u: goto L_08868430;
    case 59u: goto L_08868440;
    case 60u: goto L_08868460;
    case 61u: goto L_08868480;
    case 62u: goto L_08868488;
    case 63u: goto L_08868494;
    case 64u: goto L_0886849C;
    case 65u: goto L_088684A8;
    case 66u: goto L_088684BC;
    case 67u: goto L_088684CC;
    case 68u: goto L_088684DC;
    case 69u: goto L_088684EC;
    case 70u: goto L_088684F8;
    case 71u: goto L_08868500;
    case 72u: goto L_08868508;
    case 73u: goto L_08868514;
    case 74u: goto L_0886851C;
    case 75u: goto L_08868524;
    case 76u: goto L_08868530;
    case 77u: goto L_08868538;
    case 78u: goto L_08868540;
    case 79u: goto L_0886854C;
    case 80u: goto L_08868554;
    case 81u: goto L_08868568;
    case 82u: goto L_0886857C;
    case 83u: goto L_0886858C;
    case 84u: goto L_0886859C;
    case 85u: goto L_088685A8;
    case 86u: goto L_088685B4;
    case 87u: goto L_088685BC;
    case 88u: goto L_088685C8;
    case 89u: goto L_088685D0;
    case 90u: goto L_088685DC;
    case 91u: goto L_088685F0;
    case 92u: goto L_08868600;
    case 93u: goto L_08868614;
    case 94u: goto L_0886861C;
    case 95u: goto L_08868628;
    case 96u: goto L_08868654;
    case 97u: goto L_08868658;
    case 98u: goto L_08868660;
    case 99u: goto L_08868694;
    case 100u: goto L_0886869C;
    case 101u: goto L_088686AC;
    case 102u: goto L_088686BC;
    case 103u: goto L_088686DC;
    case 104u: goto L_088686FC;
    case 105u: goto L_08868704;
    case 106u: goto L_08868710;
    case 107u: goto L_08868718;
    case 108u: goto L_08868724;
    case 109u: goto L_08868738;
    case 110u: goto L_08868748;
    case 111u: goto L_08868758;
    case 112u: goto L_08868768;
    case 113u: goto L_08868774;
    case 114u: goto L_0886877C;
    case 115u: goto L_08868784;
    case 116u: goto L_08868790;
    case 117u: goto L_08868798;
    case 118u: goto L_088687A0;
    case 119u: goto L_088687AC;
    case 120u: goto L_088687B4;
    case 121u: goto L_088687BC;
    case 122u: goto L_088687C8;
    case 123u: goto L_088687D0;
    case 124u: goto L_088687E4;
    case 125u: goto L_088687F8;
    case 126u: goto L_08868808;
    case 127u: goto L_08868818;
    case 128u: goto L_08868824;
    case 129u: goto L_08868830;
    case 130u: goto L_08868838;
    case 131u: goto L_08868844;
    case 132u: goto L_0886884C;
    case 133u: goto L_08868858;
    case 134u: goto L_0886886C;
    case 135u: goto L_0886887C;
    case 136u: goto L_08868890;
    case 137u: goto L_08868898;
    case 138u: goto L_088688A4;
    case 139u: goto L_088688D0;
    case 140u: goto L_088688D4;
    case 141u: goto L_088688DC;
    case 142u: goto L_08868910;
    case 143u: goto L_08868918;
    case 144u: goto L_08868928;
    case 145u: goto L_08868938;
    case 146u: goto L_08868958;
    case 147u: goto L_08868978;
    case 148u: goto L_08868980;
    case 149u: goto L_0886898C;
    case 150u: goto L_08868994;
    case 151u: goto L_088689A0;
    case 152u: goto L_088689B4;
    case 153u: goto L_088689C4;
    case 154u: goto L_088689D4;
    case 155u: goto L_088689E4;
    case 156u: goto L_088689F0;
    case 157u: goto L_088689F8;
    case 158u: goto L_08868A00;
    case 159u: goto L_08868A0C;
    case 160u: goto L_08868A14;
    case 161u: goto L_08868A1C;
    case 162u: goto L_08868A28;
    case 163u: goto L_08868A30;
    case 164u: goto L_08868A38;
    case 165u: goto L_08868A44;
    case 166u: goto L_08868A4C;
    case 167u: goto L_08868A60;
    case 168u: goto L_08868A74;
    case 169u: goto L_08868A84;
    case 170u: goto L_08868A94;
    case 171u: goto L_08868AA0;
    case 172u: goto L_08868AAC;
    case 173u: goto L_08868AB4;
    case 174u: goto L_08868AC0;
    case 175u: goto L_08868AC8;
    case 176u: goto L_08868AD4;
    case 177u: goto L_08868AE8;
    case 178u: goto L_08868AF8;
    case 179u: goto L_08868B0C;
    case 180u: goto L_08868B14;
    case 181u: goto L_08868B20;
    case 182u: goto L_08868B4C;
    case 183u: goto L_08868B50;
    case 184u: goto L_08868B58;
    case 185u: goto L_08868B8C;
    case 186u: goto L_08868B94;
    case 187u: goto L_08868BA4;
    case 188u: goto L_08868BB4;
    case 189u: goto L_08868BD4;
    case 190u: goto L_08868BF4;
    case 191u: goto L_08868BFC;
    case 192u: goto L_08868C08;
    case 193u: goto L_08868C10;
    case 194u: goto L_08868C1C;
    case 195u: goto L_08868C30;
    case 196u: goto L_08868C40;
    case 197u: goto L_08868C54;
    case 198u: goto L_08868C64;
    case 199u: goto L_08868C74;
    case 200u: goto L_08868C80;
    case 201u: goto L_08868C88;
    case 202u: goto L_08868C90;
    case 203u: goto L_08868C9C;
    case 204u: goto L_08868CA4;
    case 205u: goto L_08868CAC;
    case 206u: goto L_08868CB8;
    case 207u: goto L_08868CC0;
    case 208u: goto L_08868CC8;
    case 209u: goto L_08868CD4;
    case 210u: goto L_08868CDC;
    case 211u: goto L_08868CF0;
    case 212u: goto L_08868D04;
    case 213u: goto L_08868D14;
    case 214u: goto L_08868D24;
    case 215u: goto L_08868D30;
    case 216u: goto L_08868D3C;
    case 217u: goto L_08868D44;
    case 218u: goto L_08868D50;
    case 219u: goto L_08868D58;
    case 220u: goto L_08868D64;
    case 221u: goto L_08868D78;
    case 222u: goto L_08868D8C;
    case 223u: goto L_08868D9C;
    case 224u: goto L_08868DAC;
    case 225u: goto L_08868DC0;
    case 226u: goto L_08868DC8;
    case 227u: goto L_08868DD4;
    case 228u: goto L_08868E00;
    case 229u: goto L_08868E04;
    case 230u: goto L_08868E0C;
    case 231u: goto L_08868E40;
    case 232u: goto L_08868E48;
    case 233u: goto L_08868E58;
    case 234u: goto L_08868E68;
    case 235u: goto L_08868E88;
    case 236u: goto L_08868EA8;
    case 237u: goto L_08868EB0;
    case 238u: goto L_08868EBC;
    case 239u: goto L_08868EC4;
    case 240u: goto L_08868ED0;
    case 241u: goto L_08868EE4;
    case 242u: goto L_08868EF4;
    case 243u: goto L_08868F08;
    case 244u: goto L_08868F18;
    case 245u: goto L_08868F28;
    case 246u: goto L_08868F34;
    case 247u: goto L_08868F3C;
    case 248u: goto L_08868F44;
    case 249u: goto L_08868F50;
    case 250u: goto L_08868F58;
    case 251u: goto L_08868F60;
    case 252u: goto L_08868F6C;
    case 253u: goto L_08868F74;
    case 254u: goto L_08868F7C;
    case 255u: goto L_08868F88;
    case 256u: goto L_08868F90;
    case 257u: goto L_08868FA4;
    case 258u: goto L_08868FB8;
    case 259u: goto L_08868FC8;
    case 260u: goto L_08868FD8;
    case 261u: goto L_08868FE4;
    case 262u: goto L_08868FF0;
    case 263u: goto L_08868FF8;
    case 264u: goto L_08869004;
    case 265u: goto L_0886900C;
    case 266u: goto L_08869018;
    case 267u: goto L_0886902C;
    case 268u: goto L_08869040;
    case 269u: goto L_08869050;
    case 270u: goto L_08869060;
    case 271u: goto L_08869074;
    case 272u: goto L_0886907C;
    case 273u: goto L_08869088;
    case 274u: goto L_088690B4;
    case 275u: goto L_088690B8;
    case 276u: goto L_088690C0;
    case 277u: goto L_088690F4;
    case 278u: goto L_088690FC;
    case 279u: goto L_0886910C;
    case 280u: goto L_0886911C;
    case 281u: goto L_0886913C;
    case 282u: goto L_0886915C;
    case 283u: goto L_08869164;
    case 284u: goto L_08869170;
    case 285u: goto L_08869178;
    case 286u: goto L_08869184;
    case 287u: goto L_08869198;
    case 288u: goto L_088691A8;
    case 289u: goto L_088691B8;
    case 290u: goto L_088691C8;
    case 291u: goto L_088691D4;
    case 292u: goto L_088691DC;
    case 293u: goto L_088691E4;
    case 294u: goto L_088691F0;
    case 295u: goto L_088691F8;
    case 296u: goto L_08869200;
    case 297u: goto L_0886920C;
    case 298u: goto L_08869214;
    case 299u: goto L_0886921C;
    case 300u: goto L_08869228;
    case 301u: goto L_08869230;
    case 302u: goto L_08869244;
    case 303u: goto L_08869258;
    case 304u: goto L_08869268;
    case 305u: goto L_08869278;
    case 306u: goto L_08869284;
    case 307u: goto L_08869290;
    case 308u: goto L_08869298;
    case 309u: goto L_088692A4;
    case 310u: goto L_088692AC;
    case 311u: goto L_088692B8;
    case 312u: goto L_088692CC;
    case 313u: goto L_088692DC;
    case 314u: goto L_088692F0;
    case 315u: goto L_088692F8;
    case 316u: goto L_08869304;
    case 317u: goto L_08869330;
    case 318u: goto L_08869334;
    case 319u: goto L_0886933C;
    case 320u: goto L_08869370;
    case 321u: goto L_08869378;
    case 322u: goto L_08869388;
    case 323u: goto L_08869398;
    case 324u: goto L_088693B8;
    case 325u: goto L_088693D8;
    case 326u: goto L_088693E0;
    case 327u: goto L_088693EC;
    case 328u: goto L_088693F4;
    case 329u: goto L_08869400;
    case 330u: goto L_08869414;
    case 331u: goto L_08869424;
    case 332u: goto L_08869434;
    case 333u: goto L_08869444;
    case 334u: goto L_08869450;
    case 335u: goto L_08869458;
    case 336u: goto L_08869460;
    case 337u: goto L_0886946C;
    case 338u: goto L_08869474;
    case 339u: goto L_0886947C;
    case 340u: goto L_08869488;
    case 341u: goto L_08869490;
    case 342u: goto L_08869498;
    case 343u: goto L_088694A4;
    case 344u: goto L_088694AC;
    case 345u: goto L_088694C0;
    case 346u: goto L_088694D4;
    case 347u: goto L_088694E4;
    case 348u: goto L_088694F4;
    case 349u: goto L_08869500;
    case 350u: goto L_0886950C;
    case 351u: goto L_08869514;
    case 352u: goto L_08869520;
    case 353u: goto L_08869528;
    case 354u: goto L_08869534;
    case 355u: goto L_08869548;
    case 356u: goto L_08869558;
    case 357u: goto L_08869570;
    case 358u: goto L_08869584;
    case 359u: goto L_088695A4;
    case 360u: goto L_088695CC;
    case 361u: goto L_088695FC;
    case 362u: goto L_08869634;
    case 363u: goto L_0886964C;
    case 364u: goto L_08869654;
    case 365u: goto L_0886965C;
    case 366u: goto L_08869664;
    case 367u: goto L_08869674;
    case 368u: goto L_08869688;
    case 369u: goto L_08869690;
    case 370u: goto L_08869698;
    case 371u: goto L_088696A0;
    case 372u: goto L_088696A8;
    case 373u: goto L_088696B0;
    case 374u: goto L_088696DC;
    case 375u: goto L_088696E4;
    case 376u: goto L_08869710;
    case 377u: goto L_08869718;
    case 378u: goto L_08869730;
    case 379u: goto L_08869738;
    case 380u: goto L_08869740;
    case 381u: goto L_08869748;
    case 382u: goto L_08869750;
    case 383u: goto L_08869758;
    case 384u: goto L_0886976C;
    case 385u: goto L_08869774;
    case 386u: goto L_08869798;
    case 387u: goto L_088697A0;
    case 388u: goto L_088697AC;
    case 389u: goto L_088697B4;
    case 390u: goto L_088697CC;
    case 391u: goto L_088697D4;
    case 392u: goto L_088697E4;
    case 393u: goto L_088697EC;
    case 394u: goto L_08869800;
    case 395u: goto L_08869808;
    case 396u: goto L_08869818;
    case 397u: goto L_08869820;
    case 398u: goto L_08869830;
    case 399u: goto L_08869838;
    case 400u: goto L_08869850;
    case 401u: goto L_08869858;
    case 402u: goto L_08869864;
    case 403u: goto L_0886986C;
    case 404u: goto L_08869874;
    case 405u: goto L_0886987C;
    case 406u: goto L_0886989C;
    case 407u: goto L_088698B0;
    case 408u: goto L_088698BC;
    case 409u: goto L_088698D0;
    case 410u: goto L_088698F8;
    case 411u: goto L_08869918;
    case 412u: goto L_08869920;
    case 413u: goto L_08869944;
    case 414u: goto L_08869950;
    case 415u: goto L_08869958;
    case 416u: goto L_0886998C;
    case 417u: goto L_08869990;
    case 418u: goto L_088699C0;
    case 419u: goto L_088699E4;
    case 420u: goto L_088699EC;
    case 421u: goto L_08869A18;
    case 422u: goto L_08869A20;
    case 423u: goto L_08869A4C;
    case 424u: goto L_08869A60;
    case 425u: goto L_08869A68;
    case 426u: goto L_08869A94;
    case 427u: goto L_08869A9C;
    case 428u: goto L_08869ADC;
    case 429u: goto L_08869AE4;
    case 430u: goto L_08869B0C;
    case 431u: goto L_08869B1C;
    case 432u: goto L_08869B34;
    case 433u: goto L_08869B48;
    case 434u: goto L_08869B58;
    case 435u: goto L_08869B70;
    case 436u: goto L_08869B78;
    case 437u: goto L_08869B80;
    case 438u: goto L_08869B9C;
    case 439u: goto L_08869BC8;
    case 440u: goto L_08869BE8;
    case 441u: goto L_08869C04;
    case 442u: goto L_08869C2C;
    case 443u: goto L_08869C4C;
    case 444u: goto L_08869C60;
    case 445u: goto L_08869C70;
    case 446u: goto L_08869C98;
    case 447u: goto L_08869CAC;
    case 448u: goto L_08869CB8;
    case 449u: goto L_08869CC8;
    case 450u: goto L_08869CD4;
    case 451u: goto L_08869CDC;
    case 452u: goto L_08869CE4;
    case 453u: goto L_08869CEC;
    case 454u: goto L_08869CF4;
    case 455u: goto L_08869D00;
    case 456u: goto L_08869D14;
    case 457u: goto L_08869D1C;
    case 458u: goto L_08869D40;
    case 459u: goto L_08869D48;
    case 460u: goto L_08869D54;
    case 461u: goto L_08869D68;
    case 462u: goto L_08869D70;
    case 463u: goto L_08869D7C;
    case 464u: goto L_08869D84;
    case 465u: goto L_08869D8C;
    case 466u: goto L_08869DAC;
    case 467u: goto L_08869DD4;
    case 468u: goto L_08869E04;
    case 469u: goto L_08869E3C;
    case 470u: goto L_08869E48;
    case 471u: goto L_08869E58;
    case 472u: goto L_08869E68;
    case 473u: goto L_08869E78;
    case 474u: goto L_08869EA0;
    case 475u: goto L_08869EB4;
    case 476u: goto L_08869EC0;
    case 477u: goto L_08869EC8;
    case 478u: goto L_08869ED0;
    case 479u: goto L_08869EE8;
    case 480u: goto L_08869F08;
    case 481u: goto L_08869F1C;
    case 482u: goto L_08869F28;
    case 483u: goto L_08869F3C;
    case 484u: goto L_08869F54;
    case 485u: goto L_08869F60;
    case 486u: goto L_08869F68;
    case 487u: goto L_08869F84;
    case 488u: goto L_08869FB0;
    case 489u: goto L_08869FD0;
    case 490u: goto L_08869FEC;
    case 491u: goto L_0886A014;
    case 492u: goto L_0886A034;
    case 493u: goto L_0886A048;
    case 494u: goto L_0886A070;
    case 495u: goto L_0886A078;
    case 496u: goto L_0886A080;
    case 497u: goto L_0886A088;
    case 498u: goto L_0886A0AC;
    case 499u: goto L_0886A0B4;
    case 500u: goto L_0886A0C0;
    case 501u: goto L_0886A0D8;
    case 502u: goto L_0886A0E0;
    case 503u: goto L_0886A0EC;
    case 504u: goto L_0886A0F4;
    case 505u: goto L_0886A0FC;
    case 506u: goto L_0886A11C;
    case 507u: goto L_0886A144;
    case 508u: goto L_0886A178;
    case 509u: goto L_0886A1A0;
    case 510u: goto L_0886A1A8;
    case 511u: goto L_0886A1B0;
    case 512u: goto L_0886A1B8;
    case 513u: goto L_0886A1DC;
    case 514u: goto L_0886A1E4;
    case 515u: goto L_0886A1F0;
    case 516u: goto L_0886A1F8;
    case 517u: goto L_0886A200;
    case 518u: goto L_0886A20C;
    case 519u: goto L_0886A22C;
    case 520u: goto L_0886A234;
    case 521u: goto L_0886A240;
    case 522u: goto L_0886A244;
    case 523u: goto L_0886A274;
    case 524u: goto L_0886A290;
    case 525u: goto L_0886A2A8;
    case 526u: goto L_0886A2B4;
    case 527u: goto L_0886A2C0;
    case 528u: goto L_0886A2CC;
    case 529u: goto L_0886A2D4;
    case 530u: goto L_0886A2E4;
    case 531u: goto L_0886A2F4;
    case 532u: goto L_0886A300;
    case 533u: goto L_0886A30C;
    case 534u: goto L_0886A314;
    case 535u: goto L_0886A328;
    case 536u: goto L_0886A330;
    case 537u: goto L_0886A338;
    case 538u: goto L_0886A360;
    case 539u: goto L_0886A368;
    case 540u: goto L_0886A378;
    case 541u: goto L_0886A380;
    case 542u: goto L_0886A390;
    case 543u: goto L_0886A398;
    case 544u: goto L_0886A3A4;
    case 545u: goto L_0886A3AC;
    case 546u: goto L_0886A3BC;
    case 547u: goto L_0886A3DC;
    case 548u: goto L_0886A404;
    case 549u: goto L_0886A40C;
    case 550u: goto L_0886A41C;
    case 551u: goto L_0886A430;
    case 552u: goto L_0886A458;
    case 553u: goto L_0886A46C;
    case 554u: goto L_0886A474;
    case 555u: goto L_0886A49C;
    case 556u: goto L_0886A4A4;
    case 557u: goto L_0886A4B4;
    case 558u: goto L_0886A4BC;
    case 559u: goto L_0886A4CC;
    case 560u: goto L_0886A4D4;
    case 561u: goto L_0886A4E0;
    case 562u: goto L_0886A4E8;
    case 563u: goto L_0886A4F8;
    case 564u: goto L_0886A518;
    case 565u: goto L_0886A540;
    case 566u: goto L_0886A554;
    case 567u: goto L_0886A55C;
    case 568u: goto L_0886A584;
    case 569u: goto L_0886A58C;
    case 570u: goto L_0886A59C;
    case 571u: goto L_0886A5A4;
    case 572u: goto L_0886A5B4;
    case 573u: goto L_0886A5D4;
    case 574u: goto L_0886A5F8;
    case 575u: goto L_0886A60C;
    case 576u: goto L_0886A614;
    case 577u: goto L_0886A63C;
    case 578u: goto L_0886A644;
    case 579u: goto L_0886A654;
    case 580u: goto L_0886A65C;
    case 581u: goto L_0886A66C;
    case 582u: goto L_0886A674;
    case 583u: goto L_0886A694;
    case 584u: goto L_0886A69C;
    case 585u: goto L_0886A6B4;
    case 586u: goto L_0886A6D4;
    case 587u: goto L_0886A6FC;
    case 588u: goto L_0886A70C;
    case 589u: goto L_0886A710;
    case 590u: goto L_0886A714;
    case 591u: goto L_0886A738;
    case 592u: goto L_0886A744;
    case 593u: goto L_0886A758;
    case 594u: goto L_0886A76C;
    case 595u: goto L_0886A778;
    case 596u: goto L_0886A780;
    case 597u: goto L_0886A7A0;
    case 598u: goto L_0886A7B0;
    case 599u: goto L_0886A7D0;
    case 600u: goto L_0886A7E8;
    case 601u: goto L_0886A7F4;
    case 602u: goto L_0886A7FC;
    case 603u: goto L_0886A804;
    case 604u: goto L_0886A814;
    case 605u: goto L_0886A81C;
    case 606u: goto L_0886A82C;
    case 607u: goto L_0886A83C;
    case 608u: goto L_0886A84C;
    case 609u: goto L_0886A894;
    case 610u: goto L_0886A8A4;
    case 611u: goto L_0886A8D0;
    case 612u: goto L_0886A8D8;
    case 613u: goto L_0886A8F8;
    case 614u: goto L_0886A93C;
    case 615u: goto L_0886A944;
    case 616u: goto L_0886A950;
    case 617u: goto L_0886A96C;
    case 618u: goto L_0886A974;
    case 619u: goto L_0886A98C;
    case 620u: goto L_0886A994;
    case 621u: goto L_0886A99C;
    case 622u: goto L_0886A9E0;
    case 623u: goto L_0886A9E8;
    case 624u: goto L_0886A9F4;
    case 625u: goto L_0886AA10;
    case 626u: goto L_0886AA18;
    case 627u: goto L_0886AA30;
    case 628u: goto L_0886AA34;
    case 629u: goto L_0886AA60;
    case 630u: goto L_0886AA74;
    case 631u: goto L_0886AA88;
    case 632u: goto L_0886AAA0;
    case 633u: goto L_0886AAAC;
    case 634u: goto L_0886AAB8;
    case 635u: goto L_0886AAC4;
    case 636u: goto L_0886AACC;
    case 637u: goto L_0886AAD4;
    case 638u: goto L_0886AAF0;
    case 639u: goto L_0886AAF4;
    case 640u: goto L_0886AB00;
    case 641u: goto L_0886AB14;
    case 642u: goto L_0886AB20;
    case 643u: goto L_0886AB28;
    case 644u: goto L_0886AB34;
    case 645u: goto L_0886AB3C;
    case 646u: goto L_0886AB44;
    case 647u: goto L_0886AB50;
    case 648u: goto L_0886AB58;
    case 649u: goto L_0886AB64;
    case 650u: goto L_0886AB6C;
    case 651u: goto L_0886AB74;
    case 652u: goto L_0886AB80;
    case 653u: goto L_0886AB88;
    case 654u: goto L_0886AB94;
    case 655u: goto L_0886AB9C;
    case 656u: goto L_0886ABA4;
    case 657u: goto L_0886ABB0;
    case 658u: goto L_0886ABB8;
    case 659u: goto L_0886ABC4;
    case 660u: goto L_0886ABC8;
    case 661u: goto L_0886ABD4;
    case 662u: goto L_0886ABE4;
    case 663u: goto L_0886ABF4;
    case 664u: goto L_0886AC04;
    case 665u: goto L_0886AC20;
    case 666u: goto L_0886AC2C;
    case 667u: goto L_0886AC34;
    case 668u: goto L_0886AC3C;
    case 669u: goto L_0886AC50;
    case 670u: goto L_0886AC60;
    case 671u: goto L_0886AC64;
    case 672u: goto L_0886AC6C;
    case 673u: goto L_0886AC88;
    case 674u: goto L_0886AC90;
    case 675u: goto L_0886AC98;
    case 676u: goto L_0886ACA0;
    case 677u: goto L_0886ACA8;
    case 678u: goto L_0886ACB0;
    case 679u: goto L_0886ACB8;
    case 680u: goto L_0886ACC0;
    case 681u: goto L_0886ACC8;
    case 682u: goto L_0886ACD0;
    case 683u: goto L_0886ACD8;
    case 684u: goto L_0886ACE0;
    case 685u: goto L_0886ACE8;
    case 686u: goto L_0886ACF0;
    case 687u: goto L_0886ACF8;
    case 688u: goto L_0886AD00;
    case 689u: goto L_0886AD08;
    case 690u: goto L_0886AD10;
    case 691u: goto L_0886AD18;
    case 692u: goto L_0886AD20;
    case 693u: goto L_0886AD28;
    case 694u: goto L_0886AD30;
    case 695u: goto L_0886AD38;
    case 696u: goto L_0886AD40;
    case 697u: goto L_0886AD48;
    case 698u: goto L_0886AD50;
    case 699u: goto L_0886AD58;
    case 700u: goto L_0886AD60;
    case 701u: goto L_0886AD68;
    case 702u: goto L_0886AD70;
    case 703u: goto L_0886AD78;
    case 704u: goto L_0886AD80;
    case 705u: goto L_0886AD88;
    case 706u: goto L_0886AD90;
    case 707u: goto L_0886AD98;
    case 708u: goto L_0886ADA0;
    case 709u: goto L_0886ADA8;
    case 710u: goto L_0886ADB0;
    case 711u: goto L_0886ADB8;
    case 712u: goto L_0886ADC0;
    case 713u: goto L_0886ADC8;
    case 714u: goto L_0886ADD0;
    case 715u: goto L_0886ADD8;
    case 716u: goto L_0886ADE0;
    case 717u: goto L_0886ADE8;
    case 718u: goto L_0886ADF0;
    case 719u: goto L_0886ADF8;
    case 720u: goto L_0886AE00;
    case 721u: goto L_0886AE08;
    case 722u: goto L_0886AE10;
    case 723u: goto L_0886AE18;
    case 724u: goto L_0886AE20;
    case 725u: goto L_0886AE28;
    case 726u: goto L_0886AE30;
    case 727u: goto L_0886AE38;
    case 728u: goto L_0886AE40;
    case 729u: goto L_0886AE48;
    case 730u: goto L_0886AE50;
    case 731u: goto L_0886AE58;
    case 732u: goto L_0886AE60;
    case 733u: goto L_0886AE68;
    case 734u: goto L_0886AE70;
    case 735u: goto L_0886AE78;
    case 736u: goto L_0886AE80;
    case 737u: goto L_0886AE88;
    case 738u: goto L_0886AE90;
    case 739u: goto L_0886AE98;
    case 740u: goto L_0886AEA0;
    case 741u: goto L_0886AEA8;
    case 742u: goto L_0886AEB0;
    case 743u: goto L_0886AEB8;
    case 744u: goto L_0886AEC0;
    case 745u: goto L_0886AEC4;
    case 746u: goto L_0886AED0;
    case 747u: goto L_0886AED4;
    case 748u: goto L_0886AEE0;
    case 749u: goto L_0886AEF0;
    case 750u: goto L_0886AEF8;
    case 751u: goto L_0886AF04;
    case 752u: goto L_0886AF0C;
    case 753u: goto L_0886AF2C;
    case 754u: goto L_0886AF34;
    case 755u: goto L_0886AF48;
    case 756u: goto L_0886AF4C;
    case 757u: goto L_0886AF54;
    case 758u: goto L_0886AF84;
    case 759u: goto L_0886AF94;
    case 760u: goto L_0886AFB4;
    case 761u: goto L_0886AFD4;
    case 762u: goto L_0886B008;
    case 763u: goto L_0886B018;
    case 764u: goto L_0886B048;
    case 765u: goto L_0886B050;
    case 766u: goto L_0886B080;
    case 767u: goto L_0886B08C;
    case 768u: goto L_0886B0EC;
    case 769u: goto L_0886B0F4;
    case 770u: goto L_0886B124;
    case 771u: goto L_0886B12C;
    case 772u: goto L_0886B138;
    case 773u: goto L_0886B140;
    case 774u: goto L_0886B164;
    case 775u: goto L_0886B170;
    case 776u: goto L_0886B184;
    case 777u: goto L_0886B190;
    case 778u: goto L_0886B1E0;
    case 779u: goto L_0886B1EC;
    case 780u: goto L_0886B1F4;
    case 781u: goto L_0886B1FC;
    case 782u: goto L_0886B20C;
    case 783u: goto L_0886B214;
    case 784u: goto L_0886B224;
    case 785u: goto L_0886B234;
    case 786u: goto L_0886B244;
    case 787u: goto L_0886B25C;
    case 788u: goto L_0886B280;
    case 789u: goto L_0886B290;
    case 790u: goto L_0886B2EC;
    case 791u: goto L_0886B304;
    case 792u: goto L_0886B320;
    case 793u: goto L_0886B328;
    case 794u: goto L_0886B334;
    case 795u: goto L_0886B33C;
    case 796u: goto L_0886B344;
    case 797u: goto L_0886B34C;
    case 798u: goto L_0886B3E8;
    case 799u: goto L_0886B3FC;
    case 800u: goto L_0886B404;
    case 801u: goto L_0886B410;
    case 802u: goto L_0886B414;
    case 803u: goto L_0886B424;
    case 804u: goto L_0886B43C;
    case 805u: goto L_0886B45C;
    case 806u: goto L_0886B480;
    case 807u: goto L_0886B48C;
    case 808u: goto L_0886B4A4;
    case 809u: goto L_0886B4C4;
    case 810u: goto L_0886B4E8;
    case 811u: goto L_0886B4F4;
    case 812u: goto L_0886B50C;
    case 813u: goto L_0886B52C;
    case 814u: goto L_0886B550;
    case 815u: goto L_0886B55C;
    case 816u: goto L_0886B574;
    case 817u: goto L_0886B58C;
    case 818u: goto L_0886B5B0;
    case 819u: goto L_0886B5BC;
    case 820u: goto L_0886B5D4;
    case 821u: goto L_0886B5F4;
    case 822u: goto L_0886B618;
    case 823u: goto L_0886B624;
    case 824u: goto L_0886B63C;
    case 825u: goto L_0886B65C;
    case 826u: goto L_0886B680;
    case 827u: goto L_0886B68C;
    case 828u: goto L_0886B6A4;
    case 829u: goto L_0886B6BC;
    case 830u: goto L_0886B6E0;
    case 831u: goto L_0886B6EC;
    case 832u: goto L_0886B704;
    case 833u: goto L_0886B71C;
    case 834u: goto L_0886B740;
    case 835u: goto L_0886B74C;
    case 836u: goto L_0886B764;
    case 837u: goto L_0886B77C;
    case 838u: goto L_0886B7A0;
    case 839u: goto L_0886B7AC;
    case 840u: goto L_0886B7C4;
    case 841u: goto L_0886B7E4;
    case 842u: goto L_0886B808;
    case 843u: goto L_0886B814;
    case 844u: goto L_0886B82C;
    case 845u: goto L_0886B844;
    case 846u: goto L_0886B868;
    case 847u: goto L_0886B874;
    case 848u: goto L_0886B88C;
    case 849u: goto L_0886B8AC;
    case 850u: goto L_0886B8D0;
    case 851u: goto L_0886B8DC;
    case 852u: goto L_0886B8F4;
    case 853u: goto L_0886B90C;
    case 854u: goto L_0886B930;
    case 855u: goto L_0886B93C;
    case 856u: goto L_0886B954;
    case 857u: goto L_0886B96C;
    case 858u: goto L_0886B990;
    case 859u: goto L_0886B99C;
    case 860u: goto L_0886B9B4;
    case 861u: goto L_0886B9D4;
    case 862u: goto L_0886B9F8;
    case 863u: goto L_0886BA04;
    case 864u: goto L_0886BA1C;
    case 865u: goto L_0886BA3C;
    case 866u: goto L_0886BA60;
    case 867u: goto L_0886BA6C;
    case 868u: goto L_0886BA84;
    case 869u: goto L_0886BA9C;
    case 870u: goto L_0886BAC0;
    case 871u: goto L_0886BACC;
    case 872u: goto L_0886BAE4;
    case 873u: goto L_0886BB04;
    case 874u: goto L_0886BB28;
    case 875u: goto L_0886BB34;
    case 876u: goto L_0886BB4C;
    case 877u: goto L_0886BB6C;
    case 878u: goto L_0886BB90;
    case 879u: goto L_0886BB9C;
    case 880u: goto L_0886BBB4;
    case 881u: goto L_0886BBD4;
    case 882u: goto L_0886BBF8;
    case 883u: goto L_0886BC04;
    case 884u: goto L_0886BC1C;
    case 885u: goto L_0886BC34;
    case 886u: goto L_0886BC58;
    case 887u: goto L_0886BC64;
    case 888u: goto L_0886BC7C;
    case 889u: goto L_0886BC94;
    case 890u: goto L_0886BCB8;
    case 891u: goto L_0886BCC4;
    case 892u: goto L_0886BCDC;
    case 893u: goto L_0886BCF4;
    case 894u: goto L_0886BD18;
    case 895u: goto L_0886BD24;
    case 896u: goto L_0886BD3C;
    case 897u: goto L_0886BD5C;
    case 898u: goto L_0886BD80;
    case 899u: goto L_0886BD8C;
    case 900u: goto L_0886BDA4;
    case 901u: goto L_0886BDC4;
    case 902u: goto L_0886BDE8;
    case 903u: goto L_0886BDF4;
    case 904u: goto L_0886BE0C;
    case 905u: goto L_0886BE2C;
    case 906u: goto L_0886BE50;
    case 907u: goto L_0886BE5C;
    case 908u: goto L_0886BE70;
    case 909u: goto L_0886BE80;
    case 910u: goto L_0886BEA4;
    case 911u: goto L_0886BEB0;
    case 912u: goto L_0886BEC8;
    case 913u: goto L_0886BEE0;
    case 914u: goto L_0886BF04;
    case 915u: goto L_0886BF10;
    case 916u: goto L_0886BF28;
    case 917u: goto L_0886BF40;
    case 918u: goto L_0886BF64;
    case 919u: goto L_0886BF70;
    case 920u: goto L_0886BF88;
    case 921u: goto L_0886BFA8;
    case 922u: goto L_0886BFCC;
    case 923u: goto L_0886BFD8;
    case 924u: goto L_0886BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08868004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088680E0;
      }
      goto L_0886800C;
    }
L_0886800C:
    ctx.set_gpr(31, 0x08868014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08868014u) goto L_08868014;
    return;
L_08868014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16177u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43516u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16569u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 24642u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16549u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 5767u);
    ctx.set_gpr(31, 0x08868040u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08868040u) goto L_08868040;
    return;
L_08868040:
    ctx.set_gpr(31, 0x08868048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08868048u) goto L_08868048;
    return;
L_08868048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49030u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16573u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15798u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 17826u);
    ctx.set_gpr(31, 0x08868074u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08868074u) goto L_08868074;
    return;
L_08868074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088680E0;
      }
      goto L_0886807C;
    }
L_0886807C:
    ctx.set_gpr(31, 0x08868084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08868084u) goto L_08868084;
    return;
L_08868084:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15872u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16567u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16562u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 53477u);
    ctx.set_gpr(31, 0x088680ACu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x088680ACu) goto L_088680AC;
    return;
L_088680AC:
    ctx.set_gpr(31, 0x088680B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088680B4u) goto L_088680B4;
    return;
L_088680B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49219u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 524u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16567u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49338u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 5243u);
    ctx.set_gpr(31, 0x088680E0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x088680E0u) goto L_088680E0;
    return;
L_088680E0:
    ctx.set_gpr(31, 0x088680E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088680E8u) goto L_088680E8;
    return;
L_088680E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088680FCu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x088680FCu) goto L_088680FC;
    return;
L_088680FC:
    ctx.set_gpr(31, 0x08868104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08868104u) goto L_08868104;
    return;
L_08868104:
    ctx.set_gpr(31, 0x0886810Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x0886810Cu) goto L_0886810C;
    return;
L_0886810C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868118u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08868118u) goto L_08868118;
    return;
L_08868118:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08868124u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 889u, 0x0885F638u>(ctx, &aot_mem) && ctx.pc == 0x08868124u) goto L_08868124;
    return;
L_08868124:
    ctx.set_gpr(31, 0x0886812Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0886812Cu) goto L_0886812C;
    return;
L_0886812C:
    ctx.set_gpr(31, 0x08868134u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08868134u) goto L_08868134;
    return;
L_08868134:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08868144u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08868144u) goto L_08868144;
    return;
L_08868144:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868154u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08868154u) goto L_08868154;
    return;
L_08868154:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868164u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08868164u) goto L_08868164;
    return;
L_08868164:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08868170u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 146u, 0x08854944u>(ctx, &aot_mem) && ctx.pc == 0x08868170u) goto L_08868170;
    return;
L_08868170:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868184;
    }
L_08868184:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088681AC;
    }
L_088681AC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16362u << 16u);
        goto L_08868228;
    }
    goto L_088681C4;
L_088681C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16341u << 16u);
        goto L_08868214;
    }
    goto L_088681D0;
L_088681D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868204;
    }
    goto L_088681DC;
L_088681DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16394u << 16u);
        goto L_088681F0;
    }
    goto L_088681E8;
L_088681E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886823C;
      }
      goto L_088681F0;
    }
L_088681F0:
    ctx.set_gpr(3, ctx.gpr[2] | 40894u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08868238;
      }
      goto L_08868204;
    }
L_08868204:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08868238;
      }
      goto L_08868214;
    }
L_08868214:
    ctx.set_gpr(3, ctx.gpr[2] | 16253u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08868238;
      }
      goto L_08868228;
    }
L_08868228:
    ctx.set_gpr(3, ctx.gpr[2] | 40894u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    goto L_08868238;
L_08868238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0886823C;
L_0886823C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868284;
    }
    goto L_08868244;
L_08868244:
    ctx.set_gpr(31, 0x0886824Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886824Cu) goto L_0886824C;
    return;
L_0886824C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08868280u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 375u, 0x08AB15ECu>(ctx, &aot_mem) && ctx.pc == 0x08868280u) goto L_08868280;
    return;
L_08868280:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08868284;
L_08868284:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088682A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 333u, 0x088A9380u>(ctx, &aot_mem) && ctx.pc == 0x088682A4u) goto L_088682A4;
    return;
L_088682A4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088682C4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088682C4u) goto L_088682C4;
    return;
L_088682C4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088682D8;
    }
L_088682D8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868300;
    }
L_08868300:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886832C;
    }
L_0886832C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886833Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x0886833Cu) goto L_0886833C;
    return;
L_0886833C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868354u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0886A778;
L_08868354:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868360;
    }
L_08868360:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868374;
    }
L_08868374:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868384u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868384u) goto L_08868384;
    return;
L_08868384:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868398u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 556u, 0x08871C08u>(ctx, &aot_mem) && ctx.pc == 0x08868398u) goto L_08868398;
    return;
L_08868398:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088684BC;
    }
    goto L_088683A0;
L_088683A0:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x088683ACu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x088683ACu) goto L_088683AC;
    return;
L_088683AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088683DC;
      }
      goto L_088683D8;
    }
L_088683D8:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_088683DC;
L_088683DC:
    ctx.set_gpr(31, 0x088683E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088683E4u) goto L_088683E4;
    return;
L_088683E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08868418u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08868418u) goto L_08868418;
    return;
L_08868418:
    ctx.set_gpr(31, 0x08868420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868420u) goto L_08868420;
    return;
L_08868420:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08868430u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08868430u) goto L_08868430;
    return;
L_08868430:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868440u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08868440u) goto L_08868440;
    return;
L_08868440:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30516));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868460u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868460u) goto L_08868460;
    return;
L_08868460:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868480u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868480u) goto L_08868480;
    return;
L_08868480:
    ctx.set_gpr(31, 0x08868488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868488u) goto L_08868488;
    return;
L_08868488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868494u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08868494u) goto L_08868494;
    return;
L_08868494:
    ctx.set_gpr(31, 0x0886849Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886849Cu) goto L_0886849C;
    return;
L_0886849C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088684A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x088684A8u) goto L_088684A8;
    return;
L_088684A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088684BC;
    }
L_088684BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088684CC;
    }
L_088684CC:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088684DCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x088684DCu) goto L_088684DC;
    return;
L_088684DC:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088684ECu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088684ECu) goto L_088684EC;
    return;
L_088684EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088684F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x088684F8u) goto L_088684F8;
    return;
L_088684F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868500;
    }
L_08868500:
    ctx.set_gpr(31, 0x08868508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868508u) goto L_08868508;
    return;
L_08868508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868514u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868514u) goto L_08868514;
    return;
L_08868514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868538;
      }
      goto L_0886851C;
    }
L_0886851C:
    ctx.set_gpr(31, 0x08868524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868524u) goto L_08868524;
    return;
L_08868524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868530u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868530u) goto L_08868530;
    return;
L_08868530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868538;
    }
L_08868538:
    ctx.set_gpr(31, 0x08868540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868540u) goto L_08868540;
    return;
L_08868540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886854Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x0886854Cu) goto L_0886854C;
    return;
L_0886854C:
    ctx.set_gpr(31, 0x08868554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08868554u) goto L_08868554;
    return;
L_08868554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868568u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08868568u) goto L_08868568;
    return;
L_08868568:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886857C;
    }
L_0886857C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886858Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x0886858Cu) goto L_0886858C;
    return;
L_0886858C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0886859Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886859Cu) goto L_0886859C;
    return;
L_0886859C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088685A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x088685A8u) goto L_088685A8;
    return;
L_088685A8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088685B4;
    }
L_088685B4:
    ctx.set_gpr(31, 0x088685BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088685BCu) goto L_088685BC;
    return;
L_088685BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088685C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x088685C8u) goto L_088685C8;
    return;
L_088685C8:
    ctx.set_gpr(31, 0x088685D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088685D0u) goto L_088685D0;
    return;
L_088685D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088685DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088685DCu) goto L_088685DC;
    return;
L_088685DC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088685F0;
    }
L_088685F0:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868600u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868600u) goto L_08868600;
    return;
L_08868600:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868614u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 80u, 0x0886C494u>(ctx, &aot_mem) && ctx.pc == 0x08868614u) goto L_08868614;
    return;
L_08868614:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868738;
    }
    goto L_0886861C;
L_0886861C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x08868628u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08868628u) goto L_08868628;
    return;
L_08868628:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16776u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868658;
      }
      goto L_08868654;
    }
L_08868654:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08868658;
L_08868658:
    ctx.set_gpr(31, 0x08868660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868660u) goto L_08868660;
    return;
L_08868660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08868694u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08868694u) goto L_08868694;
    return;
L_08868694:
    ctx.set_gpr(31, 0x0886869Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886869Cu) goto L_0886869C;
    return;
L_0886869C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088686ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x088686ACu) goto L_088686AC;
    return;
L_088686AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088686BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x088686BCu) goto L_088686BC;
    return;
L_088686BC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30548));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088686DCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x088686DCu) goto L_088686DC;
    return;
L_088686DC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088686FCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x088686FCu) goto L_088686FC;
    return;
L_088686FC:
    ctx.set_gpr(31, 0x08868704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868704u) goto L_08868704;
    return;
L_08868704:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868710u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08868710u) goto L_08868710;
    return;
L_08868710:
    ctx.set_gpr(31, 0x08868718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868718u) goto L_08868718;
    return;
L_08868718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868724u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868724u) goto L_08868724;
    return;
L_08868724:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868738;
    }
L_08868738:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868748;
    }
L_08868748:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868758u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868758u) goto L_08868758;
    return;
L_08868758:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868768u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868768u) goto L_08868768;
    return;
L_08868768:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868774u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868774u) goto L_08868774;
    return;
L_08868774:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886877C;
    }
L_0886877C:
    ctx.set_gpr(31, 0x08868784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868784u) goto L_08868784;
    return;
L_08868784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868790u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868790u) goto L_08868790;
    return;
L_08868790:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088687B4;
      }
      goto L_08868798;
    }
L_08868798:
    ctx.set_gpr(31, 0x088687A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088687A0u) goto L_088687A0;
    return;
L_088687A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088687ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088687ACu) goto L_088687AC;
    return;
L_088687AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088687B4;
    }
L_088687B4:
    ctx.set_gpr(31, 0x088687BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088687BCu) goto L_088687BC;
    return;
L_088687BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088687C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x088687C8u) goto L_088687C8;
    return;
L_088687C8:
    ctx.set_gpr(31, 0x088687D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088687D0u) goto L_088687D0;
    return;
L_088687D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088687E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088687E4u) goto L_088687E4;
    return;
L_088687E4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088687F8;
    }
L_088687F8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868808u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868808u) goto L_08868808;
    return;
L_08868808:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868818u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868818u) goto L_08868818;
    return;
L_08868818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868824u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868824u) goto L_08868824;
    return;
L_08868824:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868830;
    }
L_08868830:
    ctx.set_gpr(31, 0x08868838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868838u) goto L_08868838;
    return;
L_08868838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868844u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868844u) goto L_08868844;
    return;
L_08868844:
    ctx.set_gpr(31, 0x0886884Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886884Cu) goto L_0886884C;
    return;
L_0886884C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868858u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08868858u) goto L_08868858;
    return;
L_08868858:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886886C;
    }
L_0886886C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886887Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x0886887Cu) goto L_0886887C;
    return;
L_0886887C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868890u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 66u, 0x0886C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08868890u) goto L_08868890;
    return;
L_08868890:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088689B4;
    }
    goto L_08868898;
L_08868898:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x088688A4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x088688A4u) goto L_088688A4;
    return;
L_088688A4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088688D4;
      }
      goto L_088688D0;
    }
L_088688D0:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_088688D4;
L_088688D4:
    ctx.set_gpr(31, 0x088688DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088688DCu) goto L_088688DC;
    return;
L_088688DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08868910u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08868910u) goto L_08868910;
    return;
L_08868910:
    ctx.set_gpr(31, 0x08868918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868918u) goto L_08868918;
    return;
L_08868918:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08868928u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08868928u) goto L_08868928;
    return;
L_08868928:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868938u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08868938u) goto L_08868938;
    return;
L_08868938:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30584));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868958u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868958u) goto L_08868958;
    return;
L_08868958:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868978u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868978u) goto L_08868978;
    return;
L_08868978:
    ctx.set_gpr(31, 0x08868980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868980u) goto L_08868980;
    return;
L_08868980:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886898Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x0886898Cu) goto L_0886898C;
    return;
L_0886898C:
    ctx.set_gpr(31, 0x08868994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868994u) goto L_08868994;
    return;
L_08868994:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088689A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x088689A0u) goto L_088689A0;
    return;
L_088689A0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088689B4;
    }
L_088689B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088689C4;
    }
L_088689C4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088689D4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x088689D4u) goto L_088689D4;
    return;
L_088689D4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088689E4u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088689E4u) goto L_088689E4;
    return;
L_088689E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088689F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x088689F0u) goto L_088689F0;
    return;
L_088689F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088689F8;
    }
L_088689F8:
    ctx.set_gpr(31, 0x08868A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868A00u) goto L_08868A00;
    return;
L_08868A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868A0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868A0Cu) goto L_08868A0C;
    return;
L_08868A0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868A30;
      }
      goto L_08868A14;
    }
L_08868A14:
    ctx.set_gpr(31, 0x08868A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868A1Cu) goto L_08868A1C;
    return;
L_08868A1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868A28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868A28u) goto L_08868A28;
    return;
L_08868A28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868A30;
    }
L_08868A30:
    ctx.set_gpr(31, 0x08868A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868A38u) goto L_08868A38;
    return;
L_08868A38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868A44u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08868A44u) goto L_08868A44;
    return;
L_08868A44:
    ctx.set_gpr(31, 0x08868A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08868A4Cu) goto L_08868A4C;
    return;
L_08868A4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868A60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08868A60u) goto L_08868A60;
    return;
L_08868A60:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868A74;
    }
L_08868A74:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868A84u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868A84u) goto L_08868A84;
    return;
L_08868A84:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868A94u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868A94u) goto L_08868A94;
    return;
L_08868A94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868AA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868AA0u) goto L_08868AA0;
    return;
L_08868AA0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868AAC;
    }
L_08868AAC:
    ctx.set_gpr(31, 0x08868AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868AB4u) goto L_08868AB4;
    return;
L_08868AB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868AC0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868AC0u) goto L_08868AC0;
    return;
L_08868AC0:
    ctx.set_gpr(31, 0x08868AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868AC8u) goto L_08868AC8;
    return;
L_08868AC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868AD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08868AD4u) goto L_08868AD4;
    return;
L_08868AD4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868AE8;
    }
L_08868AE8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868AF8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868AF8u) goto L_08868AF8;
    return;
L_08868AF8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868B0Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 258u, 0x0886CD04u>(ctx, &aot_mem) && ctx.pc == 0x08868B0Cu) goto L_08868B0C;
    return;
L_08868B0C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868C30;
    }
    goto L_08868B14;
L_08868B14:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x08868B20u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08868B20u) goto L_08868B20;
    return;
L_08868B20:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868B50;
      }
      goto L_08868B4C;
    }
L_08868B4C:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08868B50;
L_08868B50:
    ctx.set_gpr(31, 0x08868B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868B58u) goto L_08868B58;
    return;
L_08868B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08868B8Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08868B8Cu) goto L_08868B8C;
    return;
L_08868B8C:
    ctx.set_gpr(31, 0x08868B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868B94u) goto L_08868B94;
    return;
L_08868B94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08868BA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08868BA4u) goto L_08868BA4;
    return;
L_08868BA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868BB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08868BB4u) goto L_08868BB4;
    return;
L_08868BB4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30616));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868BD4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868BD4u) goto L_08868BD4;
    return;
L_08868BD4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868BF4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868BF4u) goto L_08868BF4;
    return;
L_08868BF4:
    ctx.set_gpr(31, 0x08868BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868BFCu) goto L_08868BFC;
    return;
L_08868BFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868C08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08868C08u) goto L_08868C08;
    return;
L_08868C08:
    ctx.set_gpr(31, 0x08868C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868C10u) goto L_08868C10;
    return;
L_08868C10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868C1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868C1Cu) goto L_08868C1C;
    return;
L_08868C1C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868C30;
    }
L_08868C30:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868C40;
    }
L_08868C40:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868C54;
    }
L_08868C54:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868C64u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868C64u) goto L_08868C64;
    return;
L_08868C64:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868C74u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868C74u) goto L_08868C74;
    return;
L_08868C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868C80u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868C80u) goto L_08868C80;
    return;
L_08868C80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868C88;
    }
L_08868C88:
    ctx.set_gpr(31, 0x08868C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868C90u) goto L_08868C90;
    return;
L_08868C90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868C9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868C9Cu) goto L_08868C9C;
    return;
L_08868C9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868CC0;
      }
      goto L_08868CA4;
    }
L_08868CA4:
    ctx.set_gpr(31, 0x08868CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868CACu) goto L_08868CAC;
    return;
L_08868CAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868CB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868CB8u) goto L_08868CB8;
    return;
L_08868CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868CC0;
    }
L_08868CC0:
    ctx.set_gpr(31, 0x08868CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868CC8u) goto L_08868CC8;
    return;
L_08868CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868CD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08868CD4u) goto L_08868CD4;
    return;
L_08868CD4:
    ctx.set_gpr(31, 0x08868CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08868CDCu) goto L_08868CDC;
    return;
L_08868CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868CF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08868CF0u) goto L_08868CF0;
    return;
L_08868CF0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868D04;
    }
L_08868D04:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868D14u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868D14u) goto L_08868D14;
    return;
L_08868D14:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868D24u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868D24u) goto L_08868D24;
    return;
L_08868D24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868D30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868D30u) goto L_08868D30;
    return;
L_08868D30:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868D3C;
    }
L_08868D3C:
    ctx.set_gpr(31, 0x08868D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868D44u) goto L_08868D44;
    return;
L_08868D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868D50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868D50u) goto L_08868D50;
    return;
L_08868D50:
    ctx.set_gpr(31, 0x08868D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868D58u) goto L_08868D58;
    return;
L_08868D58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868D64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08868D64u) goto L_08868D64;
    return;
L_08868D64:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868D8C;
    }
    goto L_08868D78;
L_08868D78:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868D8C;
    }
L_08868D8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868D9C;
    }
L_08868D9C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868DACu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868DACu) goto L_08868DAC;
    return;
L_08868DAC:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08868DC0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 914u, 0x0886E94Cu>(ctx, &aot_mem) && ctx.pc == 0x08868DC0u) goto L_08868DC0;
    return;
L_08868DC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08868EE4;
    }
    goto L_08868DC8;
L_08868DC8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x08868DD4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08868DD4u) goto L_08868DD4;
    return;
L_08868DD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E04;
      }
      goto L_08868E00;
    }
L_08868E00:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08868E04;
L_08868E04:
    ctx.set_gpr(31, 0x08868E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868E0Cu) goto L_08868E0C;
    return;
L_08868E0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08868E40u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08868E40u) goto L_08868E40;
    return;
L_08868E40:
    ctx.set_gpr(31, 0x08868E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868E48u) goto L_08868E48;
    return;
L_08868E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08868E58u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08868E58u) goto L_08868E58;
    return;
L_08868E58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08868E68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08868E68u) goto L_08868E68;
    return;
L_08868E68:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30616));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868E88u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868E88u) goto L_08868E88;
    return;
L_08868E88:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868EA8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08868EA8u) goto L_08868EA8;
    return;
L_08868EA8:
    ctx.set_gpr(31, 0x08868EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868EB0u) goto L_08868EB0;
    return;
L_08868EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868EBCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08868EBCu) goto L_08868EBC;
    return;
L_08868EBC:
    ctx.set_gpr(31, 0x08868EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868EC4u) goto L_08868EC4;
    return;
L_08868EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868ED0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08868ED0u) goto L_08868ED0;
    return;
L_08868ED0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868EE4;
    }
L_08868EE4:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868EF4;
    }
L_08868EF4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868F08;
    }
L_08868F08:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868F18u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F18u) goto L_08868F18;
    return;
L_08868F18:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868F28u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868F28u) goto L_08868F28;
    return;
L_08868F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868F34u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868F34u) goto L_08868F34;
    return;
L_08868F34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868F3C;
    }
L_08868F3C:
    ctx.set_gpr(31, 0x08868F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868F44u) goto L_08868F44;
    return;
L_08868F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868F50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868F50u) goto L_08868F50;
    return;
L_08868F50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868F74;
      }
      goto L_08868F58;
    }
L_08868F58:
    ctx.set_gpr(31, 0x08868F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08868F60u) goto L_08868F60;
    return;
L_08868F60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868F6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08868F6Cu) goto L_08868F6C;
    return;
L_08868F6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868F74;
    }
L_08868F74:
    ctx.set_gpr(31, 0x08868F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868F7Cu) goto L_08868F7C;
    return;
L_08868F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868F88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08868F88u) goto L_08868F88;
    return;
L_08868F88:
    ctx.set_gpr(31, 0x08868F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08868F90u) goto L_08868F90;
    return;
L_08868F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08868FA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08868FA4u) goto L_08868FA4;
    return;
L_08868FA4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868FB8;
    }
L_08868FB8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08868FC8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08868FC8u) goto L_08868FC8;
    return;
L_08868FC8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08868FD8u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868FD8u) goto L_08868FD8;
    return;
L_08868FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08868FE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08868FE4u) goto L_08868FE4;
    return;
L_08868FE4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08868FF0;
    }
L_08868FF0:
    ctx.set_gpr(31, 0x08868FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08868FF8u) goto L_08868FF8;
    return;
L_08868FF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869004u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08869004u) goto L_08869004;
    return;
L_08869004:
    ctx.set_gpr(31, 0x0886900Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886900Cu) goto L_0886900C;
    return;
L_0886900C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869018u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869018u) goto L_08869018;
    return;
L_08869018:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08869040;
    }
    goto L_0886902C;
L_0886902C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869040;
    }
L_08869040:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869050;
    }
L_08869050:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869060u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869060u) goto L_08869060;
    return;
L_08869060:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869074u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 146u, 0x0886C738u>(ctx, &aot_mem) && ctx.pc == 0x08869074u) goto L_08869074;
    return;
L_08869074:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08869198;
    }
    goto L_0886907C;
L_0886907C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x08869088u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08869088u) goto L_08869088;
    return;
L_08869088:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088690B8;
      }
      goto L_088690B4;
    }
L_088690B4:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_088690B8;
L_088690B8:
    ctx.set_gpr(31, 0x088690C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088690C0u) goto L_088690C0;
    return;
L_088690C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088690F4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x088690F4u) goto L_088690F4;
    return;
L_088690F4:
    ctx.set_gpr(31, 0x088690FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088690FCu) goto L_088690FC;
    return;
L_088690FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886910Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x0886910Cu) goto L_0886910C;
    return;
L_0886910C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886911Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x0886911Cu) goto L_0886911C;
    return;
L_0886911C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30644));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886913Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x0886913Cu) goto L_0886913C;
    return;
L_0886913C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886915Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x0886915Cu) goto L_0886915C;
    return;
L_0886915C:
    ctx.set_gpr(31, 0x08869164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869164u) goto L_08869164;
    return;
L_08869164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869170u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08869170u) goto L_08869170;
    return;
L_08869170:
    ctx.set_gpr(31, 0x08869178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869178u) goto L_08869178;
    return;
L_08869178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869184u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08869184u) goto L_08869184;
    return;
L_08869184:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869198;
    }
L_08869198:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088691A8;
    }
L_088691A8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088691B8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x088691B8u) goto L_088691B8;
    return;
L_088691B8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088691C8u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088691C8u) goto L_088691C8;
    return;
L_088691C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088691D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x088691D4u) goto L_088691D4;
    return;
L_088691D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088691DC;
    }
L_088691DC:
    ctx.set_gpr(31, 0x088691E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x088691E4u) goto L_088691E4;
    return;
L_088691E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088691F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x088691F0u) goto L_088691F0;
    return;
L_088691F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869214;
      }
      goto L_088691F8;
    }
L_088691F8:
    ctx.set_gpr(31, 0x08869200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08869200u) goto L_08869200;
    return;
L_08869200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886920Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886920Cu) goto L_0886920C;
    return;
L_0886920C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869214;
    }
L_08869214:
    ctx.set_gpr(31, 0x0886921Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886921Cu) goto L_0886921C;
    return;
L_0886921C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869228u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08869228u) goto L_08869228;
    return;
L_08869228:
    ctx.set_gpr(31, 0x08869230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08869230u) goto L_08869230;
    return;
L_08869230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08869244u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08869244u) goto L_08869244;
    return;
L_08869244:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869258;
    }
L_08869258:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869268u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869268u) goto L_08869268;
    return;
L_08869268:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08869278u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869278u) goto L_08869278;
    return;
L_08869278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869284u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08869284u) goto L_08869284;
    return;
L_08869284:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869290;
    }
L_08869290:
    ctx.set_gpr(31, 0x08869298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869298u) goto L_08869298;
    return;
L_08869298:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088692A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x088692A4u) goto L_088692A4;
    return;
L_088692A4:
    ctx.set_gpr(31, 0x088692ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088692ACu) goto L_088692AC;
    return;
L_088692AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088692B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088692B8u) goto L_088692B8;
    return;
L_088692B8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088692CC;
    }
L_088692CC:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088692DCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x088692DCu) goto L_088692DC;
    return;
L_088692DC:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088692F0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 204u, 0x0886CA48u>(ctx, &aot_mem) && ctx.pc == 0x088692F0u) goto L_088692F0;
    return;
L_088692F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08869414;
    }
    goto L_088692F8;
L_088692F8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x08869304u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08869304u) goto L_08869304;
    return;
L_08869304:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869334;
      }
      goto L_08869330;
    }
L_08869330:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08869334;
L_08869334:
    ctx.set_gpr(31, 0x0886933Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886933Cu) goto L_0886933C;
    return;
L_0886933C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08869370u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08869370u) goto L_08869370;
    return;
L_08869370:
    ctx.set_gpr(31, 0x08869378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869378u) goto L_08869378;
    return;
L_08869378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08869388u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08869388u) goto L_08869388;
    return;
L_08869388:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08869398u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08869398u) goto L_08869398;
    return;
L_08869398:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30644));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088693B8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x088693B8u) goto L_088693B8;
    return;
L_088693B8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088693D8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x088693D8u) goto L_088693D8;
    return;
L_088693D8:
    ctx.set_gpr(31, 0x088693E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088693E0u) goto L_088693E0;
    return;
L_088693E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088693ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x088693ECu) goto L_088693EC;
    return;
L_088693EC:
    ctx.set_gpr(31, 0x088693F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088693F4u) goto L_088693F4;
    return;
L_088693F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869400u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08869400u) goto L_08869400;
    return;
L_08869400:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869414;
    }
L_08869414:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869424;
    }
L_08869424:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869434u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869434u) goto L_08869434;
    return;
L_08869434:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08869444u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869444u) goto L_08869444;
    return;
L_08869444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869450u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08869450u) goto L_08869450;
    return;
L_08869450:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869458;
    }
L_08869458:
    ctx.set_gpr(31, 0x08869460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08869460u) goto L_08869460;
    return;
L_08869460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886946Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886946Cu) goto L_0886946C;
    return;
L_0886946C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869490;
      }
      goto L_08869474;
    }
L_08869474:
    ctx.set_gpr(31, 0x0886947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0886947Cu) goto L_0886947C;
    return;
L_0886947C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869488u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08869488u) goto L_08869488;
    return;
L_08869488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869490;
    }
L_08869490:
    ctx.set_gpr(31, 0x08869498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869498u) goto L_08869498;
    return;
L_08869498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088694A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x088694A4u) goto L_088694A4;
    return;
L_088694A4:
    ctx.set_gpr(31, 0x088694ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088694ACu) goto L_088694AC;
    return;
L_088694AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088694C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088694C0u) goto L_088694C0;
    return;
L_088694C0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088694D4;
    }
L_088694D4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088694E4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x088694E4u) goto L_088694E4;
    return;
L_088694E4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088694F4u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088694F4u) goto L_088694F4;
    return;
L_088694F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869500u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08869500u) goto L_08869500;
    return;
L_08869500:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886950C;
    }
L_0886950C:
    ctx.set_gpr(31, 0x08869514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869514u) goto L_08869514;
    return;
L_08869514:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869520u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08869520u) goto L_08869520;
    return;
L_08869520:
    ctx.set_gpr(31, 0x08869528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08869528u) goto L_08869528;
    return;
L_08869528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869534u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869534u) goto L_08869534;
    return;
L_08869534:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869548;
    }
L_08869548:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869558u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869558u) goto L_08869558;
    return;
L_08869558:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869570u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0886A76C;
L_08869570:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869584;
    }
L_08869584:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088695A4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x088695A4u) goto L_088695A4;
    return;
L_088695A4:
    ctx.set_gpr(2, 16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088695CCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x088695CCu) goto L_088695CC;
    return;
L_088695CC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088695FC;
    }
L_088695FC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 16243u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869634;
    }
L_08869634:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886964Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 333u, 0x088A9380u>(ctx, &aot_mem) && ctx.pc == 0x0886964Cu) goto L_0886964C;
    return;
L_0886964C:
    ctx.set_gpr(31, 0x08869654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08869654u) goto L_08869654;
    return;
L_08869654:
    ctx.set_gpr(31, 0x0886965Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x0886965Cu) goto L_0886965C;
    return;
L_0886965C:
    ctx.set_gpr(31, 0x08869664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08869664u) goto L_08869664;
    return;
L_08869664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08869674u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 909u, 0x08853A68u>(ctx, &aot_mem) && ctx.pc == 0x08869674u) goto L_08869674;
    return;
L_08869674:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32208));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08869688u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08869688u) goto L_08869688;
    return;
L_08869688:
    ctx.set_gpr(31, 0x08869690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08869690u) goto L_08869690;
    return;
L_08869690:
    ctx.set_gpr(31, 0x08869698u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08869698u) goto L_08869698;
    return;
L_08869698:
    ctx.set_gpr(31, 0x088696A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088696A0u) goto L_088696A0;
    return;
L_088696A0:
    ctx.set_gpr(31, 0x088696A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088696A8u) goto L_088696A8;
    return;
L_088696A8:
    ctx.set_gpr(31, 0x088696B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088696B0u) goto L_088696B0;
    return;
L_088696B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16527u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16675u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16710u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.set_gpr(31, 0x088696DCu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x088696DCu) goto L_088696DC;
    return;
L_088696DC:
    ctx.set_gpr(31, 0x088696E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088696E4u) goto L_088696E4;
    return;
L_088696E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16185u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16621u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 51905u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16650u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.set_gpr(31, 0x08869710u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08869710u) goto L_08869710;
    return;
L_08869710:
    ctx.set_gpr(31, 0x08869718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08869718u) goto L_08869718;
    return;
L_08869718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869730u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08869730u) goto L_08869730;
    return;
L_08869730:
    ctx.set_gpr(31, 0x08869738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869738u) goto L_08869738;
    return;
L_08869738:
    ctx.set_gpr(31, 0x08869740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 529u, 0x0885DF90u>(ctx, &aot_mem) && ctx.pc == 0x08869740u) goto L_08869740;
    return;
L_08869740:
    ctx.set_gpr(31, 0x08869748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869748u) goto L_08869748;
    return;
L_08869748:
    ctx.set_gpr(31, 0x08869750u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 680u, 0x0884E4C4u>(ctx, &aot_mem) && ctx.pc == 0x08869750u) goto L_08869750;
    return;
L_08869750:
    ctx.set_gpr(31, 0x08869758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869758u) goto L_08869758;
    return;
L_08869758:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886976Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886976Cu) goto L_0886976C;
    return;
L_0886976C:
    ctx.set_gpr(31, 0x08869774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869774u) goto L_08869774;
    return;
L_08869774:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869798u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869798u) goto L_08869798;
    return;
L_08869798:
    ctx.set_gpr(31, 0x088697A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088697A0u) goto L_088697A0;
    return;
L_088697A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088697ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x088697ACu) goto L_088697AC;
    return;
L_088697AC:
    ctx.set_gpr(31, 0x088697B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088697B4u) goto L_088697B4;
    return;
L_088697B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088697CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x088697CCu) goto L_088697CC;
    return;
L_088697CC:
    ctx.set_gpr(31, 0x088697D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088697D4u) goto L_088697D4;
    return;
L_088697D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088697E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x088697E4u) goto L_088697E4;
    return;
L_088697E4:
    ctx.set_gpr(31, 0x088697ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088697ECu) goto L_088697EC;
    return;
L_088697EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869800u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08869800u) goto L_08869800;
    return;
L_08869800:
    ctx.set_gpr(31, 0x08869808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869808u) goto L_08869808;
    return;
L_08869808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08869818u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08869818u) goto L_08869818;
    return;
L_08869818:
    ctx.set_gpr(31, 0x08869820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869820u) goto L_08869820;
    return;
L_08869820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08869830u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08869830u) goto L_08869830;
    return;
L_08869830:
    ctx.set_gpr(31, 0x08869838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869838u) goto L_08869838;
    return;
L_08869838:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869850u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869850u) goto L_08869850;
    return;
L_08869850:
    ctx.set_gpr(31, 0x08869858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869858u) goto L_08869858;
    return;
L_08869858:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869864u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 626u, 0x088571F8u>(ctx, &aot_mem) && ctx.pc == 0x08869864u) goto L_08869864;
    return;
L_08869864:
    ctx.set_gpr(31, 0x0886986Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886986Cu) goto L_0886986C;
    return;
L_0886986C:
    ctx.set_gpr(31, 0x08869874u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 954u, 0x0885BAA4u>(ctx, &aot_mem) && ctx.pc == 0x08869874u) goto L_08869874;
    return;
L_08869874:
    ctx.set_gpr(31, 0x0886987Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0886987Cu) goto L_0886987C;
    return;
L_0886987C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886989Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0886989Cu) goto L_0886989C;
    return;
L_0886989C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088698B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088698B0u) goto L_088698B0;
    return;
L_088698B0:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088698BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 146u, 0x08854944u>(ctx, &aot_mem) && ctx.pc == 0x088698BCu) goto L_088698BC;
    return;
L_088698BC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088698D0;
    }
L_088698D0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088698F8;
    }
L_088698F8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08869918u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869918u) goto L_08869918;
    return;
L_08869918:
    ctx.set_gpr(31, 0x08869920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869920u) goto L_08869920;
    return;
L_08869920:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869944u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869944u) goto L_08869944;
    return;
L_08869944:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16396u << 16u);
        goto L_08869990;
    }
    goto L_08869950;
L_08869950:
    ctx.set_gpr(31, 0x08869958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08869958u) goto L_08869958;
    return;
L_08869958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x0886998Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 375u, 0x08AB15ECu>(ctx, &aot_mem) && ctx.pc == 0x0886998Cu) goto L_0886998C;
    return;
L_0886998C:
    ctx.set_gpr(2, 16396u << 16u);
    goto L_08869990;
L_08869990:
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_088699C0;
    }
L_088699C0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) || ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869A60;
      }
      goto L_088699E4;
    }
L_088699E4:
    ctx.set_gpr(31, 0x088699ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088699ECu) goto L_088699EC;
    return;
L_088699EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16527u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16675u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16710u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.set_gpr(31, 0x08869A18u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08869A18u) goto L_08869A18;
    return;
L_08869A18:
    ctx.set_gpr(31, 0x08869A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08869A20u) goto L_08869A20;
    return;
L_08869A20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16185u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16558u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 11534u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16650u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.set_gpr(31, 0x08869A4Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08869A4Cu) goto L_08869A4C;
    return;
L_08869A4C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869A60;
    }
L_08869A60:
    ctx.set_gpr(31, 0x08869A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08869A68u) goto L_08869A68;
    return;
L_08869A68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16527u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16675u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16710u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.set_gpr(31, 0x08869A94u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08869A94u) goto L_08869A94;
    return;
L_08869A94:
    ctx.set_gpr(31, 0x08869A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08869A9Cu) goto L_08869A9C;
    return;
L_08869A9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16185u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16621u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 51905u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16382u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 30412u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 16650u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16777u);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08869ADCu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08869ADCu) goto L_08869ADC;
    return;
L_08869ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869AE4;
    }
L_08869AE4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869B0C;
    }
L_08869B0C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869B1Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869B1Cu) goto L_08869B1C;
    return;
L_08869B1C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869B34u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0886A76C;
L_08869B34:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869B48;
    }
L_08869B48:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869B58u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869B58u) goto L_08869B58;
    return;
L_08869B58:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869B70;
    }
L_08869B70:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08869B80;
    }
    goto L_08869B78;
L_08869B78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 1u << 16u);
      if (branch_taken) {
          goto L_08869BE8;
      }
      goto L_08869B80;
    }
L_08869B80:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869B9Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869B9Cu) goto L_08869B9C;
    return;
L_08869B9C:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869BC8u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08869BC8u) goto L_08869BC8;
    return;
L_08869BC8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 16000u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
      if (branch_taken) {
          goto L_08869C4C;
      }
      goto L_08869BE8;
    }
L_08869BE8:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869C04u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869C04u) goto L_08869C04;
    return;
L_08869C04:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869C2Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08869C2Cu) goto L_08869C2C;
    return;
L_08869C2C:
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    goto L_08869C4C;
L_08869C4C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869C60;
    }
L_08869C60:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08869C70u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088AB61Cu>(ctx, &aot_mem) && ctx.pc == 0x08869C70u) goto L_08869C70;
    return;
L_08869C70:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869C98;
    }
L_08869C98:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869CD4;
      }
      goto L_08869CAC;
    }
L_08869CAC:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(31, 0x08869CB8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 22u, 0x088641E8u>(ctx, &aot_mem) && ctx.pc == 0x08869CB8u) goto L_08869CB8;
    return;
L_08869CB8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869CC8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08869CC8u) goto L_08869CC8;
    return;
L_08869CC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08869CD4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08869CD4u) goto L_08869CD4;
    return;
L_08869CD4:
    ctx.set_gpr(31, 0x08869CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08869CDCu) goto L_08869CDC;
    return;
L_08869CDC:
    ctx.set_gpr(31, 0x08869CE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 398u, 0x08AB1744u>(ctx, &aot_mem) && ctx.pc == 0x08869CE4u) goto L_08869CE4;
    return;
L_08869CE4:
    ctx.set_gpr(31, 0x08869CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08869CECu) goto L_08869CEC;
    return;
L_08869CEC:
    ctx.set_gpr(31, 0x08869CF4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08869CF4u) goto L_08869CF4;
    return;
L_08869CF4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869D00u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0886A738;
L_08869D00:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869D14u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869D14u) goto L_08869D14;
    return;
L_08869D14:
    ctx.set_gpr(31, 0x08869D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869D1Cu) goto L_08869D1C;
    return;
L_08869D1C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869D40u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869D40u) goto L_08869D40;
    return;
L_08869D40:
    ctx.set_gpr(31, 0x08869D48u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x08869D48u) goto L_08869D48;
    return;
L_08869D48:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x08869D54u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 711u, 0x088AAAC0u>(ctx, &aot_mem) && ctx.pc == 0x08869D54u) goto L_08869D54;
    return;
L_08869D54:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17600)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
        goto L_08869D70;
    }
    goto L_08869D68;
L_08869D68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869D84;
      }
      goto L_08869D70;
    }
L_08869D70:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08869D7Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 832u, 0x088669E4u>(ctx, &aot_mem) && ctx.pc == 0x08869D7Cu) goto L_08869D7C;
    return;
L_08869D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869D84;
    }
L_08869D84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0886A714;
      }
      goto L_08869D8C;
    }
L_08869D8C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08869DACu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869DACu) goto L_08869DAC;
    return;
L_08869DAC:
    ctx.set_gpr(2, 16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08869DD4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08869DD4u) goto L_08869DD4;
    return;
L_08869DD4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869E04;
    }
L_08869E04:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 16243u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869E3C;
    }
L_08869E3C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08869E48u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 867u, 0x0885B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08869E48u) goto L_08869E48;
    return;
L_08869E48:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08869E58u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 858u, 0x0885B440u>(ctx, &aot_mem) && ctx.pc == 0x08869E58u) goto L_08869E58;
    return;
L_08869E58:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08869E68u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 849u, 0x0885B3C8u>(ctx, &aot_mem) && ctx.pc == 0x08869E68u) goto L_08869E68;
    return;
L_08869E68:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869E78u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 835u, 0x0885B2E8u>(ctx, &aot_mem) && ctx.pc == 0x08869E78u) goto L_08869E78;
    return;
L_08869E78:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15395u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08869EA0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 980u, 0x088ABD78u>(ctx, &aot_mem) && ctx.pc == 0x08869EA0u) goto L_08869EA0;
    return;
L_08869EA0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869EB4;
    }
L_08869EB4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x08869EC0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 122u, 0x088AC6A4u>(ctx, &aot_mem) && ctx.pc == 0x08869EC0u) goto L_08869EC0;
    return;
L_08869EC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869EC8;
    }
L_08869EC8:
    ctx.set_gpr(31, 0x08869ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08869ED0u) goto L_08869ED0;
    return;
L_08869ED0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08869EE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869EE8u) goto L_08869EE8;
    return;
L_08869EE8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08869F08u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869F08u) goto L_08869F08;
    return;
L_08869F08:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869F1C;
    }
L_08869F1C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08869F28u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 867u, 0x0885B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08869F28u) goto L_08869F28;
    return;
L_08869F28:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08869F3Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 179u, 0x088AC9D8u>(ctx, &aot_mem) && ctx.pc == 0x08869F3Cu) goto L_08869F3C;
    return;
L_08869F3C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17600), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_08869F54;
    }
L_08869F54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08869F68;
    }
    goto L_08869F60;
L_08869F60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 1u << 16u);
      if (branch_taken) {
          goto L_08869FD0;
      }
      goto L_08869F68;
    }
L_08869F68:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869F84u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869F84u) goto L_08869F84;
    return;
L_08869F84:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869FB0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08869FB0u) goto L_08869FB0;
    return;
L_08869FB0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 16000u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
      if (branch_taken) {
          goto L_0886A034;
      }
      goto L_08869FD0;
    }
L_08869FD0:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08869FECu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08869FECu) goto L_08869FEC;
    return;
L_08869FEC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0886A014u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0886A014u) goto L_0886A014;
    return;
L_0886A014:
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    goto L_0886A034;
L_0886A034:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A048;
    }
L_0886A048:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A070;
    }
L_0886A070:
    ctx.set_gpr(31, 0x0886A078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A078u) goto L_0886A078;
    return;
L_0886A078:
    ctx.set_gpr(31, 0x0886A080u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 398u, 0x08AB1744u>(ctx, &aot_mem) && ctx.pc == 0x0886A080u) goto L_0886A080;
    return;
L_0886A080:
    ctx.set_gpr(31, 0x0886A088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A088u) goto L_0886A088;
    return;
L_0886A088:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A0ACu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A0ACu) goto L_0886A0AC;
    return;
L_0886A0AC:
    ctx.set_gpr(31, 0x0886A0B4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x0886A0B4u) goto L_0886A0B4;
    return;
L_0886A0B4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x0886A0C0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 374u, 0x088AD308u>(ctx, &aot_mem) && ctx.pc == 0x0886A0C0u) goto L_0886A0C0;
    return;
L_0886A0C0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17600)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
        goto L_0886A0E0;
    }
    goto L_0886A0D8;
L_0886A0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A0F4;
      }
      goto L_0886A0E0;
    }
L_0886A0E0:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0886A0ECu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 832u, 0x088669E4u>(ctx, &aot_mem) && ctx.pc == 0x0886A0ECu) goto L_0886A0EC;
    return;
L_0886A0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A0F4;
    }
L_0886A0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A710;
      }
      goto L_0886A0FC;
    }
L_0886A0FC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0886A11Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0886A11Cu) goto L_0886A11C;
    return;
L_0886A11C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17732)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0886A144u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0886A144u) goto L_0886A144;
    return;
L_0886A144:
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 52429u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A178;
    }
L_0886A178:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17612)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A1A0;
    }
L_0886A1A0:
    ctx.set_gpr(31, 0x0886A1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A1A8u) goto L_0886A1A8;
    return;
L_0886A1A8:
    ctx.set_gpr(31, 0x0886A1B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 398u, 0x08AB1744u>(ctx, &aot_mem) && ctx.pc == 0x0886A1B0u) goto L_0886A1B0;
    return;
L_0886A1B0:
    ctx.set_gpr(31, 0x0886A1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A1B8u) goto L_0886A1B8;
    return;
L_0886A1B8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A1DCu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A1DCu) goto L_0886A1DC;
    return;
L_0886A1DC:
    ctx.set_gpr(31, 0x0886A1E4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x0886A1E4u) goto L_0886A1E4;
    return;
L_0886A1E4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x0886A1F0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 711u, 0x088AAAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886A1F0u) goto L_0886A1F0;
    return;
L_0886A1F0:
    ctx.set_gpr(31, 0x0886A1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886A1F8u) goto L_0886A1F8;
    return;
L_0886A1F8:
    ctx.set_gpr(31, 0x0886A200u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886A200u) goto L_0886A200;
    return;
L_0886A200:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0886A710;
    }
    goto L_0886A20C;
L_0886A20C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17352)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A234;
      }
      goto L_0886A22C;
    }
L_0886A22C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0886A710;
      }
      goto L_0886A234;
    }
L_0886A234:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A710;
      }
      goto L_0886A240;
    }
L_0886A240:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886A244;
L_0886A244:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17596), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0886A710;
    }
    goto L_0886A274;
L_0886A274:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(9100));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A290:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886A300;
    }
    goto L_0886A2A8;
L_0886A2A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886A2F4;
    }
    goto L_0886A2B4;
L_0886A2B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886A2E4;
    }
    goto L_0886A2C0;
L_0886A2C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886A2D4;
    }
    goto L_0886A2CC;
L_0886A2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A30C;
      }
      goto L_0886A2D4;
    }
L_0886A2D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A30C;
      }
      goto L_0886A2E4;
    }
L_0886A2E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A30C;
      }
      goto L_0886A2F4;
    }
L_0886A2F4:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A30C;
      }
      goto L_0886A300;
    }
L_0886A300:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
    goto L_0886A30C;
L_0886A30C:
    ctx.set_gpr(31, 0x0886A314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A314u) goto L_0886A314;
    return;
L_0886A314:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A328u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A328u) goto L_0886A328;
    return;
L_0886A328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A330;
    }
L_0886A330:
    ctx.set_gpr(31, 0x0886A338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A338u) goto L_0886A338;
    return;
L_0886A338:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A360u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A360u) goto L_0886A360;
    return;
L_0886A360:
    ctx.set_gpr(31, 0x0886A368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A368u) goto L_0886A368;
    return;
L_0886A368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886A378u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A378u) goto L_0886A378;
    return;
L_0886A378:
    ctx.set_gpr(31, 0x0886A380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A380u) goto L_0886A380;
    return;
L_0886A380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886A390u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A390u) goto L_0886A390;
    return;
L_0886A390:
    ctx.set_gpr(31, 0x0886A398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A398u) goto L_0886A398;
    return;
L_0886A398:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886A3A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x0886A3A4u) goto L_0886A3A4;
    return;
L_0886A3A4:
    ctx.set_gpr(31, 0x0886A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A3ACu) goto L_0886A3AC;
    return;
L_0886A3AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0886A3BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x0886A3BCu) goto L_0886A3BC;
    return;
L_0886A3BC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A3DC;
    }
L_0886A3DC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(2, 16324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 14680u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A404;
    }
L_0886A404:
    ctx.set_gpr(31, 0x0886A40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A40Cu) goto L_0886A40C;
    return;
L_0886A40C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886A41Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A41Cu) goto L_0886A41C;
    return;
L_0886A41C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A430;
    }
L_0886A430:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(2, 16362u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 40894u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A458;
    }
L_0886A458:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A46C;
    }
L_0886A46C:
    ctx.set_gpr(31, 0x0886A474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A474u) goto L_0886A474;
    return;
L_0886A474:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A49Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A49Cu) goto L_0886A49C;
    return;
L_0886A49C:
    ctx.set_gpr(31, 0x0886A4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A4A4u) goto L_0886A4A4;
    return;
L_0886A4A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886A4B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A4B4u) goto L_0886A4B4;
    return;
L_0886A4B4:
    ctx.set_gpr(31, 0x0886A4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A4BCu) goto L_0886A4BC;
    return;
L_0886A4BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886A4CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A4CCu) goto L_0886A4CC;
    return;
L_0886A4CC:
    ctx.set_gpr(31, 0x0886A4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A4D4u) goto L_0886A4D4;
    return;
L_0886A4D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886A4E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x0886A4E0u) goto L_0886A4E0;
    return;
L_0886A4E0:
    ctx.set_gpr(31, 0x0886A4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A4E8u) goto L_0886A4E8;
    return;
L_0886A4E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0886A4F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x0886A4F8u) goto L_0886A4F8;
    return;
L_0886A4F8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A518;
    }
L_0886A518:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(2, 16341u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 16253u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A540;
    }
L_0886A540:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A554;
    }
L_0886A554:
    ctx.set_gpr(31, 0x0886A55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A55Cu) goto L_0886A55C;
    return;
L_0886A55C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A584u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A584u) goto L_0886A584;
    return;
L_0886A584:
    ctx.set_gpr(31, 0x0886A58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A58Cu) goto L_0886A58C;
    return;
L_0886A58C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886A59Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A59Cu) goto L_0886A59C;
    return;
L_0886A59C:
    ctx.set_gpr(31, 0x0886A5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A5A4u) goto L_0886A5A4;
    return;
L_0886A5A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886A5B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A5B4u) goto L_0886A5B4;
    return;
L_0886A5B4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A5D4;
    }
L_0886A5D4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A5F8;
    }
L_0886A5F8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A60C;
    }
L_0886A60C:
    ctx.set_gpr(31, 0x0886A614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A614u) goto L_0886A614;
    return;
L_0886A614:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0886A63Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A63Cu) goto L_0886A63C;
    return;
L_0886A63C:
    ctx.set_gpr(31, 0x0886A644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A644u) goto L_0886A644;
    return;
L_0886A644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886A654u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A654u) goto L_0886A654;
    return;
L_0886A654:
    ctx.set_gpr(31, 0x0886A65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A65Cu) goto L_0886A65C;
    return;
L_0886A65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886A66Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0886A66Cu) goto L_0886A66C;
    return;
L_0886A66C:
    ctx.set_gpr(31, 0x0886A674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A674u) goto L_0886A674;
    return;
L_0886A674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16042u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32506u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886A694u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x0886A694u) goto L_0886A694;
    return;
L_0886A694:
    ctx.set_gpr(31, 0x0886A69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886A69Cu) goto L_0886A69C;
    return;
L_0886A69C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16042u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32506u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886A6B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x0886A6B4u) goto L_0886A6B4;
    return;
L_0886A6B4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A6D4;
    }
L_0886A6D4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17596)));
    ctx.set_gpr(2, 16394u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 40894u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A70C;
      }
      goto L_0886A6FC;
    }
L_0886A6FC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17604), ctx.gpr[3]);
    goto L_0886A70C;
L_0886A70C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0886A710;
L_0886A710:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0886A714;
L_0886A714:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A738:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27976));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    goto L_0886A744;
L_0886A744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0886A758u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 222u, 0x08848F0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A758u) goto L_0886A758;
    return;
L_0886A758:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A76C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A778:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0886A7A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0886A7A0u) goto L_0886A7A0;
    return;
L_0886A7A0:
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30676));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_0886A7B0;
L_0886A7B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886A7B0;
      }
      goto L_0886A7D0;
    }
L_0886A7D0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17420)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0886A894;
    }
    goto L_0886A7E8;
L_0886A7E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x0886A7F4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 539u, 0x08847464u>(ctx, &aot_mem) && ctx.pc == 0x0886A7F4u) goto L_0886A7F4;
    return;
L_0886A7F4:
    ctx.set_gpr(31, 0x0886A7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x0886A7FCu) goto L_0886A7FC;
    return;
L_0886A7FC:
    ctx.set_gpr(31, 0x0886A804u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x0886A804u) goto L_0886A804;
    return;
L_0886A804:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886A814u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886A814u) goto L_0886A814;
    return;
L_0886A814:
    ctx.set_gpr(31, 0x0886A81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A81Cu) goto L_0886A81C;
    return;
L_0886A81C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886A82Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 864u, 0x08843A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A82Cu) goto L_0886A82C;
    return;
L_0886A82C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886A83Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886A83Cu) goto L_0886A83C;
    return;
L_0886A83C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886A84Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886A84Cu) goto L_0886A84C;
    return;
L_0886A84C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17436), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 16800u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17444), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886A894;
L_0886A894:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A8A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17444)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0886A8D8;
      }
      goto L_0886A8D0;
    }
L_0886A8D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0886AA74;
      }
      goto L_0886A8D8;
    }
L_0886A8D8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 100 ? 1u : 0u);
        goto L_0886A994;
    }
    goto L_0886A8F8;
L_0886A8F8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17440)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 16880u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17436)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0886A93Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A93Cu) goto L_0886A93C;
    return;
L_0886A93C:
    ctx.set_gpr(31, 0x0886A944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0886A944u) goto L_0886A944;
    return;
L_0886A944:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0886A950u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0886A950u) goto L_0886A950;
    return;
L_0886A950:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0886A96Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x0886A96Cu) goto L_0886A96C;
    return;
L_0886A96C:
    ctx.set_gpr(31, 0x0886A974u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0886A974u) goto L_0886A974;
    return;
L_0886A974:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886A98Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 936u, 0x08853C20u>(ctx, &aot_mem) && ctx.pc == 0x0886A98Cu) goto L_0886A98C;
    return;
L_0886A98C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 1u << 16u);
      if (branch_taken) {
          goto L_0886AA34;
      }
      goto L_0886A994;
    }
L_0886A994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA30;
      }
      goto L_0886A99C;
    }
L_0886A99C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17440)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 16880u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17436)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0886A9E0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x0886A9E0u) goto L_0886A9E0;
    return;
L_0886A9E0:
    ctx.set_gpr(31, 0x0886A9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0886A9E8u) goto L_0886A9E8;
    return;
L_0886A9E8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0886A9F4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0886A9F4u) goto L_0886A9F4;
    return;
L_0886A9F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0886AA10u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x0886AA10u) goto L_0886AA10;
    return;
L_0886AA10:
    ctx.set_gpr(31, 0x0886AA18u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0886AA18u) goto L_0886AA18;
    return;
L_0886AA18:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886AA30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 936u, 0x08853C20u>(ctx, &aot_mem) && ctx.pc == 0x0886AA30u) goto L_0886AA30;
    return;
L_0886AA30:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886AA34;
L_0886AA34:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17440)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17436)));
    ctx.set_gpr(31, 0x0886AA60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 469u, 0x088A9C84u>(ctx, &aot_mem) && ctx.pc == 0x0886AA60u) goto L_0886AA60;
    return;
L_0886AA60:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17444), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0886AA74;
L_0886AA74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0886AACC;
      }
      goto L_0886AAA0;
    }
L_0886AAA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886AACC;
      }
      goto L_0886AAAC;
    }
L_0886AAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886AACC;
      }
      goto L_0886AAB8;
    }
L_0886AAB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886AACC;
      }
      goto L_0886AAC4;
    }
L_0886AAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0886AAF4;
      }
      goto L_0886AACC;
    }
L_0886AACC:
    ctx.set_gpr(31, 0x0886AAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AAD4u) goto L_0886AAD4;
    return;
L_0886AAD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17668)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886AAF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AAF0u) goto L_0886AAF0;
    return;
L_0886AAF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886AAF4;
L_0886AAF4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0886AB14u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0886AB14u) goto L_0886AB14;
    return;
L_0886AB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886AB20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886AB20u) goto L_0886AB20;
    return;
L_0886AB20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB3C;
      }
      goto L_0886AB28;
    }
L_0886AB28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886AB34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    goto L_0886AA88;
L_0886AB34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0886ABC8;
      }
      goto L_0886AB3C;
    }
L_0886AB3C:
    ctx.set_gpr(31, 0x0886AB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0886AB44u) goto L_0886AB44;
    return;
L_0886AB44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886AB50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886AB50u) goto L_0886AB50;
    return;
L_0886AB50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB6C;
      }
      goto L_0886AB58;
    }
L_0886AB58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886AB64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_0886AA88;
L_0886AB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABC4;
      }
      goto L_0886AB6C;
    }
L_0886AB6C:
    ctx.set_gpr(31, 0x0886AB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0886AB74u) goto L_0886AB74;
    return;
L_0886AB74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886AB80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886AB80u) goto L_0886AB80;
    return;
L_0886AB80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB9C;
      }
      goto L_0886AB88;
    }
L_0886AB88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886AB94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_0886AA88;
L_0886AB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABC4;
      }
      goto L_0886AB9C;
    }
L_0886AB9C:
    ctx.set_gpr(31, 0x0886ABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0886ABA4u) goto L_0886ABA4;
    return;
L_0886ABA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886ABB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0886ABB0u) goto L_0886ABB0;
    return;
L_0886ABB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABC4;
      }
      goto L_0886ABB8;
    }
L_0886ABB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886ABC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    goto L_0886AA88;
L_0886ABC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886ABC8;
L_0886ABC8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABD4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABE4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ABF4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0886AED0;
      }
      goto L_0886AC20;
    }
L_0886AC20:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886AC34;
      }
      goto L_0886AC2C;
    }
L_0886AC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0886AED4;
      }
      goto L_0886AC34;
    }
L_0886AC34:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.set_gpr(1, ctx.gpr[7] < static_cast<std::uint32_t>(36) ? 1u : 0u);
        goto L_0886AC64;
    }
    goto L_0886AC3C;
L_0886AC3C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886AC50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0886AC50u) goto L_0886AC50;
    return;
L_0886AC50:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-17623), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886AED0;
      }
      goto L_0886AC60;
    }
L_0886AC60:
    ctx.set_gpr(1, ctx.gpr[7] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    goto L_0886AC64;
L_0886AC64:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_0886AEC4;
    }
    goto L_0886AC6C;
L_0886AC6C:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9304));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AC88:
    ctx.set_gpr(31, 0x0886AC90u);
    // nop
    goto L_0886B424;
L_0886AC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AC98;
    }
L_0886AC98:
    ctx.set_gpr(31, 0x0886ACA0u);
    // nop
    goto L_0886B48C;
L_0886ACA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACA8;
    }
L_0886ACA8:
    ctx.set_gpr(31, 0x0886ACB0u);
    // nop
    goto L_0886B4F4;
L_0886ACB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACB8;
    }
L_0886ACB8:
    ctx.set_gpr(31, 0x0886ACC0u);
    // nop
    goto L_0886B55C;
L_0886ACC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACC8;
    }
L_0886ACC8:
    ctx.set_gpr(31, 0x0886ACD0u);
    // nop
    goto L_0886B5BC;
L_0886ACD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACD8;
    }
L_0886ACD8:
    ctx.set_gpr(31, 0x0886ACE0u);
    // nop
    goto L_0886B624;
L_0886ACE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACE8;
    }
L_0886ACE8:
    ctx.set_gpr(31, 0x0886ACF0u);
    // nop
    goto L_0886B68C;
L_0886ACF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ACF8;
    }
L_0886ACF8:
    ctx.set_gpr(31, 0x0886AD00u);
    // nop
    goto L_0886B6EC;
L_0886AD00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD08;
    }
L_0886AD08:
    ctx.set_gpr(31, 0x0886AD10u);
    // nop
    goto L_0886B74C;
L_0886AD10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD18;
    }
L_0886AD18:
    ctx.set_gpr(31, 0x0886AD20u);
    // nop
    goto L_0886B7AC;
L_0886AD20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD28;
    }
L_0886AD28:
    ctx.set_gpr(31, 0x0886AD30u);
    // nop
    goto L_0886B814;
L_0886AD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD38;
    }
L_0886AD38:
    ctx.set_gpr(31, 0x0886AD40u);
    // nop
    goto L_0886B874;
L_0886AD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD48;
    }
L_0886AD48:
    ctx.set_gpr(31, 0x0886AD50u);
    // nop
    goto L_0886B8DC;
L_0886AD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD58;
    }
L_0886AD58:
    ctx.set_gpr(31, 0x0886AD60u);
    // nop
    goto L_0886B93C;
L_0886AD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD68;
    }
L_0886AD68:
    ctx.set_gpr(31, 0x0886AD70u);
    // nop
    goto L_0886B99C;
L_0886AD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD78;
    }
L_0886AD78:
    ctx.set_gpr(31, 0x0886AD80u);
    // nop
    goto L_0886BA04;
L_0886AD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD88;
    }
L_0886AD88:
    ctx.set_gpr(31, 0x0886AD90u);
    // nop
    goto L_0886BA6C;
L_0886AD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AD98;
    }
L_0886AD98:
    ctx.set_gpr(31, 0x0886ADA0u);
    // nop
    goto L_0886BACC;
L_0886ADA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADA8;
    }
L_0886ADA8:
    ctx.set_gpr(31, 0x0886ADB0u);
    // nop
    goto L_0886BB34;
L_0886ADB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADB8;
    }
L_0886ADB8:
    ctx.set_gpr(31, 0x0886ADC0u);
    // nop
    goto L_0886BB9C;
L_0886ADC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADC8;
    }
L_0886ADC8:
    ctx.set_gpr(31, 0x0886ADD0u);
    // nop
    goto L_0886BC04;
L_0886ADD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADD8;
    }
L_0886ADD8:
    ctx.set_gpr(31, 0x0886ADE0u);
    // nop
    goto L_0886BC64;
L_0886ADE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADE8;
    }
L_0886ADE8:
    ctx.set_gpr(31, 0x0886ADF0u);
    // nop
    goto L_0886BCC4;
L_0886ADF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886ADF8;
    }
L_0886ADF8:
    ctx.set_gpr(31, 0x0886AE00u);
    // nop
    goto L_0886BD24;
L_0886AE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE08;
    }
L_0886AE08:
    ctx.set_gpr(31, 0x0886AE10u);
    // nop
    goto L_0886BD8C;
L_0886AE10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE18;
    }
L_0886AE18:
    ctx.set_gpr(31, 0x0886AE20u);
    // nop
    goto L_0886BDF4;
L_0886AE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE28;
    }
L_0886AE28:
    ctx.set_gpr(31, 0x0886AE30u);
    // nop
    goto L_0886BE5C;
L_0886AE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE38;
    }
L_0886AE38:
    ctx.set_gpr(31, 0x0886AE40u);
    // nop
    goto L_0886BEB0;
L_0886AE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE48;
    }
L_0886AE48:
    ctx.set_gpr(31, 0x0886AE50u);
    // nop
    goto L_0886BF10;
L_0886AE50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE58;
    }
L_0886AE58:
    ctx.set_gpr(31, 0x0886AE60u);
    // nop
    goto L_0886BF70;
L_0886AE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE68;
    }
L_0886AE68:
    ctx.set_gpr(31, 0x0886AE70u);
    // nop
    goto L_0886BFD8;
L_0886AE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE78;
    }
L_0886AE78:
    ctx.set_gpr(31, 0x0886AE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 4u, 0x0886C040u>(ctx, &aot_mem) && ctx.pc == 0x0886AE80u) goto L_0886AE80;
    return;
L_0886AE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE88;
    }
L_0886AE88:
    ctx.set_gpr(31, 0x0886AE90u);
    // nop
    goto L_0886BA6C;
L_0886AE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AE98;
    }
L_0886AE98:
    ctx.set_gpr(31, 0x0886AEA0u);
    // nop
    goto L_0886BACC;
L_0886AEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AEA8;
    }
L_0886AEA8:
    ctx.set_gpr(31, 0x0886AEB0u);
    // nop
    goto L_0886BA6C;
L_0886AEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AEB8;
    }
L_0886AEB8:
    ctx.set_gpr(31, 0x0886AEC0u);
    // nop
    goto L_0886BACC;
L_0886AEC0:
    ctx.set_gpr(3, 1u << 16u);
    goto L_0886AEC4;
L_0886AEC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-17623), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886AED0;
L_0886AED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886AED4;
L_0886AED4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0886AEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886AEF0u) goto L_0886AEF0;
    return;
L_0886AEF0:
    ctx.set_gpr(31, 0x0886AEF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886AEF8u) goto L_0886AEF8;
    return;
L_0886AEF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0886AF4C;
    }
    goto L_0886AF04;
L_0886AF04:
    ctx.set_gpr(31, 0x0886AF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0886AF0Cu) goto L_0886AF0C;
    return;
L_0886AF0C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0886AF2Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AF2Cu) goto L_0886AF2C;
    return;
L_0886AF2C:
    ctx.set_gpr(31, 0x0886AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0886AF34u) goto L_0886AF34;
    return;
L_0886AF34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x0886AF48u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AF48u) goto L_0886AF48;
    return;
L_0886AF48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886AF4C;
L_0886AF4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0886AF84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0886AF84u) goto L_0886AF84;
    return;
L_0886AF84:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30740));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_0886AF94;
L_0886AF94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886AF94;
      }
      goto L_0886AFB4;
    }
L_0886AFB4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17428)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17428), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886B080;
      }
      goto L_0886AFD4;
    }
L_0886AFD4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17412)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886B018;
    }
    goto L_0886B008;
L_0886B008:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17412), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886B018;
L_0886B018:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420)));
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_0886B050;
    }
    goto L_0886B048;
L_0886B048:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    goto L_0886B050;
L_0886B050:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17428)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17428), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0886B08C;
      }
      goto L_0886B080;
    }
L_0886B080:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420), 0u);
    goto L_0886B08C;
L_0886B08C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17368)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(500));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17368), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17364)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17364), ctx.gpr[3]);
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_0886B0F4;
    }
    goto L_0886B0EC;
L_0886B0EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    goto L_0886B0F4;
L_0886B0F4:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17368)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x0886B124u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17368), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886B124u) goto L_0886B124;
    return;
L_0886B124:
    ctx.set_gpr(31, 0x0886B12Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 519u, 0x0885A258u>(ctx, &aot_mem) && ctx.pc == 0x0886B12Cu) goto L_0886B12C;
    return;
L_0886B12C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0886B2EC;
    }
    goto L_0886B138;
L_0886B138:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_0886B164;
    }
    goto L_0886B140;
L_0886B140:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17416)));
    ctx.set_gpr(5, 0u | 48120u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B170;
      }
      goto L_0886B164;
    }
L_0886B164:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u | 48120u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17416), 0u);
    goto L_0886B170;
L_0886B170:
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 51 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886B190;
    }
    goto L_0886B184;
L_0886B184:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(50));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886B190;
L_0886B190:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17428)));
    ctx.set_gpr(16, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17428), ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17424)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B25C;
      }
      goto L_0886B1E0;
    }
L_0886B1E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x0886B1ECu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 539u, 0x08847464u>(ctx, &aot_mem) && ctx.pc == 0x0886B1ECu) goto L_0886B1EC;
    return;
L_0886B1EC:
    ctx.set_gpr(31, 0x0886B1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x0886B1F4u) goto L_0886B1F4;
    return;
L_0886B1F4:
    ctx.set_gpr(31, 0x0886B1FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x0886B1FCu) goto L_0886B1FC;
    return;
L_0886B1FC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886B20Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886B20Cu) goto L_0886B20C;
    return;
L_0886B20C:
    ctx.set_gpr(31, 0x0886B214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B214u) goto L_0886B214;
    return;
L_0886B214:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0886B224u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 864u, 0x08843A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B224u) goto L_0886B224;
    return;
L_0886B224:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886B234u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886B234u) goto L_0886B234;
    return;
L_0886B234:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886B244u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0886B244u) goto L_0886B244;
    return;
L_0886B244:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(14744));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886B25Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 299u, 0x088A910Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B25Cu) goto L_0886B25C;
    return;
L_0886B25C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17360)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17360), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B290;
      }
      goto L_0886B280;
    }
L_0886B280:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17360), ctx.gpr[4]);
    goto L_0886B290;
L_0886B290:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17360)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17368)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17368), ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17356)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17356), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0886B2EC;
L_0886B2EC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886B320u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886B320u) goto L_0886B320;
    return;
L_0886B320:
    ctx.set_gpr(31, 0x0886B328u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886B328u) goto L_0886B328;
    return;
L_0886B328:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0886B414;
    }
    goto L_0886B334;
L_0886B334:
    ctx.set_gpr(31, 0x0886B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886B33Cu) goto L_0886B33C;
    return;
L_0886B33C:
    ctx.set_gpr(31, 0x0886B344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 519u, 0x0885A258u>(ctx, &aot_mem) && ctx.pc == 0x0886B344u) goto L_0886B344;
    return;
L_0886B344:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B410;
      }
      goto L_0886B34C;
    }
L_0886B34C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30808)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30812)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30816)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30820)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30824)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30828)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30832)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30836)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17432)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17432), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B3FC;
      }
      goto L_0886B3E8;
    }
L_0886B3E8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17432), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886B410;
      }
      goto L_0886B3FC;
    }
L_0886B3FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0886B410;
      }
      goto L_0886B404;
    }
L_0886B404:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17432), 0u);
    goto L_0886B410;
L_0886B410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886B414;
L_0886B414:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30840));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(287));
    goto L_0886B43C;
L_0886B43C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B43C;
      }
      goto L_0886B45C;
    }
L_0886B45C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886B480u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B480u) goto L_0886B480;
    return;
L_0886B480:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B48C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1424));
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31416));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(697));
    goto L_0886B4A4;
L_0886B4A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B4A4;
      }
      goto L_0886B4C4;
    }
L_0886B4C4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886B4E8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B4E8u) goto L_0886B4E8;
    return;
L_0886B4E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1504));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32724));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(738));
    goto L_0886B50C;
L_0886B50C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B50C;
      }
      goto L_0886B52C;
    }
L_0886B52C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886B550u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B550u) goto L_0886B550;
    return;
L_0886B550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B55C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31248));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(697));
    goto L_0886B574;
L_0886B574:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B574;
      }
      goto L_0886B58C;
    }
L_0886B58C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886B5B0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B5B0u) goto L_0886B5B0;
    return;
L_0886B5B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-848));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30548));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(410));
    goto L_0886B5D4;
L_0886B5D4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B5D4;
      }
      goto L_0886B5F4;
    }
L_0886B5F4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886B618u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B618u) goto L_0886B618;
    return;
L_0886B618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(848));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29728));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(328));
    goto L_0886B63C;
L_0886B63C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B63C;
      }
      goto L_0886B65C;
    }
L_0886B65C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886B680u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B680u) goto L_0886B680;
    return;
L_0886B680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B68C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29072));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(615));
    goto L_0886B6A4;
L_0886B6A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B6A4;
      }
      goto L_0886B6BC;
    }
L_0886B6BC:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B6E0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B6E0u) goto L_0886B6E0;
    return;
L_0886B6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B6EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28456));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(533));
    goto L_0886B704;
L_0886B704:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B704;
      }
      goto L_0886B71C;
    }
L_0886B71C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B740u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B740u) goto L_0886B740;
    return;
L_0886B740:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27920));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(533));
    goto L_0886B764;
L_0886B764:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B764;
      }
      goto L_0886B77C;
    }
L_0886B77C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B7A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B7A0u) goto L_0886B7A0;
    return;
L_0886B7A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-928));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27384));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(451));
    goto L_0886B7C4;
L_0886B7C4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B7C4;
      }
      goto L_0886B7E4;
    }
L_0886B7E4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B808u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B808u) goto L_0886B808;
    return;
L_0886B808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(928));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1136));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26480));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1107));
    goto L_0886B82C;
L_0886B82C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B82C;
      }
      goto L_0886B844;
    }
L_0886B844:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886B868u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B868u) goto L_0886B868;
    return;
L_0886B868:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25372));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(492));
    goto L_0886B88C;
L_0886B88C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B88C;
      }
      goto L_0886B8AC;
    }
L_0886B8AC:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B8D0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B8D0u) goto L_0886B8D0;
    return;
L_0886B8D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B8DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-960));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24388));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(943));
    goto L_0886B8F4;
L_0886B8F4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B8F4;
      }
      goto L_0886B90C;
    }
L_0886B90C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886B930u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B930u) goto L_0886B930;
    return;
L_0886B930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1136));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23444));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1107));
    goto L_0886B954;
L_0886B954:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886B954;
      }
      goto L_0886B96C;
    }
L_0886B96C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886B990u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B990u) goto L_0886B990;
    return;
L_0886B990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B99C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22336));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(492));
    goto L_0886B9B4;
L_0886B9B4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886B9B4;
      }
      goto L_0886B9D4;
    }
L_0886B9D4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886B9F8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B9F8u) goto L_0886B9F8;
    return;
L_0886B9F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BA04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21352));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(533));
    goto L_0886BA1C;
L_0886BA1C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BA1C;
      }
      goto L_0886BA3C;
    }
L_0886BA3C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BA60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BA60u) goto L_0886BA60;
    return;
L_0886BA60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BA6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-800));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20284));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(779));
    goto L_0886BA84;
L_0886BA84:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BA84;
      }
      goto L_0886BA9C;
    }
L_0886BA9C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BAC0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BAC0u) goto L_0886BAC0;
    return;
L_0886BAC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19504));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(492));
    goto L_0886BAE4;
L_0886BAE4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BAE4;
      }
      goto L_0886BB04;
    }
L_0886BB04:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886BB28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BB28u) goto L_0886BB28;
    return;
L_0886BB28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1904));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18520));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(943));
    goto L_0886BB4C;
L_0886BB4C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BB4C;
      }
      goto L_0886BB6C;
    }
L_0886BB6C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886BB90u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BB90u) goto L_0886BB90;
    return;
L_0886BB90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16632));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(492));
    goto L_0886BBB4;
L_0886BBB4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BBB4;
      }
      goto L_0886BBD4;
    }
L_0886BBD4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886BBF8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BBF8u) goto L_0886BBF8;
    return;
L_0886BBF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1456));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15648));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1435));
    goto L_0886BC1C;
L_0886BC1C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BC1C;
      }
      goto L_0886BC34;
    }
L_0886BC34:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BC58u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BC58u) goto L_0886BC58;
    return;
L_0886BC58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1376));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-14212));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1353));
    goto L_0886BC7C;
L_0886BC7C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BC7C;
      }
      goto L_0886BC94;
    }
L_0886BC94:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BCB8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BCB8u) goto L_0886BCB8;
    return;
L_0886BCB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BCC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1296));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12856));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1271));
    goto L_0886BCDC;
L_0886BCDC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BCDC;
      }
      goto L_0886BCF4;
    }
L_0886BCF4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886BD18u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BD18u) goto L_0886BD18;
    return;
L_0886BD18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1168));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11584));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(574));
    goto L_0886BD3C;
L_0886BD3C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BD3C;
      }
      goto L_0886BD5C;
    }
L_0886BD5C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BD80u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BD80u) goto L_0886BD80;
    return;
L_0886BD80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1664));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10436));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(820));
    goto L_0886BDA4;
L_0886BDA4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BDA4;
      }
      goto L_0886BDC4;
    }
L_0886BDC4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886BDE8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BDE8u) goto L_0886BDE8;
    return;
L_0886BDE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-848));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8796));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(410));
    goto L_0886BE0C;
L_0886BE0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BE0C;
      }
      goto L_0886BE2C;
    }
L_0886BE2C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0886BE50u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BE50u) goto L_0886BE50;
    return;
L_0886BE50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(848));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
      if (branch_taken) {
          goto L_0886BE80;
      }
      goto L_0886BE70;
    }
L_0886BE70:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BE70;
      }
      goto L_0886BE80;
    }
L_0886BE80:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886BEA4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BEA4u) goto L_0886BEA4;
    return;
L_0886BEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BEB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-880));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7976));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(861));
    goto L_0886BEC8;
L_0886BEC8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BEC8;
      }
      goto L_0886BEE0;
    }
L_0886BEE0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886BF04u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BF04u) goto L_0886BF04;
    return;
L_0886BF04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(880));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7112));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1517));
    goto L_0886BF28;
L_0886BF28:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886BF28;
      }
      goto L_0886BF40;
    }
L_0886BF40:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886BF64u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BF64u) goto L_0886BF64;
    return;
L_0886BF64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BF70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1328));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5592));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(656));
    goto L_0886BF88;
L_0886BF88:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886BF88;
      }
      goto L_0886BFA8;
    }
L_0886BFA8:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0886BFCCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BFCCu) goto L_0886BFCC;
    return;
L_0886BFCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1168));
    ctx.set_gpr(8, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4280));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(574));
    goto L_0886BFF0;
L_0886BFF0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.pc = 0x0886C000u; return;
}

void recomp_unit_0025(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0025_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_25(Runtime &runtime) {
    runtime.register_generated_unit(25u, 0x08868000u, 16384u, &recomp_unit_0025, &recomp_unit_0025_entry);
    runtime.register_function(0x08868004u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886800Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868014u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868040u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868048u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868074u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886807Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868084u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868104u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886810Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868118u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868124u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886812Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868134u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868154u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868164u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868204u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868228u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868238u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886823Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886824Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868280u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868284u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868300u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886832Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886833Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868354u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868360u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868374u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868418u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868420u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868430u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868440u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868460u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868480u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868488u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868494u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886849Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868500u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868508u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868514u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886851Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868524u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868530u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868538u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868540u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886854Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868554u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868568u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886857Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886858Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886859Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868600u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868614u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886861Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868628u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868654u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868658u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868694u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886869Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088686ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088686BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088686DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088686FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868704u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868710u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868718u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868724u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868738u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868748u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868758u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868768u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886877Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868784u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868790u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868798u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868808u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868818u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868824u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868844u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886884Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868858u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886886Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886887Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868890u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868898u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868910u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868918u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868928u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868938u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868958u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868978u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868980u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886898Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868994u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868ED0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869004u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886900Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869018u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886902Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869040u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869050u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869060u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869074u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886907Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869088u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886910Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886911Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886913Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886915Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869164u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869198u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869200u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886920Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886921Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869228u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869230u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869258u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869268u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869278u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869284u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869290u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869298u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869334u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886933Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869370u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869378u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869400u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869424u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869434u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869444u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869450u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869458u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869460u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886946Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886947Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869488u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869490u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869498u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869500u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886950Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869514u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869528u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869548u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869558u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869584u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088695FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869634u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886964Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869654u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886965Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869664u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869674u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869688u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869690u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869698u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869710u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869718u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869730u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869738u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869748u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869750u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869758u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886976Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869798u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869800u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869808u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869818u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869820u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869850u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869858u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869864u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886986Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869874u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886987Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886989Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869918u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869944u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869950u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869958u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886998Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869990u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088699ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869ADCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869ED0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869FB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869FD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869FECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A014u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A034u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A048u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A070u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A078u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A080u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A088u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A11Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A200u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A20Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A22Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A234u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A240u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A290u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A300u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A30Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A314u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A338u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A360u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A368u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A378u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A380u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A390u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A40Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A41Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A430u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A458u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A46Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A49Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A540u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A554u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A55Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A584u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A58Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A59Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A60Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A614u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A63Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A644u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A654u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A65Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A66Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A674u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A694u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A69Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A70Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A710u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A714u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A738u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A744u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A758u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A76Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A778u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A780u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A804u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A814u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A81Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A82Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A83Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A84Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A894u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A93Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A944u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A950u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A96Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A974u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A98Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A994u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A99Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AACCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AED0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AED4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AEF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B008u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B018u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B048u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B050u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B080u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B08Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B124u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B12Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B138u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B140u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B164u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B184u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B190u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B20Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B224u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B234u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B244u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B25Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B280u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B290u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B320u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B334u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B33Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B34Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B410u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B424u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B43Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B45Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B480u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B48Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B50Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B52Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B550u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B55Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B574u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B58Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B618u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B624u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B63Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B65Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B680u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B68Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B704u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B71Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B74Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B764u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B77Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B7A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B7ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B7C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B7E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B808u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B814u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B82Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B844u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B868u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B874u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B88Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B90Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B930u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B93Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B954u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B96Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B990u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B99Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BAC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BACCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BAE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFF0u, &recomp_unit_0025, "recomp_unit_0025");
}
} // namespace psprecomp
