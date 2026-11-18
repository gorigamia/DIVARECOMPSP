#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0052[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0,
    0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 34,
    0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 91, 92, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129,
    0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0,
    173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0,
    189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0,
    221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0,
    237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0,
    253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0,
    269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0,
    285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0,
    301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0,
    317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0,
    333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0,
    349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0,
    365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0,
    0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512,
    0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0,
    539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0,
    0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0,
    0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0,
    0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0,
    613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0,
    630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0,
    0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 0, 644, 0,
    0, 0, 645, 0, 0, 646, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0,
    0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0,
    0, 671, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0,
    678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0,
    683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0,
    696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0,
    0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 712,
    0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0,
    0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0,
    733, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 741, 0, 0, 0, 0, 742,
    0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 749, 0,
    0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 757, 0, 758, 0,
    0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 774,
    0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0,
    0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0,
    0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0,
    0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0,
    0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0,
    0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0,
    824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829,
    0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0,
    0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0,
    0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 844, 0,
    0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 851, 0, 0, 0, 0,
    0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0,
    0, 859, 0, 0, 860, 0, 0, 0, 861, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0,
    0, 0, 866, 0, 0, 867, 0, 868, 0, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 872, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0,
    0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0,
    0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890,
    0, 891, 0, 0, 892, 0, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 898,
    0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0,
    0, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 0, 0, 0, 0,
    911, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0,
    0, 916, 0, 0, 0, 917, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    919, 0, 0, 0, 920, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0,
    925, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 930,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0052[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D4000;
    case 2u: goto L_088D400C;
    case 3u: goto L_088D401C;
    case 4u: goto L_088D402C;
    case 5u: goto L_088D4040;
    case 6u: goto L_088D404C;
    case 7u: goto L_088D405C;
    case 8u: goto L_088D4068;
    case 9u: goto L_088D4078;
    case 10u: goto L_088D4084;
    case 11u: goto L_088D4094;
    case 12u: goto L_088D40A4;
    case 13u: goto L_088D40B4;
    case 14u: goto L_088D40C4;
    case 15u: goto L_088D40D4;
    case 16u: goto L_088D40E4;
    case 17u: goto L_088D40F4;
    case 18u: goto L_088D4104;
    case 19u: goto L_088D4114;
    case 20u: goto L_088D4144;
    case 21u: goto L_088D4154;
    case 22u: goto L_088D4164;
    case 23u: goto L_088D4174;
    case 24u: goto L_088D4184;
    case 25u: goto L_088D4194;
    case 26u: goto L_088D41A4;
    case 27u: goto L_088D41B4;
    case 28u: goto L_088D41C0;
    case 29u: goto L_088D41C8;
    case 30u: goto L_088D41D0;
    case 31u: goto L_088D41E0;
    case 32u: goto L_088D41EC;
    case 33u: goto L_088D41F4;
    case 34u: goto L_088D41FC;
    case 35u: goto L_088D420C;
    case 36u: goto L_088D4214;
    case 37u: goto L_088D421C;
    case 38u: goto L_088D422C;
    case 39u: goto L_088D423C;
    case 40u: goto L_088D424C;
    case 41u: goto L_088D425C;
    case 42u: goto L_088D4274;
    case 43u: goto L_088D4284;
    case 44u: goto L_088D4294;
    case 45u: goto L_088D42A4;
    case 46u: goto L_088D42B4;
    case 47u: goto L_088D42C4;
    case 48u: goto L_088D42D4;
    case 49u: goto L_088D42EC;
    case 50u: goto L_088D42FC;
    case 51u: goto L_088D430C;
    case 52u: goto L_088D431C;
    case 53u: goto L_088D432C;
    case 54u: goto L_088D433C;
    case 55u: goto L_088D434C;
    case 56u: goto L_088D435C;
    case 57u: goto L_088D436C;
    case 58u: goto L_088D437C;
    case 59u: goto L_088D438C;
    case 60u: goto L_088D439C;
    case 61u: goto L_088D43AC;
    case 62u: goto L_088D43BC;
    case 63u: goto L_088D43CC;
    case 64u: goto L_088D43DC;
    case 65u: goto L_088D43E8;
    case 66u: goto L_088D43F8;
    case 67u: goto L_088D4408;
    case 68u: goto L_088D4418;
    case 69u: goto L_088D4428;
    case 70u: goto L_088D4438;
    case 71u: goto L_088D4448;
    case 72u: goto L_088D4458;
    case 73u: goto L_088D4468;
    case 74u: goto L_088D4478;
    case 75u: goto L_088D4488;
    case 76u: goto L_088D4498;
    case 77u: goto L_088D44A8;
    case 78u: goto L_088D44B8;
    case 79u: goto L_088D44C8;
    case 80u: goto L_088D44D4;
    case 81u: goto L_088D44E0;
    case 82u: goto L_088D44F4;
    case 83u: goto L_088D451C;
    case 84u: goto L_088D4528;
    case 85u: goto L_088D4534;
    case 86u: goto L_088D4540;
    case 87u: goto L_088D4548;
    case 88u: goto L_088D4554;
    case 89u: goto L_088D455C;
    case 90u: goto L_088D4568;
    case 91u: goto L_088D4588;
    case 92u: goto L_088D458C;
    case 93u: goto L_088D4590;
    case 94u: goto L_088D4598;
    case 95u: goto L_088D45A8;
    case 96u: goto L_088D45B8;
    case 97u: goto L_088D45C8;
    case 98u: goto L_088D45D8;
    case 99u: goto L_088D45E8;
    case 100u: goto L_088D45F8;
    case 101u: goto L_088D4608;
    case 102u: goto L_088D4618;
    case 103u: goto L_088D4628;
    case 104u: goto L_088D4638;
    case 105u: goto L_088D4648;
    case 106u: goto L_088D4658;
    case 107u: goto L_088D4668;
    case 108u: goto L_088D4678;
    case 109u: goto L_088D4688;
    case 110u: goto L_088D4698;
    case 111u: goto L_088D46A8;
    case 112u: goto L_088D46B8;
    case 113u: goto L_088D46C8;
    case 114u: goto L_088D46D8;
    case 115u: goto L_088D46E8;
    case 116u: goto L_088D46F8;
    case 117u: goto L_088D4714;
    case 118u: goto L_088D4720;
    case 119u: goto L_088D4730;
    case 120u: goto L_088D4750;
    case 121u: goto L_088D475C;
    case 122u: goto L_088D4778;
    case 123u: goto L_088D4780;
    case 124u: goto L_088D478C;
    case 125u: goto L_088D4798;
    case 126u: goto L_088D47B4;
    case 127u: goto L_088D47D4;
    case 128u: goto L_088D47E0;
    case 129u: goto L_088D47FC;
    case 130u: goto L_088D4804;
    case 131u: goto L_088D4810;
    case 132u: goto L_088D481C;
    case 133u: goto L_088D4838;
    case 134u: goto L_088D4858;
    case 135u: goto L_088D4864;
    case 136u: goto L_088D4880;
    case 137u: goto L_088D4888;
    case 138u: goto L_088D4894;
    case 139u: goto L_088D48A0;
    case 140u: goto L_088D48BC;
    case 141u: goto L_088D48DC;
    case 142u: goto L_088D48E8;
    case 143u: goto L_088D4904;
    case 144u: goto L_088D490C;
    case 145u: goto L_088D4918;
    case 146u: goto L_088D4924;
    case 147u: goto L_088D4940;
    case 148u: goto L_088D4960;
    case 149u: goto L_088D496C;
    case 150u: goto L_088D4988;
    case 151u: goto L_088D4990;
    case 152u: goto L_088D499C;
    case 153u: goto L_088D49A8;
    case 154u: goto L_088D49C4;
    case 155u: goto L_088D49D8;
    case 156u: goto L_088D49E8;
    case 157u: goto L_088D49F0;
    case 158u: goto L_088D49F8;
    case 159u: goto L_088D4A00;
    case 160u: goto L_088D4A08;
    case 161u: goto L_088D4A10;
    case 162u: goto L_088D4A20;
    case 163u: goto L_088D4A30;
    case 164u: goto L_088D4A38;
    case 165u: goto L_088D4A40;
    case 166u: goto L_088D4A48;
    case 167u: goto L_088D4A50;
    case 168u: goto L_088D4A58;
    case 169u: goto L_088D4A60;
    case 170u: goto L_088D4A68;
    case 171u: goto L_088D4A70;
    case 172u: goto L_088D4A78;
    case 173u: goto L_088D4A80;
    case 174u: goto L_088D4A88;
    case 175u: goto L_088D4A90;
    case 176u: goto L_088D4A98;
    case 177u: goto L_088D4AA0;
    case 178u: goto L_088D4AA8;
    case 179u: goto L_088D4AB0;
    case 180u: goto L_088D4AB8;
    case 181u: goto L_088D4AC0;
    case 182u: goto L_088D4AC8;
    case 183u: goto L_088D4AD0;
    case 184u: goto L_088D4AD8;
    case 185u: goto L_088D4AE0;
    case 186u: goto L_088D4AE8;
    case 187u: goto L_088D4AF0;
    case 188u: goto L_088D4AF8;
    case 189u: goto L_088D4B00;
    case 190u: goto L_088D4B08;
    case 191u: goto L_088D4B10;
    case 192u: goto L_088D4B18;
    case 193u: goto L_088D4B20;
    case 194u: goto L_088D4B28;
    case 195u: goto L_088D4B30;
    case 196u: goto L_088D4B38;
    case 197u: goto L_088D4B40;
    case 198u: goto L_088D4B48;
    case 199u: goto L_088D4B50;
    case 200u: goto L_088D4B58;
    case 201u: goto L_088D4B60;
    case 202u: goto L_088D4B68;
    case 203u: goto L_088D4B70;
    case 204u: goto L_088D4B78;
    case 205u: goto L_088D4B80;
    case 206u: goto L_088D4B88;
    case 207u: goto L_088D4B90;
    case 208u: goto L_088D4B98;
    case 209u: goto L_088D4BA0;
    case 210u: goto L_088D4BA8;
    case 211u: goto L_088D4BB0;
    case 212u: goto L_088D4BB8;
    case 213u: goto L_088D4BC0;
    case 214u: goto L_088D4BC8;
    case 215u: goto L_088D4BD0;
    case 216u: goto L_088D4BD8;
    case 217u: goto L_088D4BE0;
    case 218u: goto L_088D4BE8;
    case 219u: goto L_088D4BF0;
    case 220u: goto L_088D4BF8;
    case 221u: goto L_088D4C00;
    case 222u: goto L_088D4C08;
    case 223u: goto L_088D4C10;
    case 224u: goto L_088D4C18;
    case 225u: goto L_088D4C20;
    case 226u: goto L_088D4C28;
    case 227u: goto L_088D4C30;
    case 228u: goto L_088D4C38;
    case 229u: goto L_088D4C40;
    case 230u: goto L_088D4C48;
    case 231u: goto L_088D4C50;
    case 232u: goto L_088D4C58;
    case 233u: goto L_088D4C60;
    case 234u: goto L_088D4C68;
    case 235u: goto L_088D4C70;
    case 236u: goto L_088D4C78;
    case 237u: goto L_088D4C80;
    case 238u: goto L_088D4C88;
    case 239u: goto L_088D4C90;
    case 240u: goto L_088D4C98;
    case 241u: goto L_088D4CA0;
    case 242u: goto L_088D4CA8;
    case 243u: goto L_088D4CB0;
    case 244u: goto L_088D4CB8;
    case 245u: goto L_088D4CC0;
    case 246u: goto L_088D4CC8;
    case 247u: goto L_088D4CD0;
    case 248u: goto L_088D4CD8;
    case 249u: goto L_088D4CE0;
    case 250u: goto L_088D4CE8;
    case 251u: goto L_088D4CF0;
    case 252u: goto L_088D4CF8;
    case 253u: goto L_088D4D00;
    case 254u: goto L_088D4D08;
    case 255u: goto L_088D4D10;
    case 256u: goto L_088D4D18;
    case 257u: goto L_088D4D20;
    case 258u: goto L_088D4D28;
    case 259u: goto L_088D4D30;
    case 260u: goto L_088D4D38;
    case 261u: goto L_088D4D40;
    case 262u: goto L_088D4D48;
    case 263u: goto L_088D4D50;
    case 264u: goto L_088D4D58;
    case 265u: goto L_088D4D60;
    case 266u: goto L_088D4D68;
    case 267u: goto L_088D4D70;
    case 268u: goto L_088D4D78;
    case 269u: goto L_088D4D80;
    case 270u: goto L_088D4D88;
    case 271u: goto L_088D4D90;
    case 272u: goto L_088D4D98;
    case 273u: goto L_088D4DA0;
    case 274u: goto L_088D4DA8;
    case 275u: goto L_088D4DB0;
    case 276u: goto L_088D4DB8;
    case 277u: goto L_088D4DC0;
    case 278u: goto L_088D4DC8;
    case 279u: goto L_088D4DD0;
    case 280u: goto L_088D4DD8;
    case 281u: goto L_088D4DE0;
    case 282u: goto L_088D4DE8;
    case 283u: goto L_088D4DF0;
    case 284u: goto L_088D4DF8;
    case 285u: goto L_088D4E00;
    case 286u: goto L_088D4E08;
    case 287u: goto L_088D4E10;
    case 288u: goto L_088D4E18;
    case 289u: goto L_088D4E20;
    case 290u: goto L_088D4E28;
    case 291u: goto L_088D4E30;
    case 292u: goto L_088D4E38;
    case 293u: goto L_088D4E40;
    case 294u: goto L_088D4E48;
    case 295u: goto L_088D4E50;
    case 296u: goto L_088D4E58;
    case 297u: goto L_088D4E60;
    case 298u: goto L_088D4E68;
    case 299u: goto L_088D4E70;
    case 300u: goto L_088D4E78;
    case 301u: goto L_088D4E80;
    case 302u: goto L_088D4E88;
    case 303u: goto L_088D4E90;
    case 304u: goto L_088D4E98;
    case 305u: goto L_088D4EA0;
    case 306u: goto L_088D4EA8;
    case 307u: goto L_088D4EB0;
    case 308u: goto L_088D4EB8;
    case 309u: goto L_088D4EC0;
    case 310u: goto L_088D4EC8;
    case 311u: goto L_088D4ED0;
    case 312u: goto L_088D4ED8;
    case 313u: goto L_088D4EE0;
    case 314u: goto L_088D4EE8;
    case 315u: goto L_088D4EF0;
    case 316u: goto L_088D4EF8;
    case 317u: goto L_088D4F00;
    case 318u: goto L_088D4F08;
    case 319u: goto L_088D4F10;
    case 320u: goto L_088D4F18;
    case 321u: goto L_088D4F20;
    case 322u: goto L_088D4F28;
    case 323u: goto L_088D4F30;
    case 324u: goto L_088D4F38;
    case 325u: goto L_088D4F40;
    case 326u: goto L_088D4F48;
    case 327u: goto L_088D4F50;
    case 328u: goto L_088D4F58;
    case 329u: goto L_088D4F60;
    case 330u: goto L_088D4F68;
    case 331u: goto L_088D4F70;
    case 332u: goto L_088D4F78;
    case 333u: goto L_088D4F80;
    case 334u: goto L_088D4F88;
    case 335u: goto L_088D4F90;
    case 336u: goto L_088D4F98;
    case 337u: goto L_088D4FA0;
    case 338u: goto L_088D4FA8;
    case 339u: goto L_088D4FB0;
    case 340u: goto L_088D4FB8;
    case 341u: goto L_088D4FC0;
    case 342u: goto L_088D4FC8;
    case 343u: goto L_088D4FD0;
    case 344u: goto L_088D4FD8;
    case 345u: goto L_088D4FE0;
    case 346u: goto L_088D4FE8;
    case 347u: goto L_088D4FF0;
    case 348u: goto L_088D4FF8;
    case 349u: goto L_088D5000;
    case 350u: goto L_088D5008;
    case 351u: goto L_088D5010;
    case 352u: goto L_088D5018;
    case 353u: goto L_088D5020;
    case 354u: goto L_088D5028;
    case 355u: goto L_088D5030;
    case 356u: goto L_088D5038;
    case 357u: goto L_088D5040;
    case 358u: goto L_088D5048;
    case 359u: goto L_088D5050;
    case 360u: goto L_088D5058;
    case 361u: goto L_088D5060;
    case 362u: goto L_088D5068;
    case 363u: goto L_088D5070;
    case 364u: goto L_088D5078;
    case 365u: goto L_088D5080;
    case 366u: goto L_088D5088;
    case 367u: goto L_088D5090;
    case 368u: goto L_088D5098;
    case 369u: goto L_088D50A0;
    case 370u: goto L_088D50A8;
    case 371u: goto L_088D50B0;
    case 372u: goto L_088D50B8;
    case 373u: goto L_088D50C0;
    case 374u: goto L_088D50C8;
    case 375u: goto L_088D50D0;
    case 376u: goto L_088D50D8;
    case 377u: goto L_088D50E0;
    case 378u: goto L_088D50E8;
    case 379u: goto L_088D50F8;
    case 380u: goto L_088D5110;
    case 381u: goto L_088D5124;
    case 382u: goto L_088D512C;
    case 383u: goto L_088D5144;
    case 384u: goto L_088D515C;
    case 385u: goto L_088D5178;
    case 386u: goto L_088D51A0;
    case 387u: goto L_088D51AC;
    case 388u: goto L_088D51B4;
    case 389u: goto L_088D51BC;
    case 390u: goto L_088D51CC;
    case 391u: goto L_088D51DC;
    case 392u: goto L_088D51E8;
    case 393u: goto L_088D51F0;
    case 394u: goto L_088D51F8;
    case 395u: goto L_088D5208;
    case 396u: goto L_088D5220;
    case 397u: goto L_088D5238;
    case 398u: goto L_088D5248;
    case 399u: goto L_088D5258;
    case 400u: goto L_088D52AC;
    case 401u: goto L_088D52BC;
    case 402u: goto L_088D52CC;
    case 403u: goto L_088D52DC;
    case 404u: goto L_088D5300;
    case 405u: goto L_088D531C;
    case 406u: goto L_088D532C;
    case 407u: goto L_088D533C;
    case 408u: goto L_088D534C;
    case 409u: goto L_088D535C;
    case 410u: goto L_088D5384;
    case 411u: goto L_088D539C;
    case 412u: goto L_088D53B4;
    case 413u: goto L_088D53C8;
    case 414u: goto L_088D53D0;
    case 415u: goto L_088D53E8;
    case 416u: goto L_088D53FC;
    case 417u: goto L_088D5410;
    case 418u: goto L_088D542C;
    case 419u: goto L_088D5444;
    case 420u: goto L_088D5454;
    case 421u: goto L_088D5464;
    case 422u: goto L_088D54B8;
    case 423u: goto L_088D54C8;
    case 424u: goto L_088D54D8;
    case 425u: goto L_088D54E8;
    case 426u: goto L_088D5500;
    case 427u: goto L_088D5514;
    case 428u: goto L_088D551C;
    case 429u: goto L_088D5534;
    case 430u: goto L_088D554C;
    case 431u: goto L_088D5578;
    case 432u: goto L_088D55A0;
    case 433u: goto L_088D55AC;
    case 434u: goto L_088D55B4;
    case 435u: goto L_088D55BC;
    case 436u: goto L_088D55CC;
    case 437u: goto L_088D55DC;
    case 438u: goto L_088D55E8;
    case 439u: goto L_088D55F0;
    case 440u: goto L_088D55F8;
    case 441u: goto L_088D5608;
    case 442u: goto L_088D5614;
    case 443u: goto L_088D561C;
    case 444u: goto L_088D5634;
    case 445u: goto L_088D5640;
    case 446u: goto L_088D564C;
    case 447u: goto L_088D5664;
    case 448u: goto L_088D5684;
    case 449u: goto L_088D5690;
    case 450u: goto L_088D56AC;
    case 451u: goto L_088D56B4;
    case 452u: goto L_088D56C0;
    case 453u: goto L_088D56CC;
    case 454u: goto L_088D56E8;
    case 455u: goto L_088D5700;
    case 456u: goto L_088D5710;
    case 457u: goto L_088D5720;
    case 458u: goto L_088D577C;
    case 459u: goto L_088D578C;
    case 460u: goto L_088D579C;
    case 461u: goto L_088D57AC;
    case 462u: goto L_088D57BC;
    case 463u: goto L_088D57E4;
    case 464u: goto L_088D5800;
    case 465u: goto L_088D5810;
    case 466u: goto L_088D581C;
    case 467u: goto L_088D5838;
    case 468u: goto L_088D5848;
    case 469u: goto L_088D5858;
    case 470u: goto L_088D5868;
    case 471u: goto L_088D5890;
    case 472u: goto L_088D58AC;
    case 473u: goto L_088D58C4;
    case 474u: goto L_088D58D8;
    case 475u: goto L_088D58EC;
    case 476u: goto L_088D5904;
    case 477u: goto L_088D5918;
    case 478u: goto L_088D5920;
    case 479u: goto L_088D5938;
    case 480u: goto L_088D5950;
    case 481u: goto L_088D5968;
    case 482u: goto L_088D598C;
    case 483u: goto L_088D5994;
    case 484u: goto L_088D59AC;
    case 485u: goto L_088D59C4;
    case 486u: goto L_088D59D4;
    case 487u: goto L_088D59E4;
    case 488u: goto L_088D5A40;
    case 489u: goto L_088D5A50;
    case 490u: goto L_088D5A60;
    case 491u: goto L_088D5A70;
    case 492u: goto L_088D5A80;
    case 493u: goto L_088D5AA8;
    case 494u: goto L_088D5AC4;
    case 495u: goto L_088D5AD4;
    case 496u: goto L_088D5AE0;
    case 497u: goto L_088D5B14;
    case 498u: goto L_088D5B30;
    case 499u: goto L_088D5B48;
    case 500u: goto L_088D5B5C;
    case 501u: goto L_088D5B64;
    case 502u: goto L_088D5B7C;
    case 503u: goto L_088D5B90;
    case 504u: goto L_088D5BA4;
    case 505u: goto L_088D5BC0;
    case 506u: goto L_088D5BD8;
    case 507u: goto L_088D5BE8;
    case 508u: goto L_088D5BF8;
    case 509u: goto L_088D5C4C;
    case 510u: goto L_088D5C5C;
    case 511u: goto L_088D5C6C;
    case 512u: goto L_088D5C7C;
    case 513u: goto L_088D5C94;
    case 514u: goto L_088D5CA8;
    case 515u: goto L_088D5CB0;
    case 516u: goto L_088D5CC8;
    case 517u: goto L_088D5CDC;
    case 518u: goto L_088D5CF0;
    case 519u: goto L_088D5D0C;
    case 520u: goto L_088D5D24;
    case 521u: goto L_088D5D34;
    case 522u: goto L_088D5D44;
    case 523u: goto L_088D5D98;
    case 524u: goto L_088D5DA8;
    case 525u: goto L_088D5DB8;
    case 526u: goto L_088D5DC8;
    case 527u: goto L_088D5DD8;
    case 528u: goto L_088D5DFC;
    case 529u: goto L_088D5E18;
    case 530u: goto L_088D5E40;
    case 531u: goto L_088D5E58;
    case 532u: goto L_088D5E70;
    case 533u: goto L_088D5E84;
    case 534u: goto L_088D5E8C;
    case 535u: goto L_088D5EA4;
    case 536u: goto L_088D5EB8;
    case 537u: goto L_088D5ECC;
    case 538u: goto L_088D5EE8;
    case 539u: goto L_088D5F00;
    case 540u: goto L_088D5F10;
    case 541u: goto L_088D5F20;
    case 542u: goto L_088D5F74;
    case 543u: goto L_088D5F84;
    case 544u: goto L_088D5F94;
    case 545u: goto L_088D5FA4;
    case 546u: goto L_088D5FBC;
    case 547u: goto L_088D5FC4;
    case 548u: goto L_088D5FD0;
    case 549u: goto L_088D5FDC;
    case 550u: goto L_088D5FE4;
    case 551u: goto L_088D5FFC;
    case 552u: goto L_088D6014;
    case 553u: goto L_088D6028;
    case 554u: goto L_088D6030;
    case 555u: goto L_088D6048;
    case 556u: goto L_088D605C;
    case 557u: goto L_088D6070;
    case 558u: goto L_088D608C;
    case 559u: goto L_088D60A4;
    case 560u: goto L_088D60EC;
    case 561u: goto L_088D6104;
    case 562u: goto L_088D6114;
    case 563u: goto L_088D6124;
    case 564u: goto L_088D6170;
    case 565u: goto L_088D6180;
    case 566u: goto L_088D6190;
    case 567u: goto L_088D61A0;
    case 568u: goto L_088D61B0;
    case 569u: goto L_088D61C8;
    case 570u: goto L_088D61DC;
    case 571u: goto L_088D61E4;
    case 572u: goto L_088D61FC;
    case 573u: goto L_088D6210;
    case 574u: goto L_088D6224;
    case 575u: goto L_088D6240;
    case 576u: goto L_088D6258;
    case 577u: goto L_088D6268;
    case 578u: goto L_088D6278;
    case 579u: goto L_088D62C4;
    case 580u: goto L_088D62D4;
    case 581u: goto L_088D62E4;
    case 582u: goto L_088D62F4;
    case 583u: goto L_088D630C;
    case 584u: goto L_088D6320;
    case 585u: goto L_088D6328;
    case 586u: goto L_088D6340;
    case 587u: goto L_088D6354;
    case 588u: goto L_088D6368;
    case 589u: goto L_088D6384;
    case 590u: goto L_088D639C;
    case 591u: goto L_088D63AC;
    case 592u: goto L_088D63BC;
    case 593u: goto L_088D6408;
    case 594u: goto L_088D6418;
    case 595u: goto L_088D6428;
    case 596u: goto L_088D6438;
    case 597u: goto L_088D6450;
    case 598u: goto L_088D6464;
    case 599u: goto L_088D646C;
    case 600u: goto L_088D6484;
    case 601u: goto L_088D6498;
    case 602u: goto L_088D64AC;
    case 603u: goto L_088D64C8;
    case 604u: goto L_088D64E0;
    case 605u: goto L_088D6534;
    case 606u: goto L_088D654C;
    case 607u: goto L_088D655C;
    case 608u: goto L_088D656C;
    case 609u: goto L_088D65C0;
    case 610u: goto L_088D65D0;
    case 611u: goto L_088D65E0;
    case 612u: goto L_088D65F0;
    case 613u: goto L_088D6600;
    case 614u: goto L_088D6618;
    case 615u: goto L_088D662C;
    case 616u: goto L_088D6634;
    case 617u: goto L_088D664C;
    case 618u: goto L_088D6660;
    case 619u: goto L_088D6674;
    case 620u: goto L_088D6690;
    case 621u: goto L_088D66A8;
    case 622u: goto L_088D66B8;
    case 623u: goto L_088D66C8;
    case 624u: goto L_088D671C;
    case 625u: goto L_088D672C;
    case 626u: goto L_088D673C;
    case 627u: goto L_088D674C;
    case 628u: goto L_088D6764;
    case 629u: goto L_088D6778;
    case 630u: goto L_088D6780;
    case 631u: goto L_088D6798;
    case 632u: goto L_088D67B0;
    case 633u: goto L_088D67E8;
    case 634u: goto L_088D680C;
    case 635u: goto L_088D6814;
    case 636u: goto L_088D6820;
    case 637u: goto L_088D6828;
    case 638u: goto L_088D6834;
    case 639u: goto L_088D683C;
    case 640u: goto L_088D684C;
    case 641u: goto L_088D6858;
    case 642u: goto L_088D6860;
    case 643u: goto L_088D6868;
    case 644u: goto L_088D6878;
    case 645u: goto L_088D6888;
    case 646u: goto L_088D6894;
    case 647u: goto L_088D689C;
    case 648u: goto L_088D68A4;
    case 649u: goto L_088D68B4;
    case 650u: goto L_088D68C0;
    case 651u: goto L_088D68C8;
    case 652u: goto L_088D68E0;
    case 653u: goto L_088D68EC;
    case 654u: goto L_088D68F8;
    case 655u: goto L_088D6910;
    case 656u: goto L_088D6928;
    case 657u: goto L_088D6938;
    case 658u: goto L_088D6948;
    case 659u: goto L_088D69A4;
    case 660u: goto L_088D69B4;
    case 661u: goto L_088D69C4;
    case 662u: goto L_088D69D4;
    case 663u: goto L_088D69E4;
    case 664u: goto L_088D6A0C;
    case 665u: goto L_088D6A28;
    case 666u: goto L_088D6A38;
    case 667u: goto L_088D6A48;
    case 668u: goto L_088D6A58;
    case 669u: goto L_088D6A68;
    case 670u: goto L_088D6A78;
    case 671u: goto L_088D6A84;
    case 672u: goto L_088D6A98;
    case 673u: goto L_088D6AA4;
    case 674u: goto L_088D6AB8;
    case 675u: goto L_088D6AC4;
    case 676u: goto L_088D6AE0;
    case 677u: goto L_088D6AF0;
    case 678u: goto L_088D6B00;
    case 679u: goto L_088D6B0C;
    case 680u: goto L_088D6B24;
    case 681u: goto L_088D6B30;
    case 682u: goto L_088D6B64;
    case 683u: goto L_088D6B80;
    case 684u: goto L_088D6B98;
    case 685u: goto L_088D6BAC;
    case 686u: goto L_088D6BB4;
    case 687u: goto L_088D6BCC;
    case 688u: goto L_088D6BE4;
    case 689u: goto L_088D6BFC;
    case 690u: goto L_088D6C24;
    case 691u: goto L_088D6C30;
    case 692u: goto L_088D6C38;
    case 693u: goto L_088D6C40;
    case 694u: goto L_088D6C50;
    case 695u: goto L_088D6C68;
    case 696u: goto L_088D6C80;
    case 697u: goto L_088D6C90;
    case 698u: goto L_088D6CA0;
    case 699u: goto L_088D6CF4;
    case 700u: goto L_088D6D04;
    case 701u: goto L_088D6D14;
    case 702u: goto L_088D6D24;
    case 703u: goto L_088D6D48;
    case 704u: goto L_088D6D64;
    case 705u: goto L_088D6D8C;
    case 706u: goto L_088D6DA4;
    case 707u: goto L_088D6DBC;
    case 708u: goto L_088D6DC4;
    case 709u: goto L_088D6DD0;
    case 710u: goto L_088D6DDC;
    case 711u: goto L_088D6DE4;
    case 712u: goto L_088D6DFC;
    case 713u: goto L_088D6E14;
    case 714u: goto L_088D6E28;
    case 715u: goto L_088D6E30;
    case 716u: goto L_088D6E48;
    case 717u: goto L_088D6E5C;
    case 718u: goto L_088D6E70;
    case 719u: goto L_088D6E8C;
    case 720u: goto L_088D6EA4;
    case 721u: goto L_088D6EB4;
    case 722u: goto L_088D6EC4;
    case 723u: goto L_088D6F18;
    case 724u: goto L_088D6F28;
    case 725u: goto L_088D6F38;
    case 726u: goto L_088D6F48;
    case 727u: goto L_088D6F6C;
    case 728u: goto L_088D6F88;
    case 729u: goto L_088D6F98;
    case 730u: goto L_088D6FA8;
    case 731u: goto L_088D6FD0;
    case 732u: goto L_088D6FE8;
    case 733u: goto L_088D7000;
    case 734u: goto L_088D700C;
    case 735u: goto L_088D7014;
    case 736u: goto L_088D7028;
    case 737u: goto L_088D7034;
    case 738u: goto L_088D7048;
    case 739u: goto L_088D7054;
    case 740u: goto L_088D7064;
    case 741u: goto L_088D7068;
    case 742u: goto L_088D707C;
    case 743u: goto L_088D7094;
    case 744u: goto L_088D70AC;
    case 745u: goto L_088D70CC;
    case 746u: goto L_088D70D8;
    case 747u: goto L_088D70E0;
    case 748u: goto L_088D70F0;
    case 749u: goto L_088D70F8;
    case 750u: goto L_088D7108;
    case 751u: goto L_088D7110;
    case 752u: goto L_088D7120;
    case 753u: goto L_088D7138;
    case 754u: goto L_088D7150;
    case 755u: goto L_088D7158;
    case 756u: goto L_088D7164;
    case 757u: goto L_088D7170;
    case 758u: goto L_088D7178;
    case 759u: goto L_088D7190;
    case 760u: goto L_088D71A8;
    case 761u: goto L_088D71BC;
    case 762u: goto L_088D71C4;
    case 763u: goto L_088D71DC;
    case 764u: goto L_088D71F4;
    case 765u: goto L_088D71FC;
    case 766u: goto L_088D7224;
    case 767u: goto L_088D7230;
    case 768u: goto L_088D7238;
    case 769u: goto L_088D7240;
    case 770u: goto L_088D7250;
    case 771u: goto L_088D7260;
    case 772u: goto L_088D726C;
    case 773u: goto L_088D7274;
    case 774u: goto L_088D727C;
    case 775u: goto L_088D728C;
    case 776u: goto L_088D72A4;
    case 777u: goto L_088D72BC;
    case 778u: goto L_088D72CC;
    case 779u: goto L_088D7330;
    case 780u: goto L_088D7340;
    case 781u: goto L_088D7350;
    case 782u: goto L_088D7360;
    case 783u: goto L_088D7388;
    case 784u: goto L_088D73A4;
    case 785u: goto L_088D73B4;
    case 786u: goto L_088D73C8;
    case 787u: goto L_088D73DC;
    case 788u: goto L_088D73F0;
    case 789u: goto L_088D7404;
    case 790u: goto L_088D7414;
    case 791u: goto L_088D7424;
    case 792u: goto L_088D7434;
    case 793u: goto L_088D7444;
    case 794u: goto L_088D7454;
    case 795u: goto L_088D7464;
    case 796u: goto L_088D7478;
    case 797u: goto L_088D748C;
    case 798u: goto L_088D74A0;
    case 799u: goto L_088D74AC;
    case 800u: goto L_088D74D0;
    case 801u: goto L_088D74EC;
    case 802u: goto L_088D74F8;
    case 803u: goto L_088D751C;
    case 804u: goto L_088D7528;
    case 805u: goto L_088D754C;
    case 806u: goto L_088D7558;
    case 807u: goto L_088D7574;
    case 808u: goto L_088D7588;
    case 809u: goto L_088D759C;
    case 810u: goto L_088D75C8;
    case 811u: goto L_088D75DC;
    case 812u: goto L_088D75F0;
    case 813u: goto L_088D7604;
    case 814u: goto L_088D7618;
    case 815u: goto L_088D762C;
    case 816u: goto L_088D7640;
    case 817u: goto L_088D7654;
    case 818u: goto L_088D7680;
    case 819u: goto L_088D769C;
    case 820u: goto L_088D76B4;
    case 821u: goto L_088D76C8;
    case 822u: goto L_088D76D0;
    case 823u: goto L_088D76E8;
    case 824u: goto L_088D7700;
    case 825u: goto L_088D7714;
    case 826u: goto L_088D773C;
    case 827u: goto L_088D7754;
    case 828u: goto L_088D776C;
    case 829u: goto L_088D777C;
    case 830u: goto L_088D778C;
    case 831u: goto L_088D77E8;
    case 832u: goto L_088D77F8;
    case 833u: goto L_088D7808;
    case 834u: goto L_088D7818;
    case 835u: goto L_088D7828;
    case 836u: goto L_088D784C;
    case 837u: goto L_088D7868;
    case 838u: goto L_088D7878;
    case 839u: goto L_088D7888;
    case 840u: goto L_088D78B0;
    case 841u: goto L_088D78C8;
    case 842u: goto L_088D78E4;
    case 843u: goto L_088D78EC;
    case 844u: goto L_088D78F8;
    case 845u: goto L_088D790C;
    case 846u: goto L_088D7920;
    case 847u: goto L_088D7928;
    case 848u: goto L_088D7938;
    case 849u: goto L_088D795C;
    case 850u: goto L_088D7964;
    case 851u: goto L_088D796C;
    case 852u: goto L_088D7990;
    case 853u: goto L_088D79A4;
    case 854u: goto L_088D79BC;
    case 855u: goto L_088D79C8;
    case 856u: goto L_088D79D0;
    case 857u: goto L_088D79E4;
    case 858u: goto L_088D79F0;
    case 859u: goto L_088D7A04;
    case 860u: goto L_088D7A10;
    case 861u: goto L_088D7A20;
    case 862u: goto L_088D7A24;
    case 863u: goto L_088D7A38;
    case 864u: goto L_088D7A50;
    case 865u: goto L_088D7A68;
    case 866u: goto L_088D7A88;
    case 867u: goto L_088D7A94;
    case 868u: goto L_088D7A9C;
    case 869u: goto L_088D7AAC;
    case 870u: goto L_088D7AB4;
    case 871u: goto L_088D7AC4;
    case 872u: goto L_088D7ACC;
    case 873u: goto L_088D7ADC;
    case 874u: goto L_088D7AF4;
    case 875u: goto L_088D7B0C;
    case 876u: goto L_088D7B20;
    case 877u: goto L_088D7B28;
    case 878u: goto L_088D7B40;
    case 879u: goto L_088D7B58;
    case 880u: goto L_088D7B60;
    case 881u: goto L_088D7B84;
    case 882u: goto L_088D7B9C;
    case 883u: goto L_088D7BB4;
    case 884u: goto L_088D7BC4;
    case 885u: goto L_088D7C20;
    case 886u: goto L_088D7C30;
    case 887u: goto L_088D7C40;
    case 888u: goto L_088D7C50;
    case 889u: goto L_088D7C60;
    case 890u: goto L_088D7C7C;
    case 891u: goto L_088D7C84;
    case 892u: goto L_088D7C90;
    case 893u: goto L_088D7CA4;
    case 894u: goto L_088D7CB8;
    case 895u: goto L_088D7CC0;
    case 896u: goto L_088D7CD0;
    case 897u: goto L_088D7CF4;
    case 898u: goto L_088D7CFC;
    case 899u: goto L_088D7D04;
    case 900u: goto L_088D7D28;
    case 901u: goto L_088D7D3C;
    case 902u: goto L_088D7D54;
    case 903u: goto L_088D7D5C;
    case 904u: goto L_088D7D74;
    case 905u: goto L_088D7D8C;
    case 906u: goto L_088D7DA0;
    case 907u: goto L_088D7DB4;
    case 908u: goto L_088D7DCC;
    case 909u: goto L_088D7DE0;
    case 910u: goto L_088D7DE8;
    case 911u: goto L_088D7E00;
    case 912u: goto L_088D7E18;
    case 913u: goto L_088D7E2C;
    case 914u: goto L_088D7E54;
    case 915u: goto L_088D7E6C;
    case 916u: goto L_088D7E84;
    case 917u: goto L_088D7E94;
    case 918u: goto L_088D7EA4;
    case 919u: goto L_088D7F00;
    case 920u: goto L_088D7F10;
    case 921u: goto L_088D7F20;
    case 922u: goto L_088D7F30;
    case 923u: goto L_088D7F40;
    case 924u: goto L_088D7F64;
    case 925u: goto L_088D7F80;
    case 926u: goto L_088D7F90;
    case 927u: goto L_088D7FA0;
    case 928u: goto L_088D7FC8;
    case 929u: goto L_088D7FE0;
    case 930u: goto L_088D7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D4000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25192)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D400C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D401C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D402C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4040:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D404C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25248)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D405C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4068:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25256)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4078:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4084:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25264)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4094:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25276)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25284)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25292)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25324)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25372)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D40F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25380)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4104:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x088D4144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 399u, 0x088C6140u>(ctx, &aot_mem) && ctx.pc == 0x088D4144u) goto L_088D4144;
    return;
