#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0021[4093] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 28, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0,
    0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 56, 0, 0, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0,
    64, 0, 65, 0, 0, 0, 0, 66, 0, 67, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0,
    0, 0, 101, 0, 102, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0,
    0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138,
    0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 154, 155, 0, 0, 156, 157, 0,
    158, 159, 160, 0, 161, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 177, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0,
    0, 194, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231,
    0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 250, 0, 251, 252, 0, 253, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 273, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0,
    278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 283, 0, 284, 285,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 293, 294, 0,
    295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0,
    305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0,
    0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0,
    0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 354, 0, 0, 355, 356, 0,
    0, 357, 0, 358, 0, 359, 0, 0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 369, 0, 370, 0, 0, 0, 371,
    0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0,
    0, 392, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 0,
    0, 403, 404, 0, 405, 406, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 412, 0, 413, 0, 414, 0, 415, 0,
    416, 0, 0, 0, 417, 418, 0, 419, 420, 421, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0,
    433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461,
    0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0,
    0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0,
    0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0,
    501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508,
    0, 0, 509, 0, 0, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 516, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0,
    0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 530,
    0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 544, 545, 0, 546, 0,
    0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 550, 551, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558,
    0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 564,
    0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0,
    0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0,
    583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0,
    593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0,
    603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613,
    0, 0, 614, 0, 615, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0,
    623, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637,
    0, 638, 0, 0, 639, 0, 640, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650,
    0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0,
    0, 661, 0, 0, 0, 662, 663, 0, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0,
    0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681,
    0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0,
    697, 0, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 709, 0, 710,
    0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 714, 715, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 722,
    0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0,
    0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0,
    748, 0, 749, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 754, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0,
    758, 759, 0, 0, 760, 0, 0, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 770,
    0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 779, 780, 0, 781,
    0, 782, 783, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 0, 790, 0, 791, 0, 792,
    0, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805,
    0, 806, 0, 0, 0, 0, 807, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 0, 813, 0, 814, 0, 815, 0, 0,
    816, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0,
    0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0,
    0, 828, 829, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0,
    0, 0, 836, 0, 837, 0, 838, 0, 839, 0, 0, 840, 0, 0, 841, 0, 842, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846,
    0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 852, 0,
    853, 0, 0, 854, 0, 0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 862, 0,
    0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 0, 0, 872,
    0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 883, 884, 0, 885, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 890, 891, 0, 0, 0, 892, 0, 0, 0,
    0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 897, 0, 0, 898, 0, 899, 0, 0, 0, 900, 0, 0, 0, 901, 0, 902, 0,
    0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 906, 907, 0, 0, 0, 908, 0, 0,
    0, 909, 0, 910, 0, 0, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 917, 0,
    0, 0, 918, 0, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 924, 0, 925, 0, 926, 0, 927, 0,
    0, 0, 0, 0, 0, 0, 928, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 0, 0, 934, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0,
    0, 938, 0, 939, 0, 0, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    944, 0, 0, 0, 0, 0, 0, 945, 0, 946, 0, 0, 947, 0, 948, 949, 0, 0, 0, 0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0,
    0, 0, 0, 953, 0, 0, 0, 0, 954, 0, 0, 0, 955, 0, 0, 956, 0, 0, 0, 0, 0, 0, 957, 0, 958, 0, 0, 959, 0, 960, 961, 0,
    0, 0, 0, 962, 0, 0, 963, 0, 0, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 965, 0, 0, 966, 0, 0, 0, 0, 0, 967, 0, 0, 968,
    0, 0, 969, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 973, 974, 0, 0, 0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 976, 0, 0, 0, 977, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0,
    0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0,
    0, 0, 0, 0, 0, 0, 986, 0, 0, 987, 0, 988, 0, 0, 0, 989, 0, 990, 0, 0, 991, 0, 992, 0, 993, 0, 994, 0, 0, 0, 995, 0,
    0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 997, 0, 998, 0, 0, 0, 999, 0, 1000, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 1002, 0,
    0, 0, 0, 0, 1003, 0, 0, 0, 0, 0, 1004, 0, 1005, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 1010, 0,
    0, 0, 1011, 0, 1012, 0, 1013, 0, 0, 0, 0, 1014, 0, 1015, 0, 0, 1016, 0, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0,
    1023, 0, 1024, 0, 0, 1025, 1026, 0, 1027, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1028, 1029, 0, 1030, 0, 0, 0, 0, 0, 1031, 0, 1032, 0, 0,
    0, 0, 0, 1033, 0, 1034, 0, 0, 0, 0, 0, 1035, 0, 0, 0, 1036, 0, 0, 1037, 0, 0, 0, 0, 1038, 0, 1039, 0, 0, 1040,
};
void recomp_unit_0021_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08858004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0021[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08858004;
    case 2u: goto L_0885800C;
    case 3u: goto L_08858020;
    case 4u: goto L_0885802C;
    case 5u: goto L_08858040;
    case 6u: goto L_08858048;
    case 7u: goto L_08858054;
    case 8u: goto L_08858068;
    case 9u: goto L_08858074;
    case 10u: goto L_08858088;
    case 11u: goto L_08858090;
    case 12u: goto L_08858098;
    case 13u: goto L_088580AC;
    case 14u: goto L_088580B8;
    case 15u: goto L_088580CC;
    case 16u: goto L_088580F0;
    case 17u: goto L_088580FC;
    case 18u: goto L_08858108;
    case 19u: goto L_08858128;
    case 20u: goto L_08858134;
    case 21u: goto L_08858154;
    case 22u: goto L_08858164;
    case 23u: goto L_08858174;
    case 24u: goto L_08858194;
    case 25u: goto L_0885819C;
    case 26u: goto L_088581A4;
    case 27u: goto L_088581B4;
    case 28u: goto L_088581C0;
    case 29u: goto L_088581C4;
    case 30u: goto L_088581D0;
    case 31u: goto L_088581E8;
    case 32u: goto L_08858200;
    case 33u: goto L_0885825C;
    case 34u: goto L_08858264;
    case 35u: goto L_0885826C;
    case 36u: goto L_08858274;
    case 37u: goto L_0885827C;
    case 38u: goto L_0885828C;
    case 39u: goto L_08858298;
    case 40u: goto L_088582A4;
    case 41u: goto L_088582B0;
    case 42u: goto L_088582D8;
    case 43u: goto L_088582F8;
    case 44u: goto L_08858314;
    case 45u: goto L_08858328;
    case 46u: goto L_0885833C;
    case 47u: goto L_0885836C;
    case 48u: goto L_08858378;
    case 49u: goto L_0885838C;
    case 50u: goto L_0885839C;
    case 51u: goto L_088583AC;
    case 52u: goto L_088583B8;
    case 53u: goto L_088583C0;
    case 54u: goto L_088583D4;
    case 55u: goto L_088583DC;
    case 56u: goto L_088583E0;
    case 57u: goto L_088583F0;
    case 58u: goto L_08858404;
    case 59u: goto L_08858438;
    case 60u: goto L_08858444;
    case 61u: goto L_08858458;
    case 62u: goto L_08858468;
    case 63u: goto L_08858478;
    case 64u: goto L_08858484;
    case 65u: goto L_0885848C;
    case 66u: goto L_088584A0;
    case 67u: goto L_088584A8;
    case 68u: goto L_088584AC;
    case 69u: goto L_088584BC;
    case 70u: goto L_088584D0;
    case 71u: goto L_08858504;
    case 72u: goto L_08858510;
    case 73u: goto L_08858524;
    case 74u: goto L_08858534;
    case 75u: goto L_08858544;
    case 76u: goto L_08858550;
    case 77u: goto L_08858558;
    case 78u: goto L_0885856C;
    case 79u: goto L_08858574;
    case 80u: goto L_08858584;
    case 81u: goto L_08858598;
    case 82u: goto L_088585CC;
    case 83u: goto L_088585D8;
    case 84u: goto L_088585EC;
    case 85u: goto L_088585FC;
    case 86u: goto L_0885860C;
    case 87u: goto L_08858618;
    case 88u: goto L_08858620;
    case 89u: goto L_08858634;
    case 90u: goto L_0885863C;
    case 91u: goto L_08858648;
    case 92u: goto L_0885865C;
    case 93u: goto L_08858670;
    case 94u: goto L_088586A4;
    case 95u: goto L_088586B0;
    case 96u: goto L_088586C4;
    case 97u: goto L_088586D4;
    case 98u: goto L_088586E4;
    case 99u: goto L_088586F0;
    case 100u: goto L_088586F8;
    case 101u: goto L_0885870C;
    case 102u: goto L_08858714;
    case 103u: goto L_08858718;
    case 104u: goto L_08858728;
    case 105u: goto L_0885873C;
    case 106u: goto L_08858770;
    case 107u: goto L_0885877C;
    case 108u: goto L_08858790;
    case 109u: goto L_088587A0;
    case 110u: goto L_088587B0;
    case 111u: goto L_088587BC;
    case 112u: goto L_088587C4;
    case 113u: goto L_088587D8;
    case 114u: goto L_088587E0;
    case 115u: goto L_088587E4;
    case 116u: goto L_088587F4;
    case 117u: goto L_08858808;
    case 118u: goto L_0885883C;
    case 119u: goto L_08858848;
    case 120u: goto L_0885885C;
    case 121u: goto L_0885886C;
    case 122u: goto L_0885887C;
    case 123u: goto L_08858888;
    case 124u: goto L_08858890;
    case 125u: goto L_088588A4;
    case 126u: goto L_088588AC;
    case 127u: goto L_088588BC;
    case 128u: goto L_088588D0;
    case 129u: goto L_08858904;
    case 130u: goto L_08858910;
    case 131u: goto L_08858924;
    case 132u: goto L_08858934;
    case 133u: goto L_08858944;
    case 134u: goto L_08858950;
    case 135u: goto L_08858958;
    case 136u: goto L_0885896C;
    case 137u: goto L_08858974;
    case 138u: goto L_08858980;
    case 139u: goto L_0885898C;
    case 140u: goto L_08858998;
    case 141u: goto L_088589A4;
    case 142u: goto L_088589B0;
    case 143u: goto L_088589B8;
    case 144u: goto L_088589D0;
    case 145u: goto L_088589D8;
    case 146u: goto L_088589F0;
    case 147u: goto L_088589F8;
    case 148u: goto L_08858A10;
    case 149u: goto L_08858A18;
    case 150u: goto L_08858A30;
    case 151u: goto L_08858A38;
    case 152u: goto L_08858A50;
    case 153u: goto L_08858A54;
    case 154u: goto L_08858A68;
    case 155u: goto L_08858A6C;
    case 156u: goto L_08858A78;
    case 157u: goto L_08858A7C;
    case 158u: goto L_08858A84;
    case 159u: goto L_08858A88;
    case 160u: goto L_08858A8C;
    case 161u: goto L_08858A94;
    case 162u: goto L_08858A98;
    case 163u: goto L_08858AA4;
    case 164u: goto L_08858AB0;
    case 165u: goto L_08858AB8;
    case 166u: goto L_08858AC0;
    case 167u: goto L_08858AD0;
    case 168u: goto L_08858AE8;
    case 169u: goto L_08858B14;
    case 170u: goto L_08858B40;
    case 171u: goto L_08858B6C;
    case 172u: goto L_08858B84;
    case 173u: goto L_08858B9C;
    case 174u: goto L_08858BC4;
    case 175u: goto L_08858BEC;
    case 176u: goto L_08858C14;
    case 177u: goto L_08858C1C;
    case 178u: goto L_08858C20;
    case 179u: goto L_08858C34;
    case 180u: goto L_08858C68;
    case 181u: goto L_08858C88;
    case 182u: goto L_08858CA8;
    case 183u: goto L_08858CCC;
    case 184u: goto L_08858CF0;
    case 185u: goto L_08858D14;
    case 186u: goto L_08858D1C;
    case 187u: goto L_08858D24;
    case 188u: goto L_08858D38;
    case 189u: goto L_08858D3C;
    case 190u: goto L_08858D44;
    case 191u: goto L_08858D54;
    case 192u: goto L_08858D68;
    case 193u: goto L_08858D78;
    case 194u: goto L_08858D88;
    case 195u: goto L_08858D8C;
    case 196u: goto L_08858DA0;
    case 197u: goto L_08858DAC;
    case 198u: goto L_08858DBC;
    case 199u: goto L_08858DC8;
    case 200u: goto L_08858DD0;
    case 201u: goto L_08858DF8;
    case 202u: goto L_08858E1C;
    case 203u: goto L_08858E28;
    case 204u: goto L_08858E3C;
    case 205u: goto L_08858E4C;
    case 206u: goto L_08858E5C;
    case 207u: goto L_08858E88;
    case 208u: goto L_08858E94;
    case 209u: goto L_08858EA0;
    case 210u: goto L_08858EAC;
    case 211u: goto L_08858EC0;
    case 212u: goto L_08858ED0;
    case 213u: goto L_08858EE0;
    case 214u: goto L_08858EF4;
    case 215u: goto L_08858EF8;
    case 216u: goto L_08858F14;
    case 217u: goto L_08858F20;
    case 218u: goto L_08858F34;
    case 219u: goto L_08858F44;
    case 220u: goto L_08858F54;
    case 221u: goto L_08858F7C;
    case 222u: goto L_08858F8C;
    case 223u: goto L_08858F9C;
    case 224u: goto L_08858FAC;
    case 225u: goto L_08858FBC;
    case 226u: goto L_08858FC0;
    case 227u: goto L_08858FC8;
    case 228u: goto L_08858FD8;
    case 229u: goto L_08858FE8;
    case 230u: goto L_08858FF8;
    case 231u: goto L_08859000;
    case 232u: goto L_08859010;
    case 233u: goto L_08859020;
    case 234u: goto L_08859038;
    case 235u: goto L_08859064;
    case 236u: goto L_08859078;
    case 237u: goto L_08859084;
    case 238u: goto L_088590AC;
    case 239u: goto L_088590BC;
    case 240u: goto L_088590C8;
    case 241u: goto L_088590CC;
    case 242u: goto L_088590F0;
    case 243u: goto L_08859114;
    case 244u: goto L_08859120;
    case 245u: goto L_08859130;
    case 246u: goto L_08859140;
    case 247u: goto L_08859148;
    case 248u: goto L_08859158;
    case 249u: goto L_08859164;
    case 250u: goto L_08859168;
    case 251u: goto L_08859170;
    case 252u: goto L_08859174;
    case 253u: goto L_0885917C;
    case 254u: goto L_08859188;
    case 255u: goto L_088591C4;
    case 256u: goto L_088591EC;
    case 257u: goto L_0885920C;
    case 258u: goto L_08859224;
    case 259u: goto L_08859238;
    case 260u: goto L_08859258;
    case 261u: goto L_08859270;
    case 262u: goto L_08859284;
    case 263u: goto L_088592AC;
    case 264u: goto L_088592CC;
    case 265u: goto L_088592E4;
    case 266u: goto L_088592F8;
    case 267u: goto L_08859318;
    case 268u: goto L_08859330;
    case 269u: goto L_08859344;
    case 270u: goto L_0885934C;
    case 271u: goto L_0885936C;
    case 272u: goto L_08859398;
    case 273u: goto L_088593A4;
    case 274u: goto L_088593A8;
    case 275u: goto L_088593CC;
    case 276u: goto L_088593F0;
    case 277u: goto L_088593FC;
    case 278u: goto L_08859404;
    case 279u: goto L_08859414;
    case 280u: goto L_08859420;
    case 281u: goto L_0885944C;
    case 282u: goto L_08859470;
    case 283u: goto L_08859474;
    case 284u: goto L_0885947C;
    case 285u: goto L_08859480;
    case 286u: goto L_08859498;
    case 287u: goto L_088594BC;
    case 288u: goto L_088594C4;
    case 289u: goto L_088594CC;
    case 290u: goto L_088594D4;
    case 291u: goto L_088594DC;
    case 292u: goto L_088594EC;
    case 293u: goto L_088594F8;
    case 294u: goto L_088594FC;
    case 295u: goto L_08859504;
    case 296u: goto L_0885950C;
    case 297u: goto L_08859514;
    case 298u: goto L_0885952C;
    case 299u: goto L_08859538;
    case 300u: goto L_08859544;
    case 301u: goto L_0885954C;
    case 302u: goto L_08859554;
    case 303u: goto L_0885956C;
    case 304u: goto L_08859578;
    case 305u: goto L_08859584;
    case 306u: goto L_08859590;
    case 307u: goto L_0885959C;
    case 308u: goto L_088595A4;
    case 309u: goto L_088595AC;
    case 310u: goto L_088595B4;
    case 311u: goto L_088595C0;
    case 312u: goto L_088595D8;
    case 313u: goto L_08859630;
    case 314u: goto L_08859638;
    case 315u: goto L_08859640;
    case 316u: goto L_08859648;
    case 317u: goto L_08859658;
    case 318u: goto L_08859660;
    case 319u: goto L_0885966C;
    case 320u: goto L_08859688;
    case 321u: goto L_08859694;
    case 322u: goto L_088596A0;
    case 323u: goto L_088596AC;
    case 324u: goto L_088596C0;
    case 325u: goto L_088596D0;
    case 326u: goto L_088596E8;
    case 327u: goto L_08859704;
    case 328u: goto L_08859724;
    case 329u: goto L_08859730;
    case 330u: goto L_0885973C;
    case 331u: goto L_08859764;
    case 332u: goto L_08859788;
    case 333u: goto L_088597B0;
    case 334u: goto L_088597C8;
    case 335u: goto L_088597DC;
    case 336u: goto L_088597E4;
    case 337u: goto L_088597F0;
    case 338u: goto L_088597FC;
    case 339u: goto L_0885980C;
    case 340u: goto L_0885981C;
    case 341u: goto L_08859830;
    case 342u: goto L_08859850;
    case 343u: goto L_0885985C;
    case 344u: goto L_08859864;
    case 345u: goto L_08859878;
    case 346u: goto L_08859888;
    case 347u: goto L_08859894;
    case 348u: goto L_088598A0;
    case 349u: goto L_088598AC;
    case 350u: goto L_088598B4;
    case 351u: goto L_088598C4;
    case 352u: goto L_088598DC;
    case 353u: goto L_088598E8;
    case 354u: goto L_088598EC;
    case 355u: goto L_088598F8;
    case 356u: goto L_088598FC;
    case 357u: goto L_08859908;
    case 358u: goto L_08859910;
    case 359u: goto L_08859918;
    case 360u: goto L_08859924;
    case 361u: goto L_08859928;
    case 362u: goto L_08859960;
    case 363u: goto L_08859994;
    case 364u: goto L_088599B4;
    case 365u: goto L_088599C4;
    case 366u: goto L_088599CC;
    case 367u: goto L_088599D4;
    case 368u: goto L_088599E4;
    case 369u: goto L_088599E8;
    case 370u: goto L_088599F0;
    case 371u: goto L_08859A00;
    case 372u: goto L_08859A08;
    case 373u: goto L_08859A18;
    case 374u: goto L_08859A20;
    case 375u: goto L_08859A2C;
    case 376u: goto L_08859A38;
    case 377u: goto L_08859A44;
    case 378u: goto L_08859A48;
    case 379u: goto L_08859A58;
    case 380u: goto L_08859A60;
    case 381u: goto L_08859A84;
    case 382u: goto L_08859A90;
    case 383u: goto L_08859A98;
    case 384u: goto L_08859AA4;
    case 385u: goto L_08859AB0;
    case 386u: goto L_08859AB8;
    case 387u: goto L_08859AC8;
    case 388u: goto L_08859AD0;
    case 389u: goto L_08859AE0;
    case 390u: goto L_08859AF0;
    case 391u: goto L_08859AF8;
    case 392u: goto L_08859B08;
    case 393u: goto L_08859B0C;
    case 394u: goto L_08859B20;
    case 395u: goto L_08859B3C;
    case 396u: goto L_08859B48;
    case 397u: goto L_08859B54;
    case 398u: goto L_08859B58;
    case 399u: goto L_08859B60;
    case 400u: goto L_08859B68;
    case 401u: goto L_08859B70;
    case 402u: goto L_08859B78;
    case 403u: goto L_08859B88;
    case 404u: goto L_08859B8C;
    case 405u: goto L_08859B94;
    case 406u: goto L_08859B98;
    case 407u: goto L_08859B9C;
    case 408u: goto L_08859BAC;
    case 409u: goto L_08859BC8;
    case 410u: goto L_08859BD4;
    case 411u: goto L_08859BE0;
    case 412u: goto L_08859BE4;
    case 413u: goto L_08859BEC;
    case 414u: goto L_08859BF4;
    case 415u: goto L_08859BFC;
    case 416u: goto L_08859C04;
    case 417u: goto L_08859C14;
    case 418u: goto L_08859C18;
    case 419u: goto L_08859C20;
    case 420u: goto L_08859C24;
    case 421u: goto L_08859C28;
    case 422u: goto L_08859C2C;
    case 423u: goto L_08859C3C;
    case 424u: goto L_08859C48;
    case 425u: goto L_08859C54;
    case 426u: goto L_08859C98;
    case 427u: goto L_08859CB8;
    case 428u: goto L_08859CC0;
    case 429u: goto L_08859CE4;
    case 430u: goto L_08859CEC;
    case 431u: goto L_08859CF4;
    case 432u: goto L_08859CFC;
    case 433u: goto L_08859D04;
    case 434u: goto L_08859D0C;
    case 435u: goto L_08859D14;
    case 436u: goto L_08859D1C;
    case 437u: goto L_08859D24;
    case 438u: goto L_08859D2C;
    case 439u: goto L_08859D34;
    case 440u: goto L_08859D40;
    case 441u: goto L_08859D4C;
    case 442u: goto L_08859D58;
    case 443u: goto L_08859D64;
    case 444u: goto L_08859D70;
    case 445u: goto L_08859D78;
    case 446u: goto L_08859D80;
    case 447u: goto L_08859DA0;
    case 448u: goto L_08859DA8;
    case 449u: goto L_08859DC4;
    case 450u: goto L_08859DCC;
    case 451u: goto L_08859DE4;
    case 452u: goto L_08859E04;
    case 453u: goto L_08859E10;
    case 454u: goto L_08859E24;
    case 455u: goto L_08859E38;
    case 456u: goto L_08859E40;
    case 457u: goto L_08859E48;
    case 458u: goto L_08859E50;
    case 459u: goto L_08859E6C;
    case 460u: goto L_08859E74;
    case 461u: goto L_08859E80;
    case 462u: goto L_08859E8C;
    case 463u: goto L_08859E98;
    case 464u: goto L_08859EA0;
    case 465u: goto L_08859EA8;
    case 466u: goto L_08859ED0;
    case 467u: goto L_08859ED8;
    case 468u: goto L_08859F08;
    case 469u: goto L_08859F10;
    case 470u: goto L_08859F30;
    case 471u: goto L_08859F38;
    case 472u: goto L_08859F58;
    case 473u: goto L_08859F60;
    case 474u: goto L_08859F68;
    case 475u: goto L_08859F70;
    case 476u: goto L_08859F90;
    case 477u: goto L_08859FA8;
    case 478u: goto L_08859FB4;
    case 479u: goto L_08859FC4;
    case 480u: goto L_08859FCC;
    case 481u: goto L_08859FDC;
    case 482u: goto L_08859FE4;
    case 483u: goto L_08859FF4;
    case 484u: goto L_08859FFC;
    case 485u: goto L_0885A00C;
    case 486u: goto L_0885A014;
    case 487u: goto L_0885A028;
    case 488u: goto L_0885A030;
    case 489u: goto L_0885A044;
    case 490u: goto L_0885A070;
    case 491u: goto L_0885A07C;
    case 492u: goto L_0885A098;
    case 493u: goto L_0885A0A0;
    case 494u: goto L_0885A0B0;
    case 495u: goto L_0885A0BC;
    case 496u: goto L_0885A0CC;
    case 497u: goto L_0885A0D4;
    case 498u: goto L_0885A0E4;
    case 499u: goto L_0885A0EC;
    case 500u: goto L_0885A0FC;
    case 501u: goto L_0885A104;
    case 502u: goto L_0885A118;
    case 503u: goto L_0885A120;
    case 504u: goto L_0885A134;
    case 505u: goto L_0885A164;
    case 506u: goto L_0885A16C;
    case 507u: goto L_0885A178;
    case 508u: goto L_0885A180;
    case 509u: goto L_0885A18C;
    case 510u: goto L_0885A1A0;
    case 511u: goto L_0885A1A4;
    case 512u: goto L_0885A1C0;
    case 513u: goto L_0885A1C8;
    case 514u: goto L_0885A1DC;
    case 515u: goto L_0885A1E8;
    case 516u: goto L_0885A1FC;
    case 517u: goto L_0885A224;
    case 518u: goto L_0885A240;
    case 519u: goto L_0885A258;
    case 520u: goto L_0885A268;
    case 521u: goto L_0885A27C;
    case 522u: goto L_0885A288;
    case 523u: goto L_0885A29C;
    case 524u: goto L_0885A2A4;
    case 525u: goto L_0885A2B0;
    case 526u: goto L_0885A2CC;
    case 527u: goto L_0885A2D4;
    case 528u: goto L_0885A2E0;
    case 529u: goto L_0885A2F4;
    case 530u: goto L_0885A300;
    case 531u: goto L_0885A30C;
    case 532u: goto L_0885A320;
    case 533u: goto L_0885A340;
    case 534u: goto L_0885A350;
    case 535u: goto L_0885A35C;
    case 536u: goto L_0885A370;
    case 537u: goto L_0885A39C;
    case 538u: goto L_0885A3A4;
    case 539u: goto L_0885A3AC;
    case 540u: goto L_0885A3B4;
    case 541u: goto L_0885A3BC;
    case 542u: goto L_0885A3C4;
    case 543u: goto L_0885A3CC;
    case 544u: goto L_0885A3F0;
    case 545u: goto L_0885A3F4;
    case 546u: goto L_0885A3FC;
    case 547u: goto L_0885A40C;
    case 548u: goto L_0885A414;
    case 549u: goto L_0885A424;
    case 550u: goto L_0885A430;
    case 551u: goto L_0885A434;
    case 552u: goto L_0885A440;
    case 553u: goto L_0885A44C;
    case 554u: goto L_0885A454;
    case 555u: goto L_0885A460;
    case 556u: goto L_0885A468;
    case 557u: goto L_0885A478;
    case 558u: goto L_0885A480;
    case 559u: goto L_0885A498;
    case 560u: goto L_0885A4B0;
    case 561u: goto L_0885A4D0;
    case 562u: goto L_0885A4DC;
    case 563u: goto L_0885A4F0;
    case 564u: goto L_0885A500;
    case 565u: goto L_0885A510;
    case 566u: goto L_0885A518;
    case 567u: goto L_0885A528;
    case 568u: goto L_0885A530;
    case 569u: goto L_0885A540;
    case 570u: goto L_0885A548;
    case 571u: goto L_0885A54C;
    case 572u: goto L_0885A554;
    case 573u: goto L_0885A568;
    case 574u: goto L_0885A57C;
    case 575u: goto L_0885A590;
    case 576u: goto L_0885A5A0;
    case 577u: goto L_0885A5BC;
    case 578u: goto L_0885A5E4;
    case 579u: goto L_0885A600;
    case 580u: goto L_0885A618;
    case 581u: goto L_0885A64C;
    case 582u: goto L_0885A678;
    case 583u: goto L_0885A684;
    case 584u: goto L_0885A68C;
    case 585u: goto L_0885A694;
    case 586u: goto L_0885A6A4;
    case 587u: goto L_0885A6C0;
    case 588u: goto L_0885A6CC;
    case 589u: goto L_0885A6D4;
    case 590u: goto L_0885A6DC;
    case 591u: goto L_0885A6E4;
    case 592u: goto L_0885A6FC;
    case 593u: goto L_0885A704;
    case 594u: goto L_0885A724;
    case 595u: goto L_0885A730;
    case 596u: goto L_0885A738;
    case 597u: goto L_0885A740;
    case 598u: goto L_0885A74C;
    case 599u: goto L_0885A754;
    case 600u: goto L_0885A75C;
    case 601u: goto L_0885A764;
    case 602u: goto L_0885A77C;
    case 603u: goto L_0885A784;
    case 604u: goto L_0885A7A4;
    case 605u: goto L_0885A7B0;
    case 606u: goto L_0885A7B8;
    case 607u: goto L_0885A7C0;
    case 608u: goto L_0885A7CC;
    case 609u: goto L_0885A7D8;
    case 610u: goto L_0885A7E0;
    case 611u: goto L_0885A7EC;
    case 612u: goto L_0885A7F4;
    case 613u: goto L_0885A800;
    case 614u: goto L_0885A80C;
    case 615u: goto L_0885A814;
    case 616u: goto L_0885A81C;
    case 617u: goto L_0885A824;
    case 618u: goto L_0885A834;
    case 619u: goto L_0885A840;
    case 620u: goto L_0885A848;
    case 621u: goto L_0885A850;
    case 622u: goto L_0885A870;
    case 623u: goto L_0885A884;
    case 624u: goto L_0885A88C;
    case 625u: goto L_0885A894;
    case 626u: goto L_0885A8A0;
    case 627u: goto L_0885A8A8;
    case 628u: goto L_0885A8B0;
    case 629u: goto L_0885A8BC;
    case 630u: goto L_0885A8C4;
    case 631u: goto L_0885A8CC;
    case 632u: goto L_0885A8D8;
    case 633u: goto L_0885A8E0;
    case 634u: goto L_0885A8E8;
    case 635u: goto L_0885A8F0;
    case 636u: goto L_0885A8F8;
    case 637u: goto L_0885A900;
    case 638u: goto L_0885A908;
    case 639u: goto L_0885A914;
    case 640u: goto L_0885A91C;
    case 641u: goto L_0885A924;
    case 642u: goto L_0885A930;
    case 643u: goto L_0885A93C;
    case 644u: goto L_0885A948;
    case 645u: goto L_0885A950;
    case 646u: goto L_0885A958;
    case 647u: goto L_0885A960;
    case 648u: goto L_0885A96C;
    case 649u: goto L_0885A978;
    case 650u: goto L_0885A980;
    case 651u: goto L_0885A988;
    case 652u: goto L_0885A994;
    case 653u: goto L_0885A9A8;
    case 654u: goto L_0885A9B0;
    case 655u: goto L_0885A9C0;
    case 656u: goto L_0885A9D4;
    case 657u: goto L_0885A9DC;
    case 658u: goto L_0885A9E4;
    case 659u: goto L_0885A9EC;
    case 660u: goto L_0885A9F4;
    case 661u: goto L_0885AA08;
    case 662u: goto L_0885AA18;
    case 663u: goto L_0885AA1C;
    case 664u: goto L_0885AA28;
    case 665u: goto L_0885AA30;
    case 666u: goto L_0885AA38;
    case 667u: goto L_0885AA44;
    case 668u: goto L_0885AA4C;
    case 669u: goto L_0885AA54;
    case 670u: goto L_0885AA60;
    case 671u: goto L_0885AA68;
    case 672u: goto L_0885AA88;
    case 673u: goto L_0885AA94;
    case 674u: goto L_0885AA9C;
    case 675u: goto L_0885AAA4;
    case 676u: goto L_0885AAB0;
    case 677u: goto L_0885AAB8;
    case 678u: goto L_0885AAD0;
    case 679u: goto L_0885AAD8;
    case 680u: goto L_0885AAF8;
    case 681u: goto L_0885AB00;
    case 682u: goto L_0885AB08;
    case 683u: goto L_0885AB20;
    case 684u: goto L_0885AB28;
    case 685u: goto L_0885AB48;
    case 686u: goto L_0885AB50;
    case 687u: goto L_0885AB60;
    case 688u: goto L_0885AB6C;
    case 689u: goto L_0885AB80;
    case 690u: goto L_0885AB94;
    case 691u: goto L_0885ABA8;
    case 692u: goto L_0885ABBC;
    case 693u: goto L_0885ABDC;
    case 694u: goto L_0885ABE4;
    case 695u: goto L_0885ABF4;
    case 696u: goto L_0885ABFC;
    case 697u: goto L_0885AC04;
    case 698u: goto L_0885AC10;
    case 699u: goto L_0885AC18;
    case 700u: goto L_0885AC20;
    case 701u: goto L_0885AC2C;
    case 702u: goto L_0885AC34;
    case 703u: goto L_0885AC3C;
    case 704u: goto L_0885AC48;
    case 705u: goto L_0885AC54;
    case 706u: goto L_0885AC5C;
    case 707u: goto L_0885AC64;
    case 708u: goto L_0885AC70;
    case 709u: goto L_0885AC78;
    case 710u: goto L_0885AC80;
    case 711u: goto L_0885AC8C;
    case 712u: goto L_0885AC9C;
    case 713u: goto L_0885ACB0;
    case 714u: goto L_0885ACB8;
    case 715u: goto L_0885ACBC;
    case 716u: goto L_0885ACC4;
    case 717u: goto L_0885ACD0;
    case 718u: goto L_0885ACD8;
    case 719u: goto L_0885ACE0;
    case 720u: goto L_0885ACE8;
    case 721u: goto L_0885ACF0;
    case 722u: goto L_0885AD00;
    case 723u: goto L_0885AD0C;
    case 724u: goto L_0885AD20;
    case 725u: goto L_0885AD30;
    case 726u: goto L_0885AD3C;
    case 727u: goto L_0885AD44;
    case 728u: goto L_0885AD4C;
    case 729u: goto L_0885AD54;
    case 730u: goto L_0885AD6C;
    case 731u: goto L_0885AD74;
    case 732u: goto L_0885AD94;
    case 733u: goto L_0885ADB0;
    case 734u: goto L_0885ADB8;
    case 735u: goto L_0885ADD0;
    case 736u: goto L_0885ADD8;
    case 737u: goto L_0885ADF8;
    case 738u: goto L_0885AE10;
    case 739u: goto L_0885AE18;
    case 740u: goto L_0885AE20;
    case 741u: goto L_0885AE2C;
    case 742u: goto L_0885AE38;
    case 743u: goto L_0885AE40;
    case 744u: goto L_0885AE50;
    case 745u: goto L_0885AE64;
    case 746u: goto L_0885AE70;
    case 747u: goto L_0885AE7C;
    case 748u: goto L_0885AE84;
    case 749u: goto L_0885AE8C;
    case 750u: goto L_0885AE98;
    case 751u: goto L_0885AEA8;
    case 752u: goto L_0885AEBC;
    case 753u: goto L_0885AEC4;
    case 754u: goto L_0885AEC8;
    case 755u: goto L_0885AED4;
    case 756u: goto L_0885AEE0;
    case 757u: goto L_0885AEF4;
    case 758u: goto L_0885AF04;
    case 759u: goto L_0885AF08;
    case 760u: goto L_0885AF14;
    case 761u: goto L_0885AF20;
    case 762u: goto L_0885AF28;
    case 763u: goto L_0885AF30;
    case 764u: goto L_0885AF40;
    case 765u: goto L_0885AF48;
    case 766u: goto L_0885AF50;
    case 767u: goto L_0885AF5C;
    case 768u: goto L_0885AF64;
    case 769u: goto L_0885AF6C;
    case 770u: goto L_0885AF80;
    case 771u: goto L_0885AF98;
    case 772u: goto L_0885AFA4;
    case 773u: goto L_0885AFAC;
    case 774u: goto L_0885AFC4;
    case 775u: goto L_0885AFCC;
    case 776u: goto L_0885AFD4;
    case 777u: goto L_0885AFE0;
    case 778u: goto L_0885AFE8;
    case 779u: goto L_0885AFF4;
    case 780u: goto L_0885AFF8;
    case 781u: goto L_0885B000;
    case 782u: goto L_0885B008;
    case 783u: goto L_0885B00C;
    case 784u: goto L_0885B014;
    case 785u: goto L_0885B01C;
    case 786u: goto L_0885B03C;
    case 787u: goto L_0885B050;
    case 788u: goto L_0885B058;
    case 789u: goto L_0885B060;
    case 790u: goto L_0885B070;
    case 791u: goto L_0885B078;
    case 792u: goto L_0885B080;
    case 793u: goto L_0885B08C;
    case 794u: goto L_0885B094;
    case 795u: goto L_0885B09C;
    case 796u: goto L_0885B0A4;
    case 797u: goto L_0885B0AC;
    case 798u: goto L_0885B0B4;
    case 799u: goto L_0885B0BC;
    case 800u: goto L_0885B0C8;
    case 801u: goto L_0885B0D0;
    case 802u: goto L_0885B0D8;
    case 803u: goto L_0885B0E4;
    case 804u: goto L_0885B0F0;
    case 805u: goto L_0885B100;
    case 806u: goto L_0885B108;
    case 807u: goto L_0885B11C;
    case 808u: goto L_0885B128;
    case 809u: goto L_0885B130;
    case 810u: goto L_0885B148;
    case 811u: goto L_0885B154;
    case 812u: goto L_0885B15C;
    case 813u: goto L_0885B168;
    case 814u: goto L_0885B170;
    case 815u: goto L_0885B178;
    case 816u: goto L_0885B184;
    case 817u: goto L_0885B1A0;
    case 818u: goto L_0885B1A8;
    case 819u: goto L_0885B1B0;
    case 820u: goto L_0885B1C8;
    case 821u: goto L_0885B1E8;
    case 822u: goto L_0885B208;
    case 823u: goto L_0885B210;
    case 824u: goto L_0885B218;
    case 825u: goto L_0885B22C;
    case 826u: goto L_0885B24C;
    case 827u: goto L_0885B26C;
    case 828u: goto L_0885B288;
    case 829u: goto L_0885B28C;
    case 830u: goto L_0885B2A8;
    case 831u: goto L_0885B2B0;
    case 832u: goto L_0885B2C0;
    case 833u: goto L_0885B2D0;
    case 834u: goto L_0885B2D8;
    case 835u: goto L_0885B2E8;
    case 836u: goto L_0885B30C;
    case 837u: goto L_0885B314;
    case 838u: goto L_0885B31C;
    case 839u: goto L_0885B324;
    case 840u: goto L_0885B330;
    case 841u: goto L_0885B33C;
    case 842u: goto L_0885B344;
    case 843u: goto L_0885B358;
    case 844u: goto L_0885B360;
    case 845u: goto L_0885B370;
    case 846u: goto L_0885B380;
    case 847u: goto L_0885B38C;
    case 848u: goto L_0885B3A8;
    case 849u: goto L_0885B3C8;
    case 850u: goto L_0885B3EC;
    case 851u: goto L_0885B3F4;
    case 852u: goto L_0885B3FC;
    case 853u: goto L_0885B404;
    case 854u: goto L_0885B410;
    case 855u: goto L_0885B41C;
    case 856u: goto L_0885B424;
    case 857u: goto L_0885B438;
    case 858u: goto L_0885B440;
    case 859u: goto L_0885B464;
    case 860u: goto L_0885B46C;
    case 861u: goto L_0885B474;
    case 862u: goto L_0885B47C;
    case 863u: goto L_0885B488;
    case 864u: goto L_0885B494;
    case 865u: goto L_0885B49C;
    case 866u: goto L_0885B4B0;
    case 867u: goto L_0885B4B8;
    case 868u: goto L_0885B4D4;
    case 869u: goto L_0885B4DC;
    case 870u: goto L_0885B4E4;
    case 871u: goto L_0885B4F0;
    case 872u: goto L_0885B500;
    case 873u: goto L_0885B50C;
    case 874u: goto L_0885B518;
    case 875u: goto L_0885B544;
    case 876u: goto L_0885B54C;
    case 877u: goto L_0885B554;
    case 878u: goto L_0885B56C;
    case 879u: goto L_0885B574;
    case 880u: goto L_0885B5A4;
    case 881u: goto L_0885B5C0;
    case 882u: goto L_0885B5C8;
    case 883u: goto L_0885B5E4;
    case 884u: goto L_0885B5E8;
    case 885u: goto L_0885B5F0;
    case 886u: goto L_0885B624;
    case 887u: goto L_0885B62C;
    case 888u: goto L_0885B640;
    case 889u: goto L_0885B650;
    case 890u: goto L_0885B660;
    case 891u: goto L_0885B664;
    case 892u: goto L_0885B674;
    case 893u: goto L_0885B694;
    case 894u: goto L_0885B69C;
    case 895u: goto L_0885B6AC;
    case 896u: goto L_0885B6B8;
    case 897u: goto L_0885B6C0;
    case 898u: goto L_0885B6CC;
    case 899u: goto L_0885B6D4;
    case 900u: goto L_0885B6E4;
    case 901u: goto L_0885B6F4;
    case 902u: goto L_0885B6FC;
    case 903u: goto L_0885B71C;
    case 904u: goto L_0885B724;
    case 905u: goto L_0885B750;
    case 906u: goto L_0885B764;
    case 907u: goto L_0885B768;
    case 908u: goto L_0885B778;
    case 909u: goto L_0885B788;
    case 910u: goto L_0885B790;
    case 911u: goto L_0885B7A0;
    case 912u: goto L_0885B7A8;
    case 913u: goto L_0885B7B8;
    case 914u: goto L_0885B7C8;
    case 915u: goto L_0885B7D8;
    case 916u: goto L_0885B7F0;
    case 917u: goto L_0885B7FC;
    case 918u: goto L_0885B80C;
    case 919u: goto L_0885B818;
    case 920u: goto L_0885B820;
    case 921u: goto L_0885B82C;
    case 922u: goto L_0885B834;
    case 923u: goto L_0885B850;
    case 924u: goto L_0885B864;
    case 925u: goto L_0885B86C;
    case 926u: goto L_0885B874;
    case 927u: goto L_0885B87C;
    case 928u: goto L_0885B89C;
    case 929u: goto L_0885B8A4;
    case 930u: goto L_0885B8AC;
    case 931u: goto L_0885B8C0;
    case 932u: goto L_0885B8D8;
    case 933u: goto L_0885B8E4;
    case 934u: goto L_0885B8F8;
    case 935u: goto L_0885B924;
    case 936u: goto L_0885B944;
    case 937u: goto L_0885B970;
    case 938u: goto L_0885B988;
    case 939u: goto L_0885B990;
    case 940u: goto L_0885B9A0;
    case 941u: goto L_0885B9B0;
    case 942u: goto L_0885B9C8;
    case 943u: goto L_0885B9D4;
    case 944u: goto L_0885BA04;
    case 945u: goto L_0885BA20;
    case 946u: goto L_0885BA28;
    case 947u: goto L_0885BA34;
    case 948u: goto L_0885BA3C;
    case 949u: goto L_0885BA40;
    case 950u: goto L_0885BA54;
    case 951u: goto L_0885BA68;
    case 952u: goto L_0885BA7C;
    case 953u: goto L_0885BA90;
    case 954u: goto L_0885BAA4;
    case 955u: goto L_0885BAB4;
    case 956u: goto L_0885BAC0;
    case 957u: goto L_0885BADC;
    case 958u: goto L_0885BAE4;
    case 959u: goto L_0885BAF0;
    case 960u: goto L_0885BAF8;
    case 961u: goto L_0885BAFC;
    case 962u: goto L_0885BB10;
    case 963u: goto L_0885BB1C;
    case 964u: goto L_0885BB38;
    case 965u: goto L_0885BB50;
    case 966u: goto L_0885BB5C;
    case 967u: goto L_0885BB74;
    case 968u: goto L_0885BB80;
    case 969u: goto L_0885BB8C;
    case 970u: goto L_0885BB98;
    case 971u: goto L_0885BBA4;
    case 972u: goto L_0885BBB0;
    case 973u: goto L_0885BBB8;
    case 974u: goto L_0885BBBC;
    case 975u: goto L_0885BBD0;
    case 976u: goto L_0885BC08;
    case 977u: goto L_0885BC18;
    case 978u: goto L_0885BC24;
    case 979u: goto L_0885BC34;
    case 980u: goto L_0885BC48;
    case 981u: goto L_0885BC74;
    case 982u: goto L_0885BC94;
    case 983u: goto L_0885BCC0;
    case 984u: goto L_0885BCD4;
    case 985u: goto L_0885BCF8;
    case 986u: goto L_0885BD1C;
    case 987u: goto L_0885BD28;
    case 988u: goto L_0885BD30;
    case 989u: goto L_0885BD40;
    case 990u: goto L_0885BD48;
    case 991u: goto L_0885BD54;
    case 992u: goto L_0885BD5C;
    case 993u: goto L_0885BD64;
    case 994u: goto L_0885BD6C;
    case 995u: goto L_0885BD7C;
    case 996u: goto L_0885BD98;
    case 997u: goto L_0885BDAC;
    case 998u: goto L_0885BDB4;
    case 999u: goto L_0885BDC4;
    case 1000u: goto L_0885BDCC;
    case 1001u: goto L_0885BDDC;
    case 1002u: goto L_0885BDFC;
    case 1003u: goto L_0885BE14;
    case 1004u: goto L_0885BE2C;
    case 1005u: goto L_0885BE34;
    case 1006u: goto L_0885BE44;
    case 1007u: goto L_0885BE5C;
    case 1008u: goto L_0885BE64;
    case 1009u: goto L_0885BE74;
    case 1010u: goto L_0885BE7C;
    case 1011u: goto L_0885BE8C;
    case 1012u: goto L_0885BE94;
    case 1013u: goto L_0885BE9C;
    case 1014u: goto L_0885BEB0;
    case 1015u: goto L_0885BEB8;
    case 1016u: goto L_0885BEC4;
    case 1017u: goto L_0885BED0;
    case 1018u: goto L_0885BED8;
    case 1019u: goto L_0885BEE0;
    case 1020u: goto L_0885BEE8;
    case 1021u: goto L_0885BEF4;
    case 1022u: goto L_0885BEFC;
    case 1023u: goto L_0885BF04;
    case 1024u: goto L_0885BF0C;
    case 1025u: goto L_0885BF18;
    case 1026u: goto L_0885BF1C;
    case 1027u: goto L_0885BF24;
    case 1028u: goto L_0885BF4C;
    case 1029u: goto L_0885BF50;
    case 1030u: goto L_0885BF58;
    case 1031u: goto L_0885BF70;
    case 1032u: goto L_0885BF78;
    case 1033u: goto L_0885BF90;
    case 1034u: goto L_0885BF98;
    case 1035u: goto L_0885BFB0;
    case 1036u: goto L_0885BFC0;
    case 1037u: goto L_0885BFCC;
    case 1038u: goto L_0885BFE0;
    case 1039u: goto L_0885BFE8;
    case 1040u: goto L_0885BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08858004:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885800C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08858020u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08858040;
L_08858020:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885802Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885802Cu) goto L_0885802C;
    return;
