#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0076[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35,
    0, 36, 0, 0, 0, 37, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56,
    0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0,
    64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105,
    0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0,
    123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149,
    0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0,
    167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193,
    0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0,
    0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 213, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 219, 0, 0, 0, 220, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 230, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 238, 0, 239, 0, 0, 0,
    0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250,
    251, 0, 0, 0, 252, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 323, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 344, 345, 0, 0, 346, 0,
    0, 347, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 0,
    357, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 367, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375,
    0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0,
    386, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 394, 395, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0,
    0, 405, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0,
    0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 422,
    0, 423, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433,
    0, 0, 434, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442,
    0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0,
    451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0,
    460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0,
    0, 0, 0, 471, 0, 472, 0, 0, 473, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479,
    0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 488,
    0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 0,
    0, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507,
    0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0,
    0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 524, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538,
    539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545,
    0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 560, 561, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0,
    566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0,
    0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579,
    0, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 594,
    0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0,
    0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0,
    0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612,
    0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0,
    0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 630, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0,
    633, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 637, 0, 0, 0, 0, 638, 0, 0, 639, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 645, 646, 0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 651,
    0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659,
    660, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0,
    0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 678, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 683, 684,
    0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 690, 0, 0, 691, 0, 0, 692, 0, 0, 693,
    0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0,
    0, 702, 0, 0, 0, 0, 703, 704, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0,
    0, 716, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0,
    0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 729, 0, 730, 0, 0, 731, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 739, 0, 740, 0, 0, 0,
    741, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0,
    0, 0, 747, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0,
    755, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763,
    0, 764, 0, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 772,
    0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 775, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0,
    0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 784, 0, 785, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0, 0,
    0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0,
    796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 806,
    0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 812, 813, 0, 0, 814, 0, 0, 815, 0, 816, 0, 0, 817,
    0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0,
    824, 0, 825, 0, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0,
    0, 835, 0, 836, 0, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 0, 844, 0, 0, 0, 845, 0, 846,
    0, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 0, 855, 0, 856, 0, 0,
    0, 0, 0, 857, 0, 858, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0,
    866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 869, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 875,
    0, 0, 876, 0, 877, 0, 0, 878, 0, 879, 0, 0, 880, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 0, 885, 0, 886, 0, 0, 887, 0, 888,
    889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892,
    0, 893, 0, 0, 0, 894, 0, 895, 0, 0, 896, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 900, 0, 901, 0, 0, 902, 0,
    0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 909, 0, 910,
    0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 916, 0, 0, 0, 0, 917, 0, 0, 918, 0, 0, 919,
    0, 920, 0, 921, 0, 0, 922, 0, 923, 0, 0, 924, 0, 0, 925, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 0, 0, 0,
    0, 0, 928, 0, 0, 929, 0, 930, 0, 0, 931, 0, 932, 0, 0, 0, 0, 933, 0, 0, 0, 0, 934, 0, 0, 935, 0, 936, 0, 937, 0, 0,
    0, 938, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 942, 0, 0, 0, 943, 0, 0, 944, 945, 0, 0, 0,
    0, 946, 0, 947, 0, 0, 0, 0, 948, 0, 949, 0, 0, 950, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 0, 953, 0, 0, 0, 954, 0,
    0, 955, 0, 956, 0, 0, 957, 0, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 960, 0, 0, 961, 0, 962, 0, 963, 0, 0, 0, 964, 0, 0,
    965, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967, 0, 0, 968, 969, 0, 970, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0,
    973, 0, 0, 974, 0, 975, 0, 0, 976, 0, 977, 0, 0, 0, 0, 978, 0, 0, 0, 0, 979, 0, 0, 980, 0, 981, 0, 982, 0, 0, 0, 983,
    0, 0, 984, 0, 0, 0, 0, 0, 985, 0, 0, 986, 0, 987, 0, 0, 988, 0, 989, 0, 0, 0, 0, 990, 0, 0, 0, 0, 991, 0, 0, 992,
    0, 993, 0, 994, 0, 0, 0, 995, 0, 0, 0, 0, 996, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 999, 0, 0,
    1000, 0, 0, 0, 1001, 0, 1002, 0, 0, 0, 0, 0, 1003, 0, 0, 1004, 0, 1005, 0, 0, 1006, 0, 1007, 0, 0, 0, 0, 1008, 0, 0, 0, 0,
    1009, 0, 0, 1010, 0, 1011, 0, 1012, 0, 0, 0, 1013, 0, 0, 1014, 0, 0, 0, 0, 0, 1015, 0, 0, 1016, 0, 1017, 0, 0, 1018, 0, 1019, 0,
    0, 0, 0, 1020, 0, 0, 0, 0, 1021, 0, 0, 1022, 0, 1023, 0, 1024, 0, 0, 0, 1025, 0, 0, 1026, 0, 0, 0, 0, 0, 1027, 0, 0, 1028,
    0, 1029, 0, 0, 1030, 0, 1031, 0, 0, 0, 0, 1032, 0, 0, 0, 0, 1033, 0, 0, 1034, 0, 1035, 0, 1036, 0, 0, 0, 1037, 0, 0, 0, 0,
    0, 1038, 0, 0, 1039, 0, 0, 0, 1040, 0, 0, 1041, 0, 1042, 0, 0, 1043, 0, 1044, 0, 0, 0, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 0,
    1047, 0, 1048, 0, 1049, 0, 0, 0, 1050, 0, 0, 1051, 0, 0, 0, 0, 0, 0, 0, 0, 1052, 0, 0, 0, 0, 0, 0, 0, 0, 1053, 0, 0,
    1054, 0, 0, 1055, 0, 1056, 0, 0, 0, 0, 0, 0, 0, 1057, 0, 0, 1058, 0, 1059, 0, 0, 1060, 0, 1061, 0, 0, 0, 0, 0, 1062,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934004;
    case 2u: goto L_08934014;
    case 3u: goto L_08934038;
    case 4u: goto L_08934044;
    case 5u: goto L_0893404C;
    case 6u: goto L_08934058;
    case 7u: goto L_08934060;
    case 8u: goto L_08934074;
    case 9u: goto L_08934088;
    case 10u: goto L_08934094;
    case 11u: goto L_0893409C;
    case 12u: goto L_089340A4;
    case 13u: goto L_089340B4;
    case 14u: goto L_089340D8;
    case 15u: goto L_089340E4;
    case 16u: goto L_089340EC;
    case 17u: goto L_089340F8;
    case 18u: goto L_08934100;
    case 19u: goto L_08934114;
    case 20u: goto L_08934128;
    case 21u: goto L_08934134;
    case 22u: goto L_0893413C;
    case 23u: goto L_08934144;
    case 24u: goto L_08934154;
    case 25u: goto L_08934164;
    case 26u: goto L_0893418C;
    case 27u: goto L_0893419C;
    case 28u: goto L_089341A8;
    case 29u: goto L_089341B0;
    case 30u: goto L_089341BC;
    case 31u: goto L_089341C4;
    case 32u: goto L_089341D8;
    case 33u: goto L_089341EC;
    case 34u: goto L_089341F8;
    case 35u: goto L_08934200;
    case 36u: goto L_08934208;
    case 37u: goto L_08934218;
    case 38u: goto L_08934224;
    case 39u: goto L_08934228;
    case 40u: goto L_08934258;
    case 41u: goto L_089342A0;
    case 42u: goto L_089342B0;
    case 43u: goto L_089342D4;
    case 44u: goto L_089342E0;
    case 45u: goto L_089342E8;
    case 46u: goto L_089342F4;
    case 47u: goto L_089342FC;
    case 48u: goto L_08934310;
    case 49u: goto L_08934324;
    case 50u: goto L_08934330;
    case 51u: goto L_08934338;
    case 52u: goto L_08934340;
    case 53u: goto L_08934350;
    case 54u: goto L_08934368;
    case 55u: goto L_08934378;
    case 56u: goto L_08934380;
    case 57u: goto L_08934388;
    case 58u: goto L_08934394;
    case 59u: goto L_089343C4;
    case 60u: goto L_089343CC;
    case 61u: goto L_089343D4;
    case 62u: goto L_089343E4;
    case 63u: goto L_089343FC;
    case 64u: goto L_08934404;
    case 65u: goto L_0893440C;
    case 66u: goto L_08934418;
    case 67u: goto L_08934424;
    case 68u: goto L_0893443C;
    case 69u: goto L_08934440;
    case 70u: goto L_0893444C;
    case 71u: goto L_08934454;
    case 72u: goto L_08934460;
    case 73u: goto L_0893446C;
    case 74u: goto L_08934480;
    case 75u: goto L_0893448C;
    case 76u: goto L_089344A8;
    case 77u: goto L_089344B4;
    case 78u: goto L_089344BC;
    case 79u: goto L_089344C8;
    case 80u: goto L_089344D0;
    case 81u: goto L_089344E4;
    case 82u: goto L_089344F8;
    case 83u: goto L_08934504;
    case 84u: goto L_0893450C;
    case 85u: goto L_08934514;
    case 86u: goto L_08934524;
    case 87u: goto L_08934584;
    case 88u: goto L_08934590;
    case 89u: goto L_08934598;
    case 90u: goto L_089345A4;
    case 91u: goto L_089345AC;
    case 92u: goto L_089345C0;
    case 93u: goto L_089345D4;
    case 94u: goto L_089345E0;
    case 95u: goto L_089345E8;
    case 96u: goto L_089345F0;
    case 97u: goto L_08934600;
    case 98u: goto L_08934624;
    case 99u: goto L_08934630;
    case 100u: goto L_08934638;
    case 101u: goto L_08934644;
    case 102u: goto L_0893464C;
    case 103u: goto L_08934660;
    case 104u: goto L_08934674;
    case 105u: goto L_08934680;
    case 106u: goto L_08934688;
    case 107u: goto L_08934690;
    case 108u: goto L_089346A0;
    case 109u: goto L_089346C4;
    case 110u: goto L_089346D0;
    case 111u: goto L_089346D8;
    case 112u: goto L_089346E4;
    case 113u: goto L_089346EC;
    case 114u: goto L_08934700;
    case 115u: goto L_08934714;
    case 116u: goto L_08934720;
    case 117u: goto L_08934728;
    case 118u: goto L_08934730;
    case 119u: goto L_08934740;
    case 120u: goto L_08934764;
    case 121u: goto L_08934770;
    case 122u: goto L_08934778;
    case 123u: goto L_08934784;
    case 124u: goto L_0893478C;
    case 125u: goto L_089347A0;
    case 126u: goto L_089347B4;
    case 127u: goto L_089347C0;
    case 128u: goto L_089347C8;
    case 129u: goto L_089347D0;
    case 130u: goto L_089347E0;
    case 131u: goto L_08934804;
    case 132u: goto L_08934810;
    case 133u: goto L_08934818;
    case 134u: goto L_08934824;
    case 135u: goto L_0893482C;
    case 136u: goto L_08934840;
    case 137u: goto L_08934854;
    case 138u: goto L_08934860;
    case 139u: goto L_08934868;
    case 140u: goto L_08934870;
    case 141u: goto L_08934880;
    case 142u: goto L_089348A4;
    case 143u: goto L_089348B0;
    case 144u: goto L_089348B8;
    case 145u: goto L_089348C4;
    case 146u: goto L_089348CC;
    case 147u: goto L_089348E0;
    case 148u: goto L_089348F4;
    case 149u: goto L_08934900;
    case 150u: goto L_08934908;
    case 151u: goto L_08934910;
    case 152u: goto L_08934920;
    case 153u: goto L_08934944;
    case 154u: goto L_08934950;
    case 155u: goto L_08934958;
    case 156u: goto L_08934964;
    case 157u: goto L_0893496C;
    case 158u: goto L_08934980;
    case 159u: goto L_08934994;
    case 160u: goto L_089349A0;
    case 161u: goto L_089349A8;
    case 162u: goto L_089349B0;
    case 163u: goto L_089349C0;
    case 164u: goto L_089349E4;
    case 165u: goto L_089349F0;
    case 166u: goto L_089349F8;
    case 167u: goto L_08934A04;
    case 168u: goto L_08934A0C;
    case 169u: goto L_08934A20;
    case 170u: goto L_08934A34;
    case 171u: goto L_08934A40;
    case 172u: goto L_08934A48;
    case 173u: goto L_08934A50;
    case 174u: goto L_08934A60;
    case 175u: goto L_08934A84;
    case 176u: goto L_08934A90;
    case 177u: goto L_08934A98;
    case 178u: goto L_08934AA4;
    case 179u: goto L_08934AAC;
    case 180u: goto L_08934AC0;
    case 181u: goto L_08934AD4;
    case 182u: goto L_08934AE0;
    case 183u: goto L_08934AE8;
    case 184u: goto L_08934AF0;
    case 185u: goto L_08934B00;
    case 186u: goto L_08934B24;
    case 187u: goto L_08934B30;
    case 188u: goto L_08934B38;
    case 189u: goto L_08934B44;
    case 190u: goto L_08934B4C;
    case 191u: goto L_08934B60;
    case 192u: goto L_08934B74;
    case 193u: goto L_08934B80;
    case 194u: goto L_08934B88;
    case 195u: goto L_08934B90;
    case 196u: goto L_08934BA0;
    case 197u: goto L_08934BB0;
    case 198u: goto L_08934BB8;
    case 199u: goto L_08934BD4;
    case 200u: goto L_08934BE0;
    case 201u: goto L_08934BEC;
    case 202u: goto L_08934BF0;
    case 203u: goto L_08934C24;
    case 204u: goto L_08934C70;
    case 205u: goto L_08934C7C;
    case 206u: goto L_08934C8C;
    case 207u: goto L_08934C98;
    case 208u: goto L_08934CBC;
    case 209u: goto L_08934CD0;
    case 210u: goto L_08934CD8;
    case 211u: goto L_08934CE8;
    case 212u: goto L_08934CFC;
    case 213u: goto L_08934D08;
    case 214u: goto L_08934D0C;
    case 215u: goto L_08934D18;
    case 216u: goto L_08934D20;
    case 217u: goto L_08934D38;
    case 218u: goto L_08934D44;
    case 219u: goto L_08934D48;
    case 220u: goto L_08934D58;
    case 221u: goto L_08934D5C;
    case 222u: goto L_08934D68;
    case 223u: goto L_08934D74;
    case 224u: goto L_08934D98;
    case 225u: goto L_08934DA8;
    case 226u: goto L_08934DBC;
    case 227u: goto L_08934DCC;
    case 228u: goto L_08934DE0;
    case 229u: goto L_08934DE8;
    case 230u: goto L_08934DEC;
    case 231u: goto L_08934DF8;
    case 232u: goto L_08934E0C;
    case 233u: goto L_08934E18;
    case 234u: goto L_08934E2C;
    case 235u: goto L_08934E44;
    case 236u: goto L_08934E54;
    case 237u: goto L_08934E68;
    case 238u: goto L_08934E6C;
    case 239u: goto L_08934E74;
    case 240u: goto L_08934E88;
    case 241u: goto L_08934E90;
    case 242u: goto L_08934E9C;
    case 243u: goto L_08934EB0;
    case 244u: goto L_08934EBC;
    case 245u: goto L_08934EC0;
    case 246u: goto L_08934ECC;
    case 247u: goto L_08934ED4;
    case 248u: goto L_08934EDC;
    case 249u: goto L_08934EF4;
    case 250u: goto L_08934F00;
    case 251u: goto L_08934F04;
    case 252u: goto L_08934F14;
    case 253u: goto L_08934F18;
    case 254u: goto L_08934F24;
    case 255u: goto L_08934F58;
    case 256u: goto L_08934F64;
    case 257u: goto L_08934F8C;
    case 258u: goto L_08934F98;
    case 259u: goto L_08934FA0;
    case 260u: goto L_08934FA8;
    case 261u: goto L_08934FBC;
    case 262u: goto L_08934FC4;
    case 263u: goto L_08934FD0;
    case 264u: goto L_08934FEC;
    case 265u: goto L_08935008;
    case 266u: goto L_08935030;
    case 267u: goto L_0893503C;
    case 268u: goto L_08935054;
    case 269u: goto L_08935064;
    case 270u: goto L_0893506C;
    case 271u: goto L_08935084;
    case 272u: goto L_08935098;
    case 273u: goto L_089350A0;
    case 274u: goto L_089350AC;
    case 275u: goto L_089350CC;
    case 276u: goto L_089350E8;
    case 277u: goto L_08935108;
    case 278u: goto L_08935114;
    case 279u: goto L_0893512C;
    case 280u: goto L_0893513C;
    case 281u: goto L_08935144;
    case 282u: goto L_08935150;
    case 283u: goto L_08935168;
    case 284u: goto L_0893518C;
    case 285u: goto L_0893519C;
    case 286u: goto L_089351B0;
    case 287u: goto L_089351BC;
    case 288u: goto L_089351D4;
    case 289u: goto L_089351D8;
    case 290u: goto L_089351E0;
    case 291u: goto L_089351F4;
    case 292u: goto L_08935200;
    case 293u: goto L_08935224;
    case 294u: goto L_08935230;
    case 295u: goto L_08935244;
    case 296u: goto L_0893525C;
    case 297u: goto L_08935288;
    case 298u: goto L_08935294;
    case 299u: goto L_089352B8;
    case 300u: goto L_089352C4;
    case 301u: goto L_089352D8;
    case 302u: goto L_089352E8;
    case 303u: goto L_08935300;
    case 304u: goto L_0893531C;
    case 305u: goto L_08935328;
    case 306u: goto L_08935340;
    case 307u: goto L_08935344;
    case 308u: goto L_0893534C;
    case 309u: goto L_08935360;
    case 310u: goto L_08935374;
    case 311u: goto L_08935380;
    case 312u: goto L_089353A4;
    case 313u: goto L_089353B0;
    case 314u: goto L_089353C8;
    case 315u: goto L_089353F8;
    case 316u: goto L_08935408;
    case 317u: goto L_08935418;
    case 318u: goto L_08935428;
    case 319u: goto L_08935434;
    case 320u: goto L_0893543C;
    case 321u: goto L_08935448;
    case 322u: goto L_08935450;
    case 323u: goto L_08935458;
    case 324u: goto L_0893545C;
    case 325u: goto L_08935470;
    case 326u: goto L_08935478;
    case 327u: goto L_08935484;
    case 328u: goto L_08935494;
    case 329u: goto L_089354A8;
    case 330u: goto L_089354B0;
    case 331u: goto L_089354BC;
    case 332u: goto L_089354CC;
    case 333u: goto L_089354E0;
    case 334u: goto L_089354E8;
    case 335u: goto L_089354F4;
    case 336u: goto L_08935504;
    case 337u: goto L_08935518;
    case 338u: goto L_08935520;
    case 339u: goto L_0893552C;
    case 340u: goto L_0893553C;
    case 341u: goto L_08935550;
    case 342u: goto L_08935558;
    case 343u: goto L_08935564;
    case 344u: goto L_0893556C;
    case 345u: goto L_08935570;
    case 346u: goto L_0893557C;
    case 347u: goto L_08935588;
    case 348u: goto L_08935590;
    case 349u: goto L_089355A0;
    case 350u: goto L_089355A8;
    case 351u: goto L_089355C0;
    case 352u: goto L_089355C8;
    case 353u: goto L_089355D0;
    case 354u: goto L_089355E4;
    case 355u: goto L_089355EC;
    case 356u: goto L_089355F8;
    case 357u: goto L_08935604;
    case 358u: goto L_0893560C;
    case 359u: goto L_08935620;
    case 360u: goto L_08935628;
    case 361u: goto L_08935634;
    case 362u: goto L_08935640;
    case 363u: goto L_08935648;
    case 364u: goto L_0893565C;
    case 365u: goto L_08935664;
    case 366u: goto L_08935670;
    case 367u: goto L_08935674;
    case 368u: goto L_08935688;
    case 369u: goto L_0893569C;
    case 370u: goto L_089356B0;
    case 371u: goto L_089356C4;
    case 372u: goto L_089356CC;
    case 373u: goto L_089356DC;
    case 374u: goto L_089356EC;
    case 375u: goto L_08935700;
    case 376u: goto L_08935708;
    case 377u: goto L_08935718;
    case 378u: goto L_08935720;
    case 379u: goto L_08935738;
    case 380u: goto L_08935740;
    case 381u: goto L_08935748;
    case 382u: goto L_0893575C;
    case 383u: goto L_08935764;
    case 384u: goto L_08935770;
    case 385u: goto L_0893577C;
    case 386u: goto L_08935784;
    case 387u: goto L_08935798;
    case 388u: goto L_089357A0;
    case 389u: goto L_089357AC;
    case 390u: goto L_089357B8;
    case 391u: goto L_089357C0;
    case 392u: goto L_089357D4;
    case 393u: goto L_089357DC;
    case 394u: goto L_089357E8;
    case 395u: goto L_089357EC;
    case 396u: goto L_08935800;
    case 397u: goto L_0893581C;
    case 398u: goto L_08935828;
    case 399u: goto L_0893583C;
    case 400u: goto L_08935844;
    case 401u: goto L_08935854;
    case 402u: goto L_0893585C;
    case 403u: goto L_08935870;
    case 404u: goto L_0893587C;
    case 405u: goto L_08935888;
    case 406u: goto L_0893588C;
    case 407u: goto L_089358A0;
    case 408u: goto L_089358B8;
    case 409u: goto L_089358C4;
    case 410u: goto L_089358D8;
    case 411u: goto L_089358E0;
    case 412u: goto L_089358F0;
    case 413u: goto L_089358FC;
    case 414u: goto L_08935910;
    case 415u: goto L_08935924;
    case 416u: goto L_0893592C;
    case 417u: goto L_0893593C;
    case 418u: goto L_08935944;
    case 419u: goto L_0893595C;
    case 420u: goto L_08935964;
    case 421u: goto L_0893596C;
    case 422u: goto L_08935980;
    case 423u: goto L_08935988;
    case 424u: goto L_08935994;
    case 425u: goto L_089359A0;
    case 426u: goto L_089359A8;
    case 427u: goto L_089359BC;
    case 428u: goto L_089359C4;
    case 429u: goto L_089359D0;
    case 430u: goto L_089359DC;
    case 431u: goto L_089359E4;
    case 432u: goto L_089359F8;
    case 433u: goto L_08935A00;
    case 434u: goto L_08935A0C;
    case 435u: goto L_08935A10;
    case 436u: goto L_08935A24;
    case 437u: goto L_08935A40;
    case 438u: goto L_08935A4C;
    case 439u: goto L_08935A60;
    case 440u: goto L_08935A68;
    case 441u: goto L_08935A78;
    case 442u: goto L_08935A80;
    case 443u: goto L_08935A94;
    case 444u: goto L_08935AA0;
    case 445u: goto L_08935AAC;
    case 446u: goto L_08935AB0;
    case 447u: goto L_08935AC4;
    case 448u: goto L_08935ADC;
    case 449u: goto L_08935AE8;
    case 450u: goto L_08935AFC;
    case 451u: goto L_08935B04;
    case 452u: goto L_08935B14;
    case 453u: goto L_08935B28;
    case 454u: goto L_08935B3C;
    case 455u: goto L_08935B44;
    case 456u: goto L_08935B54;
    case 457u: goto L_08935B5C;
    case 458u: goto L_08935B74;
    case 459u: goto L_08935B7C;
    case 460u: goto L_08935B84;
    case 461u: goto L_08935B98;
    case 462u: goto L_08935BA0;
    case 463u: goto L_08935BAC;
    case 464u: goto L_08935BB8;
    case 465u: goto L_08935BC0;
    case 466u: goto L_08935BD4;
    case 467u: goto L_08935BDC;
    case 468u: goto L_08935BE8;
    case 469u: goto L_08935BF4;
    case 470u: goto L_08935BFC;
    case 471u: goto L_08935C10;
    case 472u: goto L_08935C18;
    case 473u: goto L_08935C24;
    case 474u: goto L_08935C28;
    case 475u: goto L_08935C3C;
    case 476u: goto L_08935C58;
    case 477u: goto L_08935C64;
    case 478u: goto L_08935C78;
    case 479u: goto L_08935C80;
    case 480u: goto L_08935C90;
    case 481u: goto L_08935C98;
    case 482u: goto L_08935CAC;
    case 483u: goto L_08935CB8;
    case 484u: goto L_08935CC4;
    case 485u: goto L_08935CC8;
    case 486u: goto L_08935CDC;
    case 487u: goto L_08935CF4;
    case 488u: goto L_08935D00;
    case 489u: goto L_08935D14;
    case 490u: goto L_08935D1C;
    case 491u: goto L_08935D2C;
    case 492u: goto L_08935D40;
    case 493u: goto L_08935D54;
    case 494u: goto L_08935D5C;
    case 495u: goto L_08935D6C;
    case 496u: goto L_08935D74;
    case 497u: goto L_08935D8C;
    case 498u: goto L_08935D94;
    case 499u: goto L_08935D9C;
    case 500u: goto L_08935DB0;
    case 501u: goto L_08935DB8;
    case 502u: goto L_08935DC4;
    case 503u: goto L_08935DD0;
    case 504u: goto L_08935DD8;
    case 505u: goto L_08935DEC;
    case 506u: goto L_08935DF4;
    case 507u: goto L_08935E00;
    case 508u: goto L_08935E0C;
    case 509u: goto L_08935E14;
    case 510u: goto L_08935E28;
    case 511u: goto L_08935E30;
    case 512u: goto L_08935E3C;
    case 513u: goto L_08935E40;
    case 514u: goto L_08935E54;
    case 515u: goto L_08935E70;
    case 516u: goto L_08935E7C;
    case 517u: goto L_08935E90;
    case 518u: goto L_08935E98;
    case 519u: goto L_08935EA8;
    case 520u: goto L_08935EB0;
    case 521u: goto L_08935EC4;
    case 522u: goto L_08935ED0;
    case 523u: goto L_08935EDC;
    case 524u: goto L_08935EE0;
    case 525u: goto L_08935EF4;
    case 526u: goto L_08935F0C;
    case 527u: goto L_08935F18;
    case 528u: goto L_08935F2C;
    case 529u: goto L_08935F34;
    case 530u: goto L_08935F44;
    case 531u: goto L_08935F54;
    case 532u: goto L_08935F7C;
    case 533u: goto L_08935F90;
    case 534u: goto L_08935FA4;
    case 535u: goto L_08935FB0;
    case 536u: goto L_08935FBC;
    case 537u: goto L_08935FE8;
    case 538u: goto L_08936000;
    case 539u: goto L_08936004;
    case 540u: goto L_08936010;
    case 541u: goto L_08936030;
    case 542u: goto L_08936038;
    case 543u: goto L_08936064;
    case 544u: goto L_0893606C;
    case 545u: goto L_08936080;
    case 546u: goto L_08936088;
    case 547u: goto L_08936098;
    case 548u: goto L_089360C0;
    case 549u: goto L_089360C8;
    case 550u: goto L_089360D4;
    case 551u: goto L_089360E8;
    case 552u: goto L_089360F0;
    case 553u: goto L_08936108;
    case 554u: goto L_08936114;
    case 555u: goto L_0893611C;
    case 556u: goto L_08936128;
    case 557u: goto L_08936134;
    case 558u: goto L_0893613C;
    case 559u: goto L_08936148;
    case 560u: goto L_0893614C;
    case 561u: goto L_08936150;
    case 562u: goto L_08936158;
    case 563u: goto L_08936164;
    case 564u: goto L_0893616C;
    case 565u: goto L_08936174;
    case 566u: goto L_08936184;
    case 567u: goto L_0893618C;
    case 568u: goto L_08936198;
    case 569u: goto L_089361B0;
    case 570u: goto L_089361BC;
    case 571u: goto L_089361C4;
    case 572u: goto L_089361D0;
    case 573u: goto L_089361DC;
    case 574u: goto L_089361E4;
    case 575u: goto L_089361F0;
    case 576u: goto L_08936214;
    case 577u: goto L_08936238;
    case 578u: goto L_08936274;
    case 579u: goto L_08936280;
    case 580u: goto L_0893628C;
    case 581u: goto L_0893629C;
    case 582u: goto L_089362A4;
    case 583u: goto L_089362BC;
    case 584u: goto L_089362D8;
    case 585u: goto L_08936308;
    case 586u: goto L_08936314;
    case 587u: goto L_08936320;
    case 588u: goto L_08936350;
    case 589u: goto L_0893635C;
    case 590u: goto L_089363B4;
    case 591u: goto L_089363D8;
    case 592u: goto L_089363E4;
    case 593u: goto L_089363F0;
    case 594u: goto L_08936400;
    case 595u: goto L_0893640C;
    case 596u: goto L_08936418;
    case 597u: goto L_08936420;
    case 598u: goto L_08936434;
    case 599u: goto L_08936440;
    case 600u: goto L_0893646C;
    case 601u: goto L_0893647C;
    case 602u: goto L_08936490;
    case 603u: goto L_089364B4;
    case 604u: goto L_089364E0;
    case 605u: goto L_089364EC;
    case 606u: goto L_089364FC;
    case 607u: goto L_08936508;
    case 608u: goto L_0893651C;
    case 609u: goto L_08936540;
    case 610u: goto L_08936564;
    case 611u: goto L_08936570;
    case 612u: goto L_08936580;
    case 613u: goto L_0893658C;
    case 614u: goto L_089365A0;
    case 615u: goto L_089365A8;
    case 616u: goto L_089365D4;
    case 617u: goto L_089365DC;
    case 618u: goto L_08936608;
    case 619u: goto L_08936610;
    case 620u: goto L_0893663C;
    case 621u: goto L_08936670;
    case 622u: goto L_0893667C;
    case 623u: goto L_08936688;
    case 624u: goto L_089366B8;
    case 625u: goto L_089366DC;
    case 626u: goto L_08936708;
    case 627u: goto L_0893671C;
    case 628u: goto L_08936738;
    case 629u: goto L_08936750;
    case 630u: goto L_08936754;
    case 631u: goto L_08936760;
    case 632u: goto L_08936778;
    case 633u: goto L_08936784;
    case 634u: goto L_08936788;
    case 635u: goto L_089367A4;
    case 636u: goto L_089367B0;
    case 637u: goto L_089367B4;
    case 638u: goto L_089367C8;
    case 639u: goto L_089367D4;
    case 640u: goto L_089367D8;
    case 641u: goto L_089367E4;
    case 642u: goto L_0893680C;
    case 643u: goto L_08936828;
    case 644u: goto L_08936830;
    case 645u: goto L_08936834;
    case 646u: goto L_08936838;
    case 647u: goto L_08936844;
    case 648u: goto L_08936850;
    case 649u: goto L_0893685C;
    case 650u: goto L_08936868;
    case 651u: goto L_08936880;
    case 652u: goto L_08936888;
    case 653u: goto L_08936898;
    case 654u: goto L_089368A4;
    case 655u: goto L_089368C0;
    case 656u: goto L_089368CC;
    case 657u: goto L_089368D8;
    case 658u: goto L_089368F4;
    case 659u: goto L_08936900;
    case 660u: goto L_08936904;
    case 661u: goto L_08936908;
    case 662u: goto L_08936914;
    case 663u: goto L_08936938;
    case 664u: goto L_0893694C;
    case 665u: goto L_08936954;
    case 666u: goto L_08936960;
    case 667u: goto L_08936984;
    case 668u: goto L_08936990;
    case 669u: goto L_089369A4;
    case 670u: goto L_089369B8;
    case 671u: goto L_089369D4;
    case 672u: goto L_089369F0;
    case 673u: goto L_089369FC;
    case 674u: goto L_08936A10;
    case 675u: goto L_08936A28;
    case 676u: goto L_08936A34;
    case 677u: goto L_08936A3C;
    case 678u: goto L_08936A44;
    case 679u: goto L_08936A48;
    case 680u: goto L_08936A60;
    case 681u: goto L_08936A6C;
    case 682u: goto L_08936A74;
    case 683u: goto L_08936A7C;
    case 684u: goto L_08936A80;
    case 685u: goto L_08936A8C;
    case 686u: goto L_08936AB0;
    case 687u: goto L_08936ABC;
    case 688u: goto L_08936AC4;
    case 689u: goto L_08936AD8;
    case 690u: goto L_08936ADC;
    case 691u: goto L_08936AE8;
    case 692u: goto L_08936AF4;
    case 693u: goto L_08936B00;
    case 694u: goto L_08936B0C;
    case 695u: goto L_08936B20;
    case 696u: goto L_08936B2C;
    case 697u: goto L_08936B30;
    case 698u: goto L_08936B44;
    case 699u: goto L_08936B54;
    case 700u: goto L_08936B60;
    case 701u: goto L_08936B74;
    case 702u: goto L_08936B88;
    case 703u: goto L_08936B9C;
    case 704u: goto L_08936BA0;
    case 705u: goto L_08936BA8;
    case 706u: goto L_08936BB4;
    case 707u: goto L_08936BBC;
    case 708u: goto L_08936BD8;
    case 709u: goto L_08936C08;
    case 710u: goto L_08936C30;
    case 711u: goto L_08936C3C;
    case 712u: goto L_08936C50;
    case 713u: goto L_08936C58;
    case 714u: goto L_08936C60;
    case 715u: goto L_08936C74;
    case 716u: goto L_08936C88;
    case 717u: goto L_08936C90;
    case 718u: goto L_08936C9C;
    case 719u: goto L_08936CB4;
    case 720u: goto L_08936CBC;
    case 721u: goto L_08936CC8;
    case 722u: goto L_08936CE0;
    case 723u: goto L_08936CE8;
    case 724u: goto L_08936CF4;
    case 725u: goto L_08936D18;
    case 726u: goto L_08936D2C;
    case 727u: goto L_08936D4C;
    case 728u: goto L_08936D5C;
    case 729u: goto L_08936D60;
    case 730u: goto L_08936D68;
    case 731u: goto L_08936D74;
    case 732u: goto L_08936D9C;
    case 733u: goto L_08936DA8;
    case 734u: goto L_08936DB4;
    case 735u: goto L_08936DC0;
    case 736u: goto L_08936DC8;
    case 737u: goto L_08936DD0;
    case 738u: goto L_08936DE8;
    case 739u: goto L_08936DEC;
    case 740u: goto L_08936DF4;
    case 741u: goto L_08936E04;
    case 742u: goto L_08936E20;
    case 743u: goto L_08936E28;
    case 744u: goto L_08936E38;
    case 745u: goto L_08936E5C;
    case 746u: goto L_08936E6C;
    case 747u: goto L_08936E8C;
    case 748u: goto L_08936E90;
    case 749u: goto L_08936E98;
    case 750u: goto L_08936EB4;
    case 751u: goto L_08936EC4;
    case 752u: goto L_08936EE4;
    case 753u: goto L_08936EF0;
    case 754u: goto L_08936EFC;
    case 755u: goto L_08936F04;
    case 756u: goto L_08936F18;
    case 757u: goto L_08936F20;
    case 758u: goto L_08936F34;
    case 759u: goto L_08936F40;
    case 760u: goto L_08936F4C;
    case 761u: goto L_08936F58;
    case 762u: goto L_08936F6C;
    case 763u: goto L_08936F80;
    case 764u: goto L_08936F88;
    case 765u: goto L_08936F94;
    case 766u: goto L_08936FA8;
    case 767u: goto L_08936FB0;
    case 768u: goto L_08936FBC;
    case 769u: goto L_08936FD4;
    case 770u: goto L_08936FDC;
    case 771u: goto L_08936FE8;
    case 772u: goto L_08937000;
    case 773u: goto L_0893701C;
    case 774u: goto L_08937028;
    case 775u: goto L_0893702C;
    case 776u: goto L_08937034;
    case 777u: goto L_08937048;
    case 778u: goto L_08937050;
    case 779u: goto L_0893705C;
    case 780u: goto L_08937070;
    case 781u: goto L_0893708C;
    case 782u: goto L_089370C0;
    case 783u: goto L_089370C8;
    case 784u: goto L_089370CC;
    case 785u: goto L_089370D4;
    case 786u: goto L_089370E0;
    case 787u: goto L_089370E8;
    case 788u: goto L_089370F4;
    case 789u: goto L_0893710C;
    case 790u: goto L_0893711C;
    case 791u: goto L_08937140;
    case 792u: goto L_0893714C;
    case 793u: goto L_0893715C;
    case 794u: goto L_08937168;
    case 795u: goto L_08937174;
    case 796u: goto L_08937184;
    case 797u: goto L_08937194;
    case 798u: goto L_089371A0;
    case 799u: goto L_089371AC;
    case 800u: goto L_089371B4;
    case 801u: goto L_089371C0;
    case 802u: goto L_089371D0;
    case 803u: goto L_089371DC;
    case 804u: goto L_089371E8;
    case 805u: goto L_089371F4;
    case 806u: goto L_08937200;
    case 807u: goto L_08937214;
    case 808u: goto L_08937224;
    case 809u: goto L_08937230;
    case 810u: goto L_0893723C;
    case 811u: goto L_08937244;
    case 812u: goto L_08937250;
    case 813u: goto L_08937254;
    case 814u: goto L_08937260;
    case 815u: goto L_0893726C;
    case 816u: goto L_08937274;
    case 817u: goto L_08937280;
    case 818u: goto L_08937290;
    case 819u: goto L_089372B4;
    case 820u: goto L_089372BC;
    case 821u: goto L_089372CC;
    case 822u: goto L_089372F0;
    case 823u: goto L_089372F8;
    case 824u: goto L_08937304;
    case 825u: goto L_0893730C;
    case 826u: goto L_08937318;
    case 827u: goto L_08937320;
    case 828u: goto L_0893732C;
    case 829u: goto L_08937334;
    case 830u: goto L_08937340;
    case 831u: goto L_08937350;
    case 832u: goto L_08937358;
    case 833u: goto L_08937374;
    case 834u: goto L_0893737C;
    case 835u: goto L_08937388;
    case 836u: goto L_08937390;
    case 837u: goto L_0893739C;
    case 838u: goto L_089373A4;
    case 839u: goto L_089373B0;
    case 840u: goto L_089373B8;
    case 841u: goto L_089373C4;
    case 842u: goto L_089373D4;
    case 843u: goto L_089373DC;
    case 844u: goto L_089373E8;
    case 845u: goto L_089373F8;
    case 846u: goto L_08937400;
    case 847u: goto L_0893741C;
    case 848u: goto L_08937428;
    case 849u: goto L_08937434;
    case 850u: goto L_0893743C;
    case 851u: goto L_08937448;
    case 852u: goto L_08937450;
    case 853u: goto L_0893745C;
    case 854u: goto L_08937464;
    case 855u: goto L_08937470;
    case 856u: goto L_08937478;
    case 857u: goto L_08937490;
    case 858u: goto L_08937498;
    case 859u: goto L_089374A8;
    case 860u: goto L_089374B0;
    case 861u: goto L_089374CC;
    case 862u: goto L_089374D4;
    case 863u: goto L_089374E0;
    case 864u: goto L_089374EC;
    case 865u: goto L_089374F8;
    case 866u: goto L_08937504;
    case 867u: goto L_08937518;
    case 868u: goto L_08937520;
    case 869u: goto L_0893752C;
    case 870u: goto L_0893753C;
    case 871u: goto L_08937544;
    case 872u: goto L_08937560;
    case 873u: goto L_0893756C;
    case 874u: goto L_08937578;
    case 875u: goto L_08937580;
    case 876u: goto L_0893758C;
    case 877u: goto L_08937594;
    case 878u: goto L_089375A0;
    case 879u: goto L_089375A8;
    case 880u: goto L_089375B4;
    case 881u: goto L_089375B8;
    case 882u: goto L_089375C4;
    case 883u: goto L_089375D0;
    case 884u: goto L_089375D8;
    case 885u: goto L_089375E4;
    case 886u: goto L_089375EC;
    case 887u: goto L_089375F8;
    case 888u: goto L_08937600;
    case 889u: goto L_08937604;
    case 890u: goto L_0893762C;
    case 891u: goto L_0893766C;
    case 892u: goto L_08937680;
    case 893u: goto L_08937688;
    case 894u: goto L_08937698;
    case 895u: goto L_089376A0;
    case 896u: goto L_089376AC;
    case 897u: goto L_089376B8;
    case 898u: goto L_089376C8;
    case 899u: goto L_089376DC;
    case 900u: goto L_089376E8;
    case 901u: goto L_089376F0;
    case 902u: goto L_089376FC;
    case 903u: goto L_08937708;
    case 904u: goto L_08937724;
    case 905u: goto L_08937734;
    case 906u: goto L_08937758;
    case 907u: goto L_08937764;
    case 908u: goto L_0893776C;
    case 909u: goto L_08937778;
    case 910u: goto L_08937780;
    case 911u: goto L_08937794;
    case 912u: goto L_089377A8;
    case 913u: goto L_089377B4;
    case 914u: goto L_089377BC;
    case 915u: goto L_089377C4;
    case 916u: goto L_089377D4;
    case 917u: goto L_089377E8;
    case 918u: goto L_089377F4;
    case 919u: goto L_08937800;
    case 920u: goto L_08937808;
    case 921u: goto L_08937810;
    case 922u: goto L_0893781C;
    case 923u: goto L_08937824;
    case 924u: goto L_08937830;
    case 925u: goto L_0893783C;
    case 926u: goto L_08937858;
    case 927u: goto L_08937868;
    case 928u: goto L_0893788C;
    case 929u: goto L_08937898;
    case 930u: goto L_089378A0;
    case 931u: goto L_089378AC;
    case 932u: goto L_089378B4;
    case 933u: goto L_089378C8;
    case 934u: goto L_089378DC;
    case 935u: goto L_089378E8;
    case 936u: goto L_089378F0;
    case 937u: goto L_089378F8;
    case 938u: goto L_08937908;
    case 939u: goto L_08937918;
    case 940u: goto L_08937934;
    case 941u: goto L_08937948;
    case 942u: goto L_08937954;
    case 943u: goto L_08937964;
    case 944u: goto L_08937970;
    case 945u: goto L_08937974;
    case 946u: goto L_08937988;
    case 947u: goto L_08937990;
    case 948u: goto L_089379A4;
    case 949u: goto L_089379AC;
    case 950u: goto L_089379B8;
    case 951u: goto L_089379CC;
    case 952u: goto L_089379D4;
    case 953u: goto L_089379EC;
    case 954u: goto L_089379FC;
    case 955u: goto L_08937A08;
    case 956u: goto L_08937A10;
    case 957u: goto L_08937A1C;
    case 958u: goto L_08937A24;
    case 959u: goto L_08937A38;
    case 960u: goto L_08937A4C;
    case 961u: goto L_08937A58;
    case 962u: goto L_08937A60;
    case 963u: goto L_08937A68;
    case 964u: goto L_08937A78;
    case 965u: goto L_08937A84;
    case 966u: goto L_08937A94;
    case 967u: goto L_08937ABC;
    case 968u: goto L_08937AC8;
    case 969u: goto L_08937ACC;
    case 970u: goto L_08937AD4;
    case 971u: goto L_08937AE4;
    case 972u: goto L_08937AEC;
    case 973u: goto L_08937B04;
    case 974u: goto L_08937B10;
    case 975u: goto L_08937B18;
    case 976u: goto L_08937B24;
    case 977u: goto L_08937B2C;
    case 978u: goto L_08937B40;
    case 979u: goto L_08937B54;
    case 980u: goto L_08937B60;
    case 981u: goto L_08937B68;
    case 982u: goto L_08937B70;
    case 983u: goto L_08937B80;
    case 984u: goto L_08937B8C;
    case 985u: goto L_08937BA4;
    case 986u: goto L_08937BB0;
    case 987u: goto L_08937BB8;
    case 988u: goto L_08937BC4;
    case 989u: goto L_08937BCC;
    case 990u: goto L_08937BE0;
    case 991u: goto L_08937BF4;
    case 992u: goto L_08937C00;
    case 993u: goto L_08937C08;
    case 994u: goto L_08937C10;
    case 995u: goto L_08937C20;
    case 996u: goto L_08937C34;
    case 997u: goto L_08937C44;
    case 998u: goto L_08937C6C;
    case 999u: goto L_08937C78;
    case 1000u: goto L_08937C84;
    case 1001u: goto L_08937C94;
    case 1002u: goto L_08937C9C;
    case 1003u: goto L_08937CB4;
    case 1004u: goto L_08937CC0;
    case 1005u: goto L_08937CC8;
    case 1006u: goto L_08937CD4;
    case 1007u: goto L_08937CDC;
    case 1008u: goto L_08937CF0;
    case 1009u: goto L_08937D04;
    case 1010u: goto L_08937D10;
    case 1011u: goto L_08937D18;
    case 1012u: goto L_08937D20;
    case 1013u: goto L_08937D30;
    case 1014u: goto L_08937D3C;
    case 1015u: goto L_08937D54;
    case 1016u: goto L_08937D60;
    case 1017u: goto L_08937D68;
    case 1018u: goto L_08937D74;
    case 1019u: goto L_08937D7C;
    case 1020u: goto L_08937D90;
    case 1021u: goto L_08937DA4;
    case 1022u: goto L_08937DB0;
    case 1023u: goto L_08937DB8;
    case 1024u: goto L_08937DC0;
    case 1025u: goto L_08937DD0;
    case 1026u: goto L_08937DDC;
    case 1027u: goto L_08937DF4;
    case 1028u: goto L_08937E00;
    case 1029u: goto L_08937E08;
    case 1030u: goto L_08937E14;
    case 1031u: goto L_08937E1C;
    case 1032u: goto L_08937E30;
    case 1033u: goto L_08937E44;
    case 1034u: goto L_08937E50;
    case 1035u: goto L_08937E58;
    case 1036u: goto L_08937E60;
    case 1037u: goto L_08937E70;
    case 1038u: goto L_08937E88;
    case 1039u: goto L_08937E94;
    case 1040u: goto L_08937EA4;
    case 1041u: goto L_08937EB0;
    case 1042u: goto L_08937EB8;
    case 1043u: goto L_08937EC4;
    case 1044u: goto L_08937ECC;
    case 1045u: goto L_08937EE4;
    case 1046u: goto L_08937EF8;
    case 1047u: goto L_08937F04;
    case 1048u: goto L_08937F0C;
    case 1049u: goto L_08937F14;
    case 1050u: goto L_08937F24;
    case 1051u: goto L_08937F30;
    case 1052u: goto L_08937F54;
    case 1053u: goto L_08937F78;
    case 1054u: goto L_08937F84;
    case 1055u: goto L_08937F90;
    case 1056u: goto L_08937F98;
    case 1057u: goto L_08937FB8;
    case 1058u: goto L_08937FC4;
    case 1059u: goto L_08937FCC;
    case 1060u: goto L_08937FD8;
    case 1061u: goto L_08937FE0;
    case 1062u: goto L_08937FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934014u) goto L_08934014;
    return;