L_088D4144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4154:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4164:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25456)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4184:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25464)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4194:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D41A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D41B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D41C8;
      }
      goto L_088D41C0;
    }
L_088D41C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_088D41C8;
L_088D41C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D41D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D41E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D41F4;
      }
      goto L_088D41EC;
    }
L_088D41EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_088D41F4;
L_088D41F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D41FC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25696)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4214;
      }
      goto L_088D420C;
    }
L_088D420C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25696), 0u);
    goto L_088D4214;
L_088D4214:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D421C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25596)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D422C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25644)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D423C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25652)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D424C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25640)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D425C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D4274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D4274u) goto L_088D4274;
    return;
L_088D4274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4284:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4294:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28336)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D42A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25636)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D42B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D42C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D42D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D42ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D42ECu) goto L_088D42EC;
    return;
L_088D42EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D42FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28872)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D430C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D431C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D432C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25592)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D433C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25588)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D434C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25584)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D435C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25580)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D436C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D437C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25500)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D438C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25188)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D439C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24996)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24924)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24752)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24688)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D43F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4408:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4418:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24640)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4428:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4438:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4448:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4458:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23980)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4468:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4478:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4488:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4498:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D44A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23560)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D44B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D44C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D44D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D44E0:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4548;
      }
      goto L_088D44F4;
    }