L_0885802C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858040:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem); return;
L_08858048:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08858068u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 614u, 0x08842514u>(ctx, &aot_mem) && ctx.pc == 0x08858068u) goto L_08858068;
    return;
L_08858068:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08858074u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08858074u) goto L_08858074;
    return;
L_08858074:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858088:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858090:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088580ACu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 946u, 0x08843E70u>(ctx, &aot_mem) && ctx.pc == 0x088580ACu) goto L_088580AC;
    return;
L_088580AC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088580B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088580B8u) goto L_088580B8;
    return;
L_088580B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088580CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x088580F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x088580F0u) goto L_088580F0;
    return;
L_088580F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x088580FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x088580FCu) goto L_088580FC;
    return;
L_088580FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x08858108u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08858108u) goto L_08858108;
    return;
L_08858108:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1132), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1136), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1164), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08858128u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1172), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 709u, 0x088576F8u>(ctx, &aot_mem) && ctx.pc == 0x08858128u) goto L_08858128;
    return;
L_08858128:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x08858134u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 707u, 0x088576D0u>(ctx, &aot_mem) && ctx.pc == 0x08858134u) goto L_08858134;
    return;
L_08858134:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1220), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08858164u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08858164u) goto L_08858164;
    return;
L_08858164:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088581E8;
      }
      goto L_08858194;
    }