L_08934014:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934060;
      }
      goto L_08934038;
    }
L_08934038:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934044u) goto L_08934044;
    return;
L_08934044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934058;
      }
      goto L_0893404C;
    }
L_0893404C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934058u) goto L_08934058;
    return;
L_08934058:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08934060;
L_08934060:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08934074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934074u) goto L_08934074;
    return;
L_08934074:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893409C;
      }
      goto L_08934088;
    }
L_08934088:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08934094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934094u) goto L_08934094;
    return;
L_08934094:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893409C;
L_0893409C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089340B4;
      }
      goto L_089340A4;
    }
L_089340A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089340B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089340B4u) goto L_089340B4;
    return;
L_089340B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934100;
      }
      goto L_089340D8;
    }
L_089340D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089340E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089340E4u) goto L_089340E4;
    return;
L_089340E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089340F8;
      }
      goto L_089340EC;
    }
L_089340EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089340F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089340F8u) goto L_089340F8;
    return;
L_089340F8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08934100;
L_08934100:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08934114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934114u) goto L_08934114;
    return;
L_08934114:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893413C;
      }
      goto L_08934128;
    }
L_08934128:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08934134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934134u) goto L_08934134;
    return;
L_08934134:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893413C;
L_0893413C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934154;
      }
      goto L_08934144;
    }