L_088D44F4:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4528;
      }
      goto L_088D451C;
    }
L_088D451C:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4548;
      }
      goto L_088D4528;
    }
L_088D4528:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4540;
      }
      goto L_088D4534;
    }
L_088D4534:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4548;
      }
      goto L_088D4540;
    }
L_088D4540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4590;
      }
      goto L_088D4548;
    }
L_088D4548:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D44F4;
      }
      goto L_088D4554;
    }
L_088D4554:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4568;
      }
      goto L_088D455C;
    }
L_088D455C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4590;
      }
      goto L_088D4568;
    }
L_088D4568:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D458C;
      }
      goto L_088D4588;
    }
L_088D4588:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_088D458C;
L_088D458C:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    goto L_088D4590;
L_088D4590:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4598:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23544)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24192)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D45F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24608)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4608:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24680)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4618:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4628:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4648:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4658:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24484)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4668:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4678:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4688:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4698:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32120)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25184)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4720;
      }
      goto L_088D4714;
    }
L_088D4714:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D4720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4720u) goto L_088D4720;
    return;
L_088D4720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4798;
      }
      goto L_088D4750;
    }
L_088D4750:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4780;
      }
      goto L_088D475C;
    }
L_088D475C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4780;
      }
      goto L_088D4778;
    }
L_088D4778:
    ctx.set_gpr(31, 0x088D4780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4780u) goto L_088D4780;
    return;
L_088D4780:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D4798;
      }
      goto L_088D478C;
    }
L_088D478C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D4798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D4798u) goto L_088D4798;
    return;
L_088D4798:
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
L_088D47B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D481C;
      }
      goto L_088D47D4;
    }
L_088D47D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4804;
      }
      goto L_088D47E0;
    }
L_088D47E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4804;
      }
      goto L_088D47FC;
    }
L_088D47FC:
    ctx.set_gpr(31, 0x088D4804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4804u) goto L_088D4804;
    return;
L_088D4804:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D481C;
      }
      goto L_088D4810;
    }
L_088D4810:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D481Cu) goto L_088D481C;
    return;
L_088D481C:
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
L_088D4838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48A0;
      }
      goto L_088D4858;
    }
L_088D4858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4888;
      }
      goto L_088D4864;
    }
L_088D4864:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4888;
      }
      goto L_088D4880;
    }
L_088D4880:
    ctx.set_gpr(31, 0x088D4888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4888u) goto L_088D4888;
    return;
L_088D4888:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D48A0;
      }
      goto L_088D4894;
    }
L_088D4894:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D48A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D48A0u) goto L_088D48A0;
    return;
L_088D48A0:
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
L_088D48BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4924;
      }
      goto L_088D48DC;
    }
L_088D48DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D490C;
      }
      goto L_088D48E8;
    }
L_088D48E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D490C;
      }
      goto L_088D4904;
    }
L_088D4904:
    ctx.set_gpr(31, 0x088D490Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D490Cu) goto L_088D490C;
    return;
L_088D490C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D4924;
      }
      goto L_088D4918;
    }
L_088D4918:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D4924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D4924u) goto L_088D4924;
    return;
L_088D4924:
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
L_088D4940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49A8;
      }
      goto L_088D4960;
    }
L_088D4960:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4990;
      }
      goto L_088D496C;
    }
L_088D496C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4990;
      }
      goto L_088D4988;
    }
L_088D4988:
    ctx.set_gpr(31, 0x088D4990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4990u) goto L_088D4990;
    return;
L_088D4990:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D49A8;
      }
      goto L_088D499C;
    }
L_088D499C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D49A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D49A8u) goto L_088D49A8;
    return;
L_088D49A8:
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
L_088D49C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32202)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A10;
      }
      goto L_088D49D8;
    }
L_088D49D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32202), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x088D49E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 294u, 0x088F99A8u>(ctx, &aot_mem) && ctx.pc == 0x088D49E8u) goto L_088D49E8;
    return;
L_088D49E8:
    ctx.set_gpr(31, 0x088D49F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 577u, 0x088F3000u>(ctx, &aot_mem) && ctx.pc == 0x088D49F0u) goto L_088D49F0;
    return;
L_088D49F0:
    ctx.set_gpr(31, 0x088D49F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 244u, 0x088ED5B8u>(ctx, &aot_mem) && ctx.pc == 0x088D49F8u) goto L_088D49F8;
    return;
L_088D49F8:
    ctx.set_gpr(31, 0x088D4A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 576u, 0x088E6FACu>(ctx, &aot_mem) && ctx.pc == 0x088D4A00u) goto L_088D4A00;
    return;
L_088D4A00:
    ctx.set_gpr(31, 0x088D4A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 533u, 0x088E6C28u>(ctx, &aot_mem) && ctx.pc == 0x088D4A08u) goto L_088D4A08;
    return;
L_088D4A08:
    ctx.set_gpr(31, 0x088D4A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 498u, 0x088E690Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4A10u) goto L_088D4A10;
    return;
L_088D4A10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D4A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 416u, 0x088FE5A8u>(ctx, &aot_mem) && ctx.pc == 0x088D4A30u) goto L_088D4A30;
    return;
L_088D4A30:
    ctx.set_gpr(31, 0x088D4A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 389u, 0x088FE300u>(ctx, &aot_mem) && ctx.pc == 0x088D4A38u) goto L_088D4A38;
    return;
L_088D4A38:
    ctx.set_gpr(31, 0x088D4A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 354u, 0x088FDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4A40u) goto L_088D4A40;
    return;
L_088D4A40:
    ctx.set_gpr(31, 0x088D4A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 331u, 0x088FDD64u>(ctx, &aot_mem) && ctx.pc == 0x088D4A48u) goto L_088D4A48;
    return;
L_088D4A48:
    ctx.set_gpr(31, 0x088D4A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 304u, 0x088FDAF0u>(ctx, &aot_mem) && ctx.pc == 0x088D4A50u) goto L_088D4A50;
    return;
L_088D4A50:
    ctx.set_gpr(31, 0x088D4A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 275u, 0x088FD838u>(ctx, &aot_mem) && ctx.pc == 0x088D4A58u) goto L_088D4A58;
    return;
L_088D4A58:
    ctx.set_gpr(31, 0x088D4A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 214u, 0x088FD3E0u>(ctx, &aot_mem) && ctx.pc == 0x088D4A60u) goto L_088D4A60;
    return;
L_088D4A60:
    ctx.set_gpr(31, 0x088D4A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 192u, 0x088FD1A8u>(ctx, &aot_mem) && ctx.pc == 0x088D4A68u) goto L_088D4A68;
    return;
L_088D4A68:
    ctx.set_gpr(31, 0x088D4A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 166u, 0x088FCF54u>(ctx, &aot_mem) && ctx.pc == 0x088D4A70u) goto L_088D4A70;
    return;
L_088D4A70:
    ctx.set_gpr(31, 0x088D4A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 146u, 0x088FCD58u>(ctx, &aot_mem) && ctx.pc == 0x088D4A78u) goto L_088D4A78;
    return;
L_088D4A78:
    ctx.set_gpr(31, 0x088D4A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 56u, 0x088FC59Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4A80u) goto L_088D4A80;
    return;
L_088D4A80:
    ctx.set_gpr(31, 0x088D4A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 41u, 0x088FC420u>(ctx, &aot_mem) && ctx.pc == 0x088D4A88u) goto L_088D4A88;
    return;
L_088D4A88:
    ctx.set_gpr(31, 0x088D4A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 28u, 0x088FC2ECu>(ctx, &aot_mem) && ctx.pc == 0x088D4A90u) goto L_088D4A90;
    return;
L_088D4A90:
    ctx.set_gpr(31, 0x088D4A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 5u, 0x088FC04Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4A98u) goto L_088D4A98;
    return;
L_088D4A98:
    ctx.set_gpr(31, 0x088D4AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 704u, 0x088FBEC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4AA0u) goto L_088D4AA0;
    return;
L_088D4AA0:
    ctx.set_gpr(31, 0x088D4AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 690u, 0x088FBD64u>(ctx, &aot_mem) && ctx.pc == 0x088D4AA8u) goto L_088D4AA8;
    return;