L_08858194:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(17, 0u + 0u);
    goto L_0885819C;
L_0885819C:
    ctx.set_gpr(31, 0x088581A4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08858154;
L_088581A4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_088581C4;
    }
    goto L_088581B4;
L_088581B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088581C0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08859498;
L_088581C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088581C4;
L_088581C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_0885819C;
      }
      goto L_088581D0;
    }
L_088581D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088581E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 909u, 0x08853A68u>(ctx, &aot_mem) && ctx.pc == 0x088581E8u) goto L_088581E8;
    return;
L_088581E8:
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
L_08858200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859188;
      }
      goto L_0885825C;
    }
L_0885825C:
    ctx.set_gpr(31, 0x08858264u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08858264u) goto L_08858264;
    return;
L_08858264:
    ctx.set_gpr(31, 0x0885826Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 456u, 0x088419DCu>(ctx, &aot_mem) && ctx.pc == 0x0885826Cu) goto L_0885826C;
    return;
L_0885826C:
    ctx.set_gpr(31, 0x08858274u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08858274u) goto L_08858274;
    return;
L_08858274:
    ctx.set_gpr(31, 0x0885827Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885827Cu) goto L_0885827C;
    return;
L_0885827C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885828Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x0885828Cu) goto L_0885828C;
    return;
L_0885828C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08858298u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08858298u) goto L_08858298;
    return;
L_08858298:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
        goto L_08858A8C;
    }
    goto L_088582A4;
L_088582A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
        goto L_08858A7C;
    }
    goto L_088582B0;
L_088582B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(960));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088582D8u);
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 924u, 0x0884B6F4u>(ctx, &aot_mem) && ctx.pc == 0x088582D8u) goto L_088582D8;
    return;
L_088582D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13620)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1132)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08858A78;
      }
      goto L_088582F8;
    }
L_088582F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[3]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[23]))));
        goto L_0885863C;
    }
    goto L_08858314;
L_08858314:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13596)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13604)));
        goto L_088583E0;
    }
    goto L_08858328;
L_08858328:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13600)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088583DC;
      }
      goto L_0885833C;
    }
L_0885833C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885836Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885836Cu) goto L_0885836C;
    return;
L_0885836C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858378u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_0885934C;
L_08858378:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x0885838Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885838Cu) goto L_0885838C;
    return;
L_0885838C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x0885839Cu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0885839Cu) goto L_0885839C;
    return;
L_0885839C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088583ACu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088583ACu) goto L_088583AC;
    return;
L_088583AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088583B8;
    }
L_088583B8:
    ctx.set_gpr(31, 0x088583C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088583C0u) goto L_088583C0;
    return;
L_088583C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088583D4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088583D4u) goto L_088583D4;
    return;
L_088583D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088583DC;
    }
L_088583DC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13604)));
    goto L_088583E0;
L_088583E0:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13612)));
        goto L_088584AC;
    }
    goto L_088583F0;
L_088583F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13608)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088584A8;
      }
      goto L_08858404;
    }
L_08858404:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858438u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858438u) goto L_08858438;
    return;
L_08858438:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858444u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_0885934C;
L_08858444:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858458u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858458u) goto L_08858458;
    return;
L_08858458:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08858468u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858468u) goto L_08858468;
    return;
L_08858468:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858478u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858478u) goto L_08858478;
    return;
L_08858478:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858484;
    }
L_08858484:
    ctx.set_gpr(31, 0x0885848Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885848Cu) goto L_0885848C;
    return;
L_0885848C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088584A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088584A0u) goto L_088584A0;
    return;
L_088584A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088584A8;
    }
L_088584A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13612)));
    goto L_088584AC;
L_088584AC:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_088584BC;
    }
L_088584BC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_088584D0;
    }
L_088584D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858504u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858504u) goto L_08858504;
    return;
L_08858504:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858510u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    goto L_0885934C;
L_08858510:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858524u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858524u) goto L_08858524;
    return;
L_08858524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08858534u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858534u) goto L_08858534;
    return;
L_08858534:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858544u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858544u) goto L_08858544;
    return;
L_08858544:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858550;
    }
L_08858550:
    ctx.set_gpr(31, 0x08858558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08858558u) goto L_08858558;
    return;
L_08858558:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885856Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x0885856Cu) goto L_0885856C;
    return;
L_0885856C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858574;
    }
L_08858574:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858584;
    }
L_08858584:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13624)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858598;
    }
L_08858598:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088585CCu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088585CCu) goto L_088585CC;
    return;
L_088585CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x088585D8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    goto L_0885934C;
L_088585D8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x088585ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088585ECu) goto L_088585EC;
    return;
L_088585EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x088585FCu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088585FCu) goto L_088585FC;
    return;
L_088585FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885860Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0885860Cu) goto L_0885860C;
    return;
L_0885860C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858618;
    }