L_08934144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934154u) goto L_08934154;
    return;
L_08934154:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08934164;
L_08934164:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6444));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893418Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893418Cu) goto L_0893418C;
    return;
L_0893418C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089341C4;
      }
      goto L_0893419C;
    }
L_0893419C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089341A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089341A8u) goto L_089341A8;
    return;
L_089341A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089341BC;
      }
      goto L_089341B0;
    }
L_089341B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089341BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089341BCu) goto L_089341BC;
    return;
L_089341BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089341C4;
L_089341C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089341D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089341D8u) goto L_089341D8;
    return;
L_089341D8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934200;
      }
      goto L_089341EC;
    }
L_089341EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089341F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089341F8u) goto L_089341F8;
    return;
L_089341F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934200;
L_08934200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934218;
      }
      goto L_08934208;
    }
L_08934208:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934218u) goto L_08934218;
    return;
L_08934218:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934228;
      }
      goto L_08934224;
    }
L_08934224:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08934228;
L_08934228:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934258:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08934368;
      }
      goto L_089342A0;
    }
L_089342A0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934380;
      }
      goto L_089342B0;
    }
L_089342B0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089342FC;
      }
      goto L_089342D4;
    }
L_089342D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089342E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089342E0u) goto L_089342E0;
    return;
L_089342E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_089342E8;
    }