L_088D4AA8:
    ctx.set_gpr(31, 0x088D4AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 676u, 0x088FBC20u>(ctx, &aot_mem) && ctx.pc == 0x088D4AB0u) goto L_088D4AB0;
    return;
L_088D4AB0:
    ctx.set_gpr(31, 0x088D4AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 653u, 0x088FB9F0u>(ctx, &aot_mem) && ctx.pc == 0x088D4AB8u) goto L_088D4AB8;
    return;
L_088D4AB8:
    ctx.set_gpr(31, 0x088D4AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 629u, 0x088FB794u>(ctx, &aot_mem) && ctx.pc == 0x088D4AC0u) goto L_088D4AC0;
    return;
L_088D4AC0:
    ctx.set_gpr(31, 0x088D4AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 611u, 0x088FB5A8u>(ctx, &aot_mem) && ctx.pc == 0x088D4AC8u) goto L_088D4AC8;
    return;
L_088D4AC8:
    ctx.set_gpr(31, 0x088D4AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 591u, 0x088FB3ACu>(ctx, &aot_mem) && ctx.pc == 0x088D4AD0u) goto L_088D4AD0;
    return;
L_088D4AD0:
    ctx.set_gpr(31, 0x088D4AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 580u, 0x088FB2A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4AD8u) goto L_088D4AD8;
    return;
L_088D4AD8:
    ctx.set_gpr(31, 0x088D4AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 556u, 0x088FB080u>(ctx, &aot_mem) && ctx.pc == 0x088D4AE0u) goto L_088D4AE0;
    return;
L_088D4AE0:
    ctx.set_gpr(31, 0x088D4AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 528u, 0x088FAE04u>(ctx, &aot_mem) && ctx.pc == 0x088D4AE8u) goto L_088D4AE8;
    return;
L_088D4AE8:
    ctx.set_gpr(31, 0x088D4AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 503u, 0x088FAC10u>(ctx, &aot_mem) && ctx.pc == 0x088D4AF0u) goto L_088D4AF0;
    return;
L_088D4AF0:
    ctx.set_gpr(31, 0x088D4AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 474u, 0x088FA970u>(ctx, &aot_mem) && ctx.pc == 0x088D4AF8u) goto L_088D4AF8;
    return;
L_088D4AF8:
    ctx.set_gpr(31, 0x088D4B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 453u, 0x088FA7A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4B00u) goto L_088D4B00;
    return;
L_088D4B00:
    ctx.set_gpr(31, 0x088D4B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 427u, 0x088FA550u>(ctx, &aot_mem) && ctx.pc == 0x088D4B08u) goto L_088D4B08;
    return;
L_088D4B08:
    ctx.set_gpr(31, 0x088D4B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 408u, 0x088FA394u>(ctx, &aot_mem) && ctx.pc == 0x088D4B10u) goto L_088D4B10;
    return;
L_088D4B10:
    ctx.set_gpr(31, 0x088D4B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 383u, 0x088FA134u>(ctx, &aot_mem) && ctx.pc == 0x088D4B18u) goto L_088D4B18;
    return;
L_088D4B18:
    ctx.set_gpr(31, 0x088D4B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 372u, 0x088FA02Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4B20u) goto L_088D4B20;
    return;
L_088D4B20:
    ctx.set_gpr(31, 0x088D4B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 352u, 0x088F9E88u>(ctx, &aot_mem) && ctx.pc == 0x088D4B28u) goto L_088D4B28;
    return;
L_088D4B28:
    ctx.set_gpr(31, 0x088D4B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 319u, 0x088F9BA8u>(ctx, &aot_mem) && ctx.pc == 0x088D4B30u) goto L_088D4B30;
    return;
L_088D4B30:
    ctx.set_gpr(31, 0x088D4B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 294u, 0x088F99A8u>(ctx, &aot_mem) && ctx.pc == 0x088D4B38u) goto L_088D4B38;
    return;
L_088D4B38:
    ctx.set_gpr(31, 0x088D4B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 283u, 0x088F98A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4B40u) goto L_088D4B40;
    return;
L_088D4B40:
    ctx.set_gpr(31, 0x088D4B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 263u, 0x088F96FCu>(ctx, &aot_mem) && ctx.pc == 0x088D4B48u) goto L_088D4B48;
    return;
L_088D4B48:
    ctx.set_gpr(31, 0x088D4B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 249u, 0x088F95B0u>(ctx, &aot_mem) && ctx.pc == 0x088D4B50u) goto L_088D4B50;
    return;
L_088D4B50:
    ctx.set_gpr(31, 0x088D4B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 235u, 0x088F9464u>(ctx, &aot_mem) && ctx.pc == 0x088D4B58u) goto L_088D4B58;
    return;
L_088D4B58:
    ctx.set_gpr(31, 0x088D4B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 215u, 0x088F92C0u>(ctx, &aot_mem) && ctx.pc == 0x088D4B60u) goto L_088D4B60;
    return;
L_088D4B60:
    ctx.set_gpr(31, 0x088D4B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 192u, 0x088F90DCu>(ctx, &aot_mem) && ctx.pc == 0x088D4B68u) goto L_088D4B68;
    return;
L_088D4B68:
    ctx.set_gpr(31, 0x088D4B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 178u, 0x088F8F90u>(ctx, &aot_mem) && ctx.pc == 0x088D4B70u) goto L_088D4B70;
    return;
L_088D4B70:
    ctx.set_gpr(31, 0x088D4B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 155u, 0x088F8DACu>(ctx, &aot_mem) && ctx.pc == 0x088D4B78u) goto L_088D4B78;
    return;
L_088D4B78:
    ctx.set_gpr(31, 0x088D4B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 127u, 0x088F8B30u>(ctx, &aot_mem) && ctx.pc == 0x088D4B80u) goto L_088D4B80;
    return;
L_088D4B80:
    ctx.set_gpr(31, 0x088D4B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 96u, 0x088F8874u>(ctx, &aot_mem) && ctx.pc == 0x088D4B88u) goto L_088D4B88;
    return;
L_088D4B88:
    ctx.set_gpr(31, 0x088D4B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 76u, 0x088F86D0u>(ctx, &aot_mem) && ctx.pc == 0x088D4B90u) goto L_088D4B90;
    return;
L_088D4B90:
    ctx.set_gpr(31, 0x088D4B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 54u, 0x088F84ACu>(ctx, &aot_mem) && ctx.pc == 0x088D4B98u) goto L_088D4B98;
    return;
L_088D4B98:
    ctx.set_gpr(31, 0x088D4BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 31u, 0x088F82C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4BA0u) goto L_088D4BA0;
    return;
L_088D4BA0:
    ctx.set_gpr(31, 0x088D4BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 9u, 0x088F80A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4BA8u) goto L_088D4BA8;
    return;
L_088D4BA8:
    ctx.set_gpr(31, 0x088D4BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 740u, 0x088F7EC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4BB0u) goto L_088D4BB0;
    return;
L_088D4BB0:
    ctx.set_gpr(31, 0x088D4BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 709u, 0x088F7C04u>(ctx, &aot_mem) && ctx.pc == 0x088D4BB8u) goto L_088D4BB8;
    return;
L_088D4BB8:
    ctx.set_gpr(31, 0x088D4BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 692u, 0x088F7A78u>(ctx, &aot_mem) && ctx.pc == 0x088D4BC0u) goto L_088D4BC0;
    return;
L_088D4BC0:
    ctx.set_gpr(31, 0x088D4BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 670u, 0x088F7854u>(ctx, &aot_mem) && ctx.pc == 0x088D4BC8u) goto L_088D4BC8;
    return;
L_088D4BC8:
    ctx.set_gpr(31, 0x088D4BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 646u, 0x088F7668u>(ctx, &aot_mem) && ctx.pc == 0x088D4BD0u) goto L_088D4BD0;
    return;
L_088D4BD0:
    ctx.set_gpr(31, 0x088D4BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 615u, 0x088F73ACu>(ctx, &aot_mem) && ctx.pc == 0x088D4BD8u) goto L_088D4BD8;
    return;
L_088D4BD8:
    ctx.set_gpr(31, 0x088D4BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 584u, 0x088F70F0u>(ctx, &aot_mem) && ctx.pc == 0x088D4BE0u) goto L_088D4BE0;
    return;
L_088D4BE0:
    ctx.set_gpr(31, 0x088D4BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 553u, 0x088F6E34u>(ctx, &aot_mem) && ctx.pc == 0x088D4BE8u) goto L_088D4BE8;
    return;
L_088D4BE8:
    ctx.set_gpr(31, 0x088D4BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 532u, 0x088F6C88u>(ctx, &aot_mem) && ctx.pc == 0x088D4BF0u) goto L_088D4BF0;
    return;
L_088D4BF0:
    ctx.set_gpr(31, 0x088D4BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 501u, 0x088F69CCu>(ctx, &aot_mem) && ctx.pc == 0x088D4BF8u) goto L_088D4BF8;
    return;
L_088D4BF8:
    ctx.set_gpr(31, 0x088D4C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 477u, 0x088F67E0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C00u) goto L_088D4C00;
    return;
L_088D4C00:
    ctx.set_gpr(31, 0x088D4C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 449u, 0x088F6564u>(ctx, &aot_mem) && ctx.pc == 0x088D4C08u) goto L_088D4C08;
    return;
L_088D4C08:
    ctx.set_gpr(31, 0x088D4C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 435u, 0x088F6418u>(ctx, &aot_mem) && ctx.pc == 0x088D4C10u) goto L_088D4C10;
    return;
L_088D4C10:
    ctx.set_gpr(31, 0x088D4C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 404u, 0x088F615Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4C18u) goto L_088D4C18;
    return;
L_088D4C18:
    ctx.set_gpr(31, 0x088D4C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 375u, 0x088F5EC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C20u) goto L_088D4C20;
    return;
L_088D4C20:
    ctx.set_gpr(31, 0x088D4C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 343u, 0x088F5BECu>(ctx, &aot_mem) && ctx.pc == 0x088D4C28u) goto L_088D4C28;
    return;
L_088D4C28:
    ctx.set_gpr(31, 0x088D4C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 313u, 0x088F5950u>(ctx, &aot_mem) && ctx.pc == 0x088D4C30u) goto L_088D4C30;
    return;
L_088D4C30:
    ctx.set_gpr(31, 0x088D4C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 230u, 0x088F53B0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C38u) goto L_088D4C38;
    return;
L_088D4C38:
    ctx.set_gpr(31, 0x088D4C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 195u, 0x088F5034u>(ctx, &aot_mem) && ctx.pc == 0x088D4C40u) goto L_088D4C40;
    return;
L_088D4C40:
    ctx.set_gpr(31, 0x088D4C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 177u, 0x088F4E80u>(ctx, &aot_mem) && ctx.pc == 0x088D4C48u) goto L_088D4C48;
    return;
L_088D4C48:
    ctx.set_gpr(31, 0x088D4C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 123u, 0x088F4A30u>(ctx, &aot_mem) && ctx.pc == 0x088D4C50u) goto L_088D4C50;
    return;
L_088D4C50:
    ctx.set_gpr(31, 0x088D4C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 632u, 0x088F3488u>(ctx, &aot_mem) && ctx.pc == 0x088D4C58u) goto L_088D4C58;
    return;
L_088D4C58:
    ctx.set_gpr(31, 0x088D4C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 597u, 0x088F31BCu>(ctx, &aot_mem) && ctx.pc == 0x088D4C60u) goto L_088D4C60;
    return;
L_088D4C60:
    ctx.set_gpr(31, 0x088D4C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 577u, 0x088F3000u>(ctx, &aot_mem) && ctx.pc == 0x088D4C68u) goto L_088D4C68;
    return;
L_088D4C68:
    ctx.set_gpr(31, 0x088D4C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 504u, 0x088F29D0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C70u) goto L_088D4C70;
    return;
L_088D4C70:
    ctx.set_gpr(31, 0x088D4C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 433u, 0x088F24A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C78u) goto L_088D4C78;
    return;
L_088D4C78:
    ctx.set_gpr(31, 0x088D4C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 391u, 0x088F2144u>(ctx, &aot_mem) && ctx.pc == 0x088D4C80u) goto L_088D4C80;
    return;
L_088D4C80:
    ctx.set_gpr(31, 0x088D4C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 362u, 0x088F1EB0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C88u) goto L_088D4C88;
    return;
L_088D4C88:
    ctx.set_gpr(31, 0x088D4C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 308u, 0x088F1A08u>(ctx, &aot_mem) && ctx.pc == 0x088D4C90u) goto L_088D4C90;
    return;
L_088D4C90:
    ctx.set_gpr(31, 0x088D4C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 282u, 0x088F17B4u>(ctx, &aot_mem) && ctx.pc == 0x088D4C98u) goto L_088D4C98;
    return;
L_088D4C98:
    ctx.set_gpr(31, 0x088D4CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 260u, 0x088F15D0u>(ctx, &aot_mem) && ctx.pc == 0x088D4CA0u) goto L_088D4CA0;
    return;
L_088D4CA0:
    ctx.set_gpr(31, 0x088D4CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 229u, 0x088F1314u>(ctx, &aot_mem) && ctx.pc == 0x088D4CA8u) goto L_088D4CA8;
    return;
L_088D4CA8:
    ctx.set_gpr(31, 0x088D4CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 120u, 0x088F0A44u>(ctx, &aot_mem) && ctx.pc == 0x088D4CB0u) goto L_088D4CB0;
    return;
L_088D4CB0:
    ctx.set_gpr(31, 0x088D4CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 96u, 0x088F0824u>(ctx, &aot_mem) && ctx.pc == 0x088D4CB8u) goto L_088D4CB8;
    return;
L_088D4CB8:
    ctx.set_gpr(31, 0x088D4CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 85u, 0x088F0728u>(ctx, &aot_mem) && ctx.pc == 0x088D4CC0u) goto L_088D4CC0;
    return;
L_088D4CC0:
    ctx.set_gpr(31, 0x088D4CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 56u, 0x088F0498u>(ctx, &aot_mem) && ctx.pc == 0x088D4CC8u) goto L_088D4CC8;
    return;
L_088D4CC8:
    ctx.set_gpr(31, 0x088D4CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 21u, 0x088F01BCu>(ctx, &aot_mem) && ctx.pc == 0x088D4CD0u) goto L_088D4CD0;
    return;
L_088D4CD0:
    ctx.set_gpr(31, 0x088D4CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 7u, 0x088F0074u>(ctx, &aot_mem) && ctx.pc == 0x088D4CD8u) goto L_088D4CD8;
    return;
L_088D4CD8:
    ctx.set_gpr(31, 0x088D4CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 717u, 0x088EFE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4CE0u) goto L_088D4CE0;
    return;
L_088D4CE0:
    ctx.set_gpr(31, 0x088D4CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 692u, 0x088EFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4CE8u) goto L_088D4CE8;
    return;
L_088D4CE8:
    ctx.set_gpr(31, 0x088D4CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 666u, 0x088EF9B8u>(ctx, &aot_mem) && ctx.pc == 0x088D4CF0u) goto L_088D4CF0;
    return;
L_088D4CF0:
    ctx.set_gpr(31, 0x088D4CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 629u, 0x088EF684u>(ctx, &aot_mem) && ctx.pc == 0x088D4CF8u) goto L_088D4CF8;
    return;
L_088D4CF8:
    ctx.set_gpr(31, 0x088D4D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 599u, 0x088EF3B0u>(ctx, &aot_mem) && ctx.pc == 0x088D4D00u) goto L_088D4D00;
    return;
L_088D4D00:
    ctx.set_gpr(31, 0x088D4D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 579u, 0x088EF1CCu>(ctx, &aot_mem) && ctx.pc == 0x088D4D08u) goto L_088D4D08;
    return;
L_088D4D08:
    ctx.set_gpr(31, 0x088D4D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 558u, 0x088EEFC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4D10u) goto L_088D4D10;
    return;
L_088D4D10:
    ctx.set_gpr(31, 0x088D4D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 529u, 0x088EECE8u>(ctx, &aot_mem) && ctx.pc == 0x088D4D18u) goto L_088D4D18;
    return;
L_088D4D18:
    ctx.set_gpr(31, 0x088D4D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 499u, 0x088EEA3Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4D20u) goto L_088D4D20;
    return;
L_088D4D20:
    ctx.set_gpr(31, 0x088D4D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 473u, 0x088EE808u>(ctx, &aot_mem) && ctx.pc == 0x088D4D28u) goto L_088D4D28;
    return;
L_088D4D28:
    ctx.set_gpr(31, 0x088D4D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 449u, 0x088EE5E4u>(ctx, &aot_mem) && ctx.pc == 0x088D4D30u) goto L_088D4D30;
    return;