L_08858618:
    ctx.set_gpr(31, 0x08858620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08858620u) goto L_08858620;
    return;
L_08858620:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08858634u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08858634u) goto L_08858634;
    return;
L_08858634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_0885863C;
    }
L_0885863C:
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858648;
    }
L_08858648:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13596)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13604)));
        goto L_08858718;
    }
    goto L_0885865C;
L_0885865C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13600)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08858714;
      }
      goto L_08858670;
    }
L_08858670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088586A4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088586A4u) goto L_088586A4;
    return;
L_088586A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x088586B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_0885934C;
L_088586B0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x088586C4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088586C4u) goto L_088586C4;
    return;
L_088586C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x088586D4u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088586D4u) goto L_088586D4;
    return;
L_088586D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088586E4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088586E4u) goto L_088586E4;
    return;
L_088586E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088586F0;
    }
L_088586F0:
    ctx.set_gpr(31, 0x088586F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088586F8u) goto L_088586F8;
    return;
L_088586F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885870Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x0885870Cu) goto L_0885870C;
    return;
L_0885870C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858714;
    }
L_08858714:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13604)));
    goto L_08858718;
L_08858718:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13612)));
        goto L_088587E4;
    }
    goto L_08858728;
L_08858728:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13608)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088587E0;
      }
      goto L_0885873C;
    }
L_0885873C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858770u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858770u) goto L_08858770;
    return;
L_08858770:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x0885877Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_0885934C;
L_0885877C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858790u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858790u) goto L_08858790;
    return;
L_08858790:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x088587A0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088587A0u) goto L_088587A0;
    return;
L_088587A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088587B0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088587B0u) goto L_088587B0;
    return;
L_088587B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088587BC;
    }
L_088587BC:
    ctx.set_gpr(31, 0x088587C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088587C4u) goto L_088587C4;
    return;
L_088587C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088587D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088587D8u) goto L_088587D8;
    return;
L_088587D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088587E0;
    }
L_088587E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13612)));
    goto L_088587E4;
L_088587E4:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088588AC;
      }
      goto L_088587F4;
    }
L_088587F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088588AC;
      }
      goto L_08858808;
    }
L_08858808:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885883Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885883Cu) goto L_0885883C;
    return;
L_0885883C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858848u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0885934C;
L_08858848:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x0885885Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885885Cu) goto L_0885885C;
    return;
L_0885885C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x0885886Cu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0885886Cu) goto L_0885886C;
    return;
L_0885886C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885887Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x0885887Cu) goto L_0885887C;
    return;
L_0885887C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858888;
    }
L_08858888:
    ctx.set_gpr(31, 0x08858890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08858890u) goto L_08858890;
    return;
L_08858890:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088588A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x088588A4u) goto L_088588A4;
    return;
L_088588A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088588AC;
    }
L_088588AC:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088588BC;
    }
L_088588BC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13624)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_088588D0;
    }
L_088588D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858904u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858904u) goto L_08858904;
    return;
L_08858904:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858910u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_0885934C;
L_08858910:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858924u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858924u) goto L_08858924;
    return;
L_08858924:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08858934u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858934u) goto L_08858934;
    return;
L_08858934:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858944u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858944u) goto L_08858944;
    return;
L_08858944:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858950;
    }
L_08858950:
    ctx.set_gpr(31, 0x08858958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08858958u) goto L_08858958;
    return;
L_08858958:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885896Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x0885896Cu) goto L_0885896C;
    return;
L_0885896C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08858A78;
      }
      goto L_08858974;
    }
L_08858974:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08858A6C;
    }
    goto L_08858980;
L_08858980:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08858A18;
    }
    goto L_0885898C;
L_0885898C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_088589F8;
    }
    goto L_08858998;
L_08858998:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_088589D8;
    }
    goto L_088589A4;
L_088589A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_088589B8;
    }
    goto L_088589B0;
L_088589B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08858A38;
      }
      goto L_088589B8;
    }
L_088589B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088589D0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x088589D0u) goto L_088589D0;
    return;
L_088589D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08858A54;
      }
      goto L_088589D8;
    }
L_088589D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088589F0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x088589F0u) goto L_088589F0;
    return;
L_088589F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858A50;
      }
      goto L_088589F8;
    }
L_088589F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08858A10u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x08858A10u) goto L_08858A10;
    return;
L_08858A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858A50;
      }
      goto L_08858A18;
    }
L_08858A18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08858A30u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x08858A30u) goto L_08858A30;
    return;
L_08858A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858A50;
      }
      goto L_08858A38;
    }
L_08858A38:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08858A50u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x08858A50u) goto L_08858A50;
    return;
L_08858A50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08858A54;
L_08858A54:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08858A68u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 936u, 0x08853C20u>(ctx, &aot_mem) && ctx.pc == 0x08858A68u) goto L_08858A68;
    return;
L_08858A68:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08858A6C;
L_08858A6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08858A78u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08859498;
L_08858A78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13629)));
    goto L_08858A7C;
L_08858A7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858A88;
      }
      goto L_08858A84;
    }
L_08858A84:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08858A88;
L_08858A88:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    goto L_08858A8C;
L_08858A8C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_08859174;
    }
    goto L_08858A94;
L_08858A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1212)));
    goto L_08858A98;
L_08858A98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08858B84;
    }
    goto L_08858AA4;
L_08858AA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08858AD0;
    }
    goto L_08858AB0;
L_08858AB0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 15692u << 16u);
        goto L_08858AC0;
    }
    goto L_08858AB8;
L_08858AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
      if (branch_taken) {
          goto L_08858C20;
      }
      goto L_08858AC0;
    }
L_08858AC0:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08858C1C;
      }
      goto L_08858AD0;
    }
L_08858AD0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[21];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08858C1C;
      }
      goto L_08858AE8;
    }
L_08858AE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858B14u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 194u, 0x088508FCu>(ctx, &aot_mem) && ctx.pc == 0x08858B14u) goto L_08858B14;
    return;
L_08858B14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858B40u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 195u, 0x0885090Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B40u) goto L_08858B40;
    return;
L_08858B40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858B6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 196u, 0x0885091Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B6Cu) goto L_08858B6C;
    return;
L_08858B6C:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08858C1C;
      }
      goto L_08858B84;
    }
L_08858B84:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[21];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08858C1C;
      }
      goto L_08858B9C;
    }
L_08858B9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858BC4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 194u, 0x088508FCu>(ctx, &aot_mem) && ctx.pc == 0x08858BC4u) goto L_08858BC4;
    return;
L_08858BC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858BECu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 195u, 0x0885090Cu>(ctx, &aot_mem) && ctx.pc == 0x08858BECu) goto L_08858BEC;
    return;
L_08858BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858C14u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 196u, 0x0885091Cu>(ctx, &aot_mem) && ctx.pc == 0x08858C14u) goto L_08858C14;
    return;
L_08858C14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), ctx.gpr[2]);
    goto L_08858C1C;
L_08858C1C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    goto L_08858C20;
L_08858C20:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
        goto L_08858D8C;
    }
    goto L_08858C34;
L_08858C34:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13624)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[23] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[23];
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(31, 0x08858C68u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 194u, 0x088508FCu>(ctx, &aot_mem) && ctx.pc == 0x08858C68u) goto L_08858C68;
    return;
L_08858C68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858C88u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 195u, 0x0885090Cu>(ctx, &aot_mem) && ctx.pc == 0x08858C88u) goto L_08858C88;
    return;
L_08858C88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858CA8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 196u, 0x0885091Cu>(ctx, &aot_mem) && ctx.pc == 0x08858CA8u) goto L_08858CA8;
    return;
L_08858CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858CCCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 194u, 0x088508FCu>(ctx, &aot_mem) && ctx.pc == 0x08858CCCu) goto L_08858CCC;
    return;
L_08858CCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858CF0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 195u, 0x0885090Cu>(ctx, &aot_mem) && ctx.pc == 0x08858CF0u) goto L_08858CF0;
    return;
L_08858CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858D14u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 196u, 0x0885091Cu>(ctx, &aot_mem) && ctx.pc == 0x08858D14u) goto L_08858D14;
    return;
L_08858D14:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    goto L_08858D1C;
L_08858D1C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08858D38;
    }
    goto L_08858D24;
L_08858D24:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08858D3C;
      }
      goto L_08858D38;
    }
L_08858D38:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08858D3C;
L_08858D3C:
    ctx.set_gpr(31, 0x08858D44u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08858D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858D54u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    goto L_088592F8;
L_08858D54:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08858D68u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08859344;
L_08858D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858D78u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    goto L_088592AC;
L_08858D78:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
        goto L_08858D1C;
    }
    goto L_08858D88;
L_08858D88:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    goto L_08858D8C;
L_08858D8C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13624)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1152));
        goto L_08858DC8;
    }
    goto L_08858DA0;
L_08858DA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08858DACu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08859498;
L_08858DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
        goto L_088590CC;
    }
    goto L_08858DBC;
L_08858DBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088590C8;
      }
      goto L_08858DC8;
    }
L_08858DC8:
    ctx.set_gpr(31, 0x08858DD0u);
    // nop
    goto L_08859284;
L_08858DD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.set_gpr(31, 0x08858DF8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 190u, 0x0885089Cu>(ctx, &aot_mem) && ctx.pc == 0x08858DF8u) goto L_08858DF8;
    return;
L_08858DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858E1Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858E1Cu) goto L_08858E1C;
    return;
L_08858E1C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858E28u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_0885934C;
L_08858E28:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858E3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858E3Cu) goto L_08858E3C;
    return;
L_08858E3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858E4Cu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858E4Cu) goto L_08858E4C;
    return;
L_08858E4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858E5Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858E5Cu) goto L_08858E5C;
    return;
L_08858E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08858E88u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08858E88u) goto L_08858E88;
    return;
L_08858E88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
        goto L_08858EF8;
    }
    goto L_08858E94;
L_08858E94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08858EA0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858EA0u) goto L_08858EA0;
    return;
L_08858EA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858EACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0885934C;
L_08858EAC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858EC0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858EC0u) goto L_08858EC0;
    return;
L_08858EC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858ED0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858ED0u) goto L_08858ED0;
    return;
L_08858ED0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858EE0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858EE0u) goto L_08858EE0;
    return;
L_08858EE0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08858EF4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08858EF4u) goto L_08858EF4;
    return;
L_08858EF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    goto L_08858EF8;
L_08858EF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08858F14u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08858F14u) goto L_08858F14;
    return;
L_08858F14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08858F20u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0885934C;
L_08858F20:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08858F34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08858F34u) goto L_08858F34;
    return;
L_08858F34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858F44u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858F44u) goto L_08858F44;
    return;
L_08858F44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858F54u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858F54u) goto L_08858F54;
    return;
L_08858F54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08858F7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08858F7Cu) goto L_08858F7C;
    return;
L_08858F7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858F8Cu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08858F8Cu) goto L_08858F8C;
    return;
L_08858F8C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858F9Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08858F9Cu) goto L_08858F9C;
    return;
L_08858F9C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1140));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858FACu);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08858FACu) goto L_08858FAC;
    return;
L_08858FAC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1140));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858FBCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08858FBCu) goto L_08858FBC;
    return;
L_08858FBC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08858FC0;
L_08858FC0:
    ctx.set_gpr(31, 0x08858FC8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08858FC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08858FD8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08859238;
L_08858FD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858FE8u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858FE8u) goto L_08858FE8;
    return;
L_08858FE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08858FF8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08858FF8u) goto L_08858FF8;
    return;
L_08858FF8:
    ctx.set_gpr(31, 0x08859000u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08859010u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_088591EC;
L_08859010:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858FC0;
      }
      goto L_08859020;
    }
L_08859020:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1136)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    ctx.fpr[22] = ctx.fpr[21] / ctx.fpr[0];
    ctx.set_gpr(31, 0x08859038u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    goto L_088591C4;
L_08859038:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.set_gpr(2, 15502u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[2] | 64053u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859064u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 625u, 0x088571F0u>(ctx, &aot_mem) && ctx.pc == 0x08859064u) goto L_08859064;
    return;
L_08859064:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1152));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1140));
    ctx.set_gpr(31, 0x08859078u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088591C4;
L_08859078:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08859084u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 777u, 0x0884AD38u>(ctx, &aot_mem) && ctx.pc == 0x08859084u) goto L_08859084;
    return;
L_08859084:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(31, 0x088590ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 190u, 0x0885089Cu>(ctx, &aot_mem) && ctx.pc == 0x088590ACu) goto L_088590AC;
    return;
L_088590AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088590BCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_0885A370;
L_088590BC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1132)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088590C8;
L_088590C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    goto L_088590CC;
L_088590CC:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088590F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x088590F0u) goto L_088590F0;
    return;
L_088590F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859114u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x08859114u) goto L_08859114;
    return;
L_08859114:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08859168;
    }
    goto L_08859120;
L_08859120:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(984));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08859130u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x08859130u) goto L_08859130;
    return;
L_08859130:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859164;
      }
      goto L_08859140;
    }
L_08859140:
    ctx.set_gpr(31, 0x08859148u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859148u) goto L_08859148;
    return;
L_08859148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859158u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859158u) goto L_08859158;
    return;
L_08859158:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x08859164u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08859164u) goto L_08859164;
    return;
L_08859164:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08859168;
L_08859168:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1212)));
        goto L_08858A98;
    }
    goto L_08859170;
L_08859170:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_08859174;
L_08859174:
    ctx.set_gpr(31, 0x0885917Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x0885917Cu) goto L_0885917C;
    return;
L_0885917C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(13520));
    ctx.set_gpr(31, 0x08859188u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08859188u) goto L_08859188;
    return;
L_08859188:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088591C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088591EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0885920Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885920Cu) goto L_0885920C;
    return;
L_0885920C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859224u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859224u) goto L_08859224;
    return;
L_08859224:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08859258u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08859258u) goto L_08859258;
    return;
L_08859258:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859270u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859270u) goto L_08859270;
    return;
L_08859270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859284:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088592AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088592CCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088592CCu) goto L_088592CC;
    return;
L_088592CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088592E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088592E4u) goto L_088592E4;
    return;
L_088592E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088592F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08859318u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08859318u) goto L_08859318;
    return;
L_08859318:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859330u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859330u) goto L_08859330;
    return;
L_08859330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859344:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885934C:
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
L_0885936C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885947C;
      }
      goto L_08859398;
    }
L_08859398:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08859480;
    }
    goto L_088593A4;
L_088593A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    goto L_088593A8;
L_088593A8:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088593CCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x088593CCu) goto L_088593CC;
    return;
L_088593CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088593F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 99u, 0x08850450u>(ctx, &aot_mem) && ctx.pc == 0x088593F0u) goto L_088593F0;
    return;
L_088593F0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08859474;
    }
    goto L_088593FC;
L_088593FC:
    ctx.set_gpr(31, 0x08859404u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859404u) goto L_08859404;
    return;
L_08859404:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859414u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859414u) goto L_08859414;
    return;
L_08859414:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x08859420u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08859420u) goto L_08859420;
    return;
L_08859420:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885944Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x0885944Cu) goto L_0885944C;
    return;
L_0885944C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859470u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x08859470u) goto L_08859470;
    return;
L_08859470:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08859474;
L_08859474:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
        goto L_088593A8;
    }
    goto L_0885947C;
L_0885947C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08859480;
L_08859480:
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
L_08859498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088595C0;
      }
      goto L_088594BC;
    }
L_088594BC:
    ctx.set_gpr(31, 0x088594C4u);
    // nop
    goto L_08859A60;
L_088594C4:
    ctx.set_gpr(31, 0x088594CCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088594CCu) goto L_088594CC;
    return;
L_088594CC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_088594FC;
    }
    goto L_088594D4;
L_088594D4:
    ctx.set_gpr(31, 0x088594DCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088594DCu) goto L_088594DC;
    return;
L_088594DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088594ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x088594ECu) goto L_088594EC;
    return;
L_088594EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x088594F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x088594F8u) goto L_088594F8;
    return;
L_088594F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088594FC;
L_088594FC:
    ctx.set_gpr(31, 0x08859504u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0885A2B0;
L_08859504:
    ctx.set_gpr(31, 0x0885950Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885950Cu) goto L_0885950C;
    return;
L_0885950C:
    ctx.set_gpr(31, 0x08859514u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08859514u) goto L_08859514;
    return;
L_08859514:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885952Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0885952Cu) goto L_0885952C;
    return;
L_0885952C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08859538u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08859538u) goto L_08859538;
    return;
L_08859538:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x08859544u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08859544u) goto L_08859544;
    return;
L_08859544:
    ctx.set_gpr(31, 0x0885954Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885954Cu) goto L_0885954C;
    return;
L_0885954C:
    ctx.set_gpr(31, 0x08859554u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08859554u) goto L_08859554;
    return;
L_08859554:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885956Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0885956Cu) goto L_0885956C;
    return;
L_0885956C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08859578u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08859578u) goto L_08859578;
    return;
L_08859578:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x08859584u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08859584u) goto L_08859584;
    return;
L_08859584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088595A4;
    }
    goto L_08859590;
L_08859590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088595C0;
      }
      goto L_0885959C;
    }
L_0885959C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088595C0;
      }
      goto L_088595A4;
    }
L_088595A4:
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
        goto L_088595B4;
    }
    goto L_088595AC;
L_088595AC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088595C0;
      }
      goto L_088595B4;
    }
L_088595B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088595C0;
L_088595C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088595D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859638;
      }
      goto L_08859630;
    }
L_08859630:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08859928;
      }
      goto L_08859638;
    }
L_08859638:
    ctx.set_gpr(31, 0x08859640u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08859640u) goto L_08859640;
    return;
L_08859640:
    ctx.set_gpr(31, 0x08859648u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08859648u) goto L_08859648;
    return;