L_089342E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089342F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089342F4u) goto L_089342F4;
    return;
L_089342F4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089342FC;
L_089342FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08934310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934310u) goto L_08934310;
    return;
L_08934310:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934338;
      }
      goto L_08934324;
    }
L_08934324:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08934330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934330u) goto L_08934330;
    return;
L_08934330:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934338;
L_08934338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934350;
      }
      goto L_08934340;
    }
L_08934340:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934350u) goto L_08934350;
    return;
L_08934350:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934380;
      }
      goto L_08934368;
    }
L_08934368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934380;
      }
      goto L_08934378;
    }
L_08934378:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_08934380;
L_08934380:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08934BEC;
      }
      goto L_08934388;
    }
L_08934388:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934BEC;
      }
      goto L_08934394;
    }
L_08934394:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089343CC;
      }
      goto L_089343C4;
    }
L_089343C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089343D4;
      }
      goto L_089343CC;
    }
L_089343CC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_089343D4;
L_089343D4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x089343E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089343E4u) goto L_089343E4;
    return;
L_089343E4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934404;
      }
      goto L_089343FC;
    }
L_089343FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893440C;
      }
      goto L_08934404;
    }
L_08934404:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_0893440C;
L_0893440C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08934418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 258u, 0x0893D0BCu>(ctx, &aot_mem) && ctx.pc == 0x08934418u) goto L_08934418;
    return;
L_08934418:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934440;
      }
      goto L_08934424;
    }
L_08934424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x0893443Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 270u, 0x0893D18Cu>(ctx, &aot_mem) && ctx.pc == 0x0893443Cu) goto L_0893443C;
    return;
L_0893443C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08934440;
L_08934440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934480;
      }
      goto L_0893444C;
    }
L_0893444C:
    ctx.set_gpr(31, 0x08934454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08934454u) goto L_08934454;
    return;
L_08934454:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08934460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08934460u) goto L_08934460;
    return;
L_08934460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893446Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x0893446Cu) goto L_0893446C;
    return;
L_0893446C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 240u, 0x0893CF68u>(ctx, &aot_mem) && ctx.pc == 0x08934480u) goto L_08934480;
    return;
L_08934480:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08934BB0;
      }
      goto L_0893448C;
    }
L_0893448C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089344D0;
      }
      goto L_089344A8;
    }
L_089344A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089344B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089344B4u) goto L_089344B4;
    return;
L_089344B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089344C8;
      }
      goto L_089344BC;
    }
L_089344BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089344C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089344C8u) goto L_089344C8;
    return;
L_089344C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089344D0;
L_089344D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089344E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089344E4u) goto L_089344E4;
    return;
L_089344E4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893450C;
      }
      goto L_089344F8;
    }
L_089344F8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08934504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934504u) goto L_08934504;
    return;
L_08934504:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893450C;
L_0893450C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934524;
      }
      goto L_08934514;
    }
L_08934514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934524u) goto L_08934524;
    return;
L_08934524:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089345AC;
      }
      goto L_08934584;
    }
L_08934584:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934590u) goto L_08934590;
    return;
L_08934590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089345A4;
      }
      goto L_08934598;
    }
L_08934598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089345A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089345A4u) goto L_089345A4;
    return;
L_089345A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089345AC;
L_089345AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089345C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089345C0u) goto L_089345C0;
    return;
L_089345C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089345E8;
      }
      goto L_089345D4;
    }
L_089345D4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089345E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089345E0u) goto L_089345E0;
    return;
L_089345E0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089345E8;
L_089345E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934600;
      }
      goto L_089345F0;
    }
L_089345F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934600u) goto L_08934600;
    return;
L_08934600:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893464C;
      }
      goto L_08934624;
    }
L_08934624:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934630u) goto L_08934630;
    return;
L_08934630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934644;
      }
      goto L_08934638;
    }
L_08934638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934644u) goto L_08934644;
    return;
L_08934644:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893464C;
L_0893464C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934660u) goto L_08934660;
    return;
L_08934660:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934688;
      }
      goto L_08934674;
    }
L_08934674:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08934680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934680u) goto L_08934680;
    return;
L_08934680:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934688;
L_08934688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346A0;
      }
      goto L_08934690;
    }
L_08934690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089346A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089346A0u) goto L_089346A0;
    return;
L_089346A0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089346EC;
      }
      goto L_089346C4;
    }
L_089346C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089346D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089346D0u) goto L_089346D0;
    return;
L_089346D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346E4;
      }
      goto L_089346D8;
    }
L_089346D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089346E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089346E4u) goto L_089346E4;
    return;
L_089346E4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089346EC;
L_089346EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934700u) goto L_08934700;
    return;
L_08934700:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934728;
      }
      goto L_08934714;
    }
L_08934714:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08934720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934720u) goto L_08934720;
    return;
L_08934720:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934728;
L_08934728:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934740;
      }
      goto L_08934730;
    }
L_08934730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934740u) goto L_08934740;
    return;
L_08934740:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893478C;
      }
      goto L_08934764;
    }
L_08934764:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934770u) goto L_08934770;
    return;
L_08934770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934784;
      }
      goto L_08934778;
    }
L_08934778:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934784u) goto L_08934784;
    return;
L_08934784:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893478C;
L_0893478C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089347A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089347A0u) goto L_089347A0;
    return;
L_089347A0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089347C8;
      }
      goto L_089347B4;
    }
L_089347B4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089347C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089347C0u) goto L_089347C0;
    return;
L_089347C0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089347C8;
L_089347C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089347E0;
      }
      goto L_089347D0;
    }
L_089347D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089347E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089347E0u) goto L_089347E0;
    return;
L_089347E0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893482C;
      }
      goto L_08934804;
    }
L_08934804:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934810u) goto L_08934810;
    return;
L_08934810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934824;
      }
      goto L_08934818;
    }
L_08934818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934824u) goto L_08934824;
    return;
L_08934824:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893482C;
L_0893482C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934840u) goto L_08934840;
    return;
L_08934840:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934868;
      }
      goto L_08934854;
    }
L_08934854:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08934860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934860u) goto L_08934860;
    return;
L_08934860:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934868;
L_08934868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934880;
      }
      goto L_08934870;
    }
L_08934870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934880u) goto L_08934880;
    return;
L_08934880:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348CC;
      }
      goto L_089348A4;
    }
L_089348A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089348B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089348B0u) goto L_089348B0;
    return;
L_089348B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089348C4;
      }
      goto L_089348B8;
    }
L_089348B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089348C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089348C4u) goto L_089348C4;
    return;
L_089348C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089348CC;
L_089348CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089348E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089348E0u) goto L_089348E0;
    return;
L_089348E0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934908;
      }
      goto L_089348F4;
    }
L_089348F4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08934900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934900u) goto L_08934900;
    return;
L_08934900:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934908;
L_08934908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934920;
      }
      goto L_08934910;
    }
L_08934910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934920u) goto L_08934920;
    return;
L_08934920:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893496C;
      }
      goto L_08934944;
    }
L_08934944:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934950u) goto L_08934950;
    return;
L_08934950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934964;
      }
      goto L_08934958;
    }
L_08934958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934964u) goto L_08934964;
    return;
L_08934964:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893496C;
L_0893496C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934980u) goto L_08934980;
    return;
L_08934980:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089349A8;
      }
      goto L_08934994;
    }
L_08934994:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x089349A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089349A0u) goto L_089349A0;
    return;
L_089349A0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089349A8;
L_089349A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089349C0;
      }
      goto L_089349B0;
    }
L_089349B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089349C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089349C0u) goto L_089349C0;
    return;
L_089349C0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934A0C;
      }
      goto L_089349E4;
    }
L_089349E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089349F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089349F0u) goto L_089349F0;
    return;
L_089349F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A04;
      }
      goto L_089349F8;
    }
L_089349F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934A04u) goto L_08934A04;
    return;
L_08934A04:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08934A0C;
L_08934A0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934A20u) goto L_08934A20;
    return;
L_08934A20:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A48;
      }
      goto L_08934A34;
    }
L_08934A34:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08934A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934A40u) goto L_08934A40;
    return;
L_08934A40:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934A48;
L_08934A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A60;
      }
      goto L_08934A50;
    }
L_08934A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934A60u) goto L_08934A60;
    return;
L_08934A60:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934AAC;
      }
      goto L_08934A84;
    }
L_08934A84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934A90u) goto L_08934A90;
    return;
L_08934A90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934AA4;
      }
      goto L_08934A98;
    }
L_08934A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934AA4u) goto L_08934AA4;
    return;
L_08934AA4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08934AAC;
L_08934AAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934AC0u) goto L_08934AC0;
    return;
L_08934AC0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934AE8;
      }
      goto L_08934AD4;
    }
L_08934AD4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08934AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934AE0u) goto L_08934AE0;
    return;
L_08934AE0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934AE8;
L_08934AE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B00;
      }
      goto L_08934AF0;
    }
L_08934AF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934B00u) goto L_08934B00;
    return;
L_08934B00:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934B4C;
      }
      goto L_08934B24;
    }
L_08934B24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08934B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08934B30u) goto L_08934B30;
    return;
L_08934B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B44;
      }
      goto L_08934B38;
    }
L_08934B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08934B44u) goto L_08934B44;
    return;
L_08934B44:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08934B4C;
L_08934B4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08934B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08934B60u) goto L_08934B60;
    return;
L_08934B60:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B88;
      }
      goto L_08934B74;
    }
L_08934B74:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08934B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08934B80u) goto L_08934B80;
    return;
L_08934B80:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08934B88;
L_08934B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934BA0;
      }
      goto L_08934B90;
    }
L_08934B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08934BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08934BA0u) goto L_08934BA0;
    return;
L_08934BA0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    goto L_08934BB0;
L_08934BB0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934BF0;
      }
      goto L_08934BB8;
    }
L_08934BB8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934BD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934BD4u) goto L_08934BD4;
    return;
L_08934BD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08934BF0;
      }
      goto L_08934BE0;
    }
L_08934BE0:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934BF0;
      }
      goto L_08934BEC;
    }
L_08934BEC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08934BF0;
L_08934BF0:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_08934C24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934C70u) goto L_08934C70;
    return;
L_08934C70:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08934C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 373u, 0x0893278Cu>(ctx, &aot_mem) && ctx.pc == 0x08934C7Cu) goto L_08934C7C;
    return;
L_08934C7C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08934C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08934C8Cu) goto L_08934C8C;
    return;
L_08934C8C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D5C;
      }
      goto L_08934C98;
    }
L_08934C98:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D58;
      }
      goto L_08934CBC;
    }
L_08934CBC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, 0x08934CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08934CD0u) goto L_08934CD0;
    return;
L_08934CD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934D58;
      }
      goto L_08934CD8;
    }
L_08934CD8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D0C;
      }
      goto L_08934CE8;
    }
L_08934CE8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08934D08;
      }
      goto L_08934CFC;
    }
L_08934CFC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D18;
      }
      goto L_08934D08;
    }
L_08934D08:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08934D0C;
L_08934D0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934CE8;
      }
      goto L_08934D18;
    }
L_08934D18:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934D58;
      }
      goto L_08934D20;
    }
L_08934D20:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(436)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934D38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934D38u) goto L_08934D38;
    return;
L_08934D38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08934D48;
      }
      goto L_08934D44;
    }
L_08934D44:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    goto L_08934D48;
L_08934D48:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08934D58;
L_08934D58:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08934D5C;
L_08934D5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934C98;
      }
      goto L_08934D68;
    }
L_08934D68:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F18;
      }
      goto L_08934D74;
    }
L_08934D74:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934DCC;
      }
      goto L_08934D98;
    }
L_08934D98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934DA8;
    }
L_08934DA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934DBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934DBCu) goto L_08934DBC;
    return;
L_08934DBC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934DEC;
      }
      goto L_08934DCC;
    }
L_08934DCC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, 0x08934DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08934DE0u) goto L_08934DE0;
    return;
L_08934DE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934DE8;
    }
L_08934DE8:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    goto L_08934DEC;
L_08934DEC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E6C;
      }
      goto L_08934DF8;
    }
L_08934DF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934E0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934E0Cu) goto L_08934E0C;
    return;
L_08934E0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08934E54;
      }
      goto L_08934E18;
    }
L_08934E18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934E2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934E2Cu) goto L_08934E2C;
    return;
L_08934E2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934E44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934E44u) goto L_08934E44;
    return;
L_08934E44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E6C;
      }
      goto L_08934E54;
    }
L_08934E54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934E68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934E68u) goto L_08934E68;
    return;
L_08934E68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08934E6C;
L_08934E6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E90;
      }
      goto L_08934E74;
    }
L_08934E74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, 0x08934E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08934E88u) goto L_08934E88;
    return;
L_08934E88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934DF8;
      }
      goto L_08934E90;
    }
L_08934E90:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934EC0;
      }
      goto L_08934E9C;
    }
L_08934E9C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08934EBC;
      }
      goto L_08934EB0;
    }
L_08934EB0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934ECC;
      }
      goto L_08934EBC;
    }
L_08934EBC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08934EC0;
L_08934EC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934E9C;
      }
      goto L_08934ECC;
    }
L_08934ECC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934ED4;
    }
L_08934ED4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934EDC;
    }
L_08934EDC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(436)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934EF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934EF4u) goto L_08934EF4;
    return;
L_08934EF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08934F04;
      }
      goto L_08934F00;
    }
L_08934F00:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    goto L_08934F04;
L_08934F04:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08934F14;
L_08934F14:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08934F18;
L_08934F18:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934D74;
      }
      goto L_08934F24;
    }
L_08934F24:
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934F58:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934FC4;
      }
      goto L_08934F8C;
    }
L_08934F8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934F98;
    }
L_08934F98:
    ctx.set_gpr(31, 0x08934FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08934FA0u) goto L_08934FA0;
    return;
L_08934FA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934FA8;
    }
L_08934FA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934FBCu) goto L_08934FBC;
    return;