L_088D4D30:
    ctx.set_gpr(31, 0x088D4D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 371u, 0x088EE120u>(ctx, &aot_mem) && ctx.pc == 0x088D4D38u) goto L_088D4D38;
    return;
L_088D4D38:
    ctx.set_gpr(31, 0x088D4D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EDEF4u>(ctx, &aot_mem) && ctx.pc == 0x088D4D40u) goto L_088D4D40;
    return;
L_088D4D40:
    ctx.set_gpr(31, 0x088D4D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 324u, 0x088EDCACu>(ctx, &aot_mem) && ctx.pc == 0x088D4D48u) goto L_088D4D48;
    return;
L_088D4D48:
    ctx.set_gpr(31, 0x088D4D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 298u, 0x088EDA98u>(ctx, &aot_mem) && ctx.pc == 0x088D4D50u) goto L_088D4D50;
    return;
L_088D4D50:
    ctx.set_gpr(31, 0x088D4D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 272u, 0x088ED854u>(ctx, &aot_mem) && ctx.pc == 0x088D4D58u) goto L_088D4D58;
    return;
L_088D4D58:
    ctx.set_gpr(31, 0x088D4D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 244u, 0x088ED5B8u>(ctx, &aot_mem) && ctx.pc == 0x088D4D60u) goto L_088D4D60;
    return;
L_088D4D60:
    ctx.set_gpr(31, 0x088D4D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 219u, 0x088ED340u>(ctx, &aot_mem) && ctx.pc == 0x088D4D68u) goto L_088D4D68;
    return;
L_088D4D68:
    ctx.set_gpr(31, 0x088D4D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 180u, 0x088ECFB0u>(ctx, &aot_mem) && ctx.pc == 0x088D4D70u) goto L_088D4D70;
    return;
L_088D4D70:
    ctx.set_gpr(31, 0x088D4D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 135u, 0x088ECB84u>(ctx, &aot_mem) && ctx.pc == 0x088D4D78u) goto L_088D4D78;
    return;
L_088D4D78:
    ctx.set_gpr(31, 0x088D4D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 102u, 0x088EC8A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4D80u) goto L_088D4D80;
    return;
L_088D4D80:
    ctx.set_gpr(31, 0x088D4D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 69u, 0x088EC5BCu>(ctx, &aot_mem) && ctx.pc == 0x088D4D88u) goto L_088D4D88;
    return;
L_088D4D88:
    ctx.set_gpr(31, 0x088D4D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 40u, 0x088EC2F4u>(ctx, &aot_mem) && ctx.pc == 0x088D4D90u) goto L_088D4D90;
    return;
L_088D4D90:
    ctx.set_gpr(31, 0x088D4D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 12u, 0x088EC0C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4D98u) goto L_088D4D98;
    return;
L_088D4D98:
    ctx.set_gpr(31, 0x088D4DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 813u, 0x088EBE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4DA0u) goto L_088D4DA0;
    return;
L_088D4DA0:
    ctx.set_gpr(31, 0x088D4DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 782u, 0x088EBB44u>(ctx, &aot_mem) && ctx.pc == 0x088D4DA8u) goto L_088D4DA8;
    return;
L_088D4DA8:
    ctx.set_gpr(31, 0x088D4DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 751u, 0x088EB8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4DB0u) goto L_088D4DB0;
    return;
L_088D4DB0:
    ctx.set_gpr(31, 0x088D4DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 720u, 0x088EB648u>(ctx, &aot_mem) && ctx.pc == 0x088D4DB8u) goto L_088D4DB8;
    return;
L_088D4DB8:
    ctx.set_gpr(31, 0x088D4DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 700u, 0x088EB4A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4DC0u) goto L_088D4DC0;
    return;
L_088D4DC0:
    ctx.set_gpr(31, 0x088D4DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 676u, 0x088EB278u>(ctx, &aot_mem) && ctx.pc == 0x088D4DC8u) goto L_088D4DC8;
    return;
L_088D4DC8:
    ctx.set_gpr(31, 0x088D4DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 644u, 0x088EAF94u>(ctx, &aot_mem) && ctx.pc == 0x088D4DD0u) goto L_088D4DD0;
    return;
L_088D4DD0:
    ctx.set_gpr(31, 0x088D4DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 609u, 0x088EAC68u>(ctx, &aot_mem) && ctx.pc == 0x088D4DD8u) goto L_088D4DD8;
    return;
L_088D4DD8:
    ctx.set_gpr(31, 0x088D4DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 540u, 0x088EA750u>(ctx, &aot_mem) && ctx.pc == 0x088D4DE0u) goto L_088D4DE0;
    return;
L_088D4DE0:
    ctx.set_gpr(31, 0x088D4DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 468u, 0x088EA254u>(ctx, &aot_mem) && ctx.pc == 0x088D4DE8u) goto L_088D4DE8;
    return;
L_088D4DE8:
    ctx.set_gpr(31, 0x088D4DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088E9DDCu>(ctx, &aot_mem) && ctx.pc == 0x088D4DF0u) goto L_088D4DF0;
    return;
L_088D4DF0:
    ctx.set_gpr(31, 0x088D4DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 379u, 0x088E9C48u>(ctx, &aot_mem) && ctx.pc == 0x088D4DF8u) goto L_088D4DF8;
    return;
L_088D4DF8:
    ctx.set_gpr(31, 0x088D4E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 368u, 0x088E9B40u>(ctx, &aot_mem) && ctx.pc == 0x088D4E00u) goto L_088D4E00;
    return;
L_088D4E00:
    ctx.set_gpr(31, 0x088D4E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 337u, 0x088E9884u>(ctx, &aot_mem) && ctx.pc == 0x088D4E08u) goto L_088D4E08;
    return;
L_088D4E08:
    ctx.set_gpr(31, 0x088D4E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 141u, 0x088E8C30u>(ctx, &aot_mem) && ctx.pc == 0x088D4E10u) goto L_088D4E10;
    return;
L_088D4E10:
    ctx.set_gpr(31, 0x088D4E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 101u, 0x088E8888u>(ctx, &aot_mem) && ctx.pc == 0x088D4E18u) goto L_088D4E18;
    return;
L_088D4E18:
    ctx.set_gpr(31, 0x088D4E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 66u, 0x088E85ACu>(ctx, &aot_mem) && ctx.pc == 0x088D4E20u) goto L_088D4E20;
    return;
L_088D4E20:
    ctx.set_gpr(31, 0x088D4E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 37u, 0x088E8310u>(ctx, &aot_mem) && ctx.pc == 0x088D4E28u) goto L_088D4E28;
    return;
L_088D4E28:
    ctx.set_gpr(31, 0x088D4E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 5u, 0x088E8058u>(ctx, &aot_mem) && ctx.pc == 0x088D4E30u) goto L_088D4E30;
    return;
L_088D4E30:
    ctx.set_gpr(31, 0x088D4E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 726u, 0x088E7CFCu>(ctx, &aot_mem) && ctx.pc == 0x088D4E38u) goto L_088D4E38;
    return;
L_088D4E38:
    ctx.set_gpr(31, 0x088D4E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 695u, 0x088E7A40u>(ctx, &aot_mem) && ctx.pc == 0x088D4E40u) goto L_088D4E40;
    return;
L_088D4E40:
    ctx.set_gpr(31, 0x088D4E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 652u, 0x088E76A4u>(ctx, &aot_mem) && ctx.pc == 0x088D4E48u) goto L_088D4E48;
    return;
L_088D4E48:
    ctx.set_gpr(31, 0x088D4E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 624u, 0x088E7440u>(ctx, &aot_mem) && ctx.pc == 0x088D4E50u) goto L_088D4E50;
    return;
L_088D4E50:
    ctx.set_gpr(31, 0x088D4E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 576u, 0x088E6FACu>(ctx, &aot_mem) && ctx.pc == 0x088D4E58u) goto L_088D4E58;
    return;
L_088D4E58:
    ctx.set_gpr(31, 0x088D4E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 556u, 0x088E6E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4E60u) goto L_088D4E60;
    return;
L_088D4E60:
    ctx.set_gpr(31, 0x088D4E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 533u, 0x088E6C28u>(ctx, &aot_mem) && ctx.pc == 0x088D4E68u) goto L_088D4E68;
    return;
L_088D4E68:
    ctx.set_gpr(31, 0x088D4E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 498u, 0x088E690Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4E70u) goto L_088D4E70;
    return;
L_088D4E70:
    ctx.set_gpr(31, 0x088D4E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 481u, 0x088E678Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4E78u) goto L_088D4E78;
    return;
L_088D4E78:
    ctx.set_gpr(31, 0x088D4E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 397u, 0x088E60B8u>(ctx, &aot_mem) && ctx.pc == 0x088D4E80u) goto L_088D4E80;
    return;
L_088D4E80:
    ctx.set_gpr(31, 0x088D4E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 373u, 0x088E5E44u>(ctx, &aot_mem) && ctx.pc == 0x088D4E88u) goto L_088D4E88;
    return;
L_088D4E88:
    ctx.set_gpr(31, 0x088D4E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 289u, 0x088E5790u>(ctx, &aot_mem) && ctx.pc == 0x088D4E90u) goto L_088D4E90;
    return;
L_088D4E90:
    ctx.set_gpr(31, 0x088D4E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 209u, 0x088E5090u>(ctx, &aot_mem) && ctx.pc == 0x088D4E98u) goto L_088D4E98;
    return;
L_088D4E98:
    ctx.set_gpr(31, 0x088D4EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 192u, 0x088E4F30u>(ctx, &aot_mem) && ctx.pc == 0x088D4EA0u) goto L_088D4EA0;
    return;
L_088D4EA0:
    ctx.set_gpr(31, 0x088D4EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 172u, 0x088E4D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4EA8u) goto L_088D4EA8;
    return;
L_088D4EA8:
    ctx.set_gpr(31, 0x088D4EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 144u, 0x088E4B08u>(ctx, &aot_mem) && ctx.pc == 0x088D4EB0u) goto L_088D4EB0;
    return;
L_088D4EB0:
    ctx.set_gpr(31, 0x088D4EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 86u, 0x088E4734u>(ctx, &aot_mem) && ctx.pc == 0x088D4EB8u) goto L_088D4EB8;
    return;
L_088D4EB8:
    ctx.set_gpr(31, 0x088D4EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 60u, 0x088E44D8u>(ctx, &aot_mem) && ctx.pc == 0x088D4EC0u) goto L_088D4EC0;
    return;
L_088D4EC0:
    ctx.set_gpr(31, 0x088D4EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4124u>(ctx, &aot_mem) && ctx.pc == 0x088D4EC8u) goto L_088D4EC8;
    return;
L_088D4EC8:
    ctx.set_gpr(31, 0x088D4ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 815u, 0x088E3FC4u>(ctx, &aot_mem) && ctx.pc == 0x088D4ED0u) goto L_088D4ED0;
    return;
L_088D4ED0:
    ctx.set_gpr(31, 0x088D4ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 789u, 0x088E3D68u>(ctx, &aot_mem) && ctx.pc == 0x088D4ED8u) goto L_088D4ED8;
    return;
L_088D4ED8:
    ctx.set_gpr(31, 0x088D4EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 763u, 0x088E3B18u>(ctx, &aot_mem) && ctx.pc == 0x088D4EE0u) goto L_088D4EE0;
    return;
L_088D4EE0:
    ctx.set_gpr(31, 0x088D4EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 742u, 0x088E3944u>(ctx, &aot_mem) && ctx.pc == 0x088D4EE8u) goto L_088D4EE8;
    return;
L_088D4EE8:
    ctx.set_gpr(31, 0x088D4EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 722u, 0x088E37A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4EF0u) goto L_088D4EF0;
    return;
L_088D4EF0:
    ctx.set_gpr(31, 0x088D4EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 679u, 0x088E33D4u>(ctx, &aot_mem) && ctx.pc == 0x088D4EF8u) goto L_088D4EF8;
    return;
L_088D4EF8:
    ctx.set_gpr(31, 0x088D4F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 624u, 0x088E2FC8u>(ctx, &aot_mem) && ctx.pc == 0x088D4F00u) goto L_088D4F00;
    return;
L_088D4F00:
    ctx.set_gpr(31, 0x088D4F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 597u, 0x088E2DACu>(ctx, &aot_mem) && ctx.pc == 0x088D4F08u) goto L_088D4F08;
    return;
L_088D4F08:
    ctx.set_gpr(31, 0x088D4F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 551u, 0x088E2988u>(ctx, &aot_mem) && ctx.pc == 0x088D4F10u) goto L_088D4F10;
    return;
L_088D4F10:
    ctx.set_gpr(31, 0x088D4F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 498u, 0x088E258Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4F18u) goto L_088D4F18;
    return;
L_088D4F18:
    ctx.set_gpr(31, 0x088D4F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 466u, 0x088E22D0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F20u) goto L_088D4F20;
    return;
L_088D4F20:
    ctx.set_gpr(31, 0x088D4F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 348u, 0x088E19F0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F28u) goto L_088D4F28;
    return;
L_088D4F28:
    ctx.set_gpr(31, 0x088D4F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 235u, 0x088E1254u>(ctx, &aot_mem) && ctx.pc == 0x088D4F30u) goto L_088D4F30;
    return;
L_088D4F30:
    ctx.set_gpr(31, 0x088D4F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 102u, 0x088E09C0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F38u) goto L_088D4F38;
    return;
L_088D4F38:
    ctx.set_gpr(31, 0x088D4F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 86u, 0x088E0838u>(ctx, &aot_mem) && ctx.pc == 0x088D4F40u) goto L_088D4F40;
    return;
L_088D4F40:
    ctx.set_gpr(31, 0x088D4F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 72u, 0x088E06F4u>(ctx, &aot_mem) && ctx.pc == 0x088D4F48u) goto L_088D4F48;
    return;
L_088D4F48:
    ctx.set_gpr(31, 0x088D4F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 57u, 0x088E05A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F50u) goto L_088D4F50;
    return;
L_088D4F50:
    ctx.set_gpr(31, 0x088D4F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 36u, 0x088E0364u>(ctx, &aot_mem) && ctx.pc == 0x088D4F58u) goto L_088D4F58;
    return;
L_088D4F58:
    ctx.set_gpr(31, 0x088D4F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 22u, 0x088E0218u>(ctx, &aot_mem) && ctx.pc == 0x088D4F60u) goto L_088D4F60;
    return;
L_088D4F60:
    ctx.set_gpr(31, 0x088D4F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 2u, 0x088E0014u>(ctx, &aot_mem) && ctx.pc == 0x088D4F68u) goto L_088D4F68;
    return;
L_088D4F68:
    ctx.set_gpr(31, 0x088D4F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 685u, 0x088DF894u>(ctx, &aot_mem) && ctx.pc == 0x088D4F70u) goto L_088D4F70;
    return;
L_088D4F70:
    ctx.set_gpr(31, 0x088D4F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 601u, 0x088DF1D0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F78u) goto L_088D4F78;
    return;
L_088D4F78:
    ctx.set_gpr(31, 0x088D4F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 514u, 0x088DEAC8u>(ctx, &aot_mem) && ctx.pc == 0x088D4F80u) goto L_088D4F80;
    return;
L_088D4F80:
    ctx.set_gpr(31, 0x088D4F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 430u, 0x088DE400u>(ctx, &aot_mem) && ctx.pc == 0x088D4F88u) goto L_088D4F88;
    return;
L_088D4F88:
    ctx.set_gpr(31, 0x088D4F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 397u, 0x088DE138u>(ctx, &aot_mem) && ctx.pc == 0x088D4F90u) goto L_088D4F90;
    return;
L_088D4F90:
    ctx.set_gpr(31, 0x088D4F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 360u, 0x088DDDF4u>(ctx, &aot_mem) && ctx.pc == 0x088D4F98u) goto L_088D4F98;
    return;
L_088D4F98:
    ctx.set_gpr(31, 0x088D4FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 314u, 0x088DD9C8u>(ctx, &aot_mem) && ctx.pc == 0x088D4FA0u) goto L_088D4FA0;
    return;
L_088D4FA0:
    ctx.set_gpr(31, 0x088D4FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 212u, 0x088DD140u>(ctx, &aot_mem) && ctx.pc == 0x088D4FA8u) goto L_088D4FA8;
    return;
L_088D4FA8:
    ctx.set_gpr(31, 0x088D4FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 128u, 0x088DCA78u>(ctx, &aot_mem) && ctx.pc == 0x088D4FB0u) goto L_088D4FB0;
    return;