L_08859648:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13584)));
    ctx.set_gpr(18, ctx.gpr[21] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[20];
    goto L_08859658;
L_08859658:
    ctx.set_gpr(31, 0x08859660u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08858154;
L_08859660:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08859918;
    }
    goto L_0885966C;
L_0885966C:
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08859688u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 197u, 0x0885092Cu>(ctx, &aot_mem) && ctx.pc == 0x08859688u) goto L_08859688;
    return;
L_08859688:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08859694u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08859694u) goto L_08859694;
    return;
L_08859694:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x088596A0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x088596A0u) goto L_088596A0;
    return;
L_088596A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x088596ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088596ACu) goto L_088596AC;
    return;
L_088596AC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x088596C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x088596C0u) goto L_088596C0;
    return;
L_088596C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088596D0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x088596D0u) goto L_088596D0;
    return;
L_088596D0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[21];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088596E8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x088596E8u) goto L_088596E8;
    return;
L_088596E8:
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(31, 0x08859704u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1116), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 197u, 0x0885092Cu>(ctx, &aot_mem) && ctx.pc == 0x08859704u) goto L_08859704;
    return;
L_08859704:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859724u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08859724u) goto L_08859724;
    return;
L_08859724:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x08859730u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08859730u) goto L_08859730;
    return;
L_08859730:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0885973Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885973Cu) goto L_0885973C;
    return;
L_0885973C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08859764u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08859764u) goto L_08859764;
    return;
L_08859764:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859788u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08859788u) goto L_08859788;
    return;
L_08859788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x088597B0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x088597B0u) goto L_088597B0;
    return;
L_088597B0:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1112), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1120));
    ctx.set_gpr(31, 0x088597C8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08859960;
L_088597C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1132), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1120));
    ctx.set_gpr(31, 0x088597DCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x088597DCu) goto L_088597DC;
    return;
L_088597DC:
    ctx.set_gpr(31, 0x088597E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x088597E4u) goto L_088597E4;
    return;
L_088597E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088597F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 483u, 0x08849DACu>(ctx, &aot_mem) && ctx.pc == 0x088597F0u) goto L_088597F0;
    return;
L_088597F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088597FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x088597FCu) goto L_088597FC;
    return;
L_088597FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x0885980Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 2u, 0x08A00094u>(ctx, &aot_mem) && ctx.pc == 0x0885980Cu) goto L_0885980C;
    return;
L_0885980C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1140));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x0885981Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x0885981Cu) goto L_0885981C;
    return;
L_0885981C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1152));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08859830u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08859830u) goto L_08859830;
    return;
L_08859830:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1164), ctx.gpr[2]);
    ctx.set_gpr(2, 17332u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1168), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08859850u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1172), 0u);
    goto L_08859CC0;
L_08859850:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0885985Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08859994;
L_0885985C:
    ctx.set_gpr(31, 0x08859864u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 197u, 0x0885092Cu>(ctx, &aot_mem) && ctx.pc == 0x08859864u) goto L_08859864;
    return;
L_08859864:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08859878u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08859878u) goto L_08859878;
    return;
L_08859878:
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08859888u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08859888u) goto L_08859888;
    return;
L_08859888:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08859894u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08859894u) goto L_08859894;
    return;
L_08859894:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x088598A0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x088598A0u) goto L_088598A0;
    return;
L_088598A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088598ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088598ACu) goto L_088598AC;
    return;
L_088598AC:
    ctx.set_gpr(31, 0x088598B4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088598B4u) goto L_088598B4;
    return;
L_088598B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088598C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x088598C4u) goto L_088598C4;
    return;
L_088598C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1212), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
        goto L_08859908;
    }
    goto L_088598DC;
L_088598DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
        goto L_088598FC;
    }
    goto L_088598E8;
L_088598E8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088598EC;
L_088598EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
        goto L_088598EC;
    }
    goto L_088598F8;
L_088598F8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_088598FC;
L_088598FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08859910;
      }
      goto L_08859908;
    }
L_08859908:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    goto L_08859910;
L_08859910:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08859928;
      }
      goto L_08859918;
    }
L_08859918:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_08859658;
      }
      goto L_08859924;
    }
L_08859924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08859928;
L_08859928:
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
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859960:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859A44;
      }
      goto L_088599B4;
    }
L_088599B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08859A48;
    }
    goto L_088599C4;
L_088599C4:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
        goto L_088599E8;
    }
    goto L_088599CC;
L_088599CC:
    ctx.set_gpr(31, 0x088599D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    goto L_08859A58;
L_088599D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088599E4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x088599E4u) goto L_088599E4;
    return;
L_088599E4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
    goto L_088599E8;
L_088599E8:
    ctx.set_gpr(31, 0x088599F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088599F0u) goto L_088599F0;
    return;
L_088599F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859A00u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08859A00u) goto L_08859A00;
    return;
L_08859A00:
    ctx.set_gpr(31, 0x08859A08u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859A08u) goto L_08859A08;
    return;
L_08859A08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859A18u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08859A18u) goto L_08859A18;
    return;
L_08859A18:
    ctx.set_gpr(31, 0x08859A20u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08859A20u) goto L_08859A20;
    return;
L_08859A20:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x08859A2Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 357u, 0x088413A8u>(ctx, &aot_mem) && ctx.pc == 0x08859A2Cu) goto L_08859A2C;
    return;
L_08859A2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08859A38u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08859A38u) goto L_08859A38;
    return;
L_08859A38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_08859A44;
L_08859A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08859A48;
L_08859A48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859A58:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859B08;
      }
      goto L_08859A84;
    }
L_08859A84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08859B0C;
    }
    goto L_08859A90;
L_08859A90:
    ctx.set_gpr(31, 0x08859A98u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08859A98u) goto L_08859A98;
    return;
L_08859A98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859AA4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 357u, 0x088413A8u>(ctx, &aot_mem) && ctx.pc == 0x08859AA4u) goto L_08859AA4;
    return;
L_08859AA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08859AB0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08859AB0u) goto L_08859AB0;
    return;
L_08859AB0:
    ctx.set_gpr(31, 0x08859AB8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859AB8u) goto L_08859AB8;
    return;
L_08859AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859AC8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859AC8u) goto L_08859AC8;
    return;
L_08859AC8:
    ctx.set_gpr(31, 0x08859AD0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859AD0u) goto L_08859AD0;
    return;
L_08859AD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859AE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859AE0u) goto L_08859AE0;
    return;
L_08859AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08859B08;
      }
      goto L_08859AF0;
    }
L_08859AF0:
    ctx.set_gpr(31, 0x08859AF8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    goto L_08859A58;
L_08859AF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859B08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859B08u) goto L_08859B08;
    return;
L_08859B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08859B0C;
L_08859B0C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859B20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859B98;
      }
      goto L_08859B3C;
    }
L_08859B3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13628)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08859B9C;
    }
    goto L_08859B48;
L_08859B48:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[16] == 0u) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(0u));
        goto L_08859B98;
    }
    goto L_08859B54;
L_08859B54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08859B58;
L_08859B58:
    ctx.set_gpr(31, 0x08859B60u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08859994;
L_08859B60:
    ctx.set_gpr(31, 0x08859B68u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859B68u) goto L_08859B68;
    return;
L_08859B68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08859B8C;
    }
    goto L_08859B70;
L_08859B70:
    ctx.set_gpr(31, 0x08859B78u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859B78u) goto L_08859B78;
    return;
L_08859B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859B88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08859B88u) goto L_08859B88;
    return;
L_08859B88:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08859B8C;
L_08859B8C:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08859B58;
    }
    goto L_08859B94;
L_08859B94:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(0u));
    goto L_08859B98;
L_08859B98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08859B9C;
L_08859B9C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08859C28;
      }
      goto L_08859BC8;
    }
L_08859BC8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13628)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08859C2C;
    }
    goto L_08859BD4;
L_08859BD4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08859C24;
    }
    goto L_08859BE0;
L_08859BE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08859BE4;
L_08859BE4:
    ctx.set_gpr(31, 0x08859BECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08859A60;
L_08859BEC:
    ctx.set_gpr(31, 0x08859BF4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859BF4u) goto L_08859BF4;
    return;
L_08859BF4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08859C18;
    }
    goto L_08859BFC;
L_08859BFC:
    ctx.set_gpr(31, 0x08859C04u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08859C04u) goto L_08859C04;
    return;
L_08859C04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08859C14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08859C14u) goto L_08859C14;
    return;
L_08859C14:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08859C18;
L_08859C18:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08859BE4;
    }
    goto L_08859C20;
L_08859C20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08859C24;
L_08859C24:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08859C28;
L_08859C28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08859C2C;
L_08859C2C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859C3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859CB8;
      }
      goto L_08859C48;
    }
L_08859C48:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859CB8;
      }
      goto L_08859C54;
    }
L_08859C54:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, 17204u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 32768u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08859CB8;
      }
      goto L_08859C98;
    }
L_08859C98:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1168)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1172)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08859CB8;
L_08859CB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885A1A4;
      }
      goto L_08859CE4;
    }
L_08859CE4:
    ctx.set_gpr(31, 0x08859CECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 630u, 0x0883EC28u>(ctx, &aot_mem) && ctx.pc == 0x08859CECu) goto L_08859CEC;
    return;
L_08859CEC:
    ctx.set_gpr(31, 0x08859CF4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x08859CF4u) goto L_08859CF4;
    return;
L_08859CF4:
    ctx.set_gpr(31, 0x08859CFCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x08859CFCu) goto L_08859CFC;
    return;
L_08859CFC:
    ctx.set_gpr(31, 0x08859D04u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08859D04u) goto L_08859D04;
    return;
L_08859D04:
    ctx.set_gpr(31, 0x08859D0Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08859D0Cu) goto L_08859D0C;
    return;
L_08859D0C:
    ctx.set_gpr(31, 0x08859D14u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08859D14u) goto L_08859D14;
    return;
L_08859D14:
    ctx.set_gpr(31, 0x08859D1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08859D1Cu) goto L_08859D1C;
    return;
L_08859D1C:
    ctx.set_gpr(31, 0x08859D24u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 456u, 0x088419DCu>(ctx, &aot_mem) && ctx.pc == 0x08859D24u) goto L_08859D24;
    return;
L_08859D24:
    ctx.set_gpr(31, 0x08859D2Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08859D2Cu) goto L_08859D2C;
    return;
L_08859D2C:
    ctx.set_gpr(31, 0x08859D34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0885A2A4;
L_08859D34:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(31, 0x08859D40u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0885A268;
L_08859D40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08859D4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 621u, 0x0883EBB4u>(ctx, &aot_mem) && ctx.pc == 0x08859D4Cu) goto L_08859D4C;
    return;
L_08859D4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08859D58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 613u, 0x0883EB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08859D58u) goto L_08859D58;
    return;
L_08859D58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08859D64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 617u, 0x0883EB88u>(ctx, &aot_mem) && ctx.pc == 0x08859D64u) goto L_08859D64;
    return;
L_08859D64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08859D70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 612u, 0x0883EB34u>(ctx, &aot_mem) && ctx.pc == 0x08859D70u) goto L_08859D70;
    return;
L_08859D70:
    ctx.set_gpr(31, 0x08859D78u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859D78:
    ctx.set_gpr(31, 0x08859D80u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08859D80u) goto L_08859D80;
    return;
L_08859D80:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859DA0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859DA0u) goto L_08859DA0;
    return;
L_08859DA0:
    ctx.set_gpr(31, 0x08859DA8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859DA8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859DC4u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859DC4u) goto L_08859DC4;
    return;
L_08859DC4:
    ctx.set_gpr(31, 0x08859DCCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859DCC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08859DE4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08859DE4u) goto L_08859DE4;
    return;
L_08859DE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859E04u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E04u) goto L_08859E04;
    return;
L_08859E04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08859E10u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0885934C;
L_08859E10:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08859E24u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08859E24u) goto L_08859E24;
    return;
L_08859E24:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08859E38u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08859E38u) goto L_08859E38;
    return;
L_08859E38:
    ctx.set_gpr(31, 0x08859E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08859E40u) goto L_08859E40;
    return;
L_08859E40:
    ctx.set_gpr(31, 0x08859E48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885A258;
L_08859E48:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1116)));
        goto L_08859E74;
    }
    goto L_08859E50;
L_08859E50:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08859E6Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E6Cu) goto L_08859E6C;
    return;
L_08859E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F58;
      }
      goto L_08859E74;
    }
L_08859E74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08859F38;
    }
    goto L_08859E80;
L_08859E80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16181u << 16u);
        goto L_08859F10;
    }
    goto L_08859E8C;
L_08859E8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16239u << 16u);
        goto L_08859ED8;
    }
    goto L_08859E98;
L_08859E98:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 16242u << 16u);
        goto L_08859EA8;
    }
    goto L_08859EA0;
L_08859EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F58;
      }
      goto L_08859EA8;
    }
L_08859EA8:
    ctx.set_gpr(2, ctx.gpr[2] | 61866u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16176u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43621u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08859ED0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08859ED0u) goto L_08859ED0;
    return;
L_08859ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F58;
      }
      goto L_08859ED8;
    }
L_08859ED8:
    ctx.set_gpr(2, ctx.gpr[2] | 60503u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16010u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32506u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16020u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34813u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08859F08u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08859F08u) goto L_08859F08;
    return;
L_08859F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F58;
      }
      goto L_08859F10;
    }
L_08859F10:
    ctx.set_gpr(2, ctx.gpr[2] | 46452u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x08859F30u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08859F30u) goto L_08859F30;
    return;
L_08859F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F58;
      }
      goto L_08859F38;
    }
L_08859F38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52114u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08859F58u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08859F58u) goto L_08859F58;
    return;
L_08859F58:
    ctx.set_gpr(31, 0x08859F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08859F60u) goto L_08859F60;
    return;
L_08859F60:
    ctx.set_gpr(31, 0x08859F68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885A258;
L_08859F68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08859F90;
    }
    goto L_08859F70;
L_08859F70:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08859FA8;
      }
      goto L_08859F90;
    }
L_08859F90:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    goto L_08859FA8;
L_08859FA8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(31, 0x08859FB4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    goto L_08859344;
L_08859FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08859FC4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_088591EC;
L_08859FC4:
    ctx.set_gpr(31, 0x08859FCCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859FCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08859FDCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_088591EC;
L_08859FDC:
    ctx.set_gpr(31, 0x08859FE4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859FE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08859FF4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_088592AC;
L_08859FF4:
    ctx.set_gpr(31, 0x08859FFCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_08859FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885A00Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_088592AC;
L_0885A00C:
    ctx.set_gpr(31, 0x0885A014u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885A028u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    goto L_0885A1FC;
L_0885A028:
    ctx.set_gpr(31, 0x0885A030u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885A044u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_0885A1FC;
L_0885A044:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0885A070;
L_0885A070:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
        goto L_0885A098;
    }
    goto L_0885A07C;
L_0885A07C:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_0885A098;
L_0885A098:
    ctx.set_gpr(31, 0x0885A0A0u);
    // nop
    goto L_08859344;
L_0885A0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885A0B0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_088591EC;
L_0885A0B0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(31, 0x0885A0BCu);
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08859344;
L_0885A0BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885A0CCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_088591EC;
L_0885A0CC:
    ctx.set_gpr(31, 0x0885A0D4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A0D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885A0E4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_088592AC;
L_0885A0E4:
    ctx.set_gpr(31, 0x0885A0ECu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A0EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0885A0FCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_088592AC;
L_0885A0FC:
    ctx.set_gpr(31, 0x0885A104u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885A118u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    goto L_0885A1FC;
L_0885A118:
    ctx.set_gpr(31, 0x0885A120u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885A134u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_0885A1FC;
L_0885A134:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0885A070;
      }
      goto L_0885A164;
    }
L_0885A164:
    ctx.set_gpr(31, 0x0885A16Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 371u, 0x08841460u>(ctx, &aot_mem) && ctx.pc == 0x0885A16Cu) goto L_0885A16C;
    return;
L_0885A16C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x0885A178u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0885A1C8;
L_0885A178:
    ctx.set_gpr(31, 0x0885A180u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 367u, 0x08841424u>(ctx, &aot_mem) && ctx.pc == 0x0885A180u) goto L_0885A180;
    return;
L_0885A180:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885A18Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_0885A1C0;
L_0885A18C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885A1A0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A1A0u) goto L_0885A1A0;
    return;
L_0885A1A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1208), 0u);
    goto L_0885A1A4;
L_0885A1A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A1C0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A1C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885A1DCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 370u, 0x08841458u>(ctx, &aot_mem) && ctx.pc == 0x0885A1DCu) goto L_0885A1DC;
    return;
L_0885A1DC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885A1E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A1E8u) goto L_0885A1E8;
    return;
L_0885A1E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A1FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885A224u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A224u) goto L_0885A224;
    return;
L_0885A224:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885A240u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A240u) goto L_0885A240;
    return;
L_0885A240:
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
L_0885A258:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4782)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885A27Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0885A29C;
L_0885A27C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885A288u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A288u) goto L_0885A288;
    return;
L_0885A288:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A29C:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 266u, 0x088BD7E4u>(ctx, &aot_mem); return;
L_0885A2A4:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A2B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885A30C;
      }
      goto L_0885A2CC;
    }
L_0885A2CC:
    ctx.set_gpr(31, 0x0885A2D4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 367u, 0x08841424u>(ctx, &aot_mem) && ctx.pc == 0x0885A2D4u) goto L_0885A2D4;
    return;
L_0885A2D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885A2E0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    goto L_0885A1C0;
L_0885A2E0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885A2F4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A2F4u) goto L_0885A2F4;
    return;