L_08934FBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_08934FC4;
L_08934FC4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934F8C;
      }
      goto L_08934FD0;
    }
L_08934FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08934FECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934FECu) goto L_08934FEC;
    return;
L_08934FEC:
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
L_08935008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089350A0;
      }
      goto L_08935030;
    }
L_08935030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935098;
      }
      goto L_0893503C;
    }
L_0893503C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08935098;
      }
      goto L_08935054;
    }
L_08935054:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935064u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935064u) goto L_08935064;
    return;
L_08935064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935084;
      }
      goto L_0893506C;
    }
L_0893506C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935084u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935084u) goto L_08935084;
    return;
L_08935084:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935098u) goto L_08935098;
    return;
L_08935098:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_089350A0;
L_089350A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935030;
      }
      goto L_089350AC;
    }
L_089350AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089350CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089350CCu) goto L_089350CC;
    return;
L_089350CC:
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
L_089350E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935144;
      }
      goto L_08935108;
    }
L_08935108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893513C;
      }
      goto L_08935114;
    }
L_08935114:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[3] << 10u);
    ctx.set_gpr(5, ctx.gpr[5] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893513C;
      }
      goto L_0893512C;
    }
L_0893512C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893513Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893513Cu) goto L_0893513C;
    return;
L_0893513C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_08935144;
L_08935144:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935108;
      }
      goto L_08935150;
    }
L_08935150:
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
L_08935168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893518Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893518Cu) goto L_0893518C;
    return;
L_0893518C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089351B0;
      }
      goto L_0893519C;
    }
L_0893519C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089351B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089351B0u) goto L_089351B0;
    return;
L_089351B0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(74));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089351D8;
      }
      goto L_089351BC;
    }
L_089351BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089351D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089351D4u) goto L_089351D4;
    return;
L_089351D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_089351D8;
L_089351D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089351BC;
      }
      goto L_089351E0;
    }
L_089351E0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x089351F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089351F4u) goto L_089351F4;
    return;
L_089351F4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935224;
      }
      goto L_08935200;
    }
L_08935200:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08935224;
L_08935224:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935200;
      }
      goto L_08935230;
    }
L_08935230:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935244u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935244u) goto L_08935244;
    return;
L_08935244:
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
L_0893525C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x08935288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08935288u) goto L_08935288;
    return;
L_08935288:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089352B8;
      }
      goto L_08935294;
    }
L_08935294:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089352B8;
L_089352B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935294;
      }
      goto L_089352C4;
    }
L_089352C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089352D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089352D8u) goto L_089352D8;
    return;
L_089352D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089352E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x089352E8u) goto L_089352E8;
    return;
L_089352E8:
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
L_08935300:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 426u, 0x08945EA4u>(ctx, &aot_mem) && ctx.pc == 0x0893531Cu) goto L_0893531C;
    return;
L_0893531C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(74));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935344;
      }
      goto L_08935328;
    }
L_08935328:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935340u) goto L_08935340;
    return;
L_08935340:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08935344;
L_08935344:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935328;
      }
      goto L_0893534C;
    }
L_0893534C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935360u) goto L_08935360;
    return;
L_08935360:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x08935374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08935374u) goto L_08935374;
    return;
L_08935374:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089353A4;
      }
      goto L_08935380;
    }
L_08935380:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089353A4;
L_089353A4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935380;
      }
      goto L_089353B0;
    }
L_089353B0:
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
L_089353C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31320), ctx.gpr[3]);
    ctx.set_gpr(31, 0x089353F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 132u, 0x0893C834u>(ctx, &aot_mem) && ctx.pc == 0x089353F8u) goto L_089353F8;
    return;
L_089353F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30884)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935418;
      }
      goto L_08935408;
    }
L_08935408:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935588;
      }
      goto L_08935418;
    }
L_08935418:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935434;
      }
      goto L_08935428;
    }
L_08935428:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935570;
      }
      goto L_08935434;
    }
L_08935434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935570;
      }
      goto L_0893543C;
    }
L_0893543C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935450;
      }
      goto L_08935448;
    }
L_08935448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893545C;
      }
      goto L_08935450;
    }
L_08935450:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935570;
      }
      goto L_08935458;
    }
L_08935458:
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_0893545C;
L_0893545C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25272));
    ctx.set_gpr(31, 0x08935470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08935470u) goto L_08935470;
    return;
L_08935470:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935494;
      }
      goto L_08935478;
    }
L_08935478:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_08935484;
    }
L_08935484:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30964), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_08935494;
    }
L_08935494:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7432));
    ctx.set_gpr(31, 0x089354A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089354A8u) goto L_089354A8;
    return;
L_089354A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089354CC;
      }
      goto L_089354B0;
    }
L_089354B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_089354BC;
    }
L_089354BC:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30968), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_089354CC;
    }
L_089354CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7424));
    ctx.set_gpr(31, 0x089354E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089354E0u) goto L_089354E0;
    return;
L_089354E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935504;
      }
      goto L_089354E8;
    }
L_089354E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_089354F4;
    }
L_089354F4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30972), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_08935504;
    }
L_08935504:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7416));
    ctx.set_gpr(31, 0x08935518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08935518u) goto L_08935518;
    return;
L_08935518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893553C;
      }
      goto L_08935520;
    }
L_08935520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_0893552C;
    }
L_0893552C:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30976), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_0893553C;
    }
L_0893553C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7404));
    ctx.set_gpr(31, 0x08935550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08935550u) goto L_08935550;
    return;
L_08935550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_08935558;
    }
L_08935558:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893556C;
      }
      goto L_08935564;
    }
L_08935564:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30980), ctx.gpr[3]);
    goto L_0893556C;
L_0893556C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08935570;
L_08935570:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893543C;
      }
      goto L_0893557C;
    }
L_0893557C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893543C;
      }
      goto L_08935588;
    }
L_08935588:
    ctx.set_gpr(31, 0x08935590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935590u) goto L_08935590;
    return;
L_08935590:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935640;
      }
      goto L_089355A0;
    }
L_089355A0:
    ctx.set_gpr(31, 0x089355A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089355A8u) goto L_089355A8;
    return;
L_089355A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(31, 0x089355C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089355C0u) goto L_089355C0;
    return;
L_089355C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935604;
      }
      goto L_089355C8;
    }
L_089355C8:
    ctx.set_gpr(31, 0x089355D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089355D0u) goto L_089355D0;
    return;
L_089355D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089355E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x089355E4u) goto L_089355E4;
    return;
L_089355E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089355F8;
      }
      goto L_089355EC;
    }
L_089355EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089355F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x089355F8u) goto L_089355F8;
    return;
L_089355F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935674;
      }
      goto L_08935604;
    }
L_08935604:
    ctx.set_gpr(31, 0x0893560Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x0893560Cu) goto L_0893560C;
    return;
L_0893560C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935620u) goto L_08935620;
    return;
L_08935620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935634;
      }
      goto L_08935628;
    }
L_08935628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935634u) goto L_08935634;
    return;
L_08935634:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935674;
      }
      goto L_08935640;
    }
L_08935640:
    ctx.set_gpr(31, 0x08935648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935648u) goto L_08935648;
    return;
L_08935648:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893565Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x0893565Cu) goto L_0893565C;
    return;
L_0893565C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935670;
      }
      goto L_08935664;
    }
L_08935664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935670u) goto L_08935670;
    return;
L_08935670:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08935674;
L_08935674:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935688u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935688u) goto L_08935688;
    return;
L_08935688:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30964)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089356B0;
      }
      goto L_0893569C;
    }
L_0893569C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089356B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089356B0u) goto L_089356B0;
    return;
L_089356B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089356C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089356C4u) goto L_089356C4;
    return;
L_089356C4:
    ctx.set_gpr(31, 0x089356CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089356CCu) goto L_089356CC;
    return;
L_089356CC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089356DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 252u, 0x08931C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089356DCu) goto L_089356DC;
    return;
L_089356DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30968)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935700;
      }
      goto L_089356EC;
    }
L_089356EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935844;
      }
      goto L_08935700;
    }
L_08935700:
    ctx.set_gpr(31, 0x08935708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935708u) goto L_08935708;
    return;
L_08935708:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089357B8;
      }
      goto L_08935718;
    }
L_08935718:
    ctx.set_gpr(31, 0x08935720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935720u) goto L_08935720;
    return;
L_08935720:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(31, 0x08935738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08935738u) goto L_08935738;
    return;
L_08935738:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893577C;
      }
      goto L_08935740;
    }
L_08935740:
    ctx.set_gpr(31, 0x08935748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935748u) goto L_08935748;
    return;
L_08935748:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893575Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x0893575Cu) goto L_0893575C;
    return;
L_0893575C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935770;
      }
      goto L_08935764;
    }
L_08935764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935770u) goto L_08935770;
    return;
L_08935770:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089357EC;
      }
      goto L_0893577C;
    }
L_0893577C:
    ctx.set_gpr(31, 0x08935784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935784u) goto L_08935784;
    return;
L_08935784:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935798u) goto L_08935798;
    return;
L_08935798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089357AC;
      }
      goto L_089357A0;
    }
L_089357A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089357ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x089357ACu) goto L_089357AC;
    return;
L_089357AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089357EC;
      }
      goto L_089357B8;
    }
L_089357B8:
    ctx.set_gpr(31, 0x089357C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089357C0u) goto L_089357C0;
    return;
L_089357C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089357D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x089357D4u) goto L_089357D4;
    return;
L_089357D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089357E8;
      }
      goto L_089357DC;
    }
L_089357DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089357E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x089357E8u) goto L_089357E8;
    return;
L_089357E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089357EC;
L_089357EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935800u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935800u) goto L_08935800;
    return;
L_08935800:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30968)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893581Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893581Cu) goto L_0893581C;
    return;
L_0893581C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935828u) goto L_08935828;
    return;
L_08935828:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893583Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893583Cu) goto L_0893583C;
    return;
L_0893583C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089358F0;
      }
      goto L_08935844;
    }
L_08935844:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089358E0;
      }
      goto L_08935854;
    }
L_08935854:
    ctx.set_gpr(31, 0x0893585Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x0893585Cu) goto L_0893585C;
    return;
L_0893585C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935870u) goto L_08935870;
    return;
L_08935870:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893588C;
      }
      goto L_0893587C;
    }
L_0893587C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 473u, 0x08902634u>(ctx, &aot_mem) && ctx.pc == 0x08935888u) goto L_08935888;
    return;
L_08935888:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0893588C;
L_0893588C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089358A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089358A0u) goto L_089358A0;
    return;
L_089358A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089358B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089358B8u) goto L_089358B8;
    return;
L_089358B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089358C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x089358C4u) goto L_089358C4;
    return;
L_089358C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089358D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089358D8u) goto L_089358D8;
    return;
L_089358D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089358F0;
      }
      goto L_089358E0;
    }
L_089358E0:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089358F0;
L_089358F0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.set_gpr(31, 0x089358FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089358FCu) goto L_089358FC;
    return;
L_089358FC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30972)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935924;
      }
      goto L_08935910;
    }
L_08935910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[4] & 16u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A68;
      }
      goto L_08935924;
    }
L_08935924:
    ctx.set_gpr(31, 0x0893592Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893592Cu) goto L_0893592C;
    return;
L_0893592C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359DC;
      }
      goto L_0893593C;
    }
L_0893593C:
    ctx.set_gpr(31, 0x08935944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935944u) goto L_08935944;
    return;
L_08935944:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(31, 0x0893595Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893595Cu) goto L_0893595C;
    return;
L_0893595C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089359A0;
      }
      goto L_08935964;
    }
L_08935964:
    ctx.set_gpr(31, 0x0893596Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x0893596Cu) goto L_0893596C;
    return;
L_0893596C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935980u) goto L_08935980;
    return;
L_08935980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935994;
      }
      goto L_08935988;
    }
L_08935988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935994u) goto L_08935994;
    return;
L_08935994:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A10;
      }
      goto L_089359A0;
    }
L_089359A0:
    ctx.set_gpr(31, 0x089359A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089359A8u) goto L_089359A8;
    return;
L_089359A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089359BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x089359BCu) goto L_089359BC;
    return;
L_089359BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359D0;
      }
      goto L_089359C4;
    }
L_089359C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089359D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x089359D0u) goto L_089359D0;
    return;
L_089359D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A10;
      }
      goto L_089359DC;
    }
L_089359DC:
    ctx.set_gpr(31, 0x089359E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089359E4u) goto L_089359E4;
    return;
L_089359E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089359F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x089359F8u) goto L_089359F8;
    return;
L_089359F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A0C;
      }
      goto L_08935A00;
    }
L_08935A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935A0Cu) goto L_08935A0C;
    return;
L_08935A0C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935A10;
L_08935A10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935A24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935A24u) goto L_08935A24;
    return;
L_08935A24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30972)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935A40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935A40u) goto L_08935A40;
    return;
L_08935A40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935A4Cu) goto L_08935A4C;
    return;
L_08935A4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935A60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935A60u) goto L_08935A60;
    return;
L_08935A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B14;
      }
      goto L_08935A68;
    }
L_08935A68:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B04;
      }
      goto L_08935A78;
    }
L_08935A78:
    ctx.set_gpr(31, 0x08935A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935A80u) goto L_08935A80;
    return;
L_08935A80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935A94u) goto L_08935A94;
    return;
L_08935A94:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935AB0;
      }
      goto L_08935AA0;
    }
L_08935AA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 473u, 0x08902634u>(ctx, &aot_mem) && ctx.pc == 0x08935AACu) goto L_08935AAC;
    return;
L_08935AAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935AB0;
L_08935AB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935AC4u) goto L_08935AC4;
    return;
L_08935AC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935ADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935ADCu) goto L_08935ADC;
    return;
L_08935ADC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935AE8u) goto L_08935AE8;
    return;
L_08935AE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935AFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935AFCu) goto L_08935AFC;
    return;
L_08935AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B14;
      }
      goto L_08935B04;
    }
L_08935B04:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08935B14;
L_08935B14:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30976)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935B3C;
      }
      goto L_08935B28;
    }
L_08935B28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[4] & 16u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C80;
      }
      goto L_08935B3C;
    }
L_08935B3C:
    ctx.set_gpr(31, 0x08935B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935B44u) goto L_08935B44;
    return;
L_08935B44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935BF4;
      }
      goto L_08935B54;
    }
L_08935B54:
    ctx.set_gpr(31, 0x08935B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935B5Cu) goto L_08935B5C;
    return;
L_08935B5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(31, 0x08935B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08935B74u) goto L_08935B74;
    return;
L_08935B74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935BB8;
      }
      goto L_08935B7C;
    }
L_08935B7C:
    ctx.set_gpr(31, 0x08935B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935B84u) goto L_08935B84;
    return;
L_08935B84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935B98u) goto L_08935B98;
    return;
L_08935B98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935BAC;
      }
      goto L_08935BA0;
    }
L_08935BA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935BACu) goto L_08935BAC;
    return;
L_08935BAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C28;
      }
      goto L_08935BB8;
    }
L_08935BB8:
    ctx.set_gpr(31, 0x08935BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935BC0u) goto L_08935BC0;
    return;
L_08935BC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935BD4u) goto L_08935BD4;
    return;
L_08935BD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935BE8;
      }
      goto L_08935BDC;
    }
L_08935BDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935BE8u) goto L_08935BE8;
    return;
L_08935BE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C28;
      }
      goto L_08935BF4;
    }
L_08935BF4:
    ctx.set_gpr(31, 0x08935BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935BFCu) goto L_08935BFC;
    return;
L_08935BFC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935C10u) goto L_08935C10;
    return;
L_08935C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C24;
      }
      goto L_08935C18;
    }
L_08935C18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935C24u) goto L_08935C24;
    return;
L_08935C24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935C28;
L_08935C28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935C3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935C3Cu) goto L_08935C3C;
    return;
L_08935C3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30976)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935C58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935C58u) goto L_08935C58;
    return;
L_08935C58:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935C64u) goto L_08935C64;
    return;
L_08935C64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935C78u) goto L_08935C78;
    return;