L_088D4FB0:
    ctx.set_gpr(31, 0x088D4FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 12u, 0x088DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x088D4FB8u) goto L_088D4FB8;
    return;
L_088D4FB8:
    ctx.set_gpr(31, 0x088D4FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 685u, 0x088DB8C0u>(ctx, &aot_mem) && ctx.pc == 0x088D4FC0u) goto L_088D4FC0;
    return;
L_088D4FC0:
    ctx.set_gpr(31, 0x088D4FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 666u, 0x088DB6FCu>(ctx, &aot_mem) && ctx.pc == 0x088D4FC8u) goto L_088D4FC8;
    return;
L_088D4FC8:
    ctx.set_gpr(31, 0x088D4FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 495u, 0x088DA8FCu>(ctx, &aot_mem) && ctx.pc == 0x088D4FD0u) goto L_088D4FD0;
    return;
L_088D4FD0:
    ctx.set_gpr(31, 0x088D4FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 463u, 0x088DA650u>(ctx, &aot_mem) && ctx.pc == 0x088D4FD8u) goto L_088D4FD8;
    return;
L_088D4FD8:
    ctx.set_gpr(31, 0x088D4FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 426u, 0x088DA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4FE0u) goto L_088D4FE0;
    return;
L_088D4FE0:
    ctx.set_gpr(31, 0x088D4FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 342u, 0x088D9C44u>(ctx, &aot_mem) && ctx.pc == 0x088D4FE8u) goto L_088D4FE8;
    return;
L_088D4FE8:
    ctx.set_gpr(31, 0x088D4FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 309u, 0x088D997Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4FF0u) goto L_088D4FF0;
    return;
L_088D4FF0:
    ctx.set_gpr(31, 0x088D4FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 272u, 0x088D9638u>(ctx, &aot_mem) && ctx.pc == 0x088D4FF8u) goto L_088D4FF8;
    return;
L_088D4FF8:
    ctx.set_gpr(31, 0x088D5000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 180u, 0x088D8E94u>(ctx, &aot_mem) && ctx.pc == 0x088D5000u) goto L_088D5000;
    return;
L_088D5000:
    ctx.set_gpr(31, 0x088D5008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 150u, 0x088D8C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5008u) goto L_088D5008;
    return;
L_088D5008:
    ctx.set_gpr(31, 0x088D5010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 113u, 0x088D88C8u>(ctx, &aot_mem) && ctx.pc == 0x088D5010u) goto L_088D5010;
    return;
L_088D5010:
    ctx.set_gpr(31, 0x088D5018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 65u, 0x088D84C8u>(ctx, &aot_mem) && ctx.pc == 0x088D5018u) goto L_088D5018;
    return;
L_088D5018:
    ctx.set_gpr(31, 0x088D5020u);
    // nop
    goto L_088D7E6C;
L_088D5020:
    ctx.set_gpr(31, 0x088D5028u);
    // nop
    goto L_088D7754;
L_088D5028:
    ctx.set_gpr(31, 0x088D5030u);
    // nop
    goto L_088D6E8C;
L_088D5030:
    ctx.set_gpr(31, 0x088D5038u);
    // nop
    goto L_088D6C68;
L_088D5038:
    ctx.set_gpr(31, 0x088D5040u);
    // nop
    goto L_088D6910;
L_088D5040:
    ctx.set_gpr(31, 0x088D5048u);
    // nop
    goto L_088D6690;
L_088D5048:
    ctx.set_gpr(31, 0x088D5050u);
    // nop
    goto L_088D6534;
L_088D5050:
    ctx.set_gpr(31, 0x088D5058u);
    // nop
    goto L_088D6384;
L_088D5058:
    ctx.set_gpr(31, 0x088D5060u);
    // nop
    goto L_088D6240;
L_088D5060:
    ctx.set_gpr(31, 0x088D5068u);
    // nop
    goto L_088D60EC;
L_088D5068:
    ctx.set_gpr(31, 0x088D5070u);
    // nop
    goto L_088D5EE8;
L_088D5070:
    ctx.set_gpr(31, 0x088D5078u);
    // nop
    goto L_088D5D0C;
L_088D5078:
    ctx.set_gpr(31, 0x088D5080u);
    // nop
    goto L_088D5BC0;
L_088D5080:
    ctx.set_gpr(31, 0x088D5088u);
    // nop
    goto L_088D59AC;
L_088D5088:
    ctx.set_gpr(31, 0x088D5090u);
    // nop
    goto L_088D56E8;
L_088D5090:
    ctx.set_gpr(31, 0x088D5098u);
    // nop
    goto L_088D542C;
L_088D5098:
    ctx.set_gpr(31, 0x088D50A0u);
    // nop
    goto L_088D5220;
L_088D50A0:
    ctx.set_gpr(31, 0x088D50A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 68u, 0x088F45FCu>(ctx, &aot_mem) && ctx.pc == 0x088D50A8u) goto L_088D50A8;
    return;
L_088D50A8:
    ctx.set_gpr(31, 0x088D50B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 36u, 0x088F4320u>(ctx, &aot_mem) && ctx.pc == 0x088D50B0u) goto L_088D50B0;
    return;
L_088D50B0:
    ctx.set_gpr(31, 0x088D50B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 7u, 0x088F406Cu>(ctx, &aot_mem) && ctx.pc == 0x088D50B8u) goto L_088D50B8;
    return;
L_088D50B8:
    ctx.set_gpr(31, 0x088D50C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 732u, 0x088F3DA8u>(ctx, &aot_mem) && ctx.pc == 0x088D50C0u) goto L_088D50C0;
    return;
L_088D50C0:
    ctx.set_gpr(31, 0x088D50C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 704u, 0x088F3B24u>(ctx, &aot_mem) && ctx.pc == 0x088D50C8u) goto L_088D50C8;
    return;
L_088D50C8:
    ctx.set_gpr(31, 0x088D50D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 683u, 0x088F3958u>(ctx, &aot_mem) && ctx.pc == 0x088D50D0u) goto L_088D50D0;
    return;
L_088D50D0:
    ctx.set_gpr(31, 0x088D50D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 320u, 0x088E5A58u>(ctx, &aot_mem) && ctx.pc == 0x088D50D8u) goto L_088D50D8;
    return;
L_088D50D8:
    ctx.set_gpr(31, 0x088D50E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 278u, 0x088E5688u>(ctx, &aot_mem) && ctx.pc == 0x088D50E0u) goto L_088D50E0;
    return;
L_088D50E0:
    ctx.set_gpr(31, 0x088D50E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 250u, 0x088E540Cu>(ctx, &aot_mem) && ctx.pc == 0x088D50E8u) goto L_088D50E8;
    return;
L_088D50E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D50F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26388)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5124;
      }
      goto L_088D5110;
    }
L_088D5110:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D512C;
      }
      goto L_088D5124;
    }
L_088D5124:
    ctx.set_gpr(31, 0x088D512Cu);
    // nop
    goto L_088D5220;
L_088D512C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26388)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D515Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D515Cu) goto L_088D515C;
    return;
L_088D515C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x088D5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5178u) goto L_088D5178;
    return;
L_088D5178:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51B4;
      }
      goto L_088D51A0;
    }
L_088D51A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088D51ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D51ACu) goto L_088D51AC;
    return;
L_088D51AC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D51B4;
L_088D51B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51CC;
      }
      goto L_088D51BC;
    }
L_088D51BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D51CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D51CCu) goto L_088D51CC;
    return;
L_088D51CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51F0;
      }
      goto L_088D51DC;
    }
L_088D51DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D51E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D51E8u) goto L_088D51E8;
    return;
L_088D51E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D51F0;
L_088D51F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5208;
      }
      goto L_088D51F8;
    }
L_088D51F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D5208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D5208u) goto L_088D5208;
    return;
L_088D5208:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21064));
    ctx.set_gpr(31, 0x088D5238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5238u) goto L_088D5238;
    return;
L_088D5238:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5258u);
    // nop
    goto L_088D49C4;
L_088D5258:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26388));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21180));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20248));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20804));
    ctx.set_gpr(31, 0x088D52ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D52ACu) goto L_088D52AC;
    return;
L_088D52AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D52BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D52CCu);
    // nop
    goto L_088D50F8;
L_088D52CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D52DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26388)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D5300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D5300u) goto L_088D5300;
    return;
L_088D5300:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20268));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088D531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D531Cu) goto L_088D531C;
    return;
L_088D531C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D532Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D532Cu) goto L_088D532C;
    return;
L_088D532C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D533Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D533Cu) goto L_088D533C;
    return;
L_088D533C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D534Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D534Cu) goto L_088D534C;
    return;
L_088D534C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D535Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D535Cu) goto L_088D535C;
    return;
L_088D535C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20332));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20352));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20372));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D5384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5384u) goto L_088D5384;
    return;
L_088D5384:
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
L_088D539C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26412)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53C8;
      }
      goto L_088D53B4;
    }
L_088D53B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D53D0;
      }
      goto L_088D53C8;
    }
L_088D53C8:
    ctx.set_gpr(31, 0x088D53D0u);
    // nop
    goto L_088D542C;
L_088D53D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D53E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D53FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088D53FCu) goto L_088D53FC;
    return;
L_088D53FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20284));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D5410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5410u) goto L_088D5410;
    return;
L_088D5410:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D542C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21588));
    ctx.set_gpr(31, 0x088D5444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5444u) goto L_088D5444;
    return;
L_088D5444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5464u);
    // nop
    goto L_088D49C4;
L_088D5464:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26412));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21704));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20400));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21480));
    ctx.set_gpr(31, 0x088D54B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D54B8u) goto L_088D54B8;
    return;
L_088D54B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D54C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D54D8u);
    // nop
    goto L_088D539C;
L_088D54D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D54E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5514;
      }
      goto L_088D5500;
    }
L_088D5500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D551C;
      }
      goto L_088D5514;
    }
L_088D5514:
    ctx.set_gpr(31, 0x088D551Cu);
    // nop
    goto L_088D56E8;
L_088D551C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D554Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D554Cu) goto L_088D554C;
    return;
L_088D554C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088D5578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5578u) goto L_088D5578;
    return;
L_088D5578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55B4;
      }
      goto L_088D55A0;
    }
L_088D55A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088D55ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D55ACu) goto L_088D55AC;
    return;
L_088D55AC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D55B4;
L_088D55B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55CC;
      }
      goto L_088D55BC;
    }
L_088D55BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D55CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D55CCu) goto L_088D55CC;
    return;
L_088D55CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55F0;
      }
      goto L_088D55DC;
    }
L_088D55DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088D55E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D55E8u) goto L_088D55E8;
    return;
L_088D55E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D55F0;
L_088D55F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5608;
      }
      goto L_088D55F8;
    }
L_088D55F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D5608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D5608u) goto L_088D5608;
    return;
L_088D5608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D561C;
      }
      goto L_088D5614;
    }
L_088D5614:
    ctx.set_gpr(31, 0x088D561Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D561Cu) goto L_088D561C;
    return;
L_088D561C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x088D5634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5634u) goto L_088D5634;
    return;
L_088D5634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x088D5640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5640u) goto L_088D5640;
    return;
L_088D5640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088D564Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D564Cu) goto L_088D564C;
    return;
L_088D564C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56CC;
      }
      goto L_088D5684;
    }
L_088D5684:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56B4;
      }
      goto L_088D5690;
    }
L_088D5690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D56B4;
      }
      goto L_088D56AC;
    }
L_088D56AC:
    ctx.set_gpr(31, 0x088D56B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D56B4u) goto L_088D56B4;
    return;
L_088D56B4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D56CC;
      }
      goto L_088D56C0;
    }
L_088D56C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D56CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088D56CCu) goto L_088D56CC;
    return;
L_088D56CC:
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
L_088D56E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22288));
    ctx.set_gpr(31, 0x088D5700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5700u) goto L_088D5700;
    return;
L_088D5700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5720u);
    // nop
    goto L_088D49C4;
L_088D5720:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22460));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26416));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9652));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22444));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22412));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20432));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21812));
    ctx.set_gpr(31, 0x088D577Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D577Cu) goto L_088D577C;
    return;
L_088D577C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D578C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D579Cu);
    // nop
    goto L_088D54E8;
L_088D579C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D57AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D57BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26416)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D57E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D57E4u) goto L_088D57E4;
    return;
L_088D57E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20452));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088D5800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D5800u) goto L_088D5800;
    return;
L_088D5800:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D5810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5810u) goto L_088D5810;
    return;
L_088D5810:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D581Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088D581Cu) goto L_088D581C;
    return;
L_088D581C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D5838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5838u) goto L_088D5838;
    return;
L_088D5838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D5848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D5848u) goto L_088D5848;
    return;
L_088D5848:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D5858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5858u) goto L_088D5858;
    return;
L_088D5858:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D5868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D5868u) goto L_088D5868;
    return;
L_088D5868:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20484));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20496));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20508));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D5890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5890u) goto L_088D5890;
    return;
L_088D5890:
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
L_088D58AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D58C4u);
    // nop
    goto L_088D59AC;
L_088D58C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D58D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D58D8u) goto L_088D58D8;
    return;
L_088D58D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D58EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5918;
      }
      goto L_088D5904;
    }
L_088D5904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5920;
      }
      goto L_088D5918;
    }
L_088D5918:
    ctx.set_gpr(31, 0x088D5920u);
    // nop
    goto L_088D59AC;
L_088D5920:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D5950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D5950u) goto L_088D5950;
    return;
L_088D5950:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20184));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088D5968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5968u) goto L_088D5968;
    return;
L_088D5968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20184));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5994;
      }
      goto L_088D598C;
    }
L_088D598C:
    ctx.set_gpr(31, 0x088D5994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D5994u) goto L_088D5994;
    return;
L_088D5994:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D59AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22996));
    ctx.set_gpr(31, 0x088D59C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D59C4u) goto L_088D59C4;
    return;
L_088D59C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D59D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D59E4u);
    // nop
    goto L_088D49C4;
L_088D59E4:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26432));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23120));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20528));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(22840));
    ctx.set_gpr(31, 0x088D5A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D5A40u) goto L_088D5A40;
    return;
L_088D5A40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5A50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5A60u);
    // nop
    goto L_088D58EC;
L_088D5A60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5A70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D5AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D5AA8u) goto L_088D5AA8;
    return;
L_088D5AA8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20548));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D5AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D5AC4u) goto L_088D5AC4;
    return;
L_088D5AC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D5AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5AD4u) goto L_088D5AD4;
    return;
L_088D5AD4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D5AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088D5AE0u) goto L_088D5AE0;
    return;
L_088D5AE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20564));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20568));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D5B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5B14u) goto L_088D5B14;
    return;
L_088D5B14:
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
L_088D5B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26440)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B5C;
      }
      goto L_088D5B48;
    }
L_088D5B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B64;
      }
      goto L_088D5B5C;
    }
L_088D5B5C:
    ctx.set_gpr(31, 0x088D5B64u);
    // nop
    goto L_088D5BC0;
L_088D5B64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26440)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5B7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D5B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5B90u) goto L_088D5B90;
    return;
L_088D5B90:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D5BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5BA4u) goto L_088D5BA4;
    return;
L_088D5BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(31, 0x088D5BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5BD8u) goto L_088D5BD8;
    return;
L_088D5BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5BF8u);
    // nop
    goto L_088D49C4;
L_088D5BF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26440));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23644));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20584));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23420));
    ctx.set_gpr(31, 0x088D5C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D5C4Cu) goto L_088D5C4C;
    return;
L_088D5C4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5C6Cu);
    // nop
    goto L_088D5B30;
L_088D5C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5CA8;
      }
      goto L_088D5C94;
    }
L_088D5C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5CB0;
      }
      goto L_088D5CA8;
    }
L_088D5CA8:
    ctx.set_gpr(31, 0x088D5CB0u);
    // nop
    goto L_088D5D0C;
L_088D5CB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5CC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D5CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x088D5CDCu) goto L_088D5CDC;
    return;
L_088D5CDC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D5CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5CF0u) goto L_088D5CF0;
    return;
L_088D5CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5D0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23860));
    ctx.set_gpr(31, 0x088D5D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5D24u) goto L_088D5D24;
    return;
L_088D5D24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5D34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5D44u);
    // nop
    goto L_088D49C4;
L_088D5D44:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26444));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24008));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23976));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20608));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23752));
    ctx.set_gpr(31, 0x088D5D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D5D98u) goto L_088D5D98;
    return;
L_088D5D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5DA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5DB8u);
    // nop
    goto L_088D5C7C;