L_0885A2F4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x0885A300u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 707u, 0x088576D0u>(ctx, &aot_mem) && ctx.pc == 0x0885A300u) goto L_0885A300;
    return;
L_0885A300:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(31, 0x0885A30Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 709u, 0x088576F8u>(ctx, &aot_mem) && ctx.pc == 0x0885A30Cu) goto L_0885A30C;
    return;
L_0885A30C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885A340u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 365u, 0x08841414u>(ctx, &aot_mem) && ctx.pc == 0x0885A340u) goto L_0885A340;
    return;
L_0885A340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885A350u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 208u, 0x08844E40u>(ctx, &aot_mem) && ctx.pc == 0x0885A350u) goto L_0885A350;
    return;
L_0885A350:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885A35Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 363u, 0x08841404u>(ctx, &aot_mem) && ctx.pc == 0x0885A35Cu) goto L_0885A35C;
    return;
L_0885A35C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885A5A0;
      }
      goto L_0885A39C;
    }
L_0885A39C:
    ctx.set_gpr(31, 0x0885A3A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3A4u) goto L_0885A3A4;
    return;
L_0885A3A4:
    ctx.set_gpr(31, 0x0885A3ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3ACu) goto L_0885A3AC;
    return;
L_0885A3AC:
    ctx.set_gpr(31, 0x0885A3B4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3B4u) goto L_0885A3B4;
    return;
L_0885A3B4:
    ctx.set_gpr(31, 0x0885A3BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3BCu) goto L_0885A3BC;
    return;
L_0885A3BC:
    ctx.set_gpr(31, 0x0885A3C4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3C4u) goto L_0885A3C4;
    return;
L_0885A3C4:
    ctx.set_gpr(31, 0x0885A3CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A3CCu) goto L_0885A3CC;
    return;
L_0885A3CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.set_gpr(2, 15564u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0885A434;
      }
      goto L_0885A3F0;
    }
L_0885A3F0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(37));
    goto L_0885A3F4;
L_0885A3F4:
    ctx.set_gpr(31, 0x0885A3FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885A40Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_08859238;
L_0885A40C:
    ctx.set_gpr(31, 0x0885A414u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885A424u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_088591EC;
L_0885A424:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0885A3F4;
      }
      goto L_0885A430;
    }
L_0885A430:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), 0u);
    goto L_0885A434;
L_0885A434:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0885A440u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 497u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0885A440u) goto L_0885A440;
    return;
L_0885A440:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0885A44Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A44Cu) goto L_0885A44C;
    return;
L_0885A44C:
    ctx.set_gpr(31, 0x0885A454u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885A454u) goto L_0885A454;
    return;
L_0885A454:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x0885A460u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A460u) goto L_0885A460;
    return;
L_0885A460:
    ctx.set_gpr(31, 0x0885A468u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885A468u) goto L_0885A468;
    return;
L_0885A468:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x0885A478u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A478u) goto L_0885A478;
    return;
L_0885A478:
    ctx.set_gpr(31, 0x0885A480u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x0885A480u) goto L_0885A480;
    return;
L_0885A480:
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    ctx.set_gpr(31, 0x0885A498u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_088591C4;
L_0885A498:
    ctx.set_gpr(2, 48844u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1188));
    ctx.set_gpr(31, 0x0885A4B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_088591C4;
L_0885A4B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885A4D0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 215u, 0x08850A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A4D0u) goto L_0885A4D0;
    return;
L_0885A4D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x0885A4DCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0885934C;
L_0885A4DC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x0885A4F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885A4F0u) goto L_0885A4F0;
    return;
L_0885A4F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0885A500u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    goto L_0885A618;
L_0885A500:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0885A510u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1188));
    goto L_0885A618;
L_0885A510:
    ctx.set_gpr(31, 0x0885A518u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885A528u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    goto L_088591EC;
L_0885A528:
    ctx.set_gpr(31, 0x0885A530u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885A540u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    goto L_088591EC;
L_0885A540:
    ctx.set_gpr(31, 0x0885A548u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x0885A548u) goto L_0885A548;
    return;
L_0885A548:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0885A54C;
L_0885A54C:
    ctx.set_gpr(31, 0x0885A554u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    goto L_08859344;
L_0885A554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885A568u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0885A5BC;
L_0885A568:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1200));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(31, 0x0885A57Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08859344;
L_0885A57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885A590u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0885A1FC;
L_0885A590:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A54C;
      }
      goto L_0885A5A0;
    }
L_0885A5A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885A5E4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 611u, 0x0883EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A5E4u) goto L_0885A5E4;
    return;
L_0885A5E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885A600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A600u) goto L_0885A600;
    return;
L_0885A600:
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
L_0885A618:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A64C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885AF80;
      }
      goto L_0885A678;
    }
L_0885A678:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885B000;
      }
      goto L_0885A684;
    }
L_0885A684:
    ctx.set_gpr(31, 0x0885A68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A68Cu) goto L_0885A68C;
    return;
L_0885A68C:
    ctx.set_gpr(31, 0x0885A694u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B56C;
L_0885A694:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A6A4;
    }
L_0885A6A4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8800));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A6C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A6CC;
    }
L_0885A6CC:
    ctx.set_gpr(31, 0x0885A6D4u);
    // nop
    goto L_0885B574;
L_0885A6D4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0885AF08;
    }
    goto L_0885A6DC;
L_0885A6DC:
    ctx.set_gpr(31, 0x0885A6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A6E4u) goto L_0885A6E4;
    return;
L_0885A6E4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885A6FCu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885A6FCu) goto L_0885A6FC;
    return;
L_0885A6FC:
    ctx.set_gpr(31, 0x0885A704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A704u) goto L_0885A704;
    return;
L_0885A704:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885A724u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A724u) goto L_0885A724;
    return;
L_0885A724:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A730;
    }
L_0885A730:
    ctx.set_gpr(31, 0x0885A738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A738u) goto L_0885A738;
    return;
L_0885A738:
    ctx.set_gpr(31, 0x0885A740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x0885A740u) goto L_0885A740;
    return;
L_0885A740:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A74C;
    }
L_0885A74C:
    ctx.set_gpr(31, 0x0885A754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A754u) goto L_0885A754;
    return;
L_0885A754:
    ctx.set_gpr(31, 0x0885A75Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x0885A75Cu) goto L_0885A75C;
    return;
L_0885A75C:
    ctx.set_gpr(31, 0x0885A764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A764u) goto L_0885A764;
    return;
L_0885A764:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885A77Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885A77Cu) goto L_0885A77C;
    return;
L_0885A77C:
    ctx.set_gpr(31, 0x0885A784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A784u) goto L_0885A784;
    return;
L_0885A784:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885A7A4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885A7A4u) goto L_0885A7A4;
    return;
L_0885A7A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A7B0;
    }
L_0885A7B0:
    ctx.set_gpr(31, 0x0885A7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885A7B8u) goto L_0885A7B8;
    return;
L_0885A7B8:
    ctx.set_gpr(31, 0x0885A7C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x0885A7C0u) goto L_0885A7C0;
    return;
L_0885A7C0:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A7CC;
    }
L_0885A7CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A7D8;
    }
L_0885A7D8:
    ctx.set_gpr(31, 0x0885A7E0u);
    // nop
    goto L_0885B674;
L_0885A7E0:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A7EC;
    }
L_0885A7EC:
    ctx.set_gpr(31, 0x0885A7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A7F4u) goto L_0885A7F4;
    return;
L_0885A7F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885A800u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x0885A800u) goto L_0885A800;
    return;
L_0885A800:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A80C;
    }
L_0885A80C:
    ctx.set_gpr(31, 0x0885A814u);
    // nop
    goto L_0885B778;
L_0885A814:
    ctx.set_gpr(31, 0x0885A81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A81Cu) goto L_0885A81C;
    return;
L_0885A81C:
    ctx.set_gpr(31, 0x0885A824u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0885A824u) goto L_0885A824;
    return;
L_0885A824:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885A834u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0885B554;
L_0885A834:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A840;
    }
L_0885A840:
    ctx.set_gpr(31, 0x0885A848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885A848u) goto L_0885A848;
    return;
L_0885A848:
    ctx.set_gpr(31, 0x0885A850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0885A850u) goto L_0885A850;
    return;
L_0885A850:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885A870u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0885A870u) goto L_0885A870;
    return;
L_0885A870:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885A884u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885A884u) goto L_0885A884;
    return;
L_0885A884:
    ctx.set_gpr(31, 0x0885A88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A88Cu) goto L_0885A88C;
    return;
L_0885A88C:
    ctx.set_gpr(31, 0x0885A894u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885A894u) goto L_0885A894;
    return;
L_0885A894:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8D8;
      }
      goto L_0885A8A0;
    }
L_0885A8A0:
    ctx.set_gpr(31, 0x0885A8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x0885A8A8u) goto L_0885A8A8;
    return;
L_0885A8A8:
    ctx.set_gpr(31, 0x0885A8B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x0885A8B0u) goto L_0885A8B0;
    return;
L_0885A8B0:
    ctx.set_gpr(4, 0u | 48200u);
    ctx.set_gpr(31, 0x0885A8BCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0885B54C;
L_0885A8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8CC;
      }
      goto L_0885A8C4;
    }
L_0885A8C4:
    ctx.set_gpr(31, 0x0885A8CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 690u, 0x08862B34u>(ctx, &aot_mem) && ctx.pc == 0x0885A8CCu) goto L_0885A8CC;
    return;
L_0885A8CC:
    ctx.set_gpr(3, 2245u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26880), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885A8F8;
      }
      goto L_0885A8D8;
    }
L_0885A8D8:
    ctx.set_gpr(31, 0x0885A8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A8E0u) goto L_0885A8E0;
    return;
L_0885A8E0:
    ctx.set_gpr(31, 0x0885A8E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x0885A8E8u) goto L_0885A8E8;
    return;
L_0885A8E8:
    ctx.set_gpr(31, 0x0885A8F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B544;
L_0885A8F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26880), ctx.gpr[2]);
    goto L_0885A8F8;
L_0885A8F8:
    ctx.set_gpr(31, 0x0885A900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A900u) goto L_0885A900;
    return;
L_0885A900:
    ctx.set_gpr(31, 0x0885A908u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 486u, 0x08861D58u>(ctx, &aot_mem) && ctx.pc == 0x0885A908u) goto L_0885A908;
    return;
L_0885A908:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A930;
      }
      goto L_0885A914;
    }
L_0885A914:
    ctx.set_gpr(31, 0x0885A91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0885A91Cu) goto L_0885A91C;
    return;
L_0885A91C:
    ctx.set_gpr(31, 0x0885A924u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem) && ctx.pc == 0x0885A924u) goto L_0885A924;
    return;
L_0885A924:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A930;
    }
L_0885A930:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885A93Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x0885A93Cu) goto L_0885A93C;
    return;
L_0885A93C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A948;
    }
L_0885A948:
    ctx.set_gpr(31, 0x0885A950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0885A950u) goto L_0885A950;
    return;
L_0885A950:
    ctx.set_gpr(31, 0x0885A958u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 710u, 0x08852B44u>(ctx, &aot_mem) && ctx.pc == 0x0885A958u) goto L_0885A958;
    return;
L_0885A958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A960;
    }
L_0885A960:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885A96Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x0885A96Cu) goto L_0885A96C;
    return;
L_0885A96C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A978;
    }
L_0885A978:
    ctx.set_gpr(31, 0x0885A980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A980u) goto L_0885A980;
    return;
L_0885A980:
    ctx.set_gpr(31, 0x0885A988u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885A988u) goto L_0885A988;
    return;
L_0885A988:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A9C0;
      }
      goto L_0885A994;
    }
L_0885A994:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0885A9A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 734u, 0x08862E70u>(ctx, &aot_mem) && ctx.pc == 0x0885A9A8u) goto L_0885A9A8;
    return;
L_0885A9A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A9B0;
    }
L_0885A9B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A9C0;
    }
L_0885A9C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0885A9D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 31u, 0x0886424Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A9D4u) goto L_0885A9D4;
    return;
L_0885A9D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885A9DC;
    }
L_0885A9DC:
    ctx.set_gpr(31, 0x0885A9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885A9E4u) goto L_0885A9E4;
    return;
L_0885A9E4:
    ctx.set_gpr(31, 0x0885A9ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x0885A9ECu) goto L_0885A9EC;
    return;
L_0885A9EC:
    ctx.set_gpr(31, 0x0885A9F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9AF08u>(ctx, &aot_mem) && ctx.pc == 0x0885A9F4u) goto L_0885A9F4;
    return;
L_0885A9F4:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0885AA1C;
    }
    goto L_0885AA08;
L_0885AA08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885AA18u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_0885B518;
L_0885AA18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0885AA1C;
L_0885AA1C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AA28;
    }
L_0885AA28:
    ctx.set_gpr(31, 0x0885AA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AA30u) goto L_0885AA30;
    return;
L_0885AA30:
    ctx.set_gpr(31, 0x0885AA38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AA38u) goto L_0885AA38;
    return;
L_0885AA38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885AA60;
      }
      goto L_0885AA44;
    }
L_0885AA44:
    ctx.set_gpr(31, 0x0885AA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AA4Cu) goto L_0885AA4C;
    return;
L_0885AA4C:
    ctx.set_gpr(31, 0x0885AA54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AA54u) goto L_0885AA54;
    return;
L_0885AA54:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB60;
      }
      goto L_0885AA60;
    }
L_0885AA60:
    ctx.set_gpr(31, 0x0885AA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AA68u) goto L_0885AA68;
    return;
L_0885AA68:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885AA88u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0885AA88u) goto L_0885AA88;
    return;
L_0885AA88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885AA94u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0885B50C;
L_0885AA94:
    ctx.set_gpr(31, 0x0885AA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AA9Cu) goto L_0885AA9C;
    return;
L_0885AA9C:
    ctx.set_gpr(31, 0x0885AAA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AAA4u) goto L_0885AAA4;
    return;
L_0885AAA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885AB00;
      }
      goto L_0885AAB0;
    }
L_0885AAB0:
    ctx.set_gpr(31, 0x0885AAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AAB8u) goto L_0885AAB8;
    return;
L_0885AAB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0885AAD0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885AAD0u) goto L_0885AAD0;
    return;
L_0885AAD0:
    ctx.set_gpr(31, 0x0885AAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AAD8u) goto L_0885AAD8;
    return;
L_0885AAD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0885AAF8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885AAF8u) goto L_0885AAF8;
    return;
L_0885AAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB48;
      }
      goto L_0885AB00;
    }
L_0885AB00:
    ctx.set_gpr(31, 0x0885AB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AB08u) goto L_0885AB08;
    return;
L_0885AB08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885AB20u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885AB20u) goto L_0885AB20;
    return;
L_0885AB20:
    ctx.set_gpr(31, 0x0885AB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AB28u) goto L_0885AB28;
    return;
L_0885AB28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885AB48u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885AB48u) goto L_0885AB48;
    return;
L_0885AB48:
    ctx.set_gpr(31, 0x0885AB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x0885AB50u) goto L_0885AB50;
    return;
L_0885AB50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AB60;
    }
L_0885AB60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AB6Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B500;
L_0885AB6C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885AB80u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0885B4B8;
L_0885AB80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885AB94u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0885B440;
L_0885AB94:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885ABA8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0885B3C8;
L_0885ABA8:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885ABBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2E8;
L_0885ABBC:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16192u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0885ABDCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 980u, 0x088ABD78u>(ctx, &aot_mem) && ctx.pc == 0x0885ABDCu) goto L_0885ABDC;
    return;
L_0885ABDC:
    ctx.set_gpr(31, 0x0885ABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x0885ABE4u) goto L_0885ABE4;
    return;
L_0885ABE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885ABF4;
    }
L_0885ABF4:
    ctx.set_gpr(31, 0x0885ABFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885ABFCu) goto L_0885ABFC;
    return;
L_0885ABFC:
    ctx.set_gpr(31, 0x0885AC04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AC04u) goto L_0885AC04;
    return;
L_0885AC04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885AC2C;
      }
      goto L_0885AC10;
    }
L_0885AC10:
    ctx.set_gpr(31, 0x0885AC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AC18u) goto L_0885AC18;
    return;
L_0885AC18:
    ctx.set_gpr(31, 0x0885AC20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AC20u) goto L_0885AC20;
    return;
L_0885AC20:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885ACC4;
      }
      goto L_0885AC2C;
    }
L_0885AC2C:
    ctx.set_gpr(31, 0x0885AC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AC34u) goto L_0885AC34;
    return;
L_0885AC34:
    ctx.set_gpr(31, 0x0885AC3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x0885AC3Cu) goto L_0885AC3C;
    return;
L_0885AC3C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AC48;
    }
L_0885AC48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AC54u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 905u, 0x08866E94u>(ctx, &aot_mem) && ctx.pc == 0x0885AC54u) goto L_0885AC54;
    return;
L_0885AC54:
    ctx.set_gpr(31, 0x0885AC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AC5Cu) goto L_0885AC5C;
    return;
L_0885AC5C:
    ctx.set_gpr(31, 0x0885AC64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x0885AC64u) goto L_0885AC64;
    return;
L_0885AC64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AC70u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2D8;
L_0885AC70:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
        goto L_0885ACBC;
    }
    goto L_0885AC78;
L_0885AC78:
    ctx.set_gpr(31, 0x0885AC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885AC80u) goto L_0885AC80;
    return;
L_0885AC80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AC8Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2D0;
L_0885AC8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AC9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2C0;
L_0885AC9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885ACB0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 177u, 0x08854AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885ACB0u) goto L_0885ACB0;
    return;
L_0885ACB0:
    ctx.set_gpr(31, 0x0885ACB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x0885ACB8u) goto L_0885ACB8;
    return;