L_08935C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D2C;
      }
      goto L_08935C80;
    }
L_08935C80:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D1C;
      }
      goto L_08935C90;
    }
L_08935C90:
    ctx.set_gpr(31, 0x08935C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935C98u) goto L_08935C98;
    return;
L_08935C98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935CACu) goto L_08935CAC;
    return;
L_08935CAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935CC8;
      }
      goto L_08935CB8;
    }
L_08935CB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 473u, 0x08902634u>(ctx, &aot_mem) && ctx.pc == 0x08935CC4u) goto L_08935CC4;
    return;
L_08935CC4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935CC8;
L_08935CC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935CDCu) goto L_08935CDC;
    return;
L_08935CDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935CF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935CF4u) goto L_08935CF4;
    return;
L_08935CF4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935D00u) goto L_08935D00;
    return;
L_08935D00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935D14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935D14u) goto L_08935D14;
    return;
L_08935D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D2C;
      }
      goto L_08935D1C;
    }
L_08935D1C:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08935D2C;
L_08935D2C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30980)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D54;
      }
      goto L_08935D40;
    }
L_08935D40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[4] & 16u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E98;
      }
      goto L_08935D54;
    }
L_08935D54:
    ctx.set_gpr(31, 0x08935D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935D5Cu) goto L_08935D5C;
    return;
L_08935D5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E0C;
      }
      goto L_08935D6C;
    }
L_08935D6C:
    ctx.set_gpr(31, 0x08935D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08935D74u) goto L_08935D74;
    return;
L_08935D74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(31, 0x08935D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08935D8Cu) goto L_08935D8C;
    return;
L_08935D8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935DD0;
      }
      goto L_08935D94;
    }
L_08935D94:
    ctx.set_gpr(31, 0x08935D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935D9Cu) goto L_08935D9C;
    return;
L_08935D9C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935DB0u) goto L_08935DB0;
    return;
L_08935DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935DC4;
      }
      goto L_08935DB8;
    }
L_08935DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935DC4u) goto L_08935DC4;
    return;
L_08935DC4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E40;
      }
      goto L_08935DD0;
    }
L_08935DD0:
    ctx.set_gpr(31, 0x08935DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935DD8u) goto L_08935DD8;
    return;
L_08935DD8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935DECu) goto L_08935DEC;
    return;
L_08935DEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E00;
      }
      goto L_08935DF4;
    }
L_08935DF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935E00u) goto L_08935E00;
    return;
L_08935E00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E40;
      }
      goto L_08935E0C;
    }
L_08935E0C:
    ctx.set_gpr(31, 0x08935E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935E14u) goto L_08935E14;
    return;
L_08935E14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935E28u) goto L_08935E28;
    return;
L_08935E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E3C;
      }
      goto L_08935E30;
    }
L_08935E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x08935E3Cu) goto L_08935E3C;
    return;
L_08935E3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935E40;
L_08935E40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935E54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935E54u) goto L_08935E54;
    return;
L_08935E54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30980)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935E70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935E70u) goto L_08935E70;
    return;
L_08935E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935E7Cu) goto L_08935E7C;
    return;
L_08935E7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935E90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935E90u) goto L_08935E90;
    return;
L_08935E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F44;
      }
      goto L_08935E98;
    }
L_08935E98:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F34;
      }
      goto L_08935EA8;
    }
L_08935EA8:
    ctx.set_gpr(31, 0x08935EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08935EB0u) goto L_08935EB0;
    return;
L_08935EB0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08935EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x08935EC4u) goto L_08935EC4;
    return;
L_08935EC4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935EE0;
      }
      goto L_08935ED0;
    }
L_08935ED0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 473u, 0x08902634u>(ctx, &aot_mem) && ctx.pc == 0x08935EDCu) goto L_08935EDC;
    return;
L_08935EDC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08935EE0;
L_08935EE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935EF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935EF4u) goto L_08935EF4;
    return;
L_08935EF4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935F0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935F0Cu) goto L_08935F0C;
    return;
L_08935F0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08935F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892E0ACu>(ctx, &aot_mem) && ctx.pc == 0x08935F18u) goto L_08935F18;
    return;
L_08935F18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935F2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935F2Cu) goto L_08935F2C;
    return;
L_08935F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F44;
      }
      goto L_08935F34;
    }
L_08935F34:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08935F44;
L_08935F44:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936004;
      }
      goto L_08935F54;
    }
L_08935F54:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F90;
      }
      goto L_08935F7C;
    }
L_08935F7C:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08935F90;
L_08935F90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08935FA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935FA4u) goto L_08935FA4;
    return;
L_08935FA4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936000;
      }
      goto L_08935FB0;
    }
L_08935FB0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08935FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 373u, 0x0893278Cu>(ctx, &aot_mem) && ctx.pc == 0x08935FBCu) goto L_08935FBC;
    return;
L_08935FBC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08935FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08935FE8u) goto L_08935FE8;
    return;
L_08935FE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936000u) goto L_08936000;
    return;
L_08936000:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08936004;
L_08936004:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F54;
      }
      goto L_08936010;
    }
L_08936010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936030:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893606C;
      }
      goto L_08936064;
    }
L_08936064:
    ctx.set_gpr(31, 0x0893606Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 144u, 0x0893C90Cu>(ctx, &aot_mem) && ctx.pc == 0x0893606Cu) goto L_0893606C;
    return;
L_0893606C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936064;
      }
      goto L_08936080;
    }
L_08936080:
    ctx.set_gpr(31, 0x08936088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936088u) goto L_08936088;
    return;
L_08936088:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936150;
      }
      goto L_08936098;
    }
L_08936098:
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893614C;
      }
      goto L_089360C0;
    }
L_089360C0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893614C;
      }
      goto L_089360C8;
    }
L_089360C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089360D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 486u, 0x0892E1A8u>(ctx, &aot_mem) && ctx.pc == 0x089360D4u) goto L_089360D4;
    return;
L_089360D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089360E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089360E8u) goto L_089360E8;
    return;
L_089360E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936148;
      }
      goto L_089360F0;
    }
L_089360F0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(152));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893611C;
      }
      goto L_08936108;
    }
L_08936108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893611C;
      }
      goto L_08936114;
    }
L_08936114:
    ctx.set_gpr(31, 0x0893611Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893611Cu) goto L_0893611C;
    return;
L_0893611C:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893613C;
      }
      goto L_08936128;
    }
L_08936128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893613C;
      }
      goto L_08936134;
    }
L_08936134:
    ctx.set_gpr(31, 0x0893613Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893613Cu) goto L_0893613C;
    return;
L_0893613C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08936148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 292u, 0x0892D430u>(ctx, &aot_mem) && ctx.pc == 0x08936148u) goto L_08936148;
    return;
L_08936148:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0893614C;
L_0893614C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08936150;
L_08936150:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08936098;
      }
      goto L_08936158;
    }
L_08936158:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08936164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 261u, 0x08931D50u>(ctx, &aot_mem) && ctx.pc == 0x08936164u) goto L_08936164;
    return;
L_08936164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936174;
      }
      goto L_0893616C;
    }
L_0893616C:
    ctx.set_gpr(31, 0x08936174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 144u, 0x0893C90Cu>(ctx, &aot_mem) && ctx.pc == 0x08936174u) goto L_08936174;
    return;
L_08936174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0893616C;
      }
      goto L_08936184;
    }
L_08936184:
    ctx.set_gpr(31, 0x0893618Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893618Cu) goto L_0893618C;
    return;
L_0893618C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089361F0;
      }
      goto L_08936198;
    }
L_08936198:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(152));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089361C4;
      }
      goto L_089361B0;
    }
L_089361B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089361C4;
      }
      goto L_089361BC;
    }
L_089361BC:
    ctx.set_gpr(31, 0x089361C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089361C4u) goto L_089361C4;
    return;
L_089361C4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089361E4;
      }
      goto L_089361D0;
    }
L_089361D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089361E4;
      }
      goto L_089361DC;
    }
L_089361DC:
    ctx.set_gpr(31, 0x089361E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089361E4u) goto L_089361E4;
    return;
L_089361E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089361F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 292u, 0x0892D430u>(ctx, &aot_mem) && ctx.pc == 0x089361F0u) goto L_089361F0;
    return;
L_089361F0:
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
L_08936214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936280;
      }
      goto L_08936238;
    }
L_08936238:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08936274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08936274u) goto L_08936274;
    return;
L_08936274:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08936280;
L_08936280:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936238;
      }
      goto L_0893628C;
    }
L_0893628C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089362BC;
      }
      goto L_0893629C;
    }
L_0893629C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089362BC;
      }
      goto L_089362A4;
    }
L_089362A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089362BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089362BCu) goto L_089362BC;
    return;
L_089362BC:
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
L_089362D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08936308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936308u) goto L_08936308;
    return;
L_08936308:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08936314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936314u) goto L_08936314;
    return;
L_08936314:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08936320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936320u) goto L_08936320;
    return;
L_08936320:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11072)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11076)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30808)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08936350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 701u, 0x0897B4F0u>(ctx, &aot_mem) && ctx.pc == 0x08936350u) goto L_08936350;
    return;
L_08936350:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 707u, 0x0897B564u>(ctx, &aot_mem) && ctx.pc == 0x0893635Cu) goto L_0893635C;
    return;
L_0893635C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32672)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6420));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089363B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x089363B4u) goto L_089363B4;
    return;
L_089363B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6396));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089363D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x089363D8u) goto L_089363D8;
    return;
L_089363D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089363E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 702u, 0x0897B500u>(ctx, &aot_mem) && ctx.pc == 0x089363E4u) goto L_089363E4;
    return;
L_089363E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089363F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 708u, 0x0897B574u>(ctx, &aot_mem) && ctx.pc == 0x089363F0u) goto L_089363F0;
    return;
L_089363F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936420;
      }
      goto L_08936400;
    }
L_08936400:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893640Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893640Cu) goto L_0893640C;
    return;
L_0893640C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08936418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 127u, 0x088F0B00u>(ctx, &aot_mem) && ctx.pc == 0x08936418u) goto L_08936418;
    return;
L_08936418:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30892), ctx.gpr[2]);
    goto L_08936420;
L_08936420:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936440;
      }
      goto L_08936434;
    }
L_08936434:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08936440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 731u, 0x08927300u>(ctx, &aot_mem) && ctx.pc == 0x08936440u) goto L_08936440;
    return;
L_08936440:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30964)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6372));
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30964));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893646Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893646Cu) goto L_0893646C;
    return;
L_0893646C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30964)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936490;
      }
      goto L_0893647C;
    }
L_0893647C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936490u) goto L_08936490;
    return;
L_08936490:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(61));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089364B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089364B4u) goto L_089364B4;
    return;
L_089364B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32672), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6324));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089364E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089364E0u) goto L_089364E0;
    return;
L_089364E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089364FC;
      }
      goto L_089364EC;
    }
L_089364EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936508;
      }
      goto L_089364FC;
    }
L_089364FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08936508;
L_08936508:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893651Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893651Cu) goto L_0893651C;
    return;
L_0893651C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6308));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32668));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32668)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08936540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08936540u) goto L_08936540;
    return;
L_08936540:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6296));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08936564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08936564u) goto L_08936564;
    return;
L_08936564:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936580;
      }
      goto L_08936570;
    }
L_08936570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893658C;
      }
      goto L_08936580;
    }
L_08936580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0893658C;
L_0893658C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089365A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089365A0u) goto L_089365A0;
    return;
L_089365A0:
    ctx.set_gpr(31, 0x089365A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 753u, 0x088DFE40u>(ctx, &aot_mem) && ctx.pc == 0x089365A8u) goto L_089365A8;
    return;
L_089365A8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11072)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6268));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x089365D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 937u, 0x08953F68u>(ctx, &aot_mem) && ctx.pc == 0x089365D4u) goto L_089365D4;
    return;
L_089365D4:
    ctx.set_gpr(31, 0x089365DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 757u, 0x088DFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089365DCu) goto L_089365DC;
    return;
L_089365DC:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11076)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6232));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08936608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 923u, 0x08953E34u>(ctx, &aot_mem) && ctx.pc == 0x08936608u) goto L_08936608;
    return;
L_08936608:
    ctx.set_gpr(31, 0x08936610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 761u, 0x088DFEF8u>(ctx, &aot_mem) && ctx.pc == 0x08936610u) goto L_08936610;
    return;
L_08936610:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30808)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6196));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x0893663Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 923u, 0x08953E34u>(ctx, &aot_mem) && ctx.pc == 0x0893663Cu) goto L_0893663C;
    return;
L_0893663C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6148));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08936670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08936670u) goto L_08936670;
    return;
L_08936670:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936688;
      }
      goto L_0893667C;
    }
L_0893667C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08936688;
L_08936688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11072), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11076), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30808), ctx.gpr[3]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936754;
      }
      goto L_089366B8;
    }
L_089366B8:
    ctx.set_gpr(2, ctx.gpr[21] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936750;
      }
      goto L_089366DC;
    }
L_089366DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936708u) goto L_08936708;
    return;
L_08936708:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11072)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936750;
      }
      goto L_0893671C;
    }
L_0893671C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[2] | 8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936738u) goto L_08936738;
    return;
L_08936738:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936750u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936750u) goto L_08936750;
    return;
L_08936750:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08936754;
L_08936754:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089366B8;
      }
      goto L_08936760;
    }
L_08936760:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936778u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936778u) goto L_08936778;
    return;
L_08936778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936788;
      }
      goto L_08936784;
    }
L_08936784:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_08936788;
L_08936788:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089367A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089367A4u) goto L_089367A4;
    return;
L_089367A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089367B4;
      }
      goto L_089367B0;
    }
L_089367B0:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_089367B4;
L_089367B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089367C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089367C8u) goto L_089367C8;
    return;
L_089367C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089367D8;
      }
      goto L_089367D4;
    }
L_089367D4:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_089367D8;
L_089367D8:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936838;
      }
      goto L_089367E4;
    }
L_089367E4:
    ctx.set_gpr(2, ctx.gpr[21] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08936834;
      }
      goto L_0893680C;
    }
L_0893680C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936830;
      }
      goto L_08936828;
    }
L_08936828:
    ctx.set_gpr(31, 0x08936830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08936830u) goto L_08936830;
    return;
L_08936830:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08936834;
L_08936834:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08936838;
L_08936838:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089367E4;
      }
      goto L_08936844;
    }
L_08936844:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936908;
      }
      goto L_08936850;
    }
L_08936850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089368D8;
      }
      goto L_0893685C;
    }
L_0893685C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936888;
      }
      goto L_08936868;
    }
L_08936868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936880u) goto L_08936880;
    return;
L_08936880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936904;
      }
      goto L_08936888;
    }
L_08936888:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089368A4;
      }
      goto L_08936898;
    }
L_08936898:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936904;
      }
      goto L_089368A4;
    }
L_089368A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089368C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089368C0u) goto L_089368C0;
    return;
L_089368C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936904;
      }
      goto L_089368CC;
    }
L_089368CC:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936904;
      }
      goto L_089368D8;
    }
L_089368D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089368F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089368F4u) goto L_089368F4;
    return;
L_089368F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936904;
      }
      goto L_08936900;
    }
L_08936900:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_08936904;
L_08936904:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08936908;
L_08936908:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936850;
      }
      goto L_08936914;
    }
L_08936914:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6120));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08936938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08936938u) goto L_08936938;
    return;
L_08936938:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089369FC;
      }
      goto L_0893694C;
    }
L_0893694C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089369FC;
      }
      goto L_08936954;
    }
L_08936954:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08936960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 92u, 0x088FC8E4u>(ctx, &aot_mem) && ctx.pc == 0x08936960u) goto L_08936960;
    return;
L_08936960:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936984u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936984u) goto L_08936984;
    return;
L_08936984:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089369A4;
      }
      goto L_08936990;
    }
L_08936990:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089369A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089369A4u) goto L_089369A4;
    return;
L_089369A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089369B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089369B8u) goto L_089369B8;
    return;