L_088D5DB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5DC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26440)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5DD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D5DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D5DFCu) goto L_088D5DFC;
    return;
L_088D5DFC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20628));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D5E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D5E18u) goto L_088D5E18;
    return;
L_088D5E18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20648));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20652));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20656));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D5E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5E40u) goto L_088D5E40;
    return;
L_088D5E40:
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
L_088D5E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26452)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5E84;
      }
      goto L_088D5E70;
    }
L_088D5E70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5E8C;
      }
      goto L_088D5E84;
    }
L_088D5E84:
    ctx.set_gpr(31, 0x088D5E8Cu);
    // nop
    goto L_088D5EE8;
L_088D5E8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26452)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5EA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D5EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5EB8u) goto L_088D5EB8;
    return;
L_088D5EB8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D5ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5ECCu) goto L_088D5ECC;
    return;
L_088D5ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24336));
    ctx.set_gpr(31, 0x088D5F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D5F00u) goto L_088D5F00;
    return;
L_088D5F00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5F20u);
    // nop
    goto L_088D49C4;
L_088D5F20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20660));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26452));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24452));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20668));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24228));
    ctx.set_gpr(31, 0x088D5F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D5F74u) goto L_088D5F74;
    return;
L_088D5F74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D5F94u);
    // nop
    goto L_088D5E58;
L_088D5F94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26456)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5FE4;
      }
      goto L_088D5FBC;
    }
L_088D5FBC:
    ctx.set_gpr(31, 0x088D5FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D5FC4u) goto L_088D5FC4;
    return;
L_088D5FC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D5FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D5FD0u) goto L_088D5FD0;
    return;
L_088D5FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D5FDCu);
    // nop
    goto L_088D6FE8;
L_088D5FDC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26456), ctx.gpr[2]);
    goto L_088D5FE4;
L_088D5FE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26456)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5FFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26456)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6028;
      }
      goto L_088D6014;
    }
L_088D6014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6030;
      }
      goto L_088D6028;
    }
L_088D6028:
    ctx.set_gpr(31, 0x088D6030u);
    // nop
    goto L_088D60EC;
L_088D6030:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26456)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6048:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D605Cu);
    // nop
    goto L_088D608C;
L_088D605C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D6070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6070u) goto L_088D6070;
    return;
L_088D6070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D608C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D60A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D60A4u) goto L_088D60A4;
    return;
L_088D60A4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15276));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6088));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20080));
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
L_088D60EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24852));
    ctx.set_gpr(31, 0x088D6104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D6104u) goto L_088D6104;
    return;
L_088D6104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6124u);
    // nop
    goto L_088D49C4;
L_088D6124:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26456));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23860));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24992));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24960));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20692));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24648));
    ctx.set_gpr(31, 0x088D6170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D6170u) goto L_088D6170;
    return;
L_088D6170:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6190u);
    // nop
    goto L_088D5FFC;
L_088D6190:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D61A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D61B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26460)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D61DC;
      }
      goto L_088D61C8;
    }
L_088D61C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D61E4;
      }
      goto L_088D61DC;
    }
L_088D61DC:
    ctx.set_gpr(31, 0x088D61E4u);
    // nop
    goto L_088D6240;
L_088D61E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26460)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D61FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D6210u);
    // nop
    goto L_088D608C;
L_088D6210:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D6224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6224u) goto L_088D6224;
    return;
L_088D6224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25192));
    ctx.set_gpr(31, 0x088D6258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D6258u) goto L_088D6258;
    return;
L_088D6258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6278u);
    // nop
    goto L_088D49C4;
L_088D6278:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26460));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23860));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24992));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25300));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20716));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25084));
    ctx.set_gpr(31, 0x088D62C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D62C4u) goto L_088D62C4;
    return;
L_088D62C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D62D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D62E4u);
    // nop
    goto L_088D61B0;
L_088D62E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D62F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26464)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6320;
      }
      goto L_088D630C;
    }
L_088D630C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6328;
      }
      goto L_088D6320;
    }
L_088D6320:
    ctx.set_gpr(31, 0x088D6328u);
    // nop
    goto L_088D6384;
L_088D6328:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26464)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D6354u);
    // nop
    goto L_088D608C;
L_088D6354:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D6368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6368u) goto L_088D6368;
    return;
L_088D6368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25516));
    ctx.set_gpr(31, 0x088D639Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D639Cu) goto L_088D639C;
    return;
L_088D639C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D63AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D63BCu);
    // nop
    goto L_088D49C4;
L_088D63BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26464));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23860));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24992));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25624));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20748));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25408));
    ctx.set_gpr(31, 0x088D6408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D6408u) goto L_088D6408;
    return;
L_088D6408:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6428u);
    // nop
    goto L_088D62F4;
L_088D6428:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6438:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26468)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6464;
      }
      goto L_088D6450;
    }
L_088D6450:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D646C;
      }
      goto L_088D6464;
    }
L_088D6464:
    ctx.set_gpr(31, 0x088D646Cu);
    // nop
    goto L_088D6534;
L_088D646C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26468)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D6498u);
    // nop
    goto L_088D64C8;
L_088D6498:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D64ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D64ACu) goto L_088D64AC;
    return;
L_088D64AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D64C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D64E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088D64E0u) goto L_088D64E0;
    return;
L_088D64E0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15276));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6088));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20080));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19976));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19872));
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
L_088D6534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25948));
    ctx.set_gpr(31, 0x088D654Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D654Cu) goto L_088D654C;
    return;
L_088D654C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D655C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D656Cu);
    // nop
    goto L_088D49C4;
L_088D656C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20772));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26468));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25516));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26096));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26064));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20780));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25732));
    ctx.set_gpr(31, 0x088D65C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D65C0u) goto L_088D65C0;
    return;
L_088D65C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D65D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D65E0u);
    // nop
    goto L_088D6438;
L_088D65E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D65F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26464)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26472)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D662C;
      }
      goto L_088D6618;
    }
L_088D6618:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6634;
      }
      goto L_088D662C;
    }
L_088D662C:
    ctx.set_gpr(31, 0x088D6634u);
    // nop
    goto L_088D6690;
L_088D6634:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26472)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D664C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D6660u);
    // nop
    goto L_088D64C8;
L_088D6660:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19248));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D6674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6674u) goto L_088D6674;
    return;
L_088D6674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26296));
    ctx.set_gpr(31, 0x088D66A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D66A8u) goto L_088D66A8;
    return;
L_088D66A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D66B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D66C8u);
    // nop
    goto L_088D49C4;
L_088D66C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20808));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26472));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25516));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26096));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26412));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20816));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(26188));
    ctx.set_gpr(31, 0x088D671Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D671Cu) goto L_088D671C;
    return;
L_088D671C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D672C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D673Cu);
    // nop
    goto L_088D6600;
L_088D673C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D674C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26476)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6778;
      }
      goto L_088D6764;
    }
L_088D6764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6780;
      }
      goto L_088D6778;
    }
L_088D6778:
    ctx.set_gpr(31, 0x088D6780u);
    // nop
    goto L_088D6910;
L_088D6780:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26476)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D67B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D67B0u) goto L_088D67B0;
    return;
L_088D67B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(31, 0x088D67E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D67E8u) goto L_088D67E8;
    return;
L_088D67E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6814;
      }
      goto L_088D680C;
    }
L_088D680C:
    ctx.set_gpr(31, 0x088D6814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D6814u) goto L_088D6814;
    return;
L_088D6814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6828;
      }
      goto L_088D6820;
    }
L_088D6820:
    ctx.set_gpr(31, 0x088D6828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D6828u) goto L_088D6828;
    return;
L_088D6828:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D683C;
      }
      goto L_088D6834;
    }
L_088D6834:
    ctx.set_gpr(31, 0x088D683Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D683Cu) goto L_088D683C;
    return;
L_088D683C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6860;
      }
      goto L_088D684C;
    }
L_088D684C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x088D6858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6858u) goto L_088D6858;
    return;
L_088D6858:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D6860;
L_088D6860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6878;
      }
      goto L_088D6868;
    }
L_088D6868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D6878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D6878u) goto L_088D6878;
    return;
L_088D6878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D689C;
      }
      goto L_088D6888;
    }
L_088D6888:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088D6894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6894u) goto L_088D6894;
    return;
L_088D6894:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D689C;
L_088D689C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D68B4;
      }
      goto L_088D68A4;
    }
L_088D68A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D68B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D68B4u) goto L_088D68B4;
    return;
L_088D68B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D68C8;
      }
      goto L_088D68C0;
    }
L_088D68C0:
    ctx.set_gpr(31, 0x088D68C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D68C8u) goto L_088D68C8;
    return;
L_088D68C8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x088D68E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D68E0u) goto L_088D68E0;
    return;
L_088D68E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x088D68ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D68ECu) goto L_088D68EC;
    return;
L_088D68EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x088D68F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088D68F8u) goto L_088D68F8;
    return;
L_088D68F8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26936));
    ctx.set_gpr(31, 0x088D6928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D6928u) goto L_088D6928;
    return;
L_088D6928:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6948u);
    // nop
    goto L_088D49C4;
L_088D6948:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20852));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26476));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20664));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27092));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27060));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(20872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(112));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(26520));
    ctx.set_gpr(31, 0x088D69A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D69A4u) goto L_088D69A4;
    return;
L_088D69A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D69B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D69C4u);
    // nop
    goto L_088D674C;
L_088D69C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D69D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D69E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26476)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D6A0Cu) goto L_088D6A0C;
    return;
L_088D6A0C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20888));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088D6A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D6A28u) goto L_088D6A28;
    return;
L_088D6A28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D6A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A38u) goto L_088D6A38;
    return;
L_088D6A38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D6A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D6A48u) goto L_088D6A48;
    return;
L_088D6A48:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A58u) goto L_088D6A58;
    return;
L_088D6A58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D6A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D6A68u) goto L_088D6A68;
    return;
L_088D6A68:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A78u) goto L_088D6A78;
    return;
L_088D6A78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 518u, 0x088E2788u>(ctx, &aot_mem) && ctx.pc == 0x088D6A84u) goto L_088D6A84;
    return;
L_088D6A84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A98u) goto L_088D6A98;
    return;
L_088D6A98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 518u, 0x088E2788u>(ctx, &aot_mem) && ctx.pc == 0x088D6AA4u) goto L_088D6AA4;
    return;
L_088D6AA4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6AB8u) goto L_088D6AB8;
    return;
L_088D6AB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6AC4u);
    // nop
    goto L_088D6DA4;
L_088D6AC4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6AE0u) goto L_088D6AE0;
    return;
L_088D6AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x088D6AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088D6AF0u) goto L_088D6AF0;
    return;
L_088D6AF0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6B00u) goto L_088D6B00;
    return;
L_088D6B00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 199u, 0x088E4FECu>(ctx, &aot_mem) && ctx.pc == 0x088D6B0Cu) goto L_088D6B0C;
    return;
L_088D6B0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6B24u) goto L_088D6B24;
    return;
L_088D6B24:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 540u, 0x088F6D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6B30u) goto L_088D6B30;
    return;
L_088D6B30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21148));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21200));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21252));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D6B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6B64u) goto L_088D6B64;
    return;
L_088D6B64:
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
L_088D6B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26532)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6BAC;
      }
      goto L_088D6B98;
    }
L_088D6B98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6BB4;
      }
      goto L_088D6BAC;
    }
L_088D6BAC:
    ctx.set_gpr(31, 0x088D6BB4u);
    // nop
    goto L_088D6C68;
L_088D6BB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26532)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6BCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D6BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D6BE4u) goto L_088D6BE4;
    return;
L_088D6BE4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088D6BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6BFCu) goto L_088D6BFC;
    return;
L_088D6BFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6C38;
      }
      goto L_088D6C24;
    }
L_088D6C24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088D6C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6C30u) goto L_088D6C30;
    return;
L_088D6C30:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D6C38;
L_088D6C38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6C50;
      }
      goto L_088D6C40;
    }
L_088D6C40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D6C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D6C50u) goto L_088D6C50;
    return;
L_088D6C50:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27792));
    ctx.set_gpr(31, 0x088D6C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D6C80u) goto L_088D6C80;
    return;
L_088D6C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6CA0u);
    // nop
    goto L_088D49C4;
L_088D6CA0:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26532));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27908));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(21304));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27596));
    ctx.set_gpr(31, 0x088D6CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D6CF4u) goto L_088D6CF4;
    return;
L_088D6CF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6D04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6D14u);
    // nop
    goto L_088D6B80;
L_088D6D14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26532)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D6D48u) goto L_088D6D48;
    return;
L_088D6D48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21328));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088D6D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D6D64u) goto L_088D6D64;
    return;
L_088D6D64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21364));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21376));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21388));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D6D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6D8Cu) goto L_088D6D8C;
    return;
L_088D6D8C:
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
L_088D6DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6DE4;
      }
      goto L_088D6DBC;
    }
L_088D6DBC:
    ctx.set_gpr(31, 0x088D6DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D6DC4u) goto L_088D6DC4;
    return;
L_088D6DC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D6DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D6DD0u) goto L_088D6DD0;
    return;
L_088D6DD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D6DDCu);
    // nop
    goto L_088D6FE8;
L_088D6DDC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26548), ctx.gpr[2]);
    goto L_088D6DE4;
L_088D6DE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E28;
      }
      goto L_088D6E14;
    }
L_088D6E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E30;
      }
      goto L_088D6E28;
    }
L_088D6E28:
    ctx.set_gpr(31, 0x088D6E30u);
    // nop
    goto L_088D6E8C;
L_088D6E30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D6E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088D6E5Cu) goto L_088D6E5C;
    return;
L_088D6E5C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D6E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D6E70u) goto L_088D6E70;
    return;
L_088D6E70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6E8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28340));
    ctx.set_gpr(31, 0x088D6EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D6EA4u) goto L_088D6EA4;
    return;
L_088D6EA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6EC4u);
    // nop
    goto L_088D49C4;
L_088D6EC4:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26548));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28456));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(21400));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28232));
    ctx.set_gpr(31, 0x088D6F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D6F18u) goto L_088D6F18;
    return;
L_088D6F18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6F28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D6F38u);
    // nop
    goto L_088D6DFC;
L_088D6F38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6F48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D6F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D6F6Cu) goto L_088D6F6C;
    return;
L_088D6F6C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21416));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088D6F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D6F88u) goto L_088D6F88;
    return;
L_088D6F88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D6F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6F98u) goto L_088D6F98;
    return;
L_088D6F98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1318));
    ctx.set_gpr(31, 0x088D6FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 58u, 0x08958488u>(ctx, &aot_mem) && ctx.pc == 0x088D6FA8u) goto L_088D6FA8;
    return;
L_088D6FA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21520));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21544));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21568));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D6FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6FD0u) goto L_088D6FD0;
    return;
L_088D6FD0:
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
L_088D6FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D7000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D7000u) goto L_088D7000;
    return;
L_088D7000:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7034;
      }
      goto L_088D700C;
    }
L_088D700C:
    ctx.set_gpr(31, 0x088D7014u);
    // nop
    goto L_088D72A4;
L_088D7014:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D7028u) goto L_088D7028;
    return;
L_088D7028:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7094;
      }
      goto L_088D7034;
    }
L_088D7034:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088D7048u) goto L_088D7048;
    return;
L_088D7048:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7068;
      }
      goto L_088D7054;
    }
L_088D7054:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 12u, 0x089440A8u>(ctx, &aot_mem) && ctx.pc == 0x088D7064u) goto L_088D7064;
    return;
L_088D7064:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088D7068;
L_088D7068:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D707Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D707Cu) goto L_088D707C;
    return;
L_088D707C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D7094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D7094u) goto L_088D7094;
    return;
L_088D7094:
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
L_088D70AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D70CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D70CCu) goto L_088D70CC;
    return;
L_088D70CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D70F8;
      }
      goto L_088D70D8;
    }
L_088D70D8:
    ctx.set_gpr(31, 0x088D70E0u);
    // nop
    goto L_088D72A4;
L_088D70E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D70F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088D70F0u) goto L_088D70F0;
    return;
L_088D70F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7120;
      }
      goto L_088D70F8;
    }
L_088D70F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D7108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088D7108u) goto L_088D7108;
    return;
L_088D7108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7120;
      }
      goto L_088D7110;
    }
L_088D7110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 31u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x088D7120u) goto L_088D7120;
    return;
L_088D7120:
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
L_088D7138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7178;
      }
      goto L_088D7150;
    }
L_088D7150:
    ctx.set_gpr(31, 0x088D7158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D7158u) goto L_088D7158;
    return;