L_0885ACB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    goto L_0885ACBC;
L_0885ACBC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885ACC4;
    }
L_0885ACC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885ACD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B500;
L_0885ACD0:
    ctx.set_gpr(31, 0x0885ACD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 122u, 0x088AC6A4u>(ctx, &aot_mem) && ctx.pc == 0x0885ACD8u) goto L_0885ACD8;
    return;
L_0885ACD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885ACE0;
    }
L_0885ACE0:
    ctx.set_gpr(31, 0x0885ACE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885ACE8u) goto L_0885ACE8;
    return;
L_0885ACE8:
    ctx.set_gpr(31, 0x0885ACF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x0885ACF0u) goto L_0885ACF0;
    return;
L_0885ACF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AD00;
    }
L_0885AD00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AD0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B500;
L_0885AD0C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885AD20u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0885B4B8;
L_0885AD20:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885AD30u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 179u, 0x088AC9D8u>(ctx, &aot_mem) && ctx.pc == 0x0885AD30u) goto L_0885AD30;
    return;
L_0885AD30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885ADB0;
      }
      goto L_0885AD3C;
    }
L_0885AD3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885AD44;
    }
L_0885AD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AD4C;
    }
L_0885AD4C:
    ctx.set_gpr(31, 0x0885AD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AD54u) goto L_0885AD54;
    return;
L_0885AD54:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885AD6Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885AD6Cu) goto L_0885AD6C;
    return;
L_0885AD6C:
    ctx.set_gpr(31, 0x0885AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AD74u) goto L_0885AD74;
    return;
L_0885AD74:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885AD94u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885AD94u) goto L_0885AD94;
    return;
L_0885AD94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-26872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885ADB0;
    }
L_0885ADB0:
    ctx.set_gpr(31, 0x0885ADB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885ADB8u) goto L_0885ADB8;
    return;
L_0885ADB8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885ADD0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885ADD0u) goto L_0885ADD0;
    return;
L_0885ADD0:
    ctx.set_gpr(31, 0x0885ADD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885ADD8u) goto L_0885ADD8;
    return;
L_0885ADD8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885ADF8u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x0885ADF8u) goto L_0885ADF8;
    return;
L_0885ADF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-26872), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AE10;
    }
L_0885AE10:
    ctx.set_gpr(31, 0x0885AE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AE18u) goto L_0885AE18;
    return;
L_0885AE18:
    ctx.set_gpr(31, 0x0885AE20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x0885AE20u) goto L_0885AE20;
    return;
L_0885AE20:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AED4;
      }
      goto L_0885AE2C;
    }
L_0885AE2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AE38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B500;
L_0885AE38:
    ctx.set_gpr(31, 0x0885AE40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 374u, 0x088AD308u>(ctx, &aot_mem) && ctx.pc == 0x0885AE40u) goto L_0885AE40;
    return;
L_0885AE40:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-26872)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AE64;
      }
      goto L_0885AE50;
    }
L_0885AE50:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-26872), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885AE64;
    }
L_0885AE64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AE70u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 905u, 0x08866E94u>(ctx, &aot_mem) && ctx.pc == 0x0885AE70u) goto L_0885AE70;
    return;
L_0885AE70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AE7Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2D8;
L_0885AE7C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0885AEC8;
    }
    goto L_0885AE84;
L_0885AE84:
    ctx.set_gpr(31, 0x0885AE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885AE8Cu) goto L_0885AE8C;
    return;
L_0885AE8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AE98u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2D0;
L_0885AE98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AEA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2C0;
L_0885AEA8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885AEBCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 177u, 0x08854AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885AEBCu) goto L_0885AEBC;
    return;
L_0885AEBC:
    ctx.set_gpr(31, 0x0885AEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x0885AEC4u) goto L_0885AEC4;
    return;
L_0885AEC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0885AEC8;
L_0885AEC8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0885AF04;
      }
      goto L_0885AED4;
    }
L_0885AED4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AEE0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B500;
L_0885AEE0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885AEF4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0885B4B8;
L_0885AEF4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885AF04u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 179u, 0x088AC9D8u>(ctx, &aot_mem) && ctx.pc == 0x0885AF04u) goto L_0885AF04;
    return;
L_0885AF04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0885AF08;
L_0885AF08:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 13 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885B28C;
    }
    goto L_0885AF14;
L_0885AF14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885AF20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 748u, 0x0886AEE0u>(ctx, &aot_mem) && ctx.pc == 0x0885AF20u) goto L_0885AF20;
    return;
L_0885AF20:
    ctx.set_gpr(31, 0x0885AF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AF28u) goto L_0885AF28;
    return;
L_0885AF28:
    ctx.set_gpr(31, 0x0885AF30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 494u, 0x08861D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AF30u) goto L_0885AF30;
    return;
L_0885AF30:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885AF5C;
      }
      goto L_0885AF40;
    }
L_0885AF40:
    ctx.set_gpr(31, 0x0885AF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AF48u) goto L_0885AF48;
    return;
L_0885AF48:
    ctx.set_gpr(31, 0x0885AF50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AF50u) goto L_0885AF50;
    return;
L_0885AF50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885AF6C;
      }
      goto L_0885AF5C;
    }
L_0885AF5C:
    ctx.set_gpr(31, 0x0885AF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0885AF64u) goto L_0885AF64;
    return;
L_0885AF64:
    ctx.set_gpr(31, 0x0885AF6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 83u, 0x08AFC658u>(ctx, &aot_mem) && ctx.pc == 0x0885AF6Cu) goto L_0885AF6C;
    return;
L_0885AF6C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26876), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885AF80;
    }
L_0885AF80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0885AF98u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 204u, 0x08864C90u>(ctx, &aot_mem) && ctx.pc == 0x0885AF98u) goto L_0885AF98;
    return;
L_0885AF98:
    ctx.set_gpr(3, 2245u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26876), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885AFA4;
    }
L_0885AFA4:
    ctx.set_gpr(31, 0x0885AFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885AFACu) goto L_0885AFAC;
    return;
L_0885AFAC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885AFC4u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885AFC4u) goto L_0885AFC4;
    return;
L_0885AFC4:
    ctx.set_gpr(31, 0x0885AFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885AFCCu) goto L_0885AFCC;
    return;
L_0885AFCC:
    ctx.set_gpr(31, 0x0885AFD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885AFD4u) goto L_0885AFD4;
    return;
L_0885AFD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_0885AFF8;
    }
    goto L_0885AFE0;
L_0885AFE0:
    ctx.set_gpr(31, 0x0885AFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AFE8u) goto L_0885AFE8;
    return;
L_0885AFE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885AFF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x0885AFF4u) goto L_0885AFF4;
    return;
L_0885AFF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    goto L_0885AFF8;
L_0885AFF8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B000;
    }
L_0885B000:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885B00C;
      }
      goto L_0885B008;
    }
L_0885B008:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_0885B00C;
L_0885B00C:
    ctx.set_gpr(31, 0x0885B014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x0885B014u) goto L_0885B014;
    return;
L_0885B014:
    ctx.set_gpr(31, 0x0885B01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0885B01Cu) goto L_0885B01C;
    return;
L_0885B01C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885B03Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0885B03Cu) goto L_0885B03C;
    return;
L_0885B03C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885B050u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B050u) goto L_0885B050;
    return;
L_0885B050:
    ctx.set_gpr(31, 0x0885B058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B058u) goto L_0885B058;
    return;
L_0885B058:
    ctx.set_gpr(31, 0x0885B060u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 494u, 0x08861D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B060u) goto L_0885B060;
    return;
L_0885B060:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885B08C;
      }
      goto L_0885B070;
    }
L_0885B070:
    ctx.set_gpr(31, 0x0885B078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B078u) goto L_0885B078;
    return;
L_0885B078:
    ctx.set_gpr(31, 0x0885B080u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885B080u) goto L_0885B080;
    return;
L_0885B080:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885B09C;
      }
      goto L_0885B08C;
    }
L_0885B08C:
    ctx.set_gpr(31, 0x0885B094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0885B094u) goto L_0885B094;
    return;
L_0885B094:
    ctx.set_gpr(31, 0x0885B09Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 99u, 0x08AFC77Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B09Cu) goto L_0885B09C;
    return;
L_0885B09C:
    ctx.set_gpr(31, 0x0885B0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x0885B0A4u) goto L_0885B0A4;
    return;
L_0885B0A4:
    ctx.set_gpr(31, 0x0885B0ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x0885B0ACu) goto L_0885B0AC;
    return;
L_0885B0AC:
    ctx.set_gpr(31, 0x0885B0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B0B4u) goto L_0885B0B4;
    return;
L_0885B0B4:
    ctx.set_gpr(31, 0x0885B0BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B0BCu) goto L_0885B0BC;
    return;
L_0885B0BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885B0C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2B0;
L_0885B0C8:
    ctx.set_gpr(31, 0x0885B0D0u);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B0D0u) goto L_0885B0D0;
    return;
L_0885B0D0:
    ctx.set_gpr(31, 0x0885B0D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885B0D8u) goto L_0885B0D8;
    return;
L_0885B0D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B108;
      }
      goto L_0885B0E4;
    }
L_0885B0E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885B0F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x0885B0F0u) goto L_0885B0F0;
    return;
L_0885B0F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, 0x0885B100u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 720u, 0x08862DB0u>(ctx, &aot_mem) && ctx.pc == 0x0885B100u) goto L_0885B100;
    return;
L_0885B100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B15C;
      }
      goto L_0885B108;
    }
L_0885B108:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885B11Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 832u, 0x088669E4u>(ctx, &aot_mem) && ctx.pc == 0x0885B11Cu) goto L_0885B11C;
    return;
L_0885B11C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885B128u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 178u, 0x08864B30u>(ctx, &aot_mem) && ctx.pc == 0x0885B128u) goto L_0885B128;
    return;
L_0885B128:
    ctx.set_gpr(31, 0x0885B130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0885B130u) goto L_0885B130;
    return;
L_0885B130:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885B148u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B148u) goto L_0885B148;
    return;
L_0885B148:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885B154u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    goto L_0885B2A8;
L_0885B154:
    ctx.set_gpr(31, 0x0885B15Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x0885B15Cu) goto L_0885B15C;
    return;
L_0885B15C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, 0x0885B168u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x0885B168u) goto L_0885B168;
    return;
L_0885B168:
    ctx.set_gpr(31, 0x0885B170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B170u) goto L_0885B170;
    return;
L_0885B170:
    ctx.set_gpr(31, 0x0885B178u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885B178u) goto L_0885B178;
    return;
L_0885B178:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B184;
    }
L_0885B184:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8768));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B1A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B1E8;
      }
      goto L_0885B1A8;
    }
L_0885B1A8:
    ctx.set_gpr(31, 0x0885B1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B1B0u) goto L_0885B1B0;
    return;
L_0885B1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0885B1C8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0885B1C8u) goto L_0885B1C8;
    return;
L_0885B1C8:
    ctx.set_gpr(3, 2221u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2708));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B1E8;
    }
L_0885B1E8:
    ctx.set_gpr(3, 2219u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-24204));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B208;
    }
L_0885B208:
    ctx.set_gpr(31, 0x0885B210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B210u) goto L_0885B210;
    return;
L_0885B210:
    ctx.set_gpr(31, 0x0885B218u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x0885B218u) goto L_0885B218;
    return;
L_0885B218:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26876)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885B24C;
      }
      goto L_0885B22C;
    }
L_0885B22C:
    ctx.set_gpr(3, 2186u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20396));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B24C;
    }
L_0885B24C:
    ctx.set_gpr(3, 2181u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-18380));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B26C;
    }
L_0885B26C:
    ctx.set_gpr(3, 2216u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-17036));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_0885B288;
L_0885B288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885B28C;
L_0885B28C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(32208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2B0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-17460)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2C0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17340)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(40));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2D8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17348)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B2E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885B314;
      }
      goto L_0885B30C;
    }
L_0885B30C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885B344;
      }
      goto L_0885B314;
    }
L_0885B314:
    ctx.set_gpr(31, 0x0885B31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B31Cu) goto L_0885B31C;
    return;
L_0885B31C:
    ctx.set_gpr(31, 0x0885B324u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0885B324u) goto L_0885B324;
    return;
L_0885B324:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0885B330u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B3A8;
L_0885B330:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B33Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B38C;
L_0885B33C:
    ctx.set_gpr(31, 0x0885B344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B358;
L_0885B344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B358:
    // nop
    goto L_0885B360;
L_0885B360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0885B370u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 218u, 0x08860BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B370u) goto L_0885B370;
    return;
L_0885B370:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885B380u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9999));
    goto L_0885B7D8;
L_0885B380:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B38C:
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B3A8:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B3C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885B3F4;
      }
      goto L_0885B3EC;
    }
L_0885B3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885B424;
      }
      goto L_0885B3F4;
    }
L_0885B3F4:
    ctx.set_gpr(31, 0x0885B3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B3FCu) goto L_0885B3FC;
    return;
L_0885B3FC:
    ctx.set_gpr(31, 0x0885B404u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0885B404u) goto L_0885B404;
    return;
L_0885B404:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0885B410u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B3A8;
L_0885B410:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B41Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B38C;
L_0885B41C:
    ctx.set_gpr(31, 0x0885B424u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B438;
L_0885B424:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B438:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(556)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885B46C;
      }
      goto L_0885B464;
    }
L_0885B464:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885B49C;
      }
      goto L_0885B46C;
    }
L_0885B46C:
    ctx.set_gpr(31, 0x0885B474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885B474u) goto L_0885B474;
    return;
L_0885B474:
    ctx.set_gpr(31, 0x0885B47Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0885B47Cu) goto L_0885B47C;
    return;
L_0885B47C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0885B488u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B3A8;
L_0885B488:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B494u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B38C;
L_0885B494:
    ctx.set_gpr(31, 0x0885B49Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B4B0;
L_0885B49C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B4B0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(552)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B4B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885B4DC;
      }
      goto L_0885B4D4;
    }
L_0885B4D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885B4F0;
      }
      goto L_0885B4DC;
    }
L_0885B4DC:
    ctx.set_gpr(31, 0x0885B4E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x0885B4E4u) goto L_0885B4E4;
    return;
L_0885B4E4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(976)));
    goto L_0885B4F0;
L_0885B4F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B500:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(14744));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32760));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B50C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27976));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 222u, 0x08848F0Cu>(ctx, &aot_mem); return;
L_0885B518:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17348), ctx.gpr[5]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-17344), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B544:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B54C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_0885B554:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27935));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 430u, 0x08861AACu>(ctx, &aot_mem); return;
L_0885B56C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18304)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    ctx.set_gpr(31, 0x0885B5A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B5A4u) goto L_0885B5A4;
    return;
L_0885B5A4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885B5C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B5C0u) goto L_0885B5C0;
    return;
L_0885B5C0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0885B664;
    }
    goto L_0885B5C8;
L_0885B5C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885B660;
      }
      goto L_0885B5E4;
    }
L_0885B5E4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885B5E8;
L_0885B5E8:
    ctx.set_gpr(31, 0x0885B5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B5F0u) goto L_0885B5F0;
    return;
L_0885B5F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0885B624u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x0885B624u) goto L_0885B624;
    return;
L_0885B624:
    ctx.set_gpr(31, 0x0885B62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B62Cu) goto L_0885B62C;
    return;
L_0885B62C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B640u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B640u) goto L_0885B640;
    return;
L_0885B640:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B5E8;
      }
      goto L_0885B650;
    }
L_0885B650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26868), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885B664;
      }
      goto L_0885B660;
    }
L_0885B660:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0885B664;
L_0885B664:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885B6B8;
      }
      goto L_0885B694;
    }
L_0885B694:
    ctx.set_gpr(31, 0x0885B69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B69Cu) goto L_0885B69C;
    return;
L_0885B69C:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885B6ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0885B6ACu) goto L_0885B6AC;
    return;
L_0885B6AC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0885B768;
    }
    goto L_0885B6B8;
L_0885B6B8:
    ctx.set_gpr(31, 0x0885B6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0885B6C0u) goto L_0885B6C0;
    return;
L_0885B6C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885B6CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0885B6CCu) goto L_0885B6CC;
    return;
L_0885B6CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B764;
      }
      goto L_0885B6D4;
    }
L_0885B6D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B6F4;
      }
      goto L_0885B6E4;
    }
L_0885B6E4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0885B768;
      }
      goto L_0885B6F4;
    }
L_0885B6F4:
    ctx.set_gpr(31, 0x0885B6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B6FCu) goto L_0885B6FC;
    return;
L_0885B6FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885B71Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B71Cu) goto L_0885B71C;
    return;
L_0885B71C:
    ctx.set_gpr(31, 0x0885B724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B724u) goto L_0885B724;
    return;
L_0885B724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885B750u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x0885B750u) goto L_0885B750;
    return;
L_0885B750:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26868), ctx.gpr[3]);
    goto L_0885B764;
L_0885B764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0885B768;
L_0885B768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0885B788;
L_0885B788:
    ctx.set_gpr(31, 0x0885B790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B790u) goto L_0885B790;
    return;
L_0885B790:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885B7A0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x0885B7A0u) goto L_0885B7A0;
    return;
L_0885B7A0:
    ctx.set_gpr(31, 0x0885B7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0885B7A8u) goto L_0885B7A8;
    return;
L_0885B7A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0885B7B8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B7B8u) goto L_0885B7B8;
    return;
L_0885B7B8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B788;
      }
      goto L_0885B7C8;
    }
L_0885B7C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0885B7F0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    goto L_0885B820;
L_0885B7F0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B7FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885B80C;
L_0885B7FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B80C:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
        goto L_0885B818;
    }
    goto L_0885B818;
L_0885B818:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B820:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
        goto L_0885B82C;
    }
    goto L_0885B82C;