L_089369B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089369D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089369D4u) goto L_089369D4;
    return;
L_089369D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089369FC;
      }
      goto L_089369F0;
    }
L_089369F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089369FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089369FCu) goto L_089369FC;
    return;
L_089369FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936A10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936A10u) goto L_08936A10;
    return;
L_08936A10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936A28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936A28u) goto L_08936A28;
    return;
L_08936A28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08936A48;
      }
      goto L_08936A34;
    }
L_08936A34:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08936A48;
      }
      goto L_08936A3C;
    }
L_08936A3C:
    ctx.set_gpr(31, 0x08936A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936A44u) goto L_08936A44;
    return;
L_08936A44:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    goto L_08936A48;
L_08936A48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936A60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936A60u) goto L_08936A60;
    return;
L_08936A60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08936A80;
      }
      goto L_08936A6C;
    }
L_08936A6C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08936A80;
      }
      goto L_08936A74;
    }
L_08936A74:
    ctx.set_gpr(31, 0x08936A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936A7Cu) goto L_08936A7C;
    return;
L_08936A7C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    goto L_08936A80;
L_08936A80:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936ADC;
      }
      goto L_08936A8C;
    }
L_08936A8C:
    ctx.set_gpr(2, ctx.gpr[21] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936AD8;
      }
      goto L_08936AB0;
    }
L_08936AB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08936ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08936ABCu) goto L_08936ABC;
    return;
L_08936ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936AD8;
      }
      goto L_08936AC4;
    }
L_08936AC4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936AD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936AD8u) goto L_08936AD8;
    return;
L_08936AD8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08936ADC;
L_08936ADC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936A8C;
      }
      goto L_08936AE8;
    }
L_08936AE8:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936BA0;
      }
      goto L_08936AF4;
    }
L_08936AF4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08936B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 191u, 0x0893CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08936B00u) goto L_08936B00;
    return;
L_08936B00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B9C;
      }
      goto L_08936B0C;
    }
L_08936B0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936B20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936B20u) goto L_08936B20;
    return;
L_08936B20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936B30;
      }
      goto L_08936B2C;
    }
L_08936B2C:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_08936B30;
L_08936B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B54;
      }
      goto L_08936B44;
    }
L_08936B44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B60;
      }
      goto L_08936B54;
    }
L_08936B54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08936B60;
L_08936B60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936B74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936B74u) goto L_08936B74;
    return;
L_08936B74:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936B88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936B88u) goto L_08936B88;
    return;
L_08936B88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936B9Cu) goto L_08936B9C;
    return;
L_08936B9C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08936BA0;
L_08936BA0:
    ctx.set_gpr(31, 0x08936BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 195u, 0x0893CC40u>(ctx, &aot_mem) && ctx.pc == 0x08936BA8u) goto L_08936BA8;
    return;
L_08936BA8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936AF4;
      }
      goto L_08936BB4;
    }
L_08936BB4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936BD8;
      }
      goto L_08936BBC;
    }
L_08936BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936BD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936BD8u) goto L_08936BD8;
    return;
L_08936BD8:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936C08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08936C74;
      }
      goto L_08936C30;
    }
L_08936C30:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08936C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 432u, 0x0892DD98u>(ctx, &aot_mem) && ctx.pc == 0x08936C3Cu) goto L_08936C3C;
    return;
L_08936C3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936C74;
      }
      goto L_08936C50;
    }
L_08936C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936C60;
      }
      goto L_08936C58;
    }
L_08936C58:
    ctx.set_gpr(31, 0x08936C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 144u, 0x0893C90Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C60u) goto L_08936C60;
    return;
L_08936C60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936C58;
      }
      goto L_08936C74;
    }
L_08936C74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936C88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936C88u) goto L_08936C88;
    return;
L_08936C88:
    ctx.set_gpr(31, 0x08936C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936C90u) goto L_08936C90;
    return;
L_08936C90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936CB4;
      }
      goto L_08936C9C;
    }
L_08936C9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936CB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936CB4u) goto L_08936CB4;
    return;
L_08936CB4:
    ctx.set_gpr(31, 0x08936CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936CBCu) goto L_08936CBC;
    return;
L_08936CBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(135)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936CE0;
      }
      goto L_08936CC8;
    }
L_08936CC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936CE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936CE0u) goto L_08936CE0;
    return;
L_08936CE0:
    ctx.set_gpr(31, 0x08936CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936CE8u) goto L_08936CE8;
    return;
L_08936CE8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(74));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D60;
      }
      goto L_08936CF4;
    }
L_08936CF4:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D5C;
      }
      goto L_08936D18;
    }
L_08936D18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8192u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D5C;
      }
      goto L_08936D2C;
    }
L_08936D2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936D4Cu) goto L_08936D4C;
    return;
L_08936D4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08936D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 286u, 0x089320B4u>(ctx, &aot_mem) && ctx.pc == 0x08936D5Cu) goto L_08936D5C;
    return;
L_08936D5C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08936D60;
L_08936D60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936CF4;
      }
      goto L_08936D68;
    }
L_08936D68:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(74));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936DEC;
      }
      goto L_08936D74;
    }
L_08936D74:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936D9C;
    }
L_08936D9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936DA8;
    }
L_08936DA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936DB4;
    }
L_08936DB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936DC0;
    }
L_08936DC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936DC8;
    }
L_08936DC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936DE8;
      }
      goto L_08936DD0;
    }
L_08936DD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936DE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936DE8u) goto L_08936DE8;
    return;
L_08936DE8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08936DEC;
L_08936DEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936D74;
      }
      goto L_08936DF4;
    }
L_08936DF4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30892)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E90;
      }
      goto L_08936E04;
    }
L_08936E04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936E28;
      }
      goto L_08936E20;
    }
L_08936E20:
    ctx.set_gpr(31, 0x08936E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08936E28u) goto L_08936E28;
    return;
L_08936E28:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30892), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E90;
      }
      goto L_08936E38;
    }
L_08936E38:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E8C;
      }
      goto L_08936E5C;
    }
L_08936E5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936E6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936E6Cu) goto L_08936E6C;
    return;
L_08936E6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_08936E8C;
L_08936E8C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08936E90;
L_08936E90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936E38;
      }
      goto L_08936E98;
    }
L_08936E98:
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
L_08936EB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08936EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 195u, 0x0893CC40u>(ctx, &aot_mem) && ctx.pc == 0x08936EE4u) goto L_08936EE4;
    return;
L_08936EE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08936EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936EF0u) goto L_08936EF0;
    return;
L_08936EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936F34;
      }
      goto L_08936EFC;
    }
L_08936EFC:
    ctx.set_gpr(31, 0x08936F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936F04u) goto L_08936F04;
    return;
L_08936F04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936F18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936F18u) goto L_08936F18;
    return;
L_08936F18:
    ctx.set_gpr(31, 0x08936F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936F20u) goto L_08936F20;
    return;
L_08936F20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13392));
    ctx.set_gpr(31, 0x08936F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 529u, 0x08915DDCu>(ctx, &aot_mem) && ctx.pc == 0x08936F34u) goto L_08936F34;
    return;
L_08936F34:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893702C;
      }
      goto L_08936F40;
    }
L_08936F40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08936F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 191u, 0x0893CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08936F4Cu) goto L_08936F4C;
    return;
L_08936F4C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937028;
      }
      goto L_08936F58;
    }
L_08936F58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936F6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936F6Cu) goto L_08936F6C;
    return;
L_08936F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937000;
      }
      goto L_08936F80;
    }
L_08936F80:
    ctx.set_gpr(31, 0x08936F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936F88u) goto L_08936F88;
    return;
L_08936F88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(133)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936FA8;
      }
      goto L_08936F94;
    }
L_08936F94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936FA8u) goto L_08936FA8;
    return;
L_08936FA8:
    ctx.set_gpr(31, 0x08936FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936FB0u) goto L_08936FB0;
    return;
L_08936FB0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936FD4;
      }
      goto L_08936FBC;
    }
L_08936FBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08936FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936FD4u) goto L_08936FD4;
    return;
L_08936FD4:
    ctx.set_gpr(31, 0x08936FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08936FDCu) goto L_08936FDC;
    return;
L_08936FDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(135)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937000;
      }
      goto L_08936FE8;
    }
L_08936FE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937000u) goto L_08937000;
    return;
L_08937000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937028;
      }
      goto L_0893701C;
    }
L_0893701C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08937028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08937028u) goto L_08937028;
    return;
L_08937028:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0893702C;
L_0893702C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_08936F40;
      }
      goto L_08937034;
    }
L_08937034:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937048u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937048u) goto L_08937048;
    return;
L_08937048:
    ctx.set_gpr(31, 0x08937050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08937050u) goto L_08937050;
    return;
L_08937050:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(133)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937070;
      }
      goto L_0893705C;
    }
L_0893705C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937070u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937070u) goto L_08937070;
    return;
L_08937070:
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
L_0893708C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089370CC;
      }
      goto L_089370C0;
    }
L_089370C0:
    ctx.set_gpr(31, 0x089370C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089370C8u) goto L_089370C8;
    return;
L_089370C8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_089370CC;
L_089370CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089370F4;
      }
      goto L_089370D4;
    }
L_089370D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089370E8;
      }
      goto L_089370E0;
    }
L_089370E0:
    ctx.set_gpr(31, 0x089370E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089370E8u) goto L_089370E8;
    return;
L_089370E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_089370F4;
    }
L_089370F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4512)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893710Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x0893710Cu) goto L_0893710C;
    return;
L_0893710C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08937280;
      }
      goto L_0893711C;
    }
L_0893711C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4496)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937140u) goto L_08937140;
    return;
L_08937140:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937260;
      }
      goto L_0893714C;
    }
L_0893714C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30884)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937174;
      }
      goto L_0893715C;
    }
L_0893715C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08937168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 461u, 0x0893DBB8u>(ctx, &aot_mem) && ctx.pc == 0x08937168u) goto L_08937168;
    return;
L_08937168:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937260;
      }
      goto L_08937174;
    }
L_08937174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937260;
      }
      goto L_08937184;
    }
L_08937184:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30880)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089371A0;
      }
      goto L_08937194;
    }
L_08937194:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089371C0;
      }
      goto L_089371A0;
    }
L_089371A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089371B4;
      }
      goto L_089371AC;
    }
L_089371AC:
    ctx.set_gpr(31, 0x089371B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089371B4u) goto L_089371B4;
    return;
L_089371B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_089371C0;
    }
L_089371C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089371D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 587u, 0x08933618u>(ctx, &aot_mem) && ctx.pc == 0x089371D0u) goto L_089371D0;
    return;
L_089371D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937260;
      }
      goto L_089371DC;
    }
L_089371DC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937254;
      }
      goto L_089371E8;
    }
L_089371E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089371F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089371F4u) goto L_089371F4;
    return;
L_089371F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 512u, 0x088EEBB0u>(ctx, &aot_mem) && ctx.pc == 0x08937200u) goto L_08937200;
    return;
L_08937200:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08937214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 374u, 0x08932798u>(ctx, &aot_mem) && ctx.pc == 0x08937214u) goto L_08937214;
    return;
L_08937214:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08937224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 587u, 0x08933618u>(ctx, &aot_mem) && ctx.pc == 0x08937224u) goto L_08937224;
    return;
L_08937224:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08937230;
    }
L_08937230:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937244;
      }
      goto L_0893723C;
    }
L_0893723C:
    ctx.set_gpr(31, 0x08937244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937244u) goto L_08937244;
    return;
L_08937244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_08937250;
    }
L_08937250:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08937254;
L_08937254:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089371E8;
      }
      goto L_08937260;
    }
L_08937260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937274;
      }
      goto L_0893726C;
    }
L_0893726C:
    ctx.set_gpr(31, 0x08937274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937274u) goto L_08937274;
    return;
L_08937274:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_08937280;
    }
L_08937280:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089372BC;
      }
      goto L_08937290;
    }
L_08937290:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4496)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089372B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089372B4u) goto L_089372B4;
    return;
L_089372B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937184;
      }
      goto L_089372BC;
    }
L_089372BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089372CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 639u, 0x08952C00u>(ctx, &aot_mem) && ctx.pc == 0x089372CCu) goto L_089372CC;
    return;
L_089372CC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089372F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 649u, 0x08952CC0u>(ctx, &aot_mem) && ctx.pc == 0x089372F0u) goto L_089372F0;
    return;
L_089372F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937340;
      }
      goto L_089372F8;
    }
L_089372F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893730C;
      }
      goto L_08937304;
    }
L_08937304:
    ctx.set_gpr(31, 0x0893730Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893730Cu) goto L_0893730C;
    return;
L_0893730C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937320;
      }
      goto L_08937318;
    }
L_08937318:
    ctx.set_gpr(31, 0x08937320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937320u) goto L_08937320;
    return;
L_08937320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937334;
      }
      goto L_0893732C;
    }
L_0893732C:
    ctx.set_gpr(31, 0x08937334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937334u) goto L_08937334;
    return;
L_08937334:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_08937340;
    }
L_08937340:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937358;
      }
      goto L_08937350;
    }
L_08937350:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08937358;
L_08937358:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08937374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08937374u) goto L_08937374;
    return;
L_08937374:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089373C4;
      }
      goto L_0893737C;
    }
L_0893737C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937390;
      }
      goto L_08937388;
    }
L_08937388:
    ctx.set_gpr(31, 0x08937390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937390u) goto L_08937390;
    return;
L_08937390:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089373A4;
      }
      goto L_0893739C;
    }
L_0893739C:
    ctx.set_gpr(31, 0x089373A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089373A4u) goto L_089373A4;
    return;
L_089373A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089373B8;
      }
      goto L_089373B0;
    }
L_089373B0:
    ctx.set_gpr(31, 0x089373B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089373B8u) goto L_089373B8;
    return;
L_089373B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_089373C4;
    }
L_089373C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089373DC;
      }
      goto L_089373D4;
    }
L_089373D4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089373DC;
L_089373DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089373E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 374u, 0x08932798u>(ctx, &aot_mem) && ctx.pc == 0x089373E8u) goto L_089373E8;
    return;
L_089373E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937400;
      }
      goto L_089373F8;
    }
L_089373F8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08937400;
L_08937400:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893741Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893741Cu) goto L_0893741C;
    return;
L_0893741C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08937470;
      }
      goto L_08937428;
    }
L_08937428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893743C;
      }
      goto L_08937434;
    }
L_08937434:
    ctx.set_gpr(31, 0x0893743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893743Cu) goto L_0893743C;
    return;
L_0893743C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937450;
      }
      goto L_08937448;
    }
L_08937448:
    ctx.set_gpr(31, 0x08937450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937450u) goto L_08937450;
    return;
L_08937450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937464;
      }
      goto L_0893745C;
    }
L_0893745C:
    ctx.set_gpr(31, 0x08937464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937464u) goto L_08937464;
    return;
L_08937464:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_08937470;
    }
L_08937470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089375B8;
      }
      goto L_08937478;
    }
L_08937478:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08937490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 649u, 0x08952CC0u>(ctx, &aot_mem) && ctx.pc == 0x08937490u) goto L_08937490;
    return;
L_08937490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375C4;
      }
      goto L_08937498;
    }
L_08937498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089374B0;
      }
      goto L_089374A8;
    }
L_089374A8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089374B0;
L_089374B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089374CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x089374CCu) goto L_089374CC;
    return;
L_089374CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375B4;
      }
      goto L_089374D4;
    }
L_089374D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375B4;
      }
      goto L_089374E0;
    }
L_089374E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375B4;
      }
      goto L_089374EC;
    }
L_089374EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089374F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089374F8u) goto L_089374F8;
    return;
L_089374F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 512u, 0x088EEBB0u>(ctx, &aot_mem) && ctx.pc == 0x08937504u) goto L_08937504;
    return;
L_08937504:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937520;
      }
      goto L_08937518;
    }
L_08937518:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08937520;
L_08937520:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893752Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 374u, 0x08932798u>(ctx, &aot_mem) && ctx.pc == 0x0893752Cu) goto L_0893752C;
    return;