L_088D7158:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D7164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D7164u) goto L_088D7164;
    return;
L_088D7164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D7170u);
    // nop
    goto L_088D6FE8;
L_088D7170:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26576), ctx.gpr[2]);
    goto L_088D7178;
L_088D7178:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D71BC;
      }
      goto L_088D71A8;
    }
L_088D71A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D71C4;
      }
      goto L_088D71BC;
    }
L_088D71BC:
    ctx.set_gpr(31, 0x088D71C4u);
    // nop
    goto L_088D72A4;
L_088D71C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D71DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D71F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 17u, 0x08944110u>(ctx, &aot_mem) && ctx.pc == 0x088D71F4u) goto L_088D71F4;
    return;
L_088D71F4:
    ctx.set_gpr(31, 0x088D71FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D71FCu) goto L_088D71FC;
    return;
L_088D71FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7238;
      }
      goto L_088D7224;
    }
L_088D7224:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x088D7230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7230u) goto L_088D7230;
    return;
L_088D7230:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D7238;
L_088D7238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7250;
      }
      goto L_088D7240;
    }
L_088D7240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D7250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D7250u) goto L_088D7250;
    return;
L_088D7250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7274;
      }
      goto L_088D7260;
    }
L_088D7260:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088D726Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D726Cu) goto L_088D726C;
    return;
L_088D726C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088D7274;
L_088D7274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D728C;
      }
      goto L_088D727C;
    }
L_088D727C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088D728Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088D728Cu) goto L_088D728C;
    return;
L_088D728C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D72A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29388));
    ctx.set_gpr(31, 0x088D72BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D72BCu) goto L_088D72BC;
    return;
L_088D72BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D72CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29536));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26576));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29504));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(21608));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29148));
    ctx.set_gpr(31, 0x088D7330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D7330u) goto L_088D7330;
    return;
L_088D7330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D7350u);
    // nop
    goto L_088D7190;
L_088D7350:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D7388u) goto L_088D7388;
    return;
L_088D7388:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21624));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x088D73A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D73A4u) goto L_088D73A4;
    return;
L_088D73A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D73B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D73B4u) goto L_088D73B4;
    return;
L_088D73B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D73C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D73C8u) goto L_088D73C8;
    return;
L_088D73C8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D73DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D73DCu) goto L_088D73DC;
    return;
L_088D73DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D73F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D73F0u) goto L_088D73F0;
    return;
L_088D73F0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7404u) goto L_088D7404;
    return;
L_088D7404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D7414u) goto L_088D7414;
    return;
L_088D7414:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7424u) goto L_088D7424;
    return;
L_088D7424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088D7434u) goto L_088D7434;
    return;
L_088D7434:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7444u) goto L_088D7444;
    return;
L_088D7444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D7454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088D7454u) goto L_088D7454;
    return;
L_088D7454:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7464u) goto L_088D7464;
    return;
L_088D7464:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D7478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D7478u) goto L_088D7478;
    return;
L_088D7478:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D748Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D748Cu) goto L_088D748C;
    return;
L_088D748C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D74A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D74A0u) goto L_088D74A0;
    return;
L_088D74A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D74ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 194u, 0x088F0FECu>(ctx, &aot_mem) && ctx.pc == 0x088D74ACu) goto L_088D74AC;
    return;
L_088D74AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D74D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D74D0u) goto L_088D74D0;
    return;
L_088D74D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D74ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D74ECu) goto L_088D74EC;
    return;
L_088D74EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D74F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 148u, 0x088F0C50u>(ctx, &aot_mem) && ctx.pc == 0x088D74F8u) goto L_088D74F8;
    return;
L_088D74F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D751Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D751Cu) goto L_088D751C;
    return;
L_088D751C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D7528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 148u, 0x088F0C50u>(ctx, &aot_mem) && ctx.pc == 0x088D7528u) goto L_088D7528;
    return;
L_088D7528:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D754Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D754Cu) goto L_088D754C;
    return;
L_088D754C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D7558u);
    // nop
    goto L_088D7138;
L_088D7558:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7574u) goto L_088D7574;
    return;
L_088D7574:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7588u) goto L_088D7588;
    return;
L_088D7588:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D759Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D759Cu) goto L_088D759C;
    return;
L_088D759C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31368)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D75C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D75C8u) goto L_088D75C8;
    return;
L_088D75C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D75DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D75DCu) goto L_088D75DC;
    return;
L_088D75DC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D75F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D75F0u) goto L_088D75F0;
    return;
L_088D75F0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7604u) goto L_088D7604;
    return;
L_088D7604:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7618u) goto L_088D7618;
    return;
L_088D7618:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D762Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D762Cu) goto L_088D762C;
    return;
L_088D762C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D7640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 843u, 0x0895F91Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7640u) goto L_088D7640;
    return;
L_088D7640:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7654u) goto L_088D7654;
    return;
L_088D7654:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22068));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22168));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22268));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7680u) goto L_088D7680;
    return;
L_088D7680:
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
L_088D769C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26680)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C8;
      }
      goto L_088D76B4;
    }
L_088D76B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D76D0;
      }
      goto L_088D76C8;
    }
L_088D76C8:
    ctx.set_gpr(31, 0x088D76D0u);
    // nop
    goto L_088D7754;
L_088D76D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D76E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D7700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 738u, 0x0890B338u>(ctx, &aot_mem) && ctx.pc == 0x088D7700u) goto L_088D7700;
    return;
L_088D7700:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D7714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D7714u) goto L_088D7714;
    return;
L_088D7714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D773Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D773Cu) goto L_088D773C;
    return;
L_088D773C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30588));
    ctx.set_gpr(31, 0x088D776Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D776Cu) goto L_088D776C;
    return;
L_088D776C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D777C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D778Cu);
    // nop
    goto L_088D49C4;
L_088D778C:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26680));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31684));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30744));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30712));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22376));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30440));
    ctx.set_gpr(31, 0x088D77E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D77E8u) goto L_088D77E8;
    return;
L_088D77E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D77F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D7808u);
    // nop
    goto L_088D769C;
L_088D7808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7818:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26680)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D784Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D784Cu) goto L_088D784C;
    return;
L_088D784C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22400));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D7868u) goto L_088D7868;
    return;
L_088D7868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7878u) goto L_088D7878;
    return;
L_088D7878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D7888u) goto L_088D7888;
    return;
L_088D7888:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22412));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22416));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22420));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D78B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D78B0u) goto L_088D78B0;
    return;
L_088D78B0:
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
L_088D78C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26684)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7990;
      }
      goto L_088D78E4;
    }
L_088D78E4:
    ctx.set_gpr(31, 0x088D78ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D78ECu) goto L_088D78EC;
    return;
L_088D78EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D78F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D78F8u) goto L_088D78F8;
    return;
L_088D78F8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26680)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D790Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D790Cu) goto L_088D790C;
    return;
L_088D790C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26684), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7990;
      }
      goto L_088D7920;
    }
L_088D7920:
    ctx.set_gpr(31, 0x088D7928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D7928u) goto L_088D7928;
    return;
L_088D7928:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D7938u) goto L_088D7938;
    return;
L_088D7938:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26684)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7964;
      }
      goto L_088D795C;
    }
L_088D795C:
    ctx.set_gpr(31, 0x088D7964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D7964u) goto L_088D7964;
    return;
L_088D7964:
    ctx.set_gpr(31, 0x088D796Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D796Cu) goto L_088D796C;
    return;
L_088D796C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26684)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26684)));
    ctx.set_gpr(31, 0x088D7990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D7990u) goto L_088D7990;
    return;
L_088D7990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D79A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D79BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D79BCu) goto L_088D79BC;
    return;
L_088D79BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D79F0;
      }
      goto L_088D79C8;
    }
L_088D79C8:
    ctx.set_gpr(31, 0x088D79D0u);
    // nop
    goto L_088D7B9C;
L_088D79D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26692)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D79E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D79E4u) goto L_088D79E4;
    return;
L_088D79E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A50;
      }
      goto L_088D79F0;
    }
L_088D79F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088D7A04u) goto L_088D7A04;
    return;
L_088D7A04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A24;
      }
      goto L_088D7A10;
    }
L_088D7A10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 734u, 0x0890B2E8u>(ctx, &aot_mem) && ctx.pc == 0x088D7A20u) goto L_088D7A20;
    return;
L_088D7A20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088D7A24;
L_088D7A24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D7A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D7A38u) goto L_088D7A38;
    return;
L_088D7A38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D7A50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D7A50u) goto L_088D7A50;
    return;
L_088D7A50:
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
L_088D7A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D7A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D7A88u) goto L_088D7A88;
    return;
L_088D7A88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AB4;
      }
      goto L_088D7A94;
    }
L_088D7A94:
    ctx.set_gpr(31, 0x088D7A9Cu);
    // nop
    goto L_088D7B9C;
L_088D7A9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088D7AACu) goto L_088D7AAC;
    return;
L_088D7AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7ADC;
      }
      goto L_088D7AB4;
    }
L_088D7AB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D7AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088D7AC4u) goto L_088D7AC4;
    return;
L_088D7AC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7ADC;
      }
      goto L_088D7ACC;
    }
L_088D7ACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 740u, 0x0890B374u>(ctx, &aot_mem) && ctx.pc == 0x088D7ADCu) goto L_088D7ADC;
    return;
L_088D7ADC:
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
L_088D7AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26692)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B20;
      }
      goto L_088D7B0C;
    }
L_088D7B0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B28;
      }
      goto L_088D7B20;
    }
L_088D7B20:
    ctx.set_gpr(31, 0x088D7B28u);
    // nop
    goto L_088D7B9C;
L_088D7B28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D7B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 738u, 0x0890B338u>(ctx, &aot_mem) && ctx.pc == 0x088D7B58u) goto L_088D7B58;
    return;
L_088D7B58:
    ctx.set_gpr(31, 0x088D7B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D7B60u) goto L_088D7B60;
    return;
L_088D7B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D7B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088D7B84u) goto L_088D7B84;
    return;
L_088D7B84:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7B9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31684));
    ctx.set_gpr(31, 0x088D7BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D7BB4u) goto L_088D7BB4;
    return;
L_088D7BB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26692));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31792));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22432));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31552));
    ctx.set_gpr(31, 0x088D7C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D7C20u) goto L_088D7C20;
    return;
L_088D7C20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7C30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D7C40u);
    // nop
    goto L_088D7AF4;
L_088D7C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7C50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7C60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26696)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D28;
      }
      goto L_088D7C7C;
    }
L_088D7C7C:
    ctx.set_gpr(31, 0x088D7C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D7C84u) goto L_088D7C84;
    return;
L_088D7C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D7C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D7C90u) goto L_088D7C90;
    return;
L_088D7C90:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26692)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D7CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D7CA4u) goto L_088D7CA4;
    return;
L_088D7CA4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26696), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D28;
      }
      goto L_088D7CB8;
    }
L_088D7CB8:
    ctx.set_gpr(31, 0x088D7CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D7CC0u) goto L_088D7CC0;
    return;
L_088D7CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D7CD0u) goto L_088D7CD0;
    return;
L_088D7CD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CFC;
      }
      goto L_088D7CF4;
    }
L_088D7CF4:
    ctx.set_gpr(31, 0x088D7CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D7CFCu) goto L_088D7CFC;
    return;
L_088D7CFC:
    ctx.set_gpr(31, 0x088D7D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D7D04u) goto L_088D7D04;
    return;
L_088D7D04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    ctx.set_gpr(31, 0x088D7D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D7D28u) goto L_088D7D28;
    return;
L_088D7D28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D5C;
      }
      goto L_088D7D54;
    }
L_088D7D54:
    ctx.set_gpr(31, 0x088D7D5Cu);
    // nop
    goto L_088D7B9C;
L_088D7D5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7D74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D7D8Cu);
    // nop
    goto L_088D7E6C;
L_088D7D8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26700)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D7DA0u) goto L_088D7DA0;
    return;
L_088D7DA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26700)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7DE0;
      }
      goto L_088D7DCC;
    }
L_088D7DCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7DE8;
      }
      goto L_088D7DE0;
    }
L_088D7DE0:
    ctx.set_gpr(31, 0x088D7DE8u);
    // nop
    goto L_088D7E6C;
L_088D7DE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D7E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 161u, 0x0890C978u>(ctx, &aot_mem) && ctx.pc == 0x088D7E18u) goto L_088D7E18;
    return;
L_088D7E18:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D7E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D7E2Cu) goto L_088D7E2C;
    return;
L_088D7E2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D7E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D7E54u) goto L_088D7E54;
    return;
L_088D7E54:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7E6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2189u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32404));
    ctx.set_gpr(31, 0x088D7E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D7E84u) goto L_088D7E84;
    return;
L_088D7E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D7EA4u);
    // nop
    goto L_088D49C4;
L_088D7EA4:
    ctx.set_gpr(2, 2189u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26700));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32036));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32560));
    ctx.set_gpr(8, 2189u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32528));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2189u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(32256));
    ctx.set_gpr(31, 0x088D7F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D7F00u) goto L_088D7F00;
    return;
L_088D7F00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D7F20u);
    // nop
    goto L_088D7DB4;
L_088D7F20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7F30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7F40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26700)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D7F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D7F64u) goto L_088D7F64;
    return;
L_088D7F64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22480));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D7F80u) goto L_088D7F80;
    return;
L_088D7F80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7F90u) goto L_088D7F90;
    return;
L_088D7F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D7FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D7FA0u) goto L_088D7FA0;
    return;
L_088D7FA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22484));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22488));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22492));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D7FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7FC8u) goto L_088D7FC8;
    return;
L_088D7FC8:
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
L_088D7FE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26704)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 10u, 0x088D80A8u>(ctx, &aot_mem); return;
      }
      goto L_088D7FFC;
    }
L_088D7FFC:
    ctx.set_gpr(31, 0x088D8004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x088D4000u, 16384u, &recomp_unit_0052, &recomp_unit_0052_entry);
    runtime.register_function(0x088D4000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D400Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D401Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D402Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4040u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D404Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D405Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4068u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4084u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4104u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4114u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4144u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4154u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4164u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4174u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4184u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4194u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D420Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4214u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D421Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D422Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D423Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D424Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D425Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4284u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4294u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D430Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D431Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D432Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D433Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D434Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D435Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D436Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D437Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D438Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D439Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4408u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4418u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4428u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4438u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4448u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4458u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4468u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4488u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4498u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D451Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4540u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4548u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4554u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D455Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4568u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D458Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4590u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4598u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4608u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4628u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4638u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4648u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4658u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4668u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4688u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4698u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4714u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4730u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D475Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4778u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4780u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D478Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4798u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4804u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D481Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4838u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4858u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4864u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4880u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4904u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D490Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4924u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4940u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4960u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D496Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4990u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D499Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4ED0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4ED8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5008u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5010u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5018u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5020u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5028u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5030u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5038u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5040u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5050u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5058u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5060u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5068u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5070u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5080u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5088u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5090u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5098u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5110u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5124u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D512Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5144u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D515Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5208u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5220u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5238u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5248u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5258u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D531Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D532Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D533Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D534Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D535Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5384u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D539Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5410u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D542Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5444u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5454u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5500u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5514u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D551Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D554Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5578u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5608u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5614u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D561Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5634u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5640u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D564Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5664u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5684u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5690u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5700u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5710u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D577Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D578Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D579Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5800u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D581Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5838u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5848u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5858u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5890u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5904u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5950u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5968u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D598Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5994u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6014u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6028u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6030u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D605Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6070u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D608Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6104u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6114u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6124u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6170u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6180u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6190u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6224u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6240u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6258u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6268u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6278u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D630Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6320u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6328u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6354u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6368u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6384u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D639Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6408u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6418u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6428u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6438u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6450u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D646Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6484u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6498u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D654Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D655Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D656Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D662Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6634u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D664Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6660u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6674u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6690u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D671Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D672Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D673Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D674Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6764u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6778u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6780u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6798u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D680Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6814u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6820u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6828u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D683Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D684Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6858u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6860u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6878u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D689Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6910u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6928u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6948u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D700Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7014u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7028u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7034u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7054u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7064u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7068u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D707Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7108u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7110u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7120u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7138u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7150u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7158u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7164u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7170u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7190u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7224u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7230u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7238u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7240u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7250u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7260u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D726Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D727Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D728Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7350u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7360u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7388u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7404u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7414u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7424u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7434u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7444u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7454u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D748Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D751Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D754Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7558u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7574u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D759Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7604u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D762Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7640u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7654u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7680u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D769Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7700u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7714u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D773Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7754u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D776Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D777Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D778Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7808u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7818u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7828u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D784Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7878u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D790Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7928u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D795Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D796Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7990u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ACCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ADCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FFCu, &recomp_unit_0052, "recomp_unit_0052");
}
} // namespace psprecomp