L_0885B82C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885B850u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 73u, 0x0884C4D0u>(ctx, &aot_mem) && ctx.pc == 0x0885B850u) goto L_0885B850;
    return;
L_0885B850:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31056));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885B864u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 73u, 0x0884C4D0u>(ctx, &aot_mem) && ctx.pc == 0x0885B864u) goto L_0885B864;
    return;
L_0885B864:
    ctx.set_gpr(31, 0x0885B86Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x0885B86Cu) goto L_0885B86C;
    return;
L_0885B86C:
    ctx.set_gpr(31, 0x0885B874u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x0885B874u) goto L_0885B874;
    return;
L_0885B874:
    ctx.set_gpr(31, 0x0885B87Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(556));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0885B87Cu) goto L_0885B87C;
    return;
L_0885B87C:
    ctx.set_gpr(5, 2182u << 16u);
    ctx.set_gpr(6, 2182u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17648));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17728));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885B89Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0885B89Cu) goto L_0885B89C;
    return;
L_0885B89C:
    ctx.set_gpr(31, 0x0885B8A4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    goto L_0885BAB4;
L_0885B8A4:
    ctx.set_gpr(31, 0x0885B8ACu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x0885B8ACu) goto L_0885B8AC;
    return;
L_0885B8AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885B8C0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885B8C0u) goto L_0885B8C0;
    return;
L_0885B8C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(31, 0x0885B8D8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0885B8D8u) goto L_0885B8D8;
    return;
L_0885B8D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B8E4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(0u));
    goto L_0885BAA4;
L_0885B8E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0885B8F8;
L_0885B8F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(644), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(652), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(656), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885B8F8;
      }
      goto L_0885B924;
    }
L_0885B924:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885B944;
L_0885B944:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(760), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(764), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(772), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(776), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(780), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885B944;
      }
      goto L_0885B970;
    }
L_0885B970:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885B988u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 458u, 0x0885DBC8u>(ctx, &aot_mem) && ctx.pc == 0x0885B988u) goto L_0885B988;
    return;
L_0885B988:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0885B990;
L_0885B990:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(31, 0x0885B9A0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0885BA7C;
L_0885B9A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885B990;
      }
      goto L_0885B9B0;
    }
L_0885B9B0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1008), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1020), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885B9C8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), 0u);
    goto L_0885BA54;
L_0885B9C8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885B9D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885B9D4u) goto L_0885B9D4;
    return;
L_0885B9D4:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1012), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1016), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0885BA04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885BA3C;
      }
      goto L_0885BA20;
    }
L_0885BA20:
    ctx.set_gpr(31, 0x0885BA28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BA28u) goto L_0885BA28;
    return;
L_0885BA28:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885BA40;
    }
    goto L_0885BA34;
L_0885BA34:
    ctx.set_gpr(31, 0x0885BA3Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885BA3Cu) goto L_0885BA3C;
    return;
L_0885BA3C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885BA40;
L_0885BA40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885BA68u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0885BA68u) goto L_0885BA68;
    return;
L_0885BA68:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885BA90u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0885BA90u) goto L_0885BA90;
    return;
L_0885BA90:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BAA4:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(624), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BAB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BAC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885BAF8;
      }
      goto L_0885BADC;
    }
L_0885BADC:
    ctx.set_gpr(31, 0x0885BAE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BAE4u) goto L_0885BAE4;
    return;
L_0885BAE4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885BAFC;
    }
    goto L_0885BAF0;
L_0885BAF0:
    ctx.set_gpr(31, 0x0885BAF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885BAF8u) goto L_0885BAF8;
    return;
L_0885BAF8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885BAFC;
L_0885BAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB10:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885BBB8;
      }
      goto L_0885BB38;
    }
L_0885BB38:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31056));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1032));
    ctx.set_gpr(31, 0x0885BB50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885BB50u) goto L_0885BB50;
    return;
L_0885BB50:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1028));
    ctx.set_gpr(31, 0x0885BB5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885BA04;
L_0885BB5C:
    ctx.set_gpr(5, 2182u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885BB74u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0885BB74u) goto L_0885BB74;
    return;
L_0885BB74:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x0885BB80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885BB80u) goto L_0885BB80;
    return;
L_0885BB80:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(31, 0x0885BB8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BB8Cu) goto L_0885BB8C;
    return;
L_0885BB8C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x0885BB98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 114u, 0x0884C754u>(ctx, &aot_mem) && ctx.pc == 0x0885BB98u) goto L_0885BB98;
    return;
L_0885BB98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885BBA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 114u, 0x0884C754u>(ctx, &aot_mem) && ctx.pc == 0x0885BBA4u) goto L_0885BBA4;
    return;
L_0885BBA4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885BBBC;
    }
    goto L_0885BBB0;
L_0885BBB0:
    ctx.set_gpr(31, 0x0885BBB8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 124u, 0x0884C7F0u>(ctx, &aot_mem) && ctx.pc == 0x0885BBB8u) goto L_0885BBB8;
    return;
L_0885BBB8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885BBBC;
L_0885BBBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BBD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0885BC24;
      }
      goto L_0885BC08;
    }
L_0885BC08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885BC18u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885BC18u) goto L_0885BC18;
    return;
L_0885BC18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0885BC34;
      }
      goto L_0885BC24;
    }
L_0885BC24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885BC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885BC34u) goto L_0885BC34;
    return;
L_0885BC34:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(628), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(636), ctx.gpr[18]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885BC48;
L_0885BC48:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(644), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(652), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(656), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885BC48;
      }
      goto L_0885BC74;
    }
L_0885BC74:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(632), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(756), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885BC94;
L_0885BC94:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(760), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(764), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(772), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(776), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(780), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0885BC94;
      }
      goto L_0885BCC0;
    }
L_0885BCC0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(756), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0885BCD4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 126u, 0x0884C800u>(ctx, &aot_mem) && ctx.pc == 0x0885BCD4u) goto L_0885BCD4;
    return;
L_0885BCD4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(876), 0u);
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
L_0885BCF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885BD6C;
      }
      goto L_0885BD1C;
    }
L_0885BD1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885BD28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 159u, 0x0885C93Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BD28u) goto L_0885BD28;
    return;
L_0885BD28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0885BD5C;
    }
    goto L_0885BD30;
L_0885BD30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0885BD40u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 458u, 0x0885DBC8u>(ctx, &aot_mem) && ctx.pc == 0x0885BD40u) goto L_0885BD40;
    return;
L_0885BD40:
    ctx.set_gpr(31, 0x0885BD48u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 680u, 0x0884E4C4u>(ctx, &aot_mem) && ctx.pc == 0x0885BD48u) goto L_0885BD48;
    return;
L_0885BD48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0885BD54u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 316u, 0x0884D128u>(ctx, &aot_mem) && ctx.pc == 0x0885BD54u) goto L_0885BD54;
    return;
L_0885BD54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 37u, 0x0885C1A4u>(ctx, &aot_mem); return;
      }
      goto L_0885BD5C;
    }
L_0885BD5C:
    ctx.set_gpr(31, 0x0885BD64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 269u, 0x0884CE80u>(ctx, &aot_mem) && ctx.pc == 0x0885BD64u) goto L_0885BD64;
    return;
L_0885BD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 36u, 0x0885C1A0u>(ctx, &aot_mem); return;
      }
      goto L_0885BD6C;
    }
L_0885BD6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 35u, 0x0885C198u>(ctx, &aot_mem); return;
    }
    goto L_0885BD7C;
L_0885BD7C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BD98:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885BDACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 129u, 0x0884C830u>(ctx, &aot_mem) && ctx.pc == 0x0885BDACu) goto L_0885BDAC;
    return;
L_0885BDAC:
    ctx.set_gpr(31, 0x0885BDB4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885BDB4u) goto L_0885BDB4;
    return;
L_0885BDB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0885BDC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885BDC4u) goto L_0885BDC4;
    return;
L_0885BDC4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BDCC;
    }
L_0885BDCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BDDC;
    }
L_0885BDDC:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0885BDFCu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 552u, 0x0884DD40u>(ctx, &aot_mem) && ctx.pc == 0x0885BDFCu) goto L_0885BDFC;
    return;
L_0885BDFC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18936));
    ctx.set_gpr(31, 0x0885BE14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 230u, 0x0885CE08u>(ctx, &aot_mem) && ctx.pc == 0x0885BE14u) goto L_0885BE14;
    return;
L_0885BE14:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18948));
    ctx.set_gpr(31, 0x0885BE2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 230u, 0x0885CE08u>(ctx, &aot_mem) && ctx.pc == 0x0885BE2Cu) goto L_0885BE2C;
    return;
L_0885BE2C:
    ctx.set_gpr(31, 0x0885BE34u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 125u, 0x0884C7F8u>(ctx, &aot_mem) && ctx.pc == 0x0885BE34u) goto L_0885BE34;
    return;
L_0885BE34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BE44;
    }
L_0885BE44:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x0885BE5Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 129u, 0x0884C830u>(ctx, &aot_mem) && ctx.pc == 0x0885BE5Cu) goto L_0885BE5C;
    return;
L_0885BE5C:
    ctx.set_gpr(31, 0x0885BE64u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0885BE64u) goto L_0885BE64;
    return;
L_0885BE64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0885BE74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0885BE74u) goto L_0885BE74;
    return;
L_0885BE74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BE7C;
    }
L_0885BE7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BE8C;
    }
L_0885BE8C:
    ctx.set_gpr(31, 0x0885BE94u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885BE94u) goto L_0885BE94;
    return;
L_0885BE94:
    ctx.set_gpr(31, 0x0885BE9Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 64u, 0x0885C310u>(ctx, &aot_mem) && ctx.pc == 0x0885BE9Cu) goto L_0885BE9C;
    return;
L_0885BE9C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18960));
    ctx.set_gpr(31, 0x0885BEB0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x0885BEB0u) goto L_0885BEB0;
    return;
L_0885BEB0:
    ctx.set_gpr(31, 0x0885BEB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 57u, 0x0885C2C0u>(ctx, &aot_mem) && ctx.pc == 0x0885BEB8u) goto L_0885BEB8;
    return;
L_0885BEB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885BEC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 56u, 0x0885C2B8u>(ctx, &aot_mem) && ctx.pc == 0x0885BEC4u) goto L_0885BEC4;
    return;
L_0885BEC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885BED0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 431u, 0x0884D720u>(ctx, &aot_mem) && ctx.pc == 0x0885BED0u) goto L_0885BED0;
    return;
L_0885BED0:
    ctx.set_gpr(31, 0x0885BED8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 55u, 0x0885C2B0u>(ctx, &aot_mem) && ctx.pc == 0x0885BED8u) goto L_0885BED8;
    return;
L_0885BED8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
        goto L_0885BEFC;
    }
    goto L_0885BEE0;
L_0885BEE0:
    ctx.set_gpr(31, 0x0885BEE8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 55u, 0x0885C2B0u>(ctx, &aot_mem) && ctx.pc == 0x0885BEE8u) goto L_0885BEE8;
    return;
L_0885BEE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(31, 0x0885BEF4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0885BEF4u) goto L_0885BEF4;
    return;
L_0885BEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
      if (branch_taken) {
          goto L_0885BF1C;
      }
      goto L_0885BEFC;
    }
L_0885BEFC:
    ctx.set_gpr(31, 0x0885BF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 54u, 0x0885C2A8u>(ctx, &aot_mem) && ctx.pc == 0x0885BF04u) goto L_0885BF04;
    return;
L_0885BF04:
    ctx.set_gpr(31, 0x0885BF0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 319u, 0x0884D16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BF0Cu) goto L_0885BF0C;
    return;
L_0885BF0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(31, 0x0885BF18u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0885BF18u) goto L_0885BF18;
    return;
L_0885BF18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    goto L_0885BF1C;
L_0885BF1C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
        goto L_0885BF50;
    }
    goto L_0885BF24;
L_0885BF24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885BF4Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885BF4Cu) goto L_0885BF4C;
    return;
L_0885BF4C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    goto L_0885BF50;
L_0885BF50:
    ctx.set_gpr(31, 0x0885BF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885BF58u) goto L_0885BF58;
    return;
L_0885BF58:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0885BF70u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18968));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 230u, 0x0885CE08u>(ctx, &aot_mem) && ctx.pc == 0x0885BF70u) goto L_0885BF70;
    return;
L_0885BF70:
    ctx.set_gpr(31, 0x0885BF78u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885BF78u) goto L_0885BF78;
    return;
L_0885BF78:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0885BF90u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18980));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 230u, 0x0885CE08u>(ctx, &aot_mem) && ctx.pc == 0x0885BF90u) goto L_0885BF90;
    return;
L_0885BF90:
    ctx.set_gpr(31, 0x0885BF98u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0885BF98u) goto L_0885BF98;
    return;
L_0885BF98:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0885BFB0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18996));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 230u, 0x0885CE08u>(ctx, &aot_mem) && ctx.pc == 0x0885BFB0u) goto L_0885BFB0;
    return;
L_0885BFB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(876), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 34u, 0x0885C194u>(ctx, &aot_mem); return;
      }
      goto L_0885BFC0;
    }
L_0885BFC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885BFCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 458u, 0x0885DBC8u>(ctx, &aot_mem) && ctx.pc == 0x0885BFCCu) goto L_0885BFCC;
    return;
L_0885BFCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885BFE0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 380u, 0x0884D458u>(ctx, &aot_mem) && ctx.pc == 0x0885BFE0u) goto L_0885BFE0;
    return;
L_0885BFE0:
    ctx.set_gpr(31, 0x0885BFE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 361u, 0x0884D370u>(ctx, &aot_mem) && ctx.pc == 0x0885BFE8u) goto L_0885BFE8;
    return;
L_0885BFE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885BFF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 360u, 0x0884D368u>(ctx, &aot_mem) && ctx.pc == 0x0885BFF4u) goto L_0885BFF4;
    return;
L_0885BFF4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x0885C000u; return;
}

void recomp_unit_0021(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0021_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_21(Runtime &runtime) {
    runtime.register_generated_unit(21u, 0x08858000u, 16384u, &recomp_unit_0021, &recomp_unit_0021_entry);
    runtime.register_function(0x08858004u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885800Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858020u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885802Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858040u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858048u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858054u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858068u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858074u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858088u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858090u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858098u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858108u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858154u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858164u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858174u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858194u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885819Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858200u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885825Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858264u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885826Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858274u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885827Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885828Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858298u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858314u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858328u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885833Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885836Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858378u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885838Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885839Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858438u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858444u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858458u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858468u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858478u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858484u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885848Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858504u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858510u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858524u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858534u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858544u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858550u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858558u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885856Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858574u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858584u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858598u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885860Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858618u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858620u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858634u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885863Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858648u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885865Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858670u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885870Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858714u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858718u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858728u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885873Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858770u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885877Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858790u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858808u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885883Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858848u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885885Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885886Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885887Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858888u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858890u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858904u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858910u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858924u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858934u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858944u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858950u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858958u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885896Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858974u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858980u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885898Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858998u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858ED0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859010u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859020u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859038u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859064u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859078u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859084u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859114u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859120u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859130u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859140u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859148u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859158u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859164u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859168u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859170u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859174u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885917Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859188u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885920Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859224u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859238u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859258u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859270u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859284u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859318u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859330u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859344u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885934Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885936Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859398u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859414u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859420u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885944Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859470u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859474u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885947Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859480u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859498u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859504u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885950Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859514u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885952Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859538u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859544u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885954Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885956Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859578u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859584u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859590u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885959Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859630u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859638u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859640u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859648u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859658u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859660u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885966Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859688u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859694u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859704u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859724u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885973Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859764u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859788u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885980Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885981Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859830u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885985Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859864u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859878u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859888u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859894u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859908u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859910u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859918u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859924u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859928u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859960u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859994u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A00u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ED0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ED8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A00Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A014u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A028u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A030u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A044u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A070u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A07Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A098u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A104u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A118u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A120u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A164u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A16Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A178u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A180u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A18Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A224u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A240u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A258u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A268u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A27Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A288u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A29Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A300u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A30Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A320u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A340u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A350u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A35Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A370u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A39Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A40Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A414u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A424u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A430u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A434u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A440u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A44Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A454u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A460u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A468u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A478u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A480u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A498u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A500u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A510u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A518u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A528u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A530u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A540u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A548u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A54Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A568u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A57Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A590u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A600u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A618u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A64Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A678u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A684u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A68Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A694u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A704u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A724u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A738u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A740u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A74Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A754u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A75Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A764u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A77Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A784u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A800u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A80Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A814u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A81Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A824u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A834u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A840u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A848u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A870u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A884u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A88Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A894u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A900u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A908u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A914u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A91Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A924u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A930u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A93Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A948u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A950u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A958u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A960u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A96Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A978u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A980u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A988u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A994u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB00u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD00u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AED4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B008u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B00Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B014u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B01Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B03Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B050u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B058u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B060u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B070u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B078u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B080u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B08Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B094u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B09Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B100u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B108u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B11Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B130u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B148u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B154u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B15Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B168u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B170u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B178u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B184u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B208u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B210u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B218u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B22Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B24Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B26Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B288u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B28Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B30Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B314u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B31Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B324u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B330u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B33Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B344u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B358u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B360u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B370u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B380u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B38Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B410u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B41Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B424u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B438u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B440u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B464u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B46Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B474u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B47Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B488u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B494u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B49Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B500u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B50Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B518u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B544u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B54Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B56Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B574u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B624u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B62Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B640u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B650u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B660u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B664u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B674u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B694u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B69Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B71Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B724u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B750u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B764u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B768u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B778u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B788u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B790u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B80Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B818u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B820u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B82Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B834u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B864u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B86Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B874u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B87Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B89Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B924u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B944u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B970u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B988u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B990u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BADCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBA4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE44u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE5Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BED0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BED8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFF4u, &recomp_unit_0021, "recomp_unit_0021");
}
} // namespace psprecomp