L_0893752C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937544;
      }
      goto L_0893753C;
    }
L_0893753C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08937544;
L_08937544:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937560u) goto L_08937560;
    return;
L_08937560:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089375B4;
      }
      goto L_0893756C;
    }
L_0893756C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937580;
      }
      goto L_08937578;
    }
L_08937578:
    ctx.set_gpr(31, 0x08937580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937580u) goto L_08937580;
    return;
L_08937580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937594;
      }
      goto L_0893758C;
    }
L_0893758C:
    ctx.set_gpr(31, 0x08937594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937594u) goto L_08937594;
    return;
L_08937594:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375A8;
      }
      goto L_089375A0;
    }
L_089375A0:
    ctx.set_gpr(31, 0x089375A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089375A8u) goto L_089375A8;
    return;
L_089375A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937604;
      }
      goto L_089375B4;
    }
L_089375B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089375B8;
L_089375B8:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937478;
      }
      goto L_089375C4;
    }
L_089375C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375D8;
      }
      goto L_089375D0;
    }
L_089375D0:
    ctx.set_gpr(31, 0x089375D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089375D8u) goto L_089375D8;
    return;
L_089375D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375EC;
      }
      goto L_089375E4;
    }
L_089375E4:
    ctx.set_gpr(31, 0x089375ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089375ECu) goto L_089375EC;
    return;
L_089375EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937600;
      }
      goto L_089375F8;
    }
L_089375F8:
    ctx.set_gpr(31, 0x08937600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08937600u) goto L_08937600;
    return;
L_08937600:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08937604;
L_08937604:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893762C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0893766Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893766Cu) goto L_0893766C;
    return;
L_0893766C:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937698;
      }
      goto L_08937680;
    }
L_08937680:
    ctx.set_gpr(31, 0x08937688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 249u, 0x0893D014u>(ctx, &aot_mem) && ctx.pc == 0x08937688u) goto L_08937688;
    return;
L_08937688:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08937698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08937698u) goto L_08937698;
    return;
L_08937698:
    ctx.set_gpr(31, 0x089376A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x089376A0u) goto L_089376A0;
    return;
L_089376A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089376ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089376ACu) goto L_089376AC;
    return;
L_089376AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089376B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 480u, 0x088EE8C4u>(ctx, &aot_mem) && ctx.pc == 0x089376B8u) goto L_089376B8;
    return;
L_089376B8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089376C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089376C8u) goto L_089376C8;
    return;
L_089376C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937808;
      }
      goto L_089376DC;
    }
L_089376DC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089377F4;
      }
      goto L_089376E8;
    }
L_089376E8:
    ctx.set_gpr(31, 0x089376F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x089376F0u) goto L_089376F0;
    return;
L_089376F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089376FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089376FCu) goto L_089376FC;
    return;
L_089376FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x08937708u) goto L_08937708;
    return;
L_08937708:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937724u) goto L_08937724;
    return;
L_08937724:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08937734u) goto L_08937734;
    return;
L_08937734:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937780;
      }
      goto L_08937758;
    }
L_08937758:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937764u) goto L_08937764;
    return;
L_08937764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937778;
      }
      goto L_0893776C;
    }
L_0893776C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937778u) goto L_08937778;
    return;
L_08937778:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937780;
L_08937780:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937794u) goto L_08937794;
    return;
L_08937794:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377BC;
      }
      goto L_089377A8;
    }
L_089377A8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089377B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089377B4u) goto L_089377B4;
    return;
L_089377B4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089377BC;
L_089377BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377D4;
      }
      goto L_089377C4;
    }
L_089377C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089377D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089377D4u) goto L_089377D4;
    return;
L_089377D4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089377E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 240u, 0x0893CF68u>(ctx, &aot_mem) && ctx.pc == 0x089377E8u) goto L_089377E8;
    return;
L_089377E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_089377F4;
L_089377F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089376E8;
      }
      goto L_08937800;
    }
L_08937800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 272u, 0x08938E48u>(ctx, &aot_mem); return;
      }
      goto L_08937808;
    }
L_08937808:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 272u, 0x08938E48u>(ctx, &aot_mem); return;
      }
      goto L_08937810;
    }
L_08937810:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 271u, 0x08938E3Cu>(ctx, &aot_mem); return;
      }
      goto L_0893781C;
    }
L_0893781C:
    ctx.set_gpr(31, 0x08937824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08937824u) goto L_08937824;
    return;
L_08937824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08937830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08937830u) goto L_08937830;
    return;
L_08937830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893783Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x0893783Cu) goto L_0893783C;
    return;
L_0893783C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08937858u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937858u) goto L_08937858;
    return;
L_08937858:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08937868u) goto L_08937868;
    return;
L_08937868:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089378B4;
      }
      goto L_0893788C;
    }
L_0893788C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937898u) goto L_08937898;
    return;
L_08937898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089378AC;
      }
      goto L_089378A0;
    }
L_089378A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089378ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089378ACu) goto L_089378AC;
    return;
L_089378AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089378B4;
L_089378B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089378C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089378C8u) goto L_089378C8;
    return;
L_089378C8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089378F0;
      }
      goto L_089378DC;
    }
L_089378DC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089378E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089378E8u) goto L_089378E8;
    return;
L_089378E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089378F0;
L_089378F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937908;
      }
      goto L_089378F8;
    }
L_089378F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937908u) goto L_08937908;
    return;
L_08937908:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(74) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 244u, 0x08938CD4u>(ctx, &aot_mem); return;
      }
      goto L_08937918;
    }
L_08937918:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32616));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937934:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937970;
      }
      goto L_08937948;
    }
L_08937948:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937970;
      }
      goto L_08937954;
    }
L_08937954:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08937964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08937964u) goto L_08937964;
    return;
L_08937964:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(319), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937974;
      }
      goto L_08937970;
    }
L_08937970:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08937974;
L_08937974:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6096));
    ctx.set_gpr(31, 0x08937988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08937988u) goto L_08937988;
    return;
L_08937988:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937990;
    }
L_08937990:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6076));
    ctx.set_gpr(31, 0x089379A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089379A4u) goto L_089379A4;
    return;
L_089379A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_089379AC;
    }
L_089379AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089379D4;
      }
      goto L_089379B8;
    }
L_089379B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6060));
    ctx.set_gpr(31, 0x089379CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089379CCu) goto L_089379CC;
    return;
L_089379CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379EC;
      }
      goto L_089379D4;
    }
L_089379D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6096));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x089379ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089379ECu) goto L_089379EC;
    return;
L_089379EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937A24;
      }
      goto L_089379FC;
    }
L_089379FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937A08u) goto L_08937A08;
    return;
L_08937A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A1C;
      }
      goto L_08937A10;
    }
L_08937A10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937A1Cu) goto L_08937A1C;
    return;
L_08937A1C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937A24;
L_08937A24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08937A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937A38u) goto L_08937A38;
    return;
L_08937A38:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A60;
      }
      goto L_08937A4C;
    }
L_08937A4C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08937A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937A58u) goto L_08937A58;
    return;
L_08937A58:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937A60;
L_08937A60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A78;
      }
      goto L_08937A68;
    }
L_08937A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937A78u) goto L_08937A78;
    return;
L_08937A78:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937A84;
    }
L_08937A84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937A94;
    }
L_08937A94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6036));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08937ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08937ABCu) goto L_08937ABC;
    return;
L_08937ABC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08937ACC;
      }
      goto L_08937AC8;
    }
L_08937AC8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08937ACC;
L_08937ACC:
    ctx.set_gpr(31, 0x08937AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08937AD4u) goto L_08937AD4;
    return;
L_08937AD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937AE4;
    }
L_08937AE4:
    ctx.set_gpr(31, 0x08937AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08937AECu) goto L_08937AEC;
    return;
L_08937AEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937B2C;
      }
      goto L_08937B04;
    }
L_08937B04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937B10u) goto L_08937B10;
    return;
L_08937B10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B24;
      }
      goto L_08937B18;
    }
L_08937B18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937B24u) goto L_08937B24;
    return;
L_08937B24:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937B2C;
L_08937B2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937B40u) goto L_08937B40;
    return;
L_08937B40:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B68;
      }
      goto L_08937B54;
    }
L_08937B54:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08937B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B60u) goto L_08937B60;
    return;
L_08937B60:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937B68;
L_08937B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B70;
    }
L_08937B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937B80u) goto L_08937B80;
    return;
L_08937B80:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937B8C;
    }
L_08937B8C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6764)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937BCC;
      }
      goto L_08937BA4;
    }
L_08937BA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937BB0u) goto L_08937BB0;
    return;
L_08937BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BC4;
      }
      goto L_08937BB8;
    }
L_08937BB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937BC4u) goto L_08937BC4;
    return;
L_08937BC4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937BCC;
L_08937BCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937BE0u) goto L_08937BE0;
    return;
L_08937BE0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C08;
      }
      goto L_08937BF4;
    }
L_08937BF4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08937C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937C00u) goto L_08937C00;
    return;
L_08937C00:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937C08;
L_08937C08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C20;
      }
      goto L_08937C10;
    }
L_08937C10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937C20u) goto L_08937C20;
    return;
L_08937C20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937C34;
    }
L_08937C34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937C44;
    }
L_08937C44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6016));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08937C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08937C6Cu) goto L_08937C6C;
    return;
L_08937C6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08937D3C;
      }
      goto L_08937C78;
    }
L_08937C78:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08937C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08937C84u) goto L_08937C84;
    return;
L_08937C84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937C94;
    }
L_08937C94:
    ctx.set_gpr(31, 0x08937C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08937C9Cu) goto L_08937C9C;
    return;
L_08937C9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30596)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937CDC;
      }
      goto L_08937CB4;
    }
L_08937CB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937CC0u) goto L_08937CC0;
    return;
L_08937CC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937CD4;
      }
      goto L_08937CC8;
    }
L_08937CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937CD4u) goto L_08937CD4;
    return;
L_08937CD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937CDC;
L_08937CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937CF0u) goto L_08937CF0;
    return;
L_08937CF0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D18;
      }
      goto L_08937D04;
    }
L_08937D04:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08937D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937D10u) goto L_08937D10;
    return;
L_08937D10:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937D18;
L_08937D18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D30;
      }
      goto L_08937D20;
    }
L_08937D20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937D30u) goto L_08937D30;
    return;
L_08937D30:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937D3C;
    }
L_08937D3C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6788)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937D7C;
      }
      goto L_08937D54;
    }
L_08937D54:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937D60u) goto L_08937D60;
    return;
L_08937D60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D74;
      }
      goto L_08937D68;
    }
L_08937D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937D74u) goto L_08937D74;
    return;
L_08937D74:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937D7C;
L_08937D7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937D90u) goto L_08937D90;
    return;
L_08937D90:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DB8;
      }
      goto L_08937DA4;
    }
L_08937DA4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08937DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937DB0u) goto L_08937DB0;
    return;
L_08937DB0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937DB8;
L_08937DB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DD0;
      }
      goto L_08937DC0;
    }
L_08937DC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937DD0u) goto L_08937DD0;
    return;
L_08937DD0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937DDC;
    }
L_08937DDC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937E1C;
      }
      goto L_08937DF4;
    }
L_08937DF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937E00u) goto L_08937E00;
    return;
L_08937E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E14;
      }
      goto L_08937E08;
    }
L_08937E08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937E14u) goto L_08937E14;
    return;
L_08937E14:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937E1C;
L_08937E1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08937E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937E30u) goto L_08937E30;
    return;
L_08937E30:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E58;
      }
      goto L_08937E44;
    }
L_08937E44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08937E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937E50u) goto L_08937E50;
    return;
L_08937E50:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937E58;
L_08937E58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E70;
      }
      goto L_08937E60;
    }
L_08937E60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937E70u) goto L_08937E70;
    return;
L_08937E70:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E94;
      }
      goto L_08937E88;
    }
L_08937E88:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937E94;
    }
L_08937E94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937ECC;
      }
      goto L_08937EA4;
    }
L_08937EA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937EB0u) goto L_08937EB0;
    return;
L_08937EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937EC4;
      }
      goto L_08937EB8;
    }
L_08937EB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937EC4u) goto L_08937EC4;
    return;
L_08937EC4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937ECC;
L_08937ECC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08937EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937EE4u) goto L_08937EE4;
    return;
L_08937EE4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F0C;
      }
      goto L_08937EF8;
    }
L_08937EF8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08937F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08937F04u) goto L_08937F04;
    return;
L_08937F04:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08937F0C;
L_08937F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F24;
      }
      goto L_08937F14;
    }
L_08937F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08937F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08937F24u) goto L_08937F24;
    return;
L_08937F24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 269u, 0x08938E20u>(ctx, &aot_mem); return;
      }
      goto L_08937F30;
    }
L_08937F30:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5984));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08937F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08937F54u) goto L_08937F54;
    return;
L_08937F54:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5968));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08937F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08937F78u) goto L_08937F78;
    return;
L_08937F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 18u, 0x089380E0u>(ctx, &aot_mem); return;
      }
      goto L_08937F84;
    }
L_08937F84:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16385) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937F98;
      }
      goto L_08937F90;
    }
L_08937F90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08937F98;
L_08937F98:
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16384));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937FE0;
      }
      goto L_08937FB8;
    }
L_08937FB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08937FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08937FC4u) goto L_08937FC4;
    return;
L_08937FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FD8;
      }
      goto L_08937FCC;
    }
L_08937FCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08937FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08937FD8u) goto L_08937FD8;
    return;
L_08937FD8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08937FE0;
L_08937FE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5948));
    ctx.set_gpr(31, 0x08937FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08937FF8u) goto L_08937FF8;
    return;
L_08937FF8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.pc = 0x08938000u; return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08934004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934014u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893404Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934058u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934060u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934074u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934094u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893409Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934100u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934128u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893413Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934154u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893418Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893419Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934208u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934218u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934228u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934258u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934324u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934330u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934340u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934350u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934368u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934388u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934394u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934404u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893440Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934424u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893443Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893444Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934460u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893446Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934480u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893448Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893450Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934514u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934524u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934584u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934598u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934630u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934638u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893464Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934690u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934714u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934720u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934728u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934730u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934740u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893478Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934810u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934818u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893482Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934840u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934860u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934870u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934920u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934950u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934958u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893496Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934ED4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935030u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893503Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935054u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893506Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935084u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935098u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893512Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893513Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893518Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893519Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935230u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893525Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935288u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935300u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893531Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935340u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893534Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935360u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935374u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935408u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935428u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893543Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935450u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935458u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893545Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935478u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935520u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893552Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893553Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935564u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893556Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935570u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893557Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935588u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893560Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935628u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935640u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935648u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893565Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935664u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935670u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893569Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935708u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935718u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935720u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935738u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935740u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893575Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893577Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935798u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935800u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893581Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893583Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893585Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935870u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893587Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893588Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893592Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893593Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893595Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893596Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ED0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936030u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893606Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936080u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936098u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893611Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936128u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893613Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893614Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936158u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893616Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893618Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936280u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893628Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893629Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936308u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936314u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936320u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936350u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893635Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936400u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893640Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936420u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893646Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893647Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936490u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936508u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893651Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936564u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936570u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936580u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893658Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936608u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936610u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893663Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936670u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893667Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936708u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893671Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936738u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936750u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936754u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936788u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893680Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936830u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936834u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936850u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893685Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893694Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936960u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936984u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893701Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937028u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893702Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937034u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937048u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937050u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893705Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937070u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893708Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893710Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893711Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937140u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893714Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893715Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937194u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937230u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893723Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937250u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937254u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937260u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893726Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937280u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937304u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893730Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937318u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937320u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893732Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937334u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937340u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937350u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937358u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937374u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893737Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937388u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893739Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937400u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893741Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937428u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893743Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937450u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893745Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937464u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937478u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937490u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937498u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937520u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893752Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893753Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937560u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893756Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937578u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937580u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893758Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937594u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893762Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893766Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937708u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937724u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937734u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937758u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893776Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937780u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937800u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937808u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937810u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893781Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937830u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893783Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937858u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893788Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937918u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937934u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937948u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937970u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FF8u, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp
