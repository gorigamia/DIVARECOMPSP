#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0174[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 16, 17, 0, 18, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    22, 23, 0, 24, 25, 0, 26, 27, 0, 0, 28, 0, 29, 30, 0, 31, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 49, 0, 50, 0, 51, 52, 0, 0, 0, 53, 54, 0,
    55, 0, 0, 56, 0, 57, 58, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 64, 0, 65, 0, 0, 0, 0,
    66, 67, 0, 68, 0, 0, 69, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 74, 0, 75, 76, 0, 77, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 80, 0, 81, 82, 0, 0, 0, 0, 83, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 95, 0, 0,
    0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0,
    106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113,
    0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0,
    0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133,
    0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0,
    147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0,
    165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177,
    0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203,
    0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0,
    0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228,
    0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0,
    242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 274, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0,
    281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0,
    348, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0,
    0, 359, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377,
    0, 0, 378, 0, 0, 379, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0,
    387, 0, 0, 0, 388, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392,
    0, 393, 0, 394, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0,
    0, 437, 0, 438, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0,
    0, 449, 0, 450, 0, 0, 451, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0,
    459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 467, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 475, 476, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 484, 485, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 493, 0, 0, 494, 0,
    495, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 499, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 507, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 516, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0,
    0, 524, 0, 0, 0, 0, 525, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0,
    0, 531, 0, 532, 533, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 538, 539, 0, 0, 0, 540, 0, 541, 0, 0,
    0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 550, 0,
    0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0,
    0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0,
    0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577,
    0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 583, 0, 0, 0, 584, 0, 0, 585, 586, 0, 0, 587,
    0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0,
    0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 599, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0,
    0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0,
    0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 627,
    628, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636,
    0, 637, 0, 0, 0, 0, 0, 638, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0,
    642, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0, 659,
    0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 666,
    0, 0, 0, 0, 667, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671,
    672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 692,
    0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0,
    700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0,
    0, 0, 0, 0, 709, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0,
    0, 721, 722, 723, 0, 0, 724, 0, 725, 0, 0, 0, 0, 726, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0,
    732, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0,
    0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750,
    0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 757, 758, 0, 0, 759, 0, 0, 0, 760, 0,
    761, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 776, 0, 777, 0,
    0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0,
    0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0,
    0, 798, 0, 799, 0, 0, 0, 0, 800, 801, 0, 0, 802, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804,
    0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809,
    810, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816, 0, 817,
    0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 821, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0,
    0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 835, 0, 836, 0, 837, 838, 0, 839, 0, 0, 0, 0,
    0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 0, 847, 0, 848, 849, 0, 0, 850, 0,
    0, 0, 851, 852, 853, 0, 0, 854, 0, 855, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 0, 862, 863, 864, 0, 0, 865,
    0, 866, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 878, 879, 880, 0, 0, 0, 0,
    881, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0,
    0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 893,
    0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 899, 0, 900, 0, 901, 0, 0, 0, 902, 0, 0, 903,
    0, 0, 904, 0, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 912, 913, 0, 914, 0,
    0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 0, 919, 920, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0,
    922, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 0, 930, 0,
    931, 0, 932, 0, 933, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 937, 0, 0, 0,
    0, 938, 0, 939, 0, 0, 940, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 950, 951, 0, 0, 0,
    0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 954, 0, 0, 0, 955, 0, 956, 0, 0, 957, 0, 958, 0, 0, 959,
    0, 0, 960, 0, 961, 0, 0, 962, 0, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0, 965, 0, 0, 0, 0, 0, 966,
    0, 0, 0, 0, 0, 967, 0, 968, 0, 969, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0, 974, 0,
    975, 0, 976, 977, 0, 978, 0, 979, 0, 0, 980, 0, 0, 0, 981, 982, 0, 983, 0, 0, 0, 0, 984, 0, 985, 0, 0, 0, 986, 987, 0, 988,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 990, 0,
    0, 0, 0, 0, 0, 0, 0, 991, 0, 0, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 996, 0, 0, 997, 0, 998, 0, 0, 999, 0, 1000, 0,
    0, 1001, 0, 1002, 0, 0, 1003, 0, 1004, 0, 1005, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 1010,
    0, 1011, 0, 1012, 0, 1013, 0, 1014, 0, 1015, 0, 1016, 0, 0, 0, 1017, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1018, 0, 0, 0,
    0, 1019, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 1021, 0, 0, 1022, 0, 0, 0, 0, 0, 1023, 1024, 0, 0, 0, 0, 1025, 0, 0, 1026, 0, 1027,
    0, 0, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0, 0, 0, 0, 0, 1031, 0, 0, 0, 0, 0, 0, 0, 1032, 0, 0, 1033, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1034, 0, 0, 0, 1035, 0, 0, 1036, 0, 1037, 0, 0, 0, 1038, 0, 0, 1039, 0, 1040, 0,
    0, 0, 0, 0, 0, 0, 1041, 0, 0, 0, 0, 1042, 0, 0, 0, 0, 1043, 0, 1044, 0, 0, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 0, 1047,
};
void recomp_unit_0174_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ABC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0174[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ABC000;
    case 2u: goto L_08ABC00C;
    case 3u: goto L_08ABC014;
    case 4u: goto L_08ABC020;
    case 5u: goto L_08ABC024;
    case 6u: goto L_08ABC048;
    case 7u: goto L_08ABC078;
    case 8u: goto L_08ABC08C;
    case 9u: goto L_08ABC0A0;
    case 10u: goto L_08ABC0A4;
    case 11u: goto L_08ABC0AC;
    case 12u: goto L_08ABC0D8;
    case 13u: goto L_08ABC0DC;
    case 14u: goto L_08ABC0E4;
    case 15u: goto L_08ABC118;
    case 16u: goto L_08ABC120;
    case 17u: goto L_08ABC124;
    case 18u: goto L_08ABC12C;
    case 19u: goto L_08ABC130;
    case 20u: goto L_08ABC138;
    case 21u: goto L_08ABC16C;
    case 22u: goto L_08ABC180;
    case 23u: goto L_08ABC184;
    case 24u: goto L_08ABC18C;
    case 25u: goto L_08ABC190;
    case 26u: goto L_08ABC198;
    case 27u: goto L_08ABC19C;
    case 28u: goto L_08ABC1A8;
    case 29u: goto L_08ABC1B0;
    case 30u: goto L_08ABC1B4;
    case 31u: goto L_08ABC1BC;
    case 32u: goto L_08ABC1C0;
    case 33u: goto L_08ABC1DC;
    case 34u: goto L_08ABC204;
    case 35u: goto L_08ABC20C;
    case 36u: goto L_08ABC21C;
    case 37u: goto L_08ABC224;
    case 38u: goto L_08ABC230;
    case 39u: goto L_08ABC240;
    case 40u: goto L_08ABC248;
    case 41u: goto L_08ABC254;
    case 42u: goto L_08ABC264;
    case 43u: goto L_08ABC278;
    case 44u: goto L_08ABC2A0;
    case 45u: goto L_08ABC2A8;
    case 46u: goto L_08ABC2B0;
    case 47u: goto L_08ABC2C0;
    case 48u: goto L_08ABC2CC;
    case 49u: goto L_08ABC2D0;
    case 50u: goto L_08ABC2D8;
    case 51u: goto L_08ABC2E0;
    case 52u: goto L_08ABC2E4;
    case 53u: goto L_08ABC2F4;
    case 54u: goto L_08ABC2F8;
    case 55u: goto L_08ABC300;
    case 56u: goto L_08ABC30C;
    case 57u: goto L_08ABC314;
    case 58u: goto L_08ABC318;
    case 59u: goto L_08ABC31C;
    case 60u: goto L_08ABC324;
    case 61u: goto L_08ABC334;
    case 62u: goto L_08ABC34C;
    case 63u: goto L_08ABC360;
    case 64u: goto L_08ABC364;
    case 65u: goto L_08ABC36C;
    case 66u: goto L_08ABC380;
    case 67u: goto L_08ABC384;
    case 68u: goto L_08ABC38C;
    case 69u: goto L_08ABC398;
    case 70u: goto L_08ABC39C;
    case 71u: goto L_08ABC3A4;
    case 72u: goto L_08ABC3BC;
    case 73u: goto L_08ABC3C8;
    case 74u: goto L_08ABC3CC;
    case 75u: goto L_08ABC3D4;
    case 76u: goto L_08ABC3D8;
    case 77u: goto L_08ABC3E0;
    case 78u: goto L_08ABC3E4;
    case 79u: goto L_08ABC414;
    case 80u: goto L_08ABC418;
    case 81u: goto L_08ABC420;
    case 82u: goto L_08ABC424;
    case 83u: goto L_08ABC438;
    case 84u: goto L_08ABC43C;
    case 85u: goto L_08ABC454;
    case 86u: goto L_08ABC484;
    case 87u: goto L_08ABC48C;
    case 88u: goto L_08ABC498;
    case 89u: goto L_08ABC4AC;
    case 90u: goto L_08ABC4C8;
    case 91u: goto L_08ABC4D0;
    case 92u: goto L_08ABC4DC;
    case 93u: goto L_08ABC4E8;
    case 94u: goto L_08ABC4F0;
    case 95u: goto L_08ABC4F4;
    case 96u: goto L_08ABC508;
    case 97u: goto L_08ABC510;
    case 98u: goto L_08ABC538;
    case 99u: goto L_08ABC540;
    case 100u: goto L_08ABC548;
    case 101u: goto L_08ABC554;
    case 102u: goto L_08ABC558;
    case 103u: goto L_08ABC564;
    case 104u: goto L_08ABC56C;
    case 105u: goto L_08ABC574;
    case 106u: goto L_08ABC580;
    case 107u: goto L_08ABC588;
    case 108u: goto L_08ABC59C;
    case 109u: goto L_08ABC5B4;
    case 110u: goto L_08ABC5BC;
    case 111u: goto L_08ABC5D8;
    case 112u: goto L_08ABC5E8;
    case 113u: goto L_08ABC5FC;
    case 114u: goto L_08ABC604;
    case 115u: goto L_08ABC60C;
    case 116u: goto L_08ABC620;
    case 117u: goto L_08ABC63C;
    case 118u: goto L_08ABC644;
    case 119u: goto L_08ABC654;
    case 120u: goto L_08ABC660;
    case 121u: goto L_08ABC66C;
    case 122u: goto L_08ABC678;
    case 123u: goto L_08ABC684;
    case 124u: goto L_08ABC690;
    case 125u: goto L_08ABC69C;
    case 126u: goto L_08ABC6A8;
    case 127u: goto L_08ABC6B4;
    case 128u: goto L_08ABC6C0;
    case 129u: goto L_08ABC6CC;
    case 130u: goto L_08ABC6D8;
    case 131u: goto L_08ABC6E4;
    case 132u: goto L_08ABC6F0;
    case 133u: goto L_08ABC6FC;
    case 134u: goto L_08ABC704;
    case 135u: goto L_08ABC70C;
    case 136u: goto L_08ABC714;
    case 137u: goto L_08ABC720;
    case 138u: goto L_08ABC730;
    case 139u: goto L_08ABC738;
    case 140u: goto L_08ABC740;
    case 141u: goto L_08ABC74C;
    case 142u: goto L_08ABC754;
    case 143u: goto L_08ABC760;
    case 144u: goto L_08ABC768;
    case 145u: goto L_08ABC770;
    case 146u: goto L_08ABC778;
    case 147u: goto L_08ABC780;
    case 148u: goto L_08ABC78C;
    case 149u: goto L_08ABC798;
    case 150u: goto L_08ABC7A4;
    case 151u: goto L_08ABC7AC;
    case 152u: goto L_08ABC7B4;
    case 153u: goto L_08ABC7BC;
    case 154u: goto L_08ABC7C4;
    case 155u: goto L_08ABC7D0;
    case 156u: goto L_08ABC7DC;
    case 157u: goto L_08ABC7E4;
    case 158u: goto L_08ABC81C;
    case 159u: goto L_08ABC824;
    case 160u: goto L_08ABC834;
    case 161u: goto L_08ABC844;
    case 162u: goto L_08ABC864;
    case 163u: goto L_08ABC86C;
    case 164u: goto L_08ABC878;
    case 165u: goto L_08ABC880;
    case 166u: goto L_08ABC88C;
    case 167u: goto L_08ABC89C;
    case 168u: goto L_08ABC8A4;
    case 169u: goto L_08ABC8AC;
    case 170u: goto L_08ABC8B4;
    case 171u: goto L_08ABC8C4;
    case 172u: goto L_08ABC8CC;
    case 173u: goto L_08ABC8D4;
    case 174u: goto L_08ABC8DC;
    case 175u: goto L_08ABC8E4;
    case 176u: goto L_08ABC8F0;
    case 177u: goto L_08ABC8FC;
    case 178u: goto L_08ABC904;
    case 179u: goto L_08ABC90C;
    case 180u: goto L_08ABC918;
    case 181u: goto L_08ABC928;
    case 182u: goto L_08ABC930;
    case 183u: goto L_08ABC938;
    case 184u: goto L_08ABC940;
    case 185u: goto L_08ABC948;
    case 186u: goto L_08ABC954;
    case 187u: goto L_08ABC964;
    case 188u: goto L_08ABC96C;
    case 189u: goto L_08ABC9A4;
    case 190u: goto L_08ABC9AC;
    case 191u: goto L_08ABC9BC;
    case 192u: goto L_08ABC9CC;
    case 193u: goto L_08ABC9EC;
    case 194u: goto L_08ABCA0C;
    case 195u: goto L_08ABCA2C;
    case 196u: goto L_08ABCA34;
    case 197u: goto L_08ABCA40;
    case 198u: goto L_08ABCA48;
    case 199u: goto L_08ABCA54;
    case 200u: goto L_08ABCA64;
    case 201u: goto L_08ABCA6C;
    case 202u: goto L_08ABCA74;
    case 203u: goto L_08ABCA7C;
    case 204u: goto L_08ABCA8C;
    case 205u: goto L_08ABCA94;
    case 206u: goto L_08ABCA9C;
    case 207u: goto L_08ABCAA4;
    case 208u: goto L_08ABCAAC;
    case 209u: goto L_08ABCAB8;
    case 210u: goto L_08ABCAC4;
    case 211u: goto L_08ABCACC;
    case 212u: goto L_08ABCAD4;
    case 213u: goto L_08ABCAE4;
    case 214u: goto L_08ABCAEC;
    case 215u: goto L_08ABCAF8;
    case 216u: goto L_08ABCB04;
    case 217u: goto L_08ABCB0C;
    case 218u: goto L_08ABCB14;
    case 219u: goto L_08ABCB1C;
    case 220u: goto L_08ABCB28;
    case 221u: goto L_08ABCB34;
    case 222u: goto L_08ABCB3C;
    case 223u: goto L_08ABCB48;
    case 224u: goto L_08ABCB54;
    case 225u: goto L_08ABCB5C;
    case 226u: goto L_08ABCB68;
    case 227u: goto L_08ABCB74;
    case 228u: goto L_08ABCB7C;
    case 229u: goto L_08ABCB88;
    case 230u: goto L_08ABCB94;
    case 231u: goto L_08ABCB9C;
    case 232u: goto L_08ABCBA4;
    case 233u: goto L_08ABCBAC;
    case 234u: goto L_08ABCBB4;
    case 235u: goto L_08ABCBC0;
    case 236u: goto L_08ABCBC8;
    case 237u: goto L_08ABCBD4;
    case 238u: goto L_08ABCBE0;
    case 239u: goto L_08ABCBE8;
    case 240u: goto L_08ABCBF0;
    case 241u: goto L_08ABCBF8;
    case 242u: goto L_08ABCC00;
    case 243u: goto L_08ABCC0C;
    case 244u: goto L_08ABCC1C;
    case 245u: goto L_08ABCC28;
    case 246u: goto L_08ABCC30;
    case 247u: goto L_08ABCC38;
    case 248u: goto L_08ABCC40;
    case 249u: goto L_08ABCC48;
    case 250u: goto L_08ABCC54;
    case 251u: goto L_08ABCC5C;
    case 252u: goto L_08ABCC68;
    case 253u: goto L_08ABCC80;
    case 254u: goto L_08ABCC88;
    case 255u: goto L_08ABCCA0;
    case 256u: goto L_08ABCCB0;
    case 257u: goto L_08ABCCB8;
    case 258u: goto L_08ABCCC0;
    case 259u: goto L_08ABCCD0;
    case 260u: goto L_08ABCCD8;
    case 261u: goto L_08ABCCE0;
    case 262u: goto L_08ABCCE8;
    case 263u: goto L_08ABCD00;
    case 264u: goto L_08ABCD0C;
    case 265u: goto L_08ABCD14;
    case 266u: goto L_08ABCD1C;
    case 267u: goto L_08ABCD24;
    case 268u: goto L_08ABCD2C;
    case 269u: goto L_08ABCD38;
    case 270u: goto L_08ABCD48;
    case 271u: goto L_08ABCD50;
    case 272u: goto L_08ABCD58;
    case 273u: goto L_08ABCD60;
    case 274u: goto L_08ABCD6C;
    case 275u: goto L_08ABCD70;
    case 276u: goto L_08ABCD84;
    case 277u: goto L_08ABCDA8;
    case 278u: goto L_08ABCDCC;
    case 279u: goto L_08ABCDEC;
    case 280u: goto L_08ABCDF8;
    case 281u: goto L_08ABCE00;
    case 282u: goto L_08ABCE08;
    case 283u: goto L_08ABCE10;
    case 284u: goto L_08ABCE18;
    case 285u: goto L_08ABCE20;
    case 286u: goto L_08ABCE30;
    case 287u: goto L_08ABCE5C;
    case 288u: goto L_08ABCE64;
    case 289u: goto L_08ABCE7C;
    case 290u: goto L_08ABCE8C;
    case 291u: goto L_08ABCE94;
    case 292u: goto L_08ABCEA4;
    case 293u: goto L_08ABCEEC;
    case 294u: goto L_08ABCF2C;
    case 295u: goto L_08ABCF44;
    case 296u: goto L_08ABCF60;
    case 297u: goto L_08ABCF84;
    case 298u: goto L_08ABCF94;
    case 299u: goto L_08ABCFB4;
    case 300u: goto L_08ABCFC4;
    case 301u: goto L_08ABD070;
    case 302u: goto L_08ABD07C;
    case 303u: goto L_08ABD09C;
    case 304u: goto L_08ABD0B8;
    case 305u: goto L_08ABD0C0;
    case 306u: goto L_08ABD0C8;
    case 307u: goto L_08ABD0D4;
    case 308u: goto L_08ABD0E4;
    case 309u: goto L_08ABD114;
    case 310u: goto L_08ABD13C;
    case 311u: goto L_08ABD148;
    case 312u: goto L_08ABD170;
    case 313u: goto L_08ABD178;
    case 314u: goto L_08ABD1A0;
    case 315u: goto L_08ABD1A8;
    case 316u: goto L_08ABD1D0;
    case 317u: goto L_08ABD1D8;
    case 318u: goto L_08ABD200;
    case 319u: goto L_08ABD208;
    case 320u: goto L_08ABD230;
    case 321u: goto L_08ABD238;
    case 322u: goto L_08ABD260;
    case 323u: goto L_08ABD268;
    case 324u: goto L_08ABD290;
    case 325u: goto L_08ABD298;
    case 326u: goto L_08ABD2C0;
    case 327u: goto L_08ABD2C8;
    case 328u: goto L_08ABD2F0;
    case 329u: goto L_08ABD2F8;
    case 330u: goto L_08ABD320;
    case 331u: goto L_08ABD328;
    case 332u: goto L_08ABD350;
    case 333u: goto L_08ABD358;
    case 334u: goto L_08ABD380;
    case 335u: goto L_08ABD388;
    case 336u: goto L_08ABD3AC;
    case 337u: goto L_08ABD3B0;
    case 338u: goto L_08ABD3B8;
    case 339u: goto L_08ABD3D8;
    case 340u: goto L_08ABD3E0;
    case 341u: goto L_08ABD3F0;
    case 342u: goto L_08ABD404;
    case 343u: goto L_08ABD444;
    case 344u: goto L_08ABD454;
    case 345u: goto L_08ABD460;
    case 346u: goto L_08ABD468;
    case 347u: goto L_08ABD474;
    case 348u: goto L_08ABD480;
    case 349u: goto L_08ABD488;
    case 350u: goto L_08ABD490;
    case 351u: goto L_08ABD49C;
    case 352u: goto L_08ABD4A8;
    case 353u: goto L_08ABD4AC;
    case 354u: goto L_08ABD4C4;
    case 355u: goto L_08ABD4E0;
    case 356u: goto L_08ABD4E8;
    case 357u: goto L_08ABD4F0;
    case 358u: goto L_08ABD4F8;
    case 359u: goto L_08ABD504;
    case 360u: goto L_08ABD510;
    case 361u: goto L_08ABD520;
    case 362u: goto L_08ABD524;
    case 363u: goto L_08ABD534;
    case 364u: goto L_08ABD53C;
    case 365u: goto L_08ABD544;
    case 366u: goto L_08ABD554;
    case 367u: goto L_08ABD598;
    case 368u: goto L_08ABD5AC;
    case 369u: goto L_08ABD5B4;
    case 370u: goto L_08ABD5BC;
    case 371u: goto L_08ABD5C4;
    case 372u: goto L_08ABD5D0;
    case 373u: goto L_08ABD5D8;
    case 374u: goto L_08ABD5E4;
    case 375u: goto L_08ABD5EC;
    case 376u: goto L_08ABD5F4;
    case 377u: goto L_08ABD5FC;
    case 378u: goto L_08ABD608;
    case 379u: goto L_08ABD614;
    case 380u: goto L_08ABD618;
    case 381u: goto L_08ABD634;
    case 382u: goto L_08ABD650;
    case 383u: goto L_08ABD658;
    case 384u: goto L_08ABD660;
    case 385u: goto L_08ABD668;
    case 386u: goto L_08ABD674;
    case 387u: goto L_08ABD680;
    case 388u: goto L_08ABD690;
    case 389u: goto L_08ABD694;
    case 390u: goto L_08ABD6A4;
    case 391u: goto L_08ABD6E8;
    case 392u: goto L_08ABD6FC;
    case 393u: goto L_08ABD704;
    case 394u: goto L_08ABD70C;
    case 395u: goto L_08ABD710;
    case 396u: goto L_08ABD718;
    case 397u: goto L_08ABD724;
    case 398u: goto L_08ABD72C;
    case 399u: goto L_08ABD734;
    case 400u: goto L_08ABD73C;
    case 401u: goto L_08ABD748;
    case 402u: goto L_08ABD754;
    case 403u: goto L_08ABD758;
    case 404u: goto L_08ABD774;
    case 405u: goto L_08ABD790;
    case 406u: goto L_08ABD798;
    case 407u: goto L_08ABD7A0;
    case 408u: goto L_08ABD7A8;
    case 409u: goto L_08ABD7B4;
    case 410u: goto L_08ABD7C0;
    case 411u: goto L_08ABD7D0;
    case 412u: goto L_08ABD7D4;
    case 413u: goto L_08ABD7E4;
    case 414u: goto L_08ABD800;
    case 415u: goto L_08ABD80C;
    case 416u: goto L_08ABD814;
    case 417u: goto L_08ABD81C;
    case 418u: goto L_08ABD824;
    case 419u: goto L_08ABD82C;
    case 420u: goto L_08ABD838;
    case 421u: goto L_08ABD840;
    case 422u: goto L_08ABD84C;
    case 423u: goto L_08ABD850;
    case 424u: goto L_08ABD868;
    case 425u: goto L_08ABD878;
    case 426u: goto L_08ABD884;
    case 427u: goto L_08ABD894;
    case 428u: goto L_08ABD8A4;
    case 429u: goto L_08ABD8B0;
    case 430u: goto L_08ABD8B8;
    case 431u: goto L_08ABD8C4;
    case 432u: goto L_08ABD8CC;
    case 433u: goto L_08ABD8D8;
    case 434u: goto L_08ABD8E0;
    case 435u: goto L_08ABD8E8;
    case 436u: goto L_08ABD8F8;
    case 437u: goto L_08ABD904;
    case 438u: goto L_08ABD90C;
    case 439u: goto L_08ABD910;
    case 440u: goto L_08ABD920;
    case 441u: goto L_08ABD928;
    case 442u: goto L_08ABD930;
    case 443u: goto L_08ABD94C;
    case 444u: goto L_08ABD958;
    case 445u: goto L_08ABD960;
    case 446u: goto L_08ABD968;
    case 447u: goto L_08ABD970;
    case 448u: goto L_08ABD978;
    case 449u: goto L_08ABD984;
    case 450u: goto L_08ABD98C;
    case 451u: goto L_08ABD998;
    case 452u: goto L_08ABD99C;
    case 453u: goto L_08ABD9B4;
    case 454u: goto L_08ABD9C4;
    case 455u: goto L_08ABD9D0;
    case 456u: goto L_08ABD9E0;
    case 457u: goto L_08ABD9EC;
    case 458u: goto L_08ABD9F8;
    case 459u: goto L_08ABDA00;
    case 460u: goto L_08ABDA0C;
    case 461u: goto L_08ABDA14;
    case 462u: goto L_08ABDA20;
    case 463u: goto L_08ABDA28;
    case 464u: goto L_08ABDA30;
    case 465u: goto L_08ABDA40;
    case 466u: goto L_08ABDA4C;
    case 467u: goto L_08ABDA54;
    case 468u: goto L_08ABDA58;
    case 469u: goto L_08ABDA68;
    case 470u: goto L_08ABDAA8;
    case 471u: goto L_08ABDAB8;
    case 472u: goto L_08ABDAC4;
    case 473u: goto L_08ABDACC;
    case 474u: goto L_08ABDAD8;
    case 475u: goto L_08ABDAE4;
    case 476u: goto L_08ABDAE8;
    case 477u: goto L_08ABDB00;
    case 478u: goto L_08ABDB1C;
    case 479u: goto L_08ABDB24;
    case 480u: goto L_08ABDB2C;
    case 481u: goto L_08ABDB34;
    case 482u: goto L_08ABDB40;
    case 483u: goto L_08ABDB4C;
    case 484u: goto L_08ABDB5C;
    case 485u: goto L_08ABDB60;
    case 486u: goto L_08ABDB70;
    case 487u: goto L_08ABDBB0;
    case 488u: goto L_08ABDBC4;
    case 489u: goto L_08ABDBCC;
    case 490u: goto L_08ABDBD4;
    case 491u: goto L_08ABDBE0;
    case 492u: goto L_08ABDBE8;
    case 493u: goto L_08ABDBEC;
    case 494u: goto L_08ABDBF8;
    case 495u: goto L_08ABDC00;
    case 496u: goto L_08ABDC0C;
    case 497u: goto L_08ABDC14;
    case 498u: goto L_08ABDC20;
    case 499u: goto L_08ABDC2C;
    case 500u: goto L_08ABDC30;
    case 501u: goto L_08ABDC48;
    case 502u: goto L_08ABDC88;
    case 503u: goto L_08ABDC98;
    case 504u: goto L_08ABDCA4;
    case 505u: goto L_08ABDCAC;
    case 506u: goto L_08ABDCB8;
    case 507u: goto L_08ABDCC4;
    case 508u: goto L_08ABDCC8;
    case 509u: goto L_08ABDCE0;
    case 510u: goto L_08ABDD20;
    case 511u: goto L_08ABDD30;
    case 512u: goto L_08ABDD3C;
    case 513u: goto L_08ABDD44;
    case 514u: goto L_08ABDD50;
    case 515u: goto L_08ABDD5C;
    case 516u: goto L_08ABDD60;
    case 517u: goto L_08ABDD78;
    case 518u: goto L_08ABDDB8;
    case 519u: goto L_08ABDDC8;
    case 520u: goto L_08ABDDD4;
    case 521u: goto L_08ABDDDC;
    case 522u: goto L_08ABDDE8;
    case 523u: goto L_08ABDDF4;
    case 524u: goto L_08ABDE04;
    case 525u: goto L_08ABDE18;
    case 526u: goto L_08ABDE1C;
    case 527u: goto L_08ABDE34;
    case 528u: goto L_08ABDE50;
    case 529u: goto L_08ABDE6C;
    case 530u: goto L_08ABDE78;
    case 531u: goto L_08ABDE84;
    case 532u: goto L_08ABDE8C;
    case 533u: goto L_08ABDE90;
    case 534u: goto L_08ABDEA4;
    case 535u: goto L_08ABDEAC;
    case 536u: goto L_08ABDEB4;
    case 537u: goto L_08ABDED0;
    case 538u: goto L_08ABDED8;
    case 539u: goto L_08ABDEDC;
    case 540u: goto L_08ABDEEC;
    case 541u: goto L_08ABDEF4;
    case 542u: goto L_08ABDF08;
    case 543u: goto L_08ABDF10;
    case 544u: goto L_08ABDF18;
    case 545u: goto L_08ABDF30;
    case 546u: goto L_08ABDF38;
    case 547u: goto L_08ABDF4C;
    case 548u: goto L_08ABDF5C;
    case 549u: goto L_08ABDF64;
    case 550u: goto L_08ABDF78;
    case 551u: goto L_08ABDF88;
    case 552u: goto L_08ABDF90;
    case 553u: goto L_08ABDFA4;
    case 554u: goto L_08ABDFB4;
    case 555u: goto L_08ABDFC8;
    case 556u: goto L_08ABDFD0;
    case 557u: goto L_08ABDFD8;
    case 558u: goto L_08ABDFE8;
    case 559u: goto L_08ABDFF8;
    case 560u: goto L_08ABE008;
    case 561u: goto L_08ABE014;
    case 562u: goto L_08ABE034;
    case 563u: goto L_08ABE03C;
    case 564u: goto L_08ABE04C;
    case 565u: goto L_08ABE060;
    case 566u: goto L_08ABE074;
    case 567u: goto L_08ABE098;
    case 568u: goto L_08ABE0A4;
    case 569u: goto L_08ABE0B8;
    case 570u: goto L_08ABE0D8;
    case 571u: goto L_08ABE0F0;
    case 572u: goto L_08ABE108;
    case 573u: goto L_08ABE118;
    case 574u: goto L_08ABE130;
    case 575u: goto L_08ABE150;
    case 576u: goto L_08ABE170;
    case 577u: goto L_08ABE17C;
    case 578u: goto L_08ABE190;
    case 579u: goto L_08ABE198;
    case 580u: goto L_08ABE1AC;
    case 581u: goto L_08ABE1C0;
    case 582u: goto L_08ABE1CC;
    case 583u: goto L_08ABE1D0;
    case 584u: goto L_08ABE1E0;
    case 585u: goto L_08ABE1EC;
    case 586u: goto L_08ABE1F0;
    case 587u: goto L_08ABE1FC;
    case 588u: goto L_08ABE218;
    case 589u: goto L_08ABE22C;
    case 590u: goto L_08ABE234;
    case 591u: goto L_08ABE248;
    case 592u: goto L_08ABE250;
    case 593u: goto L_08ABE264;
    case 594u: goto L_08ABE270;
    case 595u: goto L_08ABE278;
    case 596u: goto L_08ABE28C;
    case 597u: goto L_08ABE294;
    case 598u: goto L_08ABE29C;
    case 599u: goto L_08ABE2B0;
    case 600u: goto L_08ABE2B4;
    case 601u: goto L_08ABE2C8;
    case 602u: goto L_08ABE2DC;
    case 603u: goto L_08ABE30C;
    case 604u: goto L_08ABE318;
    case 605u: goto L_08ABE378;
    case 606u: goto L_08ABE394;
    case 607u: goto L_08ABE3A8;
    case 608u: goto L_08ABE3D4;
    case 609u: goto L_08ABE3D8;
    case 610u: goto L_08ABE3F4;
    case 611u: goto L_08ABE41C;
    case 612u: goto L_08ABE430;
    case 613u: goto L_08ABE438;
    case 614u: goto L_08ABE44C;
    case 615u: goto L_08ABE454;
    case 616u: goto L_08ABE468;
    case 617u: goto L_08ABE470;
    case 618u: goto L_08ABE478;
    case 619u: goto L_08ABE490;
    case 620u: goto L_08ABE498;
    case 621u: goto L_08ABE4B0;
    case 622u: goto L_08ABE4B8;
    case 623u: goto L_08ABE4D0;
    case 624u: goto L_08ABE4D8;
    case 625u: goto L_08ABE4E8;
    case 626u: goto L_08ABE4F4;
    case 627u: goto L_08ABE4FC;
    case 628u: goto L_08ABE500;
    case 629u: goto L_08ABE508;
    case 630u: goto L_08ABE51C;
    case 631u: goto L_08ABE524;
    case 632u: goto L_08ABE52C;
    case 633u: goto L_08ABE548;
    case 634u: goto L_08ABE550;
    case 635u: goto L_08ABE574;
    case 636u: goto L_08ABE57C;
    case 637u: goto L_08ABE584;
    case 638u: goto L_08ABE59C;
    case 639u: goto L_08ABE5A0;
    case 640u: goto L_08ABE5B8;
    case 641u: goto L_08ABE5F8;
    case 642u: goto L_08ABE600;
    case 643u: goto L_08ABE604;
    case 644u: goto L_08ABE60C;
    case 645u: goto L_08ABE64C;
    case 646u: goto L_08ABE654;
    case 647u: goto L_08ABE658;
    case 648u: goto L_08ABE660;
    case 649u: goto L_08ABE688;
    case 650u: goto L_08ABE690;
    case 651u: goto L_08ABE69C;
    case 652u: goto L_08ABE6A4;
    case 653u: goto L_08ABE6B4;
    case 654u: goto L_08ABE6BC;
    case 655u: goto L_08ABE6D0;
    case 656u: goto L_08ABE6D8;
    case 657u: goto L_08ABE6EC;
    case 658u: goto L_08ABE6F4;
    case 659u: goto L_08ABE6FC;
    case 660u: goto L_08ABE71C;
    case 661u: goto L_08ABE724;
    case 662u: goto L_08ABE750;
    case 663u: goto L_08ABE758;
    case 664u: goto L_08ABE76C;
    case 665u: goto L_08ABE774;
    case 666u: goto L_08ABE77C;
    case 667u: goto L_08ABE790;
    case 668u: goto L_08ABE794;
    case 669u: goto L_08ABE7A8;
    case 670u: goto L_08ABE7E8;
    case 671u: goto L_08ABE7FC;
    case 672u: goto L_08ABE800;
    case 673u: goto L_08ABE808;
    case 674u: goto L_08ABE81C;
    case 675u: goto L_08ABE824;
    case 676u: goto L_08ABE82C;
    case 677u: goto L_08ABE838;
    case 678u: goto L_08ABE840;
    case 679u: goto L_08ABE858;
    case 680u: goto L_08ABE8CC;
    case 681u: goto L_08ABE8DC;
    case 682u: goto L_08ABE8E8;
    case 683u: goto L_08ABE8F8;
    case 684u: goto L_08ABE984;
    case 685u: goto L_08ABE9A0;
    case 686u: goto L_08ABE9B8;
    case 687u: goto L_08ABE9C4;
    case 688u: goto L_08ABE9CC;
    case 689u: goto L_08ABE9D4;
    case 690u: goto L_08ABE9DC;
    case 691u: goto L_08ABE9F4;
    case 692u: goto L_08ABE9FC;
    case 693u: goto L_08ABEA14;
    case 694u: goto L_08ABEA1C;
    case 695u: goto L_08ABEA38;
    case 696u: goto L_08ABEA40;
    case 697u: goto L_08ABEA48;
    case 698u: goto L_08ABEA60;
    case 699u: goto L_08ABEA68;
    case 700u: goto L_08ABEA80;
    case 701u: goto L_08ABEA88;
    case 702u: goto L_08ABEAA4;
    case 703u: goto L_08ABEAAC;
    case 704u: goto L_08ABEAB4;
    case 705u: goto L_08ABEACC;
    case 706u: goto L_08ABEAD4;
    case 707u: goto L_08ABEAEC;
    case 708u: goto L_08ABEAF4;
    case 709u: goto L_08ABEB10;
    case 710u: goto L_08ABEB14;
    case 711u: goto L_08ABEB20;
    case 712u: goto L_08ABEBA4;
    case 713u: goto L_08ABEBB0;
    case 714u: goto L_08ABEBB8;
    case 715u: goto L_08ABEBC4;
    case 716u: goto L_08ABEBD0;
    case 717u: goto L_08ABEBDC;
    case 718u: goto L_08ABEBE4;
    case 719u: goto L_08ABEBEC;
    case 720u: goto L_08ABEBF8;
    case 721u: goto L_08ABEC04;
    case 722u: goto L_08ABEC08;
    case 723u: goto L_08ABEC0C;
    case 724u: goto L_08ABEC18;
    case 725u: goto L_08ABEC20;
    case 726u: goto L_08ABEC34;
    case 727u: goto L_08ABEC38;
    case 728u: goto L_08ABEC48;
    case 729u: goto L_08ABEC50;
    case 730u: goto L_08ABEC64;
    case 731u: goto L_08ABEC6C;
    case 732u: goto L_08ABEC80;
    case 733u: goto L_08ABEC88;
    case 734u: goto L_08ABEC9C;
    case 735u: goto L_08ABECA4;
    case 736u: goto L_08ABECB8;
    case 737u: goto L_08ABECC0;
    case 738u: goto L_08ABECD4;
    case 739u: goto L_08ABECDC;
    case 740u: goto L_08ABECF0;
    case 741u: goto L_08ABECF8;
    case 742u: goto L_08ABED0C;
    case 743u: goto L_08ABED14;
    case 744u: goto L_08ABED28;
    case 745u: goto L_08ABED30;
    case 746u: goto L_08ABED44;
    case 747u: goto L_08ABED4C;
    case 748u: goto L_08ABED60;
    case 749u: goto L_08ABED68;
    case 750u: goto L_08ABED7C;
    case 751u: goto L_08ABED84;
    case 752u: goto L_08ABED98;
    case 753u: goto L_08ABEDA0;
    case 754u: goto L_08ABEDBC;
    case 755u: goto L_08ABEDC8;
    case 756u: goto L_08ABEDD0;
    case 757u: goto L_08ABEDD8;
    case 758u: goto L_08ABEDDC;
    case 759u: goto L_08ABEDE8;
    case 760u: goto L_08ABEDF8;
    case 761u: goto L_08ABEE00;
    case 762u: goto L_08ABEE14;
    case 763u: goto L_08ABEE1C;
    case 764u: goto L_08ABEE30;
    case 765u: goto L_08ABEE38;
    case 766u: goto L_08ABEE58;
    case 767u: goto L_08ABEE60;
    case 768u: goto L_08ABEE8C;
    case 769u: goto L_08ABEE94;
    case 770u: goto L_08ABEEA8;
    case 771u: goto L_08ABEEB0;
    case 772u: goto L_08ABEEC4;
    case 773u: goto L_08ABEECC;
    case 774u: goto L_08ABEEE0;
    case 775u: goto L_08ABEEEC;
    case 776u: goto L_08ABEEF0;
    case 777u: goto L_08ABEEF8;
    case 778u: goto L_08ABEF04;
    case 779u: goto L_08ABEF0C;
    case 780u: goto L_08ABEF14;
    case 781u: goto L_08ABEF1C;
    case 782u: goto L_08ABEF30;
    case 783u: goto L_08ABEF38;
    case 784u: goto L_08ABEF4C;
    case 785u: goto L_08ABEF54;
    case 786u: goto L_08ABEF68;
    case 787u: goto L_08ABEF70;
    case 788u: goto L_08ABEF78;
    case 789u: goto L_08ABEF8C;
    case 790u: goto L_08ABEF94;
    case 791u: goto L_08ABEFA8;
    case 792u: goto L_08ABEFB0;
    case 793u: goto L_08ABEFC4;
    case 794u: goto L_08ABEFCC;
    case 795u: goto L_08ABEFD4;
    case 796u: goto L_08ABEFE8;
    case 797u: goto L_08ABEFF0;
    case 798u: goto L_08ABF004;
    case 799u: goto L_08ABF00C;
    case 800u: goto L_08ABF020;
    case 801u: goto L_08ABF024;
    case 802u: goto L_08ABF030;
    case 803u: goto L_08ABF034;
    case 804u: goto L_08ABF07C;
    case 805u: goto L_08ABF09C;
    case 806u: goto L_08ABF0C8;
    case 807u: goto L_08ABF0D4;
    case 808u: goto L_08ABF0F4;
    case 809u: goto L_08ABF0FC;
    case 810u: goto L_08ABF100;
    case 811u: goto L_08ABF114;
    case 812u: goto L_08ABF124;
    case 813u: goto L_08ABF13C;
    case 814u: goto L_08ABF144;
    case 815u: goto L_08ABF164;
    case 816u: goto L_08ABF174;
    case 817u: goto L_08ABF17C;
    case 818u: goto L_08ABF19C;
    case 819u: goto L_08ABF1B8;
    case 820u: goto L_08ABF1C8;
    case 821u: goto L_08ABF1D0;
    case 822u: goto L_08ABF1E0;
    case 823u: goto L_08ABF23C;
    case 824u: goto L_08ABF268;
    case 825u: goto L_08ABF2A8;
    case 826u: goto L_08ABF2B0;
    case 827u: goto L_08ABF2BC;
    case 828u: goto L_08ABF2C4;
    case 829u: goto L_08ABF2EC;
    case 830u: goto L_08ABF2F8;
    case 831u: goto L_08ABF318;
    case 832u: goto L_08ABF330;
    case 833u: goto L_08ABF33C;
    case 834u: goto L_08ABF348;
    case 835u: goto L_08ABF350;
    case 836u: goto L_08ABF358;
    case 837u: goto L_08ABF360;
    case 838u: goto L_08ABF364;
    case 839u: goto L_08ABF36C;
    case 840u: goto L_08ABF390;
    case 841u: goto L_08ABF3AC;
    case 842u: goto L_08ABF3B4;
    case 843u: goto L_08ABF3BC;
    case 844u: goto L_08ABF3C4;
    case 845u: goto L_08ABF3CC;
    case 846u: goto L_08ABF3D4;
    case 847u: goto L_08ABF3E0;
    case 848u: goto L_08ABF3E8;
    case 849u: goto L_08ABF3EC;
    case 850u: goto L_08ABF3F8;
    case 851u: goto L_08ABF408;
    case 852u: goto L_08ABF40C;
    case 853u: goto L_08ABF410;
    case 854u: goto L_08ABF41C;
    case 855u: goto L_08ABF424;
    case 856u: goto L_08ABF428;
    case 857u: goto L_08ABF430;
    case 858u: goto L_08ABF438;
    case 859u: goto L_08ABF440;
    case 860u: goto L_08ABF44C;
    case 861u: goto L_08ABF458;
    case 862u: goto L_08ABF468;
    case 863u: goto L_08ABF46C;
    case 864u: goto L_08ABF470;
    case 865u: goto L_08ABF47C;
    case 866u: goto L_08ABF484;
    case 867u: goto L_08ABF488;
    case 868u: goto L_08ABF490;
    case 869u: goto L_08ABF498;
    case 870u: goto L_08ABF4A0;
    case 871u: goto L_08ABF4A8;
    case 872u: goto L_08ABF4B0;
    case 873u: goto L_08ABF4B8;
    case 874u: goto L_08ABF4C0;
    case 875u: goto L_08ABF4C8;
    case 876u: goto L_08ABF4D0;
    case 877u: goto L_08ABF4DC;
    case 878u: goto L_08ABF4E4;
    case 879u: goto L_08ABF4E8;
    case 880u: goto L_08ABF4EC;
    case 881u: goto L_08ABF500;
    case 882u: goto L_08ABF51C;
    case 883u: goto L_08ABF524;
    case 884u: goto L_08ABF61C;
    case 885u: goto L_08ABF630;
    case 886u: goto L_08ABF660;
    case 887u: goto L_08ABF678;
    case 888u: goto L_08ABF690;
    case 889u: goto L_08ABF6B0;
    case 890u: goto L_08ABF6B8;
    case 891u: goto L_08ABF6CC;
    case 892u: goto L_08ABF6F4;
    case 893u: goto L_08ABF6FC;
    case 894u: goto L_08ABF710;
    case 895u: goto L_08ABF718;
    case 896u: goto L_08ABF72C;
    case 897u: goto L_08ABF734;
    case 898u: goto L_08ABF748;
    case 899u: goto L_08ABF750;
    case 900u: goto L_08ABF758;
    case 901u: goto L_08ABF760;
    case 902u: goto L_08ABF770;
    case 903u: goto L_08ABF77C;
    case 904u: goto L_08ABF788;
    case 905u: goto L_08ABF794;
    case 906u: goto L_08ABF7A0;
    case 907u: goto L_08ABF7AC;
    case 908u: goto L_08ABF7BC;
    case 909u: goto L_08ABF7C8;
    case 910u: goto L_08ABF7D4;
    case 911u: goto L_08ABF7E0;
    case 912u: goto L_08ABF7EC;
    case 913u: goto L_08ABF7F0;
    case 914u: goto L_08ABF7F8;
    case 915u: goto L_08ABF80C;
    case 916u: goto L_08ABF814;
    case 917u: goto L_08ABF828;
    case 918u: goto L_08ABF830;
    case 919u: goto L_08ABF844;
    case 920u: goto L_08ABF848;
    case 921u: goto L_08ABF864;
    case 922u: goto L_08ABF880;
    case 923u: goto L_08ABF8A0;
    case 924u: goto L_08ABF8C0;
    case 925u: goto L_08ABF8CC;
    case 926u: goto L_08ABF8D4;
    case 927u: goto L_08ABF8DC;
    case 928u: goto L_08ABF8E4;
    case 929u: goto L_08ABF8EC;
    case 930u: goto L_08ABF8F8;
    case 931u: goto L_08ABF900;
    case 932u: goto L_08ABF908;
    case 933u: goto L_08ABF910;
    case 934u: goto L_08ABF920;
    case 935u: goto L_08ABF954;
    case 936u: goto L_08ABF95C;
    case 937u: goto L_08ABF970;
    case 938u: goto L_08ABF984;
    case 939u: goto L_08ABF98C;
    case 940u: goto L_08ABF998;
    case 941u: goto L_08ABF9A0;
    case 942u: goto L_08ABF9A8;
    case 943u: goto L_08ABF9B0;
    case 944u: goto L_08ABF9B8;
    case 945u: goto L_08ABF9C0;
    case 946u: goto L_08ABF9C8;
    case 947u: goto L_08ABF9D0;
    case 948u: goto L_08ABF9D8;
    case 949u: goto L_08ABF9E0;
    case 950u: goto L_08ABF9EC;
    case 951u: goto L_08ABF9F0;
    case 952u: goto L_08ABFA14;
    case 953u: goto L_08ABFA3C;
    case 954u: goto L_08ABFA44;
    case 955u: goto L_08ABFA54;
    case 956u: goto L_08ABFA5C;
    case 957u: goto L_08ABFA68;
    case 958u: goto L_08ABFA70;
    case 959u: goto L_08ABFA7C;
    case 960u: goto L_08ABFA88;
    case 961u: goto L_08ABFA90;
    case 962u: goto L_08ABFA9C;
    case 963u: goto L_08ABFAA8;
    case 964u: goto L_08ABFAD8;
    case 965u: goto L_08ABFAE4;
    case 966u: goto L_08ABFAFC;
    case 967u: goto L_08ABFB14;
    case 968u: goto L_08ABFB1C;
    case 969u: goto L_08ABFB24;
    case 970u: goto L_08ABFB34;
    case 971u: goto L_08ABFB44;
    case 972u: goto L_08ABFB58;
    case 973u: goto L_08ABFB70;
    case 974u: goto L_08ABFB78;
    case 975u: goto L_08ABFB80;
    case 976u: goto L_08ABFB88;
    case 977u: goto L_08ABFB8C;
    case 978u: goto L_08ABFB94;
    case 979u: goto L_08ABFB9C;
    case 980u: goto L_08ABFBA8;
    case 981u: goto L_08ABFBB8;
    case 982u: goto L_08ABFBBC;
    case 983u: goto L_08ABFBC4;
    case 984u: goto L_08ABFBD8;
    case 985u: goto L_08ABFBE0;
    case 986u: goto L_08ABFBF0;
    case 987u: goto L_08ABFBF4;
    case 988u: goto L_08ABFBFC;
    case 989u: goto L_08ABFC68;
    case 990u: goto L_08ABFC78;
    case 991u: goto L_08ABFC9C;
    case 992u: goto L_08ABFCAC;
    case 993u: goto L_08ABFCB4;
    case 994u: goto L_08ABFCBC;
    case 995u: goto L_08ABFCC8;
    case 996u: goto L_08ABFCD0;
    case 997u: goto L_08ABFCDC;
    case 998u: goto L_08ABFCE4;
    case 999u: goto L_08ABFCF0;
    case 1000u: goto L_08ABFCF8;
    case 1001u: goto L_08ABFD04;
    case 1002u: goto L_08ABFD0C;
    case 1003u: goto L_08ABFD18;
    case 1004u: goto L_08ABFD20;
    case 1005u: goto L_08ABFD28;
    case 1006u: goto L_08ABFD34;
    case 1007u: goto L_08ABFD44;
    case 1008u: goto L_08ABFD54;
    case 1009u: goto L_08ABFD6C;
    case 1010u: goto L_08ABFD7C;
    case 1011u: goto L_08ABFD84;
    case 1012u: goto L_08ABFD8C;
    case 1013u: goto L_08ABFD94;
    case 1014u: goto L_08ABFD9C;
    case 1015u: goto L_08ABFDA4;
    case 1016u: goto L_08ABFDAC;
    case 1017u: goto L_08ABFDBC;
    case 1018u: goto L_08ABFDF0;
    case 1019u: goto L_08ABFE04;
    case 1020u: goto L_08ABFE14;
    case 1021u: goto L_08ABFE2C;
    case 1022u: goto L_08ABFE38;
    case 1023u: goto L_08ABFE50;
    case 1024u: goto L_08ABFE54;
    case 1025u: goto L_08ABFE68;
    case 1026u: goto L_08ABFE74;
    case 1027u: goto L_08ABFE7C;
    case 1028u: goto L_08ABFE8C;
    case 1029u: goto L_08ABFE98;
    case 1030u: goto L_08ABFEA4;
    case 1031u: goto L_08ABFEBC;
    case 1032u: goto L_08ABFEDC;
    case 1033u: goto L_08ABFEE8;
    case 1034u: goto L_08ABFF30;
    case 1035u: goto L_08ABFF40;
    case 1036u: goto L_08ABFF4C;
    case 1037u: goto L_08ABFF54;
    case 1038u: goto L_08ABFF64;
    case 1039u: goto L_08ABFF70;
    case 1040u: goto L_08ABFF78;
    case 1041u: goto L_08ABFF98;
    case 1042u: goto L_08ABFFAC;
    case 1043u: goto L_08ABFFC0;
    case 1044u: goto L_08ABFFC8;
    case 1045u: goto L_08ABFFDC;
    case 1046u: goto L_08ABFFF0;
    case 1047u: goto L_08ABFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ABC000:
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ABC00Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 1100u, 0x08ABBA14u>(ctx, &aot_mem) && ctx.pc == 0x08ABC00Cu) goto L_08ABC00C;
    return;
L_08ABC00C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08ABC024;
    }
    goto L_08ABC014;
L_08ABC014:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABC020u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 1187u, 0x08ABBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08ABC020u) goto L_08ABC020;
    return;
L_08ABC020:
    ctx.set_gpr(2, 2u << 16u);
    goto L_08ABC024;
L_08ABC024:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(201));
        goto L_08ABC1C0;
    }
    goto L_08ABC048;
L_08ABC048:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, 652u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 6521u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC1A8;
      }
      goto L_08ABC078;
    }
L_08ABC078:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08ABC0A4;
      }
      goto L_08ABC08C;
    }
L_08ABC08C:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65335u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC0A4;
      }
      goto L_08ABC0A0;
    }
L_08ABC0A0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC0A4;
L_08ABC0A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC0DC;
      }
      goto L_08ABC0AC;
    }
L_08ABC0AC:
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[16] - ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABC0DC;
      }
      goto L_08ABC0D8;
    }
L_08ABC0D8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC0DC;
L_08ABC0DC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC130;
      }
      goto L_08ABC0E4;
    }
L_08ABC0E4:
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[16] - ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABC124;
      }
      goto L_08ABC118;
    }
L_08ABC118:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC124;
      }
      goto L_08ABC120;
    }
L_08ABC120:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABC124;
L_08ABC124:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC130;
      }
      goto L_08ABC12C;
    }
L_08ABC12C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC130;
L_08ABC130:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC190;
      }
      goto L_08ABC138;
    }
L_08ABC138:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[5]);
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABC184;
      }
      goto L_08ABC16C;
    }
L_08ABC16C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC184;
      }
      goto L_08ABC180;
    }
L_08ABC180:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABC184;
L_08ABC184:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC190;
      }
      goto L_08ABC18C;
    }
L_08ABC18C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC190;
L_08ABC190:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC1A8;
      }
      goto L_08ABC198;
    }
L_08ABC198:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1608));
    goto L_08ABC19C;
L_08ABC19C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < -1608 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1608));
        goto L_08ABC19C;
    }
    goto L_08ABC1A8;
L_08ABC1A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABC1BC;
      }
      goto L_08ABC1B0;
    }
L_08ABC1B0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(201));
    goto L_08ABC1B4;
L_08ABC1B4:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(201));
        goto L_08ABC1B4;
    }
    goto L_08ABC1BC;
L_08ABC1BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(201));
    goto L_08ABC1C0;
L_08ABC1C0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.hi);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-800));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC204u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(773));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC204u) goto L_08ABC204;
    return;
L_08ABC204:
    ctx.set_gpr(31, 0x08ABC20Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC20Cu) goto L_08ABC20C;
    return;
L_08ABC20C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC21Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABC21Cu) goto L_08ABC21C;
    return;
L_08ABC21C:
    ctx.set_gpr(31, 0x08ABC224u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC224u) goto L_08ABC224;
    return;
L_08ABC224:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08ABC230u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC230u) goto L_08ABC230;
    return;
L_08ABC230:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABC240u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABC240u) goto L_08ABC240;
    return;
L_08ABC240:
    ctx.set_gpr(31, 0x08ABC248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC248u) goto L_08ABC248;
    return;
L_08ABC248:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC254u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC254u) goto L_08ABC254;
    return;
L_08ABC254:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ABC264u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 842u, 0x08AB314Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC264u) goto L_08ABC264;
    return;
L_08ABC264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABC2A8;
      }
      goto L_08ABC2A0;
    }
L_08ABC2A0:
    ctx.set_gpr(31, 0x08ABC2A8u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 1154u, 0x08ABBC84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC2A8u) goto L_08ABC2A8;
    return;
L_08ABC2A8:
    ctx.set_gpr(31, 0x08ABC2B0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC2B0u) goto L_08ABC2B0;
    return;
L_08ABC2B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08ABC438;
      }
      goto L_08ABC2C0;
    }
L_08ABC2C0:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[3]) <= 0) {
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_08ABC2F8;
    }
    goto L_08ABC2CC;
L_08ABC2CC:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08ABC2D0;
L_08ABC2D0:
    ctx.set_gpr(31, 0x08ABC2D8u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 169u, 0x0883CF04u>(ctx, &aot_mem) && ctx.pc == 0x08ABC2D8u) goto L_08ABC2D8;
    return;
L_08ABC2D8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08ABC2E4;
    }
    goto L_08ABC2E0;
L_08ABC2E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08ABC2E4;
L_08ABC2E4:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08ABC2D0;
    }
    goto L_08ABC2F4;
L_08ABC2F4:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08ABC2F8;
L_08ABC2F8:
    if (ctx.gpr[17] != ctx.gpr[3]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08ABC31C;
    }
    goto L_08ABC300;
L_08ABC300:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08ABC30Cu);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 169u, 0x0883CF04u>(ctx, &aot_mem) && ctx.pc == 0x08ABC30Cu) goto L_08ABC30C;
    return;
L_08ABC30C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC318;
      }
      goto L_08ABC314;
    }
L_08ABC314:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08ABC318;
L_08ABC318:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08ABC31C;
L_08ABC31C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ABC43C;
    }
    goto L_08ABC324;
L_08ABC324:
    ctx.set_gpr(7, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08ABC414;
      }
      goto L_08ABC334;
    }
L_08ABC334:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABC364;
      }
      goto L_08ABC34C;
    }
L_08ABC34C:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC364;
      }
      goto L_08ABC360;
    }
L_08ABC360:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC364;
L_08ABC364:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC384;
      }
      goto L_08ABC36C;
    }
L_08ABC36C:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC384;
      }
      goto L_08ABC380;
    }
L_08ABC380:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC384;
L_08ABC384:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC39C;
      }
      goto L_08ABC38C;
    }
L_08ABC38C:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABC39C;
      }
      goto L_08ABC398;
    }
L_08ABC398:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC39C;
L_08ABC39C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC3D8;
      }
      goto L_08ABC3A4;
    }
L_08ABC3A4:
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(3, 0u - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABC3CC;
      }
      goto L_08ABC3BC;
    }
L_08ABC3BC:
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABC3CC;
      }
      goto L_08ABC3C8;
    }
L_08ABC3C8:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABC3CC;
L_08ABC3CC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC3D8;
      }
      goto L_08ABC3D4;
    }
L_08ABC3D4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC3D8;
L_08ABC3D8:
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08ABC418;
    }
    goto L_08ABC3E0;
L_08ABC3E0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08ABC3E4;
L_08ABC3E4:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08ABC3E4;
    }
    goto L_08ABC414;
L_08ABC414:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08ABC418;
L_08ABC418:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC438;
      }
      goto L_08ABC420;
    }
L_08ABC420:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08ABC424;
L_08ABC424:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08ABC424;
    }
    goto L_08ABC438;
L_08ABC438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ABC43C;
L_08ABC43C:
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
L_08ABC454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC484u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC484u) goto L_08ABC484;
    return;
L_08ABC484:
    ctx.set_gpr(31, 0x08ABC48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08ABC48Cu) goto L_08ABC48C;
    return;
L_08ABC48C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC498u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 190u, 0x08AA8A14u>(ctx, &aot_mem) && ctx.pc == 0x08ABC498u) goto L_08ABC498;
    return;
L_08ABC498:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC4AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABC4F0;
      }
      goto L_08ABC4C8;
    }
L_08ABC4C8:
    ctx.set_gpr(31, 0x08ABC4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08ABC4D0u) goto L_08ABC4D0;
    return;
L_08ABC4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC4DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 190u, 0x08AA8A14u>(ctx, &aot_mem) && ctx.pc == 0x08ABC4DCu) goto L_08ABC4DC;
    return;
L_08ABC4DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ABC4F4;
    }
    goto L_08ABC4E8;
L_08ABC4E8:
    ctx.set_gpr(31, 0x08ABC4F0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ABC508;
L_08ABC4F0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ABC4F4;
L_08ABC4F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC508:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08ABC510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABC558;
      }
      goto L_08ABC538;
    }
L_08ABC538:
    ctx.set_gpr(31, 0x08ABC540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABC540u) goto L_08ABC540;
    return;
L_08ABC540:
    ctx.set_gpr(31, 0x08ABC548u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08ABC548u) goto L_08ABC548;
    return;
L_08ABC548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC554u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC554u) goto L_08ABC554;
    return;
L_08ABC554:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    goto L_08ABC558;
L_08ABC558:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABC588;
    }
    goto L_08ABC564;
L_08ABC564:
    ctx.set_gpr(31, 0x08ABC56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABC56Cu) goto L_08ABC56C;
    return;
L_08ABC56C:
    ctx.set_gpr(31, 0x08ABC574u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08ABC574u) goto L_08ABC574;
    return;
L_08ABC574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC580u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC580u) goto L_08ABC580;
    return;
L_08ABC580:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABC588;
L_08ABC588:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC59Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC59Cu) goto L_08ABC59C;
    return;
L_08ABC59C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC5B4:
    // nop
    goto L_08ABC510;
L_08ABC5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABC5D8u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08ABC510;
L_08ABC5D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABC5E8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC5E8u) goto L_08ABC5E8;
    return;
L_08ABC5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC5FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC5FCu) goto L_08ABC5FC;
    return;
L_08ABC5FC:
    ctx.set_gpr(31, 0x08ABC604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC604u) goto L_08ABC604;
    return;
L_08ABC604:
    ctx.set_gpr(31, 0x08ABC60Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 83u, 0x08AFC658u>(ctx, &aot_mem) && ctx.pc == 0x08ABC60Cu) goto L_08ABC60C;
    return;
L_08ABC60C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABC644;
      }
      goto L_08ABC63C;
    }
L_08ABC63C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABCD70;
      }
      goto L_08ABC644;
    }
L_08ABC644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCD48;
      }
      goto L_08ABC654;
    }
L_08ABC654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCD0C;
      }
      goto L_08ABC660;
    }
L_08ABC660:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08ABCCB0;
    }
    goto L_08ABC66C;
L_08ABC66C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08ABCC1C;
    }
    goto L_08ABC678;
L_08ABC678:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCBE0;
      }
      goto L_08ABC684;
    }
L_08ABC684:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCB94;
      }
      goto L_08ABC690;
    }
L_08ABC690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCA8C;
      }
      goto L_08ABC69C;
    }
L_08ABC69C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABCA64;
      }
      goto L_08ABC6A8;
    }
L_08ABC6A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC964;
      }
      goto L_08ABC6B4;
    }
L_08ABC6B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC928;
      }
      goto L_08ABC6C0;
    }
L_08ABC6C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC8C4;
      }
      goto L_08ABC6CC;
    }
L_08ABC6CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC89C;
      }
      goto L_08ABC6D8;
    }
L_08ABC6D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC7DC;
      }
      goto L_08ABC6E4;
    }
L_08ABC6E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08ABC78C;
    }
    goto L_08ABC6F0;
L_08ABC6F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABC730;
    }
    goto L_08ABC6FC;
L_08ABC6FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC70C;
      }
      goto L_08ABC704;
    }
L_08ABC704:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABCD70;
      }
      goto L_08ABC70C;
    }
L_08ABC70C:
    ctx.set_gpr(31, 0x08ABC714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08ABC714u) goto L_08ABC714;
    return;
L_08ABC714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC720u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 190u, 0x08AA8A14u>(ctx, &aot_mem) && ctx.pc == 0x08ABC720u) goto L_08ABC720;
    return;
L_08ABC720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABC730;
L_08ABC730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC768;
      }
      goto L_08ABC738;
    }
L_08ABC738:
    ctx.set_gpr(31, 0x08ABC740u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABCDCC;
L_08ABC740:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
        goto L_08ABC768;
    }
    goto L_08ABC74C;
L_08ABC74C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABCD70;
    }
    goto L_08ABC754;
L_08ABC754:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_08ABCD70;
    }
    goto L_08ABC760;
L_08ABC760:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABCD70;
      }
      goto L_08ABC768;
    }
L_08ABC768:
    ctx.set_gpr(31, 0x08ABC770u);
    // nop
    ctx.pc = 0x08B0E084u;
    return;
L_08ABC770:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08ABC780;
    }
    goto L_08ABC778;
L_08ABC778:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABCD70;
      }
      goto L_08ABC780;
    }
L_08ABC780:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08ABC78C;
L_08ABC78C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08ABC7C4;
    }
    goto L_08ABC798;
L_08ABC798:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
        goto L_08ABC7BC;
    }
    goto L_08ABC7A4;
L_08ABC7A4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
        goto L_08ABC7B4;
    }
    goto L_08ABC7AC;
L_08ABC7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ABC7D0;
      }
      goto L_08ABC7B4;
    }
L_08ABC7B4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC7BC;
    }
L_08ABC7BC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC7C4;
    }
L_08ABC7C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC7D0;
    }
L_08ABC7D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC7DC;
    }
L_08ABC7DC:
    ctx.set_gpr(31, 0x08ABC7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC7E4u) goto L_08ABC7E4;
    return;
L_08ABC7E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC81Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ABC81Cu) goto L_08ABC81C;
    return;
L_08ABC81C:
    ctx.set_gpr(31, 0x08ABC824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC824u) goto L_08ABC824;
    return;
L_08ABC824:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC834u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC834u) goto L_08ABC834;
    return;
L_08ABC834:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABC844u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC844u) goto L_08ABC844;
    return;
L_08ABC844:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2368));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC864u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ABC864u) goto L_08ABC864;
    return;
L_08ABC864:
    ctx.set_gpr(31, 0x08ABC86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC86Cu) goto L_08ABC86C;
    return;
L_08ABC86C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC878u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08ABC878u) goto L_08ABC878;
    return;
L_08ABC878:
    ctx.set_gpr(31, 0x08ABC880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC880u) goto L_08ABC880;
    return;
L_08ABC880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC88Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ABC88Cu) goto L_08ABC88C;
    return;
L_08ABC88C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC89C;
    }
L_08ABC89C:
    ctx.set_gpr(31, 0x08ABC8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC8A4u) goto L_08ABC8A4;
    return;
L_08ABC8A4:
    ctx.set_gpr(31, 0x08ABC8ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABC8AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC8B4;
    }
L_08ABC8B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC8C4;
    }
L_08ABC8C4:
    ctx.set_gpr(31, 0x08ABC8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC8CCu) goto L_08ABC8CC;
    return;
L_08ABC8CC:
    ctx.set_gpr(31, 0x08ABC8D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC8D4u) goto L_08ABC8D4;
    return;
L_08ABC8D4:
    ctx.set_gpr(31, 0x08ABC8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC8DCu) goto L_08ABC8DC;
    return;
L_08ABC8DC:
    ctx.set_gpr(31, 0x08ABC8E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCD84;
L_08ABC8E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABC904;
      }
      goto L_08ABC8F0;
    }
L_08ABC8F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABC904;
      }
      goto L_08ABC8FC;
    }
L_08ABC8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC904;
    }
L_08ABC904:
    ctx.set_gpr(31, 0x08ABC90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC90Cu) goto L_08ABC90C;
    return;
L_08ABC90C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC918u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ABC918u) goto L_08ABC918;
    return;
L_08ABC918:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC928;
    }
L_08ABC928:
    ctx.set_gpr(31, 0x08ABC930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC930u) goto L_08ABC930;
    return;
L_08ABC930:
    ctx.set_gpr(31, 0x08ABC938u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABC938:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC940;
    }
L_08ABC940:
    ctx.set_gpr(31, 0x08ABC948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC948u) goto L_08ABC948;
    return;
L_08ABC948:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABC954u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC954u) goto L_08ABC954;
    return;
L_08ABC954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABC964;
    }
L_08ABC964:
    ctx.set_gpr(31, 0x08ABC96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC96Cu) goto L_08ABC96C;
    return;
L_08ABC96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC9A4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ABC9A4u) goto L_08ABC9A4;
    return;
L_08ABC9A4:
    ctx.set_gpr(31, 0x08ABC9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABC9ACu) goto L_08ABC9AC;
    return;
L_08ABC9AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC9BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC9BCu) goto L_08ABC9BC;
    return;
L_08ABC9BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABC9CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC9CCu) goto L_08ABC9CC;
    return;
L_08ABC9CC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2388));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABC9ECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ABC9ECu) goto L_08ABC9EC;
    return;
L_08ABC9EC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2396));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCA0Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA0Cu) goto L_08ABCA0C;
    return;
L_08ABCA0C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2408));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCA2Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA2Cu) goto L_08ABCA2C;
    return;
L_08ABCA2C:
    ctx.set_gpr(31, 0x08ABCA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA34u) goto L_08ABCA34;
    return;
L_08ABCA34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCA40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA40u) goto L_08ABCA40;
    return;
L_08ABCA40:
    ctx.set_gpr(31, 0x08ABCA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA48u) goto L_08ABCA48;
    return;
L_08ABCA48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCA54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA54u) goto L_08ABCA54;
    return;
L_08ABCA54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCA64;
    }
L_08ABCA64:
    ctx.set_gpr(31, 0x08ABCA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA6Cu) goto L_08ABCA6C;
    return;
L_08ABCA6C:
    ctx.set_gpr(31, 0x08ABCA74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABCA74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCA7C;
    }
L_08ABCA7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCA8C;
    }
L_08ABCA8C:
    ctx.set_gpr(31, 0x08ABCA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCA94u) goto L_08ABCA94;
    return;
L_08ABCA94:
    ctx.set_gpr(31, 0x08ABCA9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCA9Cu) goto L_08ABCA9C;
    return;
L_08ABCA9C:
    ctx.set_gpr(31, 0x08ABCAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCAA4u) goto L_08ABCAA4;
    return;
L_08ABCAA4:
    ctx.set_gpr(31, 0x08ABCAACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCD84;
L_08ABCAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABCB74;
      }
      goto L_08ABCAB8;
    }
L_08ABCAB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABCACC;
      }
      goto L_08ABCAC4;
    }
L_08ABCAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCACC;
    }
L_08ABCACC:
    ctx.set_gpr(31, 0x08ABCAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCAD4u) goto L_08ABCAD4;
    return;
L_08ABCAD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCAE4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCAE4u) goto L_08ABCAE4;
    return;
L_08ABCAE4:
    ctx.set_gpr(31, 0x08ABCAECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08ABCAECu) goto L_08ABCAEC;
    return;
L_08ABCAEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABCB54;
      }
      goto L_08ABCAF8;
    }
L_08ABCAF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABCB34;
      }
      goto L_08ABCB04;
    }
L_08ABCB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCB14;
      }
      goto L_08ABCB0C;
    }
L_08ABCB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCB14;
    }
L_08ABCB14:
    ctx.set_gpr(31, 0x08ABCB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB1Cu) goto L_08ABCB1C;
    return;
L_08ABCB1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCB28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB28u) goto L_08ABCB28;
    return;
L_08ABCB28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCB34;
    }
L_08ABCB34:
    ctx.set_gpr(31, 0x08ABCB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB3Cu) goto L_08ABCB3C;
    return;
L_08ABCB3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCB48u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB48u) goto L_08ABCB48;
    return;
L_08ABCB48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCB54;
    }
L_08ABCB54:
    ctx.set_gpr(31, 0x08ABCB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB5Cu) goto L_08ABCB5C;
    return;
L_08ABCB5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCB68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB68u) goto L_08ABCB68;
    return;
L_08ABCB68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCB74;
    }
L_08ABCB74:
    ctx.set_gpr(31, 0x08ABCB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB7Cu) goto L_08ABCB7C;
    return;
L_08ABCB7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCB88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB88u) goto L_08ABCB88;
    return;
L_08ABCB88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCB94;
    }
L_08ABCB94:
    ctx.set_gpr(31, 0x08ABCB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCB9Cu) goto L_08ABCB9C;
    return;
L_08ABCB9C:
    ctx.set_gpr(31, 0x08ABCBA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABCBA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCBAC;
    }
L_08ABCBAC:
    ctx.set_gpr(31, 0x08ABCBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCBB4u) goto L_08ABCBB4;
    return;
L_08ABCBB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCBC0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCBC0u) goto L_08ABCBC0;
    return;
L_08ABCBC0:
    ctx.set_gpr(31, 0x08ABCBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCBC8u) goto L_08ABCBC8;
    return;
L_08ABCBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCBD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08ABCBD4u) goto L_08ABCBD4;
    return;
L_08ABCBD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCBE0;
    }
L_08ABCBE0:
    ctx.set_gpr(31, 0x08ABCBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCBE8u) goto L_08ABCBE8;
    return;
L_08ABCBE8:
    ctx.set_gpr(31, 0x08ABCBF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABCBF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCBF8;
    }
L_08ABCBF8:
    ctx.set_gpr(31, 0x08ABCC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC00u) goto L_08ABCC00;
    return;
L_08ABCC00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCC0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCC0Cu) goto L_08ABCC0C;
    return;
L_08ABCC0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCC1C;
    }
L_08ABCC1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCC38;
      }
      goto L_08ABCC28;
    }
L_08ABCC28:
    ctx.set_gpr(31, 0x08ABCC30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCC30u) goto L_08ABCC30;
    return;
L_08ABCC30:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11604), 0u);
    goto L_08ABCC38;
L_08ABCC38:
    ctx.set_gpr(31, 0x08ABCC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABCC40u) goto L_08ABCC40;
    return;
L_08ABCC40:
    ctx.set_gpr(31, 0x08ABCC48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC48u) goto L_08ABCC48;
    return;
L_08ABCC48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ABCC54u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC54u) goto L_08ABCC54;
    return;
L_08ABCC54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCC68;
      }
      goto L_08ABCC5C;
    }
L_08ABCC5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCC68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC68u) goto L_08ABCC68;
    return;
L_08ABCC68:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11604), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCC80u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC80u) goto L_08ABCC80;
    return;
L_08ABCC80:
    ctx.set_gpr(31, 0x08ABCC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABCC88u) goto L_08ABCC88;
    return;
L_08ABCC88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCCA0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08ABCCA0u) goto L_08ABCCA0;
    return;
L_08ABCCA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCCB0;
    }
L_08ABCCB0:
    ctx.set_gpr(31, 0x08ABCCB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11604)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ABCCB8u) goto L_08ABCCB8;
    return;
L_08ABCCB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCCC0;
    }
L_08ABCCC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCCE0;
      }
      goto L_08ABCCD0;
    }
L_08ABCCD0:
    ctx.set_gpr(31, 0x08ABCCD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCCD8u) goto L_08ABCCD8;
    return;
L_08ABCCD8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11604), 0u);
    goto L_08ABCCE0;
L_08ABCCE0:
    ctx.set_gpr(31, 0x08ABCCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABCCE8u) goto L_08ABCCE8;
    return;
L_08ABCCE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCD00u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08ABCD00u) goto L_08ABCD00;
    return;
L_08ABCD00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCD0C;
    }
L_08ABCD0C:
    ctx.set_gpr(31, 0x08ABCD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCD14u) goto L_08ABCD14;
    return;
L_08ABCD14:
    ctx.set_gpr(31, 0x08ABCD1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABCD1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCD24;
    }
L_08ABCD24:
    ctx.set_gpr(31, 0x08ABCD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCD2Cu) goto L_08ABCD2C;
    return;
L_08ABCD2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABCD38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCD38u) goto L_08ABCD38;
    return;
L_08ABCD38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABCD6C;
      }
      goto L_08ABCD48;
    }
L_08ABCD48:
    ctx.set_gpr(31, 0x08ABCD50u);
    // nop
    goto L_08ABC5B4;
L_08ABCD50:
    ctx.set_gpr(31, 0x08ABCD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABCD58u) goto L_08ABCD58;
    return;
L_08ABCD58:
    ctx.set_gpr(31, 0x08ABCD60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 99u, 0x08AFC77Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCD60u) goto L_08ABCD60;
    return;
L_08ABCD60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABCD70;
      }
      goto L_08ABCD6C;
    }
L_08ABCD6C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ABCD70;
L_08ABCD70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCD84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem); return;
L_08ABCDA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem); return;
L_08ABCDCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCDECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABCDECu) goto L_08ABCDEC;
    return;
L_08ABCDEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABCDF8u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08ABCE30;
L_08ABCDF8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
        goto L_08ABCE08;
    }
    goto L_08ABCE00;
L_08ABCE00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE08;
    }
L_08ABCE08:
    ctx.set_gpr(31, 0x08ABCE10u);
    // nop
    ctx.pc = 0x08B0DFF4u;
    return;
L_08ABCE10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABCE20;
    }
    goto L_08ABCE18;
L_08ABCE18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE20;
    }
L_08ABCE20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCE30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08ABCE5Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABCE5Cu) goto L_08ABCE5C;
    return;
L_08ABCE5C:
    ctx.set_gpr(31, 0x08ABCE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08ABCE64u) goto L_08ABCE64;
    return;
L_08ABCE64:
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08ABCE7Cu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2420));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 87u, 0x08840464u>(ctx, &aot_mem) && ctx.pc == 0x08ABCE7Cu) goto L_08ABCE7C;
    return;
L_08ABCE7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
        goto L_08ABCE94;
    }
    goto L_08ABCE8C;
L_08ABCE8C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
        goto L_08ABCE94;
    }
    goto L_08ABCE94;
L_08ABCE94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABCEA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABCEA4u) goto L_08ABCEA4;
    return;
L_08ABCEA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(928));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08ABCEECu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.pc = 0x08B0DF14u;
    return;
L_08ABCEEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2448));
    ctx.set_gpr(31, 0x08ABCF2Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF2Cu) goto L_08ABCF2C;
    return;
L_08ABCF2C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2364)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ABCF44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF44u) goto L_08ABCF44;
    return;
L_08ABCF44:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(295), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ABCF60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF60u) goto L_08ABCF60;
    return;
L_08ABCF60:
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(431), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(432), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(440));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08ABCF84u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(436), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF84u) goto L_08ABCF84;
    return;
L_08ABCF84:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2460));
    ctx.set_gpr(31, 0x08ABCF94u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(503), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF94u) goto L_08ABCF94;
    return;
L_08ABCF94:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2724));
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(508), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(512));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2520));
    ctx.set_gpr(31, 0x08ABCFB4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABCFB4u) goto L_08ABCFB4;
    return;
L_08ABCFB4:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2520));
    ctx.set_gpr(31, 0x08ABCFC4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(575), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABCFC4u) goto L_08ABCFC4;
    return;
L_08ABCFC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 24158u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(580), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(250));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(592), ctx.gpr[2]);
    ctx.set_gpr(2, 65365u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 21984u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(596), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(604), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(612), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(616), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(620), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(624), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(632), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.set_gpr(2, 32896u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | 32831u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(656), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(664), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2580));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(668));
    ctx.set_gpr(31, 0x08ABD070u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABD070u) goto L_08ABD070;
    return;
L_08ABD070:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(668));
    ctx.set_gpr(31, 0x08ABD07Cu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(923), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABD07Cu) goto L_08ABD07C;
    return;
L_08ABD07C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(924), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ABD0C8;
    }
    goto L_08ABD0B8;
L_08ABD0B8:
    ctx.set_gpr(31, 0x08ABD0C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABD0C0u) goto L_08ABD0C0;
    return;
L_08ABD0C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ABD0C8;
L_08ABD0C8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABD0D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABD0D4u) goto L_08ABD0D4;
    return;
L_08ABD0D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD0E4:
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD13C;
      }
      goto L_08ABD114;
    }
L_08ABD114:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2640)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2644)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2648)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD13C;
    }
L_08ABD13C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08ABD170;
    }
    goto L_08ABD148;
L_08ABD148:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2652)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2656)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2660)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD170;
    }
L_08ABD170:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08ABD1A0;
    }
    goto L_08ABD178;
L_08ABD178:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2664)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2668)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2672)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD1A0;
    }
L_08ABD1A0:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08ABD1D0;
    }
    goto L_08ABD1A8;
L_08ABD1A8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2680)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2684)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD1D0;
    }
L_08ABD1D0:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
        goto L_08ABD200;
    }
    goto L_08ABD1D8;
L_08ABD1D8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2688)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2692)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2696)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD200;
    }
L_08ABD200:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
        goto L_08ABD230;
    }
    goto L_08ABD208;
L_08ABD208:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2700)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2704)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2708)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD230;
    }
L_08ABD230:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
        goto L_08ABD260;
    }
    goto L_08ABD238;
L_08ABD238:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2712)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2716)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2720)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD260;
    }
L_08ABD260:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
        goto L_08ABD290;
    }
    goto L_08ABD268;
L_08ABD268:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2724)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2728)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2732)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD290;
    }
L_08ABD290:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
        goto L_08ABD2C0;
    }
    goto L_08ABD298;
L_08ABD298:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2736)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2740)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2744)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD2C0;
    }
L_08ABD2C0:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
        goto L_08ABD2F0;
    }
    goto L_08ABD2C8;
L_08ABD2C8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2748)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2752)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2756)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD2F0;
    }
L_08ABD2F0:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
        goto L_08ABD320;
    }
    goto L_08ABD2F8;
L_08ABD2F8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2760)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2764)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2768)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD320;
    }
L_08ABD320:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
        goto L_08ABD350;
    }
    goto L_08ABD328;
L_08ABD328:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2772)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2776)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2780)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD350;
    }
L_08ABD350:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
        goto L_08ABD380;
    }
    goto L_08ABD358;
L_08ABD358:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2784)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2788)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2792)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABD3AC;
      }
      goto L_08ABD380;
    }
L_08ABD380:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABD3B0;
    }
    goto L_08ABD388;
L_08ABD388:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2796)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2800)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2804)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ABD3AC;
L_08ABD3AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD3B0;
L_08ABD3B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABD3D8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08ABD3D8u) goto L_08ABD3D8;
    return;
L_08ABD3D8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABD3F0;
    }
    goto L_08ABD3E0;
L_08ABD3E0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABD3F0u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08ABD3F0u) goto L_08ABD3F0;
    return;
L_08ABD3F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD404:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23300));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABD444u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD444u) goto L_08ABD444;
    return;
L_08ABD444:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD454u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 10u, 0x08AB4178u>(ctx, &aot_mem) && ctx.pc == 0x08ABD454u) goto L_08ABD454;
    return;
L_08ABD454:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABD468;
    }
    goto L_08ABD460;
L_08ABD460:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABD4AC;
      }
      goto L_08ABD468;
    }
L_08ABD468:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABD474u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABD474u) goto L_08ABD474;
    return;
L_08ABD474:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD480u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 16u, 0x08AB41C4u>(ctx, &aot_mem) && ctx.pc == 0x08ABD480u) goto L_08ABD480;
    return;
L_08ABD480:
    ctx.set_gpr(31, 0x08ABD488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABD488u) goto L_08ABD488;
    return;
L_08ABD488:
    ctx.set_gpr(31, 0x08ABD490u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 915u, 0x08AAB1F0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD490u) goto L_08ABD490;
    return;
L_08ABD490:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABD4AC;
    }
    goto L_08ABD49C;
L_08ABD49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD4A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABD4A8u) goto L_08ABD4A8;
    return;
L_08ABD4A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD4AC;
L_08ABD4AC:
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
L_08ABD4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABD504;
      }
      goto L_08ABD4E0;
    }
L_08ABD4E0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABD4F0;
    }
    goto L_08ABD4E8;
L_08ABD4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABD524;
      }
      goto L_08ABD4F0;
    }
L_08ABD4F0:
    ctx.set_gpr(31, 0x08ABD4F8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABD4F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD504;
L_08ABD504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD510u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD53C;
L_08ABD510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2216u << 16u);
    ctx.set_gpr(31, 0x08ABD520u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17036));
    goto L_08ABD534;
L_08ABD520:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABD524;
L_08ABD524:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD534:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD53C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD544:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 122u, 0x08B0C67Cu>(ctx, &aot_mem); return;
L_08ABD554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6824));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABD598u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD598u) goto L_08ABD598;
    return;
L_08ABD598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABD5D0;
      }
      goto L_08ABD5AC;
    }
L_08ABD5AC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABD5BC;
    }
    goto L_08ABD5B4;
L_08ABD5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABD618;
      }
      goto L_08ABD5BC;
    }
L_08ABD5BC:
    ctx.set_gpr(31, 0x08ABD5C4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABD5C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD5D0;
L_08ABD5D0:
    ctx.set_gpr(31, 0x08ABD5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08ABD5D8u) goto L_08ABD5D8;
    return;
L_08ABD5D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD5E4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ABF8A0;
L_08ABD5E4:
    ctx.set_gpr(31, 0x08ABD5ECu);
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABD5ECu) goto L_08ABD5EC;
    return;
L_08ABD5EC:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABD5FC;
    }
    goto L_08ABD5F4;
L_08ABD5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABD618;
      }
      goto L_08ABD5FC;
    }
L_08ABD5FC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ABD608u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABD608u) goto L_08ABD608;
    return;
L_08ABD608:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD614u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ABFA14;
L_08ABD614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD618;
L_08ABD618:
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
L_08ABD634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABD674;
      }
      goto L_08ABD650;
    }
L_08ABD650:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABD660;
    }
    goto L_08ABD658;
L_08ABD658:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABD694;
      }
      goto L_08ABD660;
    }
L_08ABD660:
    ctx.set_gpr(31, 0x08ABD668u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABD668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD674;
L_08ABD674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD680u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD53C;
L_08ABD680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2182u << 16u);
    ctx.set_gpr(31, 0x08ABD690u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22964));
    goto L_08ABD534;
L_08ABD690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABD694;
L_08ABD694:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD6A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6796));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABD6E8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD6E8u) goto L_08ABD6E8;
    return;
L_08ABD6E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABD710;
      }
      goto L_08ABD6FC;
    }
L_08ABD6FC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08ABD70C;
    }
    goto L_08ABD704;
L_08ABD704:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABD758;
      }
      goto L_08ABD70C;
    }
L_08ABD70C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD710;
L_08ABD710:
    ctx.set_gpr(31, 0x08ABD718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08ABD718u) goto L_08ABD718;
    return;
L_08ABD718:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD724u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 248u, 0x08AC10D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABD724u) goto L_08ABD724;
    return;
L_08ABD724:
    ctx.set_gpr(31, 0x08ABD72Cu);
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABD72Cu) goto L_08ABD72C;
    return;
L_08ABD72C:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABD73C;
    }
    goto L_08ABD734;
L_08ABD734:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABD758;
      }
      goto L_08ABD73C;
    }
L_08ABD73C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABD748u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABD748u) goto L_08ABD748;
    return;
L_08ABD748:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD754u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 275u, 0x08AC1224u>(ctx, &aot_mem) && ctx.pc == 0x08ABD754u) goto L_08ABD754;
    return;
L_08ABD754:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD758;
L_08ABD758:
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
L_08ABD774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABD7B4;
      }
      goto L_08ABD790;
    }
L_08ABD790:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABD7A0;
    }
    goto L_08ABD798;
L_08ABD798:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABD7D4;
      }
      goto L_08ABD7A0;
    }
L_08ABD7A0:
    ctx.set_gpr(31, 0x08ABD7A8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABD7A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD7B4;
L_08ABD7B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD7C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD53C;
L_08ABD7C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2224u << 16u);
    ctx.set_gpr(31, 0x08ABD7D0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26972));
    goto L_08ABD534;
L_08ABD7D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABD7D4;
L_08ABD7D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD7E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABD8B0;
      }
      goto L_08ABD800;
    }
L_08ABD800:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABD894;
    }
    goto L_08ABD80C;
L_08ABD80C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD81C;
      }
      goto L_08ABD814;
    }
L_08ABD814:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABD910;
      }
      goto L_08ABD81C;
    }
L_08ABD81C:
    ctx.set_gpr(31, 0x08ABD824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABD824u) goto L_08ABD824;
    return;
L_08ABD824:
    ctx.set_gpr(31, 0x08ABD82Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ABD82Cu) goto L_08ABD82C;
    return;
L_08ABD82C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ABD838u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD838u) goto L_08ABD838;
    return;
L_08ABD838:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
        goto L_08ABD850;
    }
    goto L_08ABD840;
L_08ABD840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABD84Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ABD84Cu) goto L_08ABD84C;
    return;
L_08ABD84C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08ABD850;
L_08ABD850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ABD868u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABD868u) goto L_08ABD868;
    return;
L_08ABD868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08ABD878u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD928;
L_08ABD878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD884u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD920;
L_08ABD884:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABD894;
L_08ABD894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08ABD8A4u);
    ctx.set_gpr(6, 0u | 60696u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ABD8A4u) goto L_08ABD8A4;
    return;
L_08ABD8A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD8B0;
L_08ABD8B0:
    ctx.set_gpr(31, 0x08ABD8B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ABD8B8u) goto L_08ABD8B8;
    return;
L_08ABD8B8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD90C;
      }
      goto L_08ABD8C4;
    }
L_08ABD8C4:
    ctx.set_gpr(31, 0x08ABD8CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABD8CCu) goto L_08ABD8CC;
    return;
L_08ABD8CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABD8E8;
    }
    goto L_08ABD8D8;
L_08ABD8D8:
    ctx.set_gpr(31, 0x08ABD8E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABD8E0u) goto L_08ABD8E0;
    return;
L_08ABD8E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABD8E8;
L_08ABD8E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABD8F8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08ABD8F8u) goto L_08ABD8F8;
    return;
L_08ABD8F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABD904u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD0E4;
L_08ABD904:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABD910;
      }
      goto L_08ABD90C;
    }
L_08ABD90C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ABD910;
L_08ABD910:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD920:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 667u, 0x08AAA4C8u>(ctx, &aot_mem); return;
L_08ABD928:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 122u, 0x08B0C67Cu>(ctx, &aot_mem); return;
L_08ABD930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABD9F8;
      }
      goto L_08ABD94C;
    }
L_08ABD94C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08ABD9E0;
    }
    goto L_08ABD958;
L_08ABD958:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD968;
      }
      goto L_08ABD960;
    }
L_08ABD960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDA58;
      }
      goto L_08ABD968;
    }
L_08ABD968:
    ctx.set_gpr(31, 0x08ABD970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABD970u) goto L_08ABD970;
    return;
L_08ABD970:
    ctx.set_gpr(31, 0x08ABD978u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ABD978u) goto L_08ABD978;
    return;
L_08ABD978:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ABD984u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABD984u) goto L_08ABD984;
    return;
L_08ABD984:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
        goto L_08ABD99C;
    }
    goto L_08ABD98C;
L_08ABD98C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABD998u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ABD998u) goto L_08ABD998;
    return;
L_08ABD998:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08ABD99C;
L_08ABD99C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ABD9B4u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABD9B4u) goto L_08ABD9B4;
    return;
L_08ABD9B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08ABD9C4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD928;
L_08ABD9C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABD9D0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD920;
L_08ABD9D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08ABD9E0;
L_08ABD9E0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABD9ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ABD9ECu) goto L_08ABD9EC;
    return;
L_08ABD9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABD9F8;
L_08ABD9F8:
    ctx.set_gpr(31, 0x08ABDA00u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ABDA00u) goto L_08ABDA00;
    return;
L_08ABDA00:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABDA54;
      }
      goto L_08ABDA0C;
    }
L_08ABDA0C:
    ctx.set_gpr(31, 0x08ABDA14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABDA14u) goto L_08ABDA14;
    return;
L_08ABDA14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABDA30;
    }
    goto L_08ABDA20;
L_08ABDA20:
    ctx.set_gpr(31, 0x08ABDA28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABDA28u) goto L_08ABDA28;
    return;
L_08ABDA28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABDA30;
L_08ABDA30:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABDA40u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08ABDA40u) goto L_08ABDA40;
    return;
L_08ABDA40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDA4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD0E4;
L_08ABDA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABDA58;
      }
      goto L_08ABDA54;
    }
L_08ABDA54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ABDA58;
L_08ABDA58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23356));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABDAA8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDAA8u) goto L_08ABDAA8;
    return;
L_08ABDAA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDAB8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 277u, 0x08AB5440u>(ctx, &aot_mem) && ctx.pc == 0x08ABDAB8u) goto L_08ABDAB8;
    return;
L_08ABDAB8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDACC;
    }
    goto L_08ABDAC4;
L_08ABDAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDAE8;
      }
      goto L_08ABDACC;
    }
L_08ABDACC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ABDAD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABDAD8u) goto L_08ABDAD8;
    return;
L_08ABDAD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDAE4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 278u, 0x08AB5448u>(ctx, &aot_mem) && ctx.pc == 0x08ABDAE4u) goto L_08ABDAE4;
    return;
L_08ABDAE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDAE8;
L_08ABDAE8:
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
L_08ABDB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABDB40;
      }
      goto L_08ABDB1C;
    }
L_08ABDB1C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABDB2C;
    }
    goto L_08ABDB24;
L_08ABDB24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDB60;
      }
      goto L_08ABDB2C;
    }
L_08ABDB2C:
    ctx.set_gpr(31, 0x08ABDB34u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABDB34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABDB40;
L_08ABDB40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABDB4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABD53C;
L_08ABDB4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2186u << 16u);
    ctx.set_gpr(31, 0x08ABDB5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20396));
    goto L_08ABD534;
L_08ABDB5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABDB60;
L_08ABDB60:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6768));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABDBB0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDBB0u) goto L_08ABDBB0;
    return;
L_08ABDBB0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ABDBF8;
    }
    goto L_08ABDBC4;
L_08ABDBC4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDBD4;
    }
    goto L_08ABDBCC;
L_08ABDBCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABDC30;
      }
      goto L_08ABDBD4;
    }
L_08ABDBD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08ABDBEC;
    }
    goto L_08ABDBE0;
L_08ABDBE0:
    ctx.set_gpr(31, 0x08ABDBE8u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    goto L_08ABD544;
L_08ABDBE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08ABDBEC;
L_08ABDBEC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABDBF8;
L_08ABDBF8:
    ctx.set_gpr(31, 0x08ABDC00u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 352u, 0x08B09B28u>(ctx, &aot_mem) && ctx.pc == 0x08ABDC00u) goto L_08ABDC00;
    return;
L_08ABDC00:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDC14;
    }
    goto L_08ABDC0C;
L_08ABDC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDC30;
      }
      goto L_08ABDC14;
    }
L_08ABDC14:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ABDC20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABDC20u) goto L_08ABDC20;
    return;
L_08ABDC20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDC2Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 388u, 0x08B09D24u>(ctx, &aot_mem) && ctx.pc == 0x08ABDC2Cu) goto L_08ABDC2C;
    return;
L_08ABDC2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDC30;
L_08ABDC30:
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
L_08ABDC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6740));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABDC88u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDC88u) goto L_08ABDC88;
    return;
L_08ABDC88:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDC98u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 540u, 0x08AC256Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABDC98u) goto L_08ABDC98;
    return;
L_08ABDC98:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDCAC;
    }
    goto L_08ABDCA4;
L_08ABDCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDCC8;
      }
      goto L_08ABDCAC;
    }
L_08ABDCAC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08ABDCB8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABDCB8u) goto L_08ABDCB8;
    return;
L_08ABDCB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDCC4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 552u, 0x08AC2610u>(ctx, &aot_mem) && ctx.pc == 0x08ABDCC4u) goto L_08ABDCC4;
    return;
L_08ABDCC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDCC8;
L_08ABDCC8:
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
L_08ABDCE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6712));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABDD20u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDD20u) goto L_08ABDD20;
    return;
L_08ABDD20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDD30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 870u, 0x08AC3954u>(ctx, &aot_mem) && ctx.pc == 0x08ABDD30u) goto L_08ABDD30;
    return;
L_08ABDD30:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDD44;
    }
    goto L_08ABDD3C;
L_08ABDD3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDD60;
      }
      goto L_08ABDD44;
    }
L_08ABDD44:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08ABDD50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABDD50u) goto L_08ABDD50;
    return;
L_08ABDD50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDD5Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 872u, 0x08AC3984u>(ctx, &aot_mem) && ctx.pc == 0x08ABDD5Cu) goto L_08ABDD5C;
    return;
L_08ABDD5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDD60;
L_08ABDD60:
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
L_08ABDD78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6684));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08ABDDB8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDDB8u) goto L_08ABDDB8;
    return;
L_08ABDDB8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDDC8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 625u, 0x08B0AC48u>(ctx, &aot_mem) && ctx.pc == 0x08ABDDC8u) goto L_08ABDDC8;
    return;
L_08ABDDC8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ABDDDC;
    }
    goto L_08ABDDD4;
L_08ABDDD4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDE1C;
      }
      goto L_08ABDDDC;
    }
L_08ABDDDC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08ABDDE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08ABDDE8u) goto L_08ABDDE8;
    return;
L_08ABDDE8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABDDF4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 627u, 0x08B0AC78u>(ctx, &aot_mem) && ctx.pc == 0x08ABDDF4u) goto L_08ABDDF4;
    return;
L_08ABDDF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08ABDE04u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 242u, 0x08AAD0C4u>(ctx, &aot_mem) && ctx.pc == 0x08ABDE04u) goto L_08ABDE04;
    return;
L_08ABDE04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08ABDE18u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 654u, 0x08B0ADBCu>(ctx, &aot_mem) && ctx.pc == 0x08ABDE18u) goto L_08ABDE18;
    return;
L_08ABDE18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDE1C;
L_08ABDE1C:
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
L_08ABDE34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABDE8C;
      }
      goto L_08ABDE50;
    }
L_08ABDE50:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6888));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABDE6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABDE6Cu) goto L_08ABDE6C;
    return;
L_08ABDE6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABDE78u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08ABDE78u) goto L_08ABDE78;
    return;
L_08ABDE78:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ABDE90;
    }
    goto L_08ABDE84;
L_08ABDE84:
    ctx.set_gpr(31, 0x08ABDE8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ABDEA4;
L_08ABDE8C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ABDE90;
L_08ABDE90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDEA4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08ABDEAC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDEB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABDED8;
      }
      goto L_08ABDED0;
    }
L_08ABDED0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABDF38;
      }
      goto L_08ABDED8;
    }
L_08ABDED8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08ABDEDC;
L_08ABDEDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABDEECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABDEECu) goto L_08ABDEEC;
    return;
L_08ABDEEC:
    ctx.set_gpr(31, 0x08ABDEF4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDEF4u) goto L_08ABDEF4;
    return;
L_08ABDEF4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABDF08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABDF08u) goto L_08ABDF08;
    return;
L_08ABDF08:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_08ABDF18;
    }
    goto L_08ABDF10;
L_08ABDF10:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABDF38;
      }
      goto L_08ABDF18;
    }
L_08ABDF18:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_08ABDEDC;
    }
    goto L_08ABDF30;
L_08ABDF30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABDF38;
L_08ABDF38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDF4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABDF5C;
L_08ABDF5C:
    ctx.set_gpr(31, 0x08ABDF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDF64u) goto L_08ABDF64;
    return;
L_08ABDF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABDF78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABDF78u) goto L_08ABDF78;
    return;
L_08ABDF78:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABDF5C;
      }
      goto L_08ABDF88;
    }
L_08ABDF88:
    ctx.set_gpr(31, 0x08ABDF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDF90u) goto L_08ABDF90;
    return;
L_08ABDF90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABDFA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABDFA4u) goto L_08ABDFA4;
    return;
L_08ABDFA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDFB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ABDFC8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08ABDFE8;
L_08ABDFC8:
    ctx.set_gpr(31, 0x08ABDFD0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABE014;
L_08ABDFD0:
    ctx.set_gpr(31, 0x08ABDFD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 998u, 0x08AAB938u>(ctx, &aot_mem) && ctx.pc == 0x08ABDFD8u) goto L_08ABDFD8;
    return;
L_08ABDFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ABDFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABDFF8u) goto L_08ABDFF8;
    return;
L_08ABDFF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ABE008u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08ABE008u) goto L_08ABE008;
    return;
L_08ABE008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ABE060;
      }
      goto L_08ABE034;
    }
L_08ABE034:
    ctx.set_gpr(31, 0x08ABE03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE03Cu) goto L_08ABE03C;
    return;
L_08ABE03C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ABE04Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE04Cu) goto L_08ABE04C;
    return;
L_08ABE04C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE034;
      }
      goto L_08ABE060;
    }
L_08ABE060:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    goto L_08ABE098;
L_08ABE098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08ABE108;
      }
      goto L_08ABE0A4;
    }
L_08ABE0A4:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ABE0B8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ABE0B8u) goto L_08ABE0B8;
    return;
L_08ABE0B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2964));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABE0D8u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ABE0D8u) goto L_08ABE0D8;
    return;
L_08ABE0D8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ABE0F0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ABE0F0u) goto L_08ABE0F0;
    return;
L_08ABE0F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ABE108u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2964));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ABE108u) goto L_08ABE108;
    return;
L_08ABE108:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABE098;
      }
      goto L_08ABE118;
    }
L_08ABE118:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ABE130u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ABE130u) goto L_08ABE130;
    return;
L_08ABE130:
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
L_08ABE150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) || ctx.fpr[0] <= ctx.fpr[12]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABE17C;
      }
      goto L_08ABE170;
    }
L_08ABE170:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08ABE17C;
L_08ABE17C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08ABE198;
    }
    goto L_08ABE190;
L_08ABE190:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ABE198;
L_08ABE198:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_08ABE1D0;
    }
    goto L_08ABE1AC;
L_08ABE1AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABE1C0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABE1C0u) goto L_08ABE1C0;
    return;
L_08ABE1C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABE1F0;
    }
    goto L_08ABE1CC;
L_08ABE1CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08ABE1D0;
L_08ABE1D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABE1E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABE1E0u) goto L_08ABE1E0;
    return;
L_08ABE1E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABE1ECu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08ABF07C;
L_08ABE1EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABE1F0;
L_08ABE1F0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE1FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ABE218u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE218u) goto L_08ABE218;
    return;
L_08ABE218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABE22Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE22Cu) goto L_08ABE22C;
    return;
L_08ABE22C:
    ctx.set_gpr(31, 0x08ABE234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE234u) goto L_08ABE234;
    return;
L_08ABE234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ABE248u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE248u) goto L_08ABE248;
    return;
L_08ABE248:
    ctx.set_gpr(31, 0x08ABE250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE250u) goto L_08ABE250;
    return;
L_08ABE250:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABE264u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE264u) goto L_08ABE264;
    return;
L_08ABE264:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE294;
      }
      goto L_08ABE270;
    }
L_08ABE270:
    ctx.set_gpr(31, 0x08ABE278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE278u) goto L_08ABE278;
    return;
L_08ABE278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ABE28Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE28Cu) goto L_08ABE28C;
    return;
L_08ABE28C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ABE2B4;
      }
      goto L_08ABE294;
    }
L_08ABE294:
    ctx.set_gpr(31, 0x08ABE29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE29Cu) goto L_08ABE29C;
    return;
L_08ABE29C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABE2B0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE2B0u) goto L_08ABE2B0;
    return;
L_08ABE2B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08ABE2B4;
L_08ABE2B4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABE2C8u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABE2C8u) goto L_08ABE2C8;
    return;
L_08ABE2C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE2DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(31, 0x08ABE30Cu);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    goto L_08ABDFE8;
L_08ABE30C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(13)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08ABE3D8;
    }
    goto L_08ABE318;
L_08ABE318:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2972)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2992)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2996)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3000)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3004)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3008)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABE378u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABE378u) goto L_08ABE378;
    return;
L_08ABE378:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABE394u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABE394u) goto L_08ABE394;
    return;
L_08ABE394:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2968)));
    ctx.set_gpr(31, 0x08ABE3A8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE3A8u) goto L_08ABE3A8;
    return;
L_08ABE3A8:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABE3D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ABE3D4u) goto L_08ABE3D4;
    return;
L_08ABE3D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08ABE3D8;
L_08ABE3D8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABE41Cu);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE41Cu) goto L_08ABE41C;
    return;
L_08ABE41C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ABE430u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE430u) goto L_08ABE430;
    return;
L_08ABE430:
    ctx.set_gpr(31, 0x08ABE438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE438u) goto L_08ABE438;
    return;
L_08ABE438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ABE44Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE44Cu) goto L_08ABE44C;
    return;
L_08ABE44C:
    ctx.set_gpr(31, 0x08ABE454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE454u) goto L_08ABE454;
    return;
L_08ABE454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABE468u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE468u) goto L_08ABE468;
    return;
L_08ABE468:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
        goto L_08ABE4D8;
    }
    goto L_08ABE470;
L_08ABE470:
    ctx.set_gpr(31, 0x08ABE478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE478u) goto L_08ABE478;
    return;
L_08ABE478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABE490u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08ABE60C;
L_08ABE490:
    ctx.set_gpr(31, 0x08ABE498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE498u) goto L_08ABE498;
    return;
L_08ABE498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABE4B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABE60C;
L_08ABE4B0:
    ctx.set_gpr(31, 0x08ABE4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE4B8u) goto L_08ABE4B8;
    return;
L_08ABE4B8:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ABE4D0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08ABE60C;
L_08ABE4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ABE5A0;
      }
      goto L_08ABE4D8;
    }
L_08ABE4D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4E8;
    }
L_08ABE4E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABE4FC;
      }
      goto L_08ABE4F4;
    }
L_08ABE4F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4FC;
    }
L_08ABE4FC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABE500;
L_08ABE500:
    ctx.set_gpr(31, 0x08ABE508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE508u) goto L_08ABE508;
    return;
L_08ABE508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABE51Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE51Cu) goto L_08ABE51C;
    return;
L_08ABE51C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE57C;
      }
      goto L_08ABE524;
    }
L_08ABE524:
    ctx.set_gpr(31, 0x08ABE52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE52Cu) goto L_08ABE52C;
    return;
L_08ABE52C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16179u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABE548u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08ABE60C;
L_08ABE548:
    ctx.set_gpr(31, 0x08ABE550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE550u) goto L_08ABE550;
    return;
L_08ABE550:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ABE574u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABE5B8;
L_08ABE574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE59C;
      }
      goto L_08ABE57C;
    }
L_08ABE57C:
    ctx.set_gpr(31, 0x08ABE584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE584u) goto L_08ABE584;
    return;
L_08ABE584:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ABE59Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABE60C;
L_08ABE59C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ABE5A0;
L_08ABE5A0:
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
L_08ABE5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABE604;
    }
    goto L_08ABE5F8;
L_08ABE5F8:
    ctx.set_gpr(31, 0x08ABE600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 407u, 0x08846510u>(ctx, &aot_mem) && ctx.pc == 0x08ABE600u) goto L_08ABE600;
    return;
L_08ABE600:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABE604;
L_08ABE604:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABE658;
    }
    goto L_08ABE64C;
L_08ABE64C:
    ctx.set_gpr(31, 0x08ABE654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x08ABE654u) goto L_08ABE654;
    return;
L_08ABE654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABE658;
L_08ABE658:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ABE688u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08ABE688u) goto L_08ABE688;
    return;
L_08ABE688:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE6B4;
      }
      goto L_08ABE690;
    }
L_08ABE690:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABE69Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABE69Cu) goto L_08ABE69C;
    return;
L_08ABE69C:
    ctx.set_gpr(31, 0x08ABE6A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABE808;
L_08ABE6A4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(375));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(214));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABE6B4;
L_08ABE6B4:
    ctx.set_gpr(31, 0x08ABE6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE6BCu) goto L_08ABE6BC;
    return;
L_08ABE6BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08ABE6D0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE6D0u) goto L_08ABE6D0;
    return;
L_08ABE6D0:
    ctx.set_gpr(31, 0x08ABE6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE6D8u) goto L_08ABE6D8;
    return;
L_08ABE6D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08ABE6ECu);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE6ECu) goto L_08ABE6EC;
    return;
L_08ABE6EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE774;
      }
      goto L_08ABE6F4;
    }
L_08ABE6F4:
    ctx.set_gpr(31, 0x08ABE6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE6FCu) goto L_08ABE6FC;
    return;
L_08ABE6FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABE71Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_08ABE7A8;
L_08ABE71C:
    ctx.set_gpr(31, 0x08ABE724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE724u) goto L_08ABE724;
    return;
L_08ABE724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABE750u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ABE750u) goto L_08ABE750;
    return;
L_08ABE750:
    ctx.set_gpr(31, 0x08ABE758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE758u) goto L_08ABE758;
    return;
L_08ABE758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08ABE76Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABE76Cu) goto L_08ABE76C;
    return;
L_08ABE76C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABE794;
      }
      goto L_08ABE774;
    }
L_08ABE774:
    ctx.set_gpr(31, 0x08ABE77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE77Cu) goto L_08ABE77C;
    return;
L_08ABE77C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08ABE790u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABE790u) goto L_08ABE790;
    return;
L_08ABE790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABE794;
L_08ABE794:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABE800;
    }
    goto L_08ABE7E8;
L_08ABE7E8:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08ABE7FCu);
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 430u, 0x08846A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE7FCu) goto L_08ABE7FC;
    return;
L_08ABE7FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABE800;
L_08ABE800:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ABE81Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABE81Cu) goto L_08ABE81C;
    return;
L_08ABE81C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
      if (branch_taken) {
          goto L_08ABE82C;
      }
      goto L_08ABE824;
    }
L_08ABE824:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08ABE82C;
L_08ABE82C:
    ctx.set_gpr(3, 0u - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
      if (branch_taken) {
          goto L_08ABE840;
      }
      goto L_08ABE838;
    }
L_08ABE838:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08ABE840;
L_08ABE840:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ABE8DC;
      }
      goto L_08ABE8CC;
    }
L_08ABE8CC:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABE8CC;
      }
      goto L_08ABE8DC;
    }
L_08ABE8DC:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ABE8F8;
      }
      goto L_08ABE8E8;
    }
L_08ABE8E8:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABE8E8;
      }
      goto L_08ABE8F8;
    }
L_08ABE8F8:
    ctx.set_gpr(2, 17232u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3012)));
    ctx.fpr[21] = ctx.fpr[3] + ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3016)));
    ctx.fpr[20] = ctx.fpr[3] + ctx.fpr[2];
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3020)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3024)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3028)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3032)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3036)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3040)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3044)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABEB20;
      }
      goto L_08ABE984;
    }
L_08ABE984:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(124));
    goto L_08ABE9A0;
L_08ABE9A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[26] = ctx.fpr[23] + ctx.fpr[24];
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    ctx.fpr[25] = ctx.fpr[22] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08ABEAAC;
      }
      goto L_08ABE9B8;
    }
L_08ABE9B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABEA40;
      }
      goto L_08ABE9C4;
    }
L_08ABE9C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE9D4;
      }
      goto L_08ABE9CC;
    }
L_08ABE9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABEB14;
      }
      goto L_08ABE9D4;
    }
L_08ABE9D4:
    ctx.set_gpr(31, 0x08ABE9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE9DCu) goto L_08ABE9DC;
    return;
L_08ABE9DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08ABE9F4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABE9F4u) goto L_08ABE9F4;
    return;
L_08ABE9F4:
    ctx.set_gpr(31, 0x08ABE9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABE9FCu) goto L_08ABE9FC;
    return;
L_08ABE9FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08ABEA14u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA14u) goto L_08ABEA14;
    return;
L_08ABEA14:
    ctx.set_gpr(31, 0x08ABEA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA1Cu) goto L_08ABEA1C;
    return;
L_08ABEA1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17232u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEA38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA38u) goto L_08ABEA38;
    return;
L_08ABEA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB10;
      }
      goto L_08ABEA40;
    }
L_08ABEA40:
    ctx.set_gpr(31, 0x08ABEA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA48u) goto L_08ABEA48;
    return;
L_08ABEA48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08ABEA60u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA60u) goto L_08ABEA60;
    return;
L_08ABEA60:
    ctx.set_gpr(31, 0x08ABEA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA68u) goto L_08ABEA68;
    return;
L_08ABEA68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ABEA80u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA80u) goto L_08ABEA80;
    return;
L_08ABEA80:
    ctx.set_gpr(31, 0x08ABEA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEA88u) goto L_08ABEA88;
    return;
L_08ABEA88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17232u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEAA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEAA4u) goto L_08ABEAA4;
    return;
L_08ABEAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB10;
      }
      goto L_08ABEAAC;
    }
L_08ABEAAC:
    ctx.set_gpr(31, 0x08ABEAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEAB4u) goto L_08ABEAB4;
    return;
L_08ABEAB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08ABEACCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEACCu) goto L_08ABEACC;
    return;
L_08ABEACC:
    ctx.set_gpr(31, 0x08ABEAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEAD4u) goto L_08ABEAD4;
    return;
L_08ABEAD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ABEAECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEAECu) goto L_08ABEAEC;
    return;
L_08ABEAEC:
    ctx.set_gpr(31, 0x08ABEAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEAF4u) goto L_08ABEAF4;
    return;
L_08ABEAF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17232u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEB10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ABEB10u) goto L_08ABEB10;
    return;
L_08ABEB10:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ABEB14;
L_08ABEB14:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABE9A0;
      }
      goto L_08ABEB20;
    }
L_08ABEB20:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3048)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3052)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3056)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3060)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3064)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3068)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3072)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3076)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3080)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(88));
    goto L_08ABEBA4;
L_08ABEBA4:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ABEBB0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08ABEBB0u) goto L_08ABEBB0;
    return;
L_08ABEBB0:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08ABEC38;
    }
    goto L_08ABEBB8;
L_08ABEBB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEBC4;
    }
L_08ABEBC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08ABEC08;
    }
    goto L_08ABEBD0;
L_08ABEBD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[19] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
        goto L_08ABEC0C;
    }
    goto L_08ABEBDC;
L_08ABEBDC:
    if (ctx.gpr[19] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
        goto L_08ABEC0C;
    }
    goto L_08ABEBE4;
L_08ABEBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEBEC;
    }
L_08ABEBEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC0C;
      }
      goto L_08ABEBF8;
    }
L_08ABEBF8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC0C;
      }
      goto L_08ABEC04;
    }
L_08ABEC04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08ABEC08;
L_08ABEC08:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABEC0C;
L_08ABEC0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ABEC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABEC18u) goto L_08ABEC18;
    return;
L_08ABEC18:
    ctx.set_gpr(31, 0x08ABEC20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABE808;
L_08ABEC20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(214));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08ABEC34;
L_08ABEC34:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08ABEC38;
L_08ABEC38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABEBA4;
      }
      goto L_08ABEC48;
    }
L_08ABEC48:
    ctx.set_gpr(31, 0x08ABEC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEC50u) goto L_08ABEC50;
    return;
L_08ABEC50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08ABEC64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEC64u) goto L_08ABEC64;
    return;
L_08ABEC64:
    ctx.set_gpr(31, 0x08ABEC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEC6Cu) goto L_08ABEC6C;
    return;
L_08ABEC6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08ABEC80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEC80u) goto L_08ABEC80;
    return;
L_08ABEC80:
    ctx.set_gpr(31, 0x08ABEC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEC88u) goto L_08ABEC88;
    return;
L_08ABEC88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08ABEC9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEC9Cu) goto L_08ABEC9C;
    return;
L_08ABEC9C:
    ctx.set_gpr(31, 0x08ABECA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABECA4u) goto L_08ABECA4;
    return;
L_08ABECA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08ABECB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABECB8u) goto L_08ABECB8;
    return;
L_08ABECB8:
    ctx.set_gpr(31, 0x08ABECC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABECC0u) goto L_08ABECC0;
    return;
L_08ABECC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ABECD4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABECD4u) goto L_08ABECD4;
    return;
L_08ABECD4:
    ctx.set_gpr(31, 0x08ABECDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABECDCu) goto L_08ABECDC;
    return;
L_08ABECDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ABECF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABECF0u) goto L_08ABECF0;
    return;
L_08ABECF0:
    ctx.set_gpr(31, 0x08ABECF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABECF8u) goto L_08ABECF8;
    return;
L_08ABECF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08ABED0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABED0Cu) goto L_08ABED0C;
    return;
L_08ABED0C:
    ctx.set_gpr(31, 0x08ABED14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABED14u) goto L_08ABED14;
    return;
L_08ABED14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ABED28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABED28u) goto L_08ABED28;
    return;
L_08ABED28:
    ctx.set_gpr(31, 0x08ABED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABED30u) goto L_08ABED30;
    return;
L_08ABED30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08ABED44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABED44u) goto L_08ABED44;
    return;
L_08ABED44:
    ctx.set_gpr(31, 0x08ABED4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABED4Cu) goto L_08ABED4C;
    return;
L_08ABED4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08ABED60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABED60u) goto L_08ABED60;
    return;
L_08ABED60:
    ctx.set_gpr(31, 0x08ABED68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABED68u) goto L_08ABED68;
    return;
L_08ABED68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ABED7Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABED7Cu) goto L_08ABED7C;
    return;
L_08ABED7C:
    ctx.set_gpr(31, 0x08ABED84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABED84u) goto L_08ABED84;
    return;
L_08ABED84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ABED98u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABED98u) goto L_08ABED98;
    return;
L_08ABED98:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08ABF034;
    }
    goto L_08ABEDA0;
L_08ABEDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_08ABEDE8;
      }
      goto L_08ABEDBC;
    }
L_08ABEDBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(14));
        goto L_08ABEDDC;
    }
    goto L_08ABEDC8;
L_08ABEDC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEDF8;
      }
      goto L_08ABEDD0;
    }
L_08ABEDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEDF8;
      }
      goto L_08ABEDD8;
    }
L_08ABEDD8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(14));
    goto L_08ABEDDC;
L_08ABEDDC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_08ABEDF8;
      }
      goto L_08ABEDE8;
    }
L_08ABEDE8:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(13));
    goto L_08ABEDF8;
L_08ABEDF8:
    ctx.set_gpr(31, 0x08ABEE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEE00u) goto L_08ABEE00;
    return;
L_08ABEE00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEE14u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEE14u) goto L_08ABEE14;
    return;
L_08ABEE14:
    ctx.set_gpr(31, 0x08ABEE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEE1Cu) goto L_08ABEE1C;
    return;
L_08ABEE1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABEE30u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEE30u) goto L_08ABEE30;
    return;
L_08ABEE30:
    ctx.set_gpr(31, 0x08ABEE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEE38u) goto L_08ABEE38;
    return;
L_08ABEE38:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABEE58u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_08ABE7A8;
L_08ABEE58:
    ctx.set_gpr(31, 0x08ABEE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEE60u) goto L_08ABEE60;
    return;
L_08ABEE60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABEE8Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ABEE8Cu) goto L_08ABEE8C;
    return;
L_08ABEE8C:
    ctx.set_gpr(31, 0x08ABEE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEE94u) goto L_08ABEE94;
    return;
L_08ABEE94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEEA8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08ABEEA8u) goto L_08ABEEA8;
    return;
L_08ABEEA8:
    ctx.set_gpr(31, 0x08ABEEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEEB0u) goto L_08ABEEB0;
    return;
L_08ABEEB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEEC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEEC4u) goto L_08ABEEC4;
    return;
L_08ABEEC4:
    ctx.set_gpr(31, 0x08ABEECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEECCu) goto L_08ABEECC;
    return;
L_08ABEECC:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABEEE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEEE0u) goto L_08ABEEE0;
    return;
L_08ABEEE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF030;
      }
      goto L_08ABEEEC;
    }
L_08ABEEEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABEEF0;
L_08ABEEF0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABEFCC;
      }
      goto L_08ABEEF8;
    }
L_08ABEEF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABEF70;
      }
      goto L_08ABEF04;
    }
L_08ABEF04:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEF14;
      }
      goto L_08ABEF0C;
    }
L_08ABEF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF024;
      }
      goto L_08ABEF14;
    }
L_08ABEF14:
    ctx.set_gpr(31, 0x08ABEF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEF1Cu) goto L_08ABEF1C;
    return;
L_08ABEF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08ABEF30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEF30u) goto L_08ABEF30;
    return;
L_08ABEF30:
    ctx.set_gpr(31, 0x08ABEF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEF38u) goto L_08ABEF38;
    return;
L_08ABEF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08ABEF4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEF4Cu) goto L_08ABEF4C;
    return;
L_08ABEF4C:
    ctx.set_gpr(31, 0x08ABEF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEF54u) goto L_08ABEF54;
    return;
L_08ABEF54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08ABEF68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEF68u) goto L_08ABEF68;
    return;
L_08ABEF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF020;
      }
      goto L_08ABEF70;
    }
L_08ABEF70:
    ctx.set_gpr(31, 0x08ABEF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEF78u) goto L_08ABEF78;
    return;
L_08ABEF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08ABEF8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEF8Cu) goto L_08ABEF8C;
    return;
L_08ABEF8C:
    ctx.set_gpr(31, 0x08ABEF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEF94u) goto L_08ABEF94;
    return;
L_08ABEF94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ABEFA8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEFA8u) goto L_08ABEFA8;
    return;
L_08ABEFA8:
    ctx.set_gpr(31, 0x08ABEFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEFB0u) goto L_08ABEFB0;
    return;
L_08ABEFB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ABEFC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEFC4u) goto L_08ABEFC4;
    return;
L_08ABEFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF020;
      }
      goto L_08ABEFCC;
    }
L_08ABEFCC:
    ctx.set_gpr(31, 0x08ABEFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEFD4u) goto L_08ABEFD4;
    return;
L_08ABEFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08ABEFE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABEFE8u) goto L_08ABEFE8;
    return;
L_08ABEFE8:
    ctx.set_gpr(31, 0x08ABEFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABEFF0u) goto L_08ABEFF0;
    return;
L_08ABEFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ABF004u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF004u) goto L_08ABF004;
    return;
L_08ABF004:
    ctx.set_gpr(31, 0x08ABF00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF00Cu) goto L_08ABF00C;
    return;
L_08ABF00C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08ABF020u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF020u) goto L_08ABF020;
    return;
L_08ABF020:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ABF024;
L_08ABF024:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08ABEEF0;
    }
    goto L_08ABF030;
L_08ABF030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08ABF034;
L_08ABF034:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF07C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF0D4;
      }
      goto L_08ABF09C;
    }
L_08ABF09C:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
        goto L_08ABF100;
    }
    goto L_08ABF0C8;
L_08ABF0C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF0FC;
      }
      goto L_08ABF0D4;
    }
L_08ABF0D4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ABF0FC;
      }
      goto L_08ABF0F4;
    }
L_08ABF0F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABF0FC;
L_08ABF0FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    goto L_08ABF100;
L_08ABF100:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
        goto L_08ABF124;
    }
    goto L_08ABF114;
L_08ABF114:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    goto L_08ABF124;
L_08ABF124:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ABF13C;
L_08ABF13C:
    ctx.set_gpr(31, 0x08ABF144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF144u) goto L_08ABF144;
    return;
L_08ABF144:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABF164u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    goto L_08ABE7A8;
L_08ABF164:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF13C;
      }
      goto L_08ABF174;
    }
L_08ABF174:
    ctx.set_gpr(31, 0x08ABF17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF17Cu) goto L_08ABF17C;
    return;
L_08ABF17C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08ABF19Cu);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    goto L_08ABE7A8;
L_08ABF19C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08ABF1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ABF1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABF1C8u) goto L_08ABF1C8;
    return;
L_08ABF1C8:
    ctx.set_gpr(31, 0x08ABF1D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABE808;
L_08ABF1D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(375));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF1E0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17008u << 16u);
    ctx.set_gpr(2, 17172u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF23C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ABF268u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08ABF268u) goto L_08ABF268;
    return;
L_08ABF268:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, 17008u << 16u);
    ctx.set_gpr(3, 17172u << 16u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[4];
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[4];
    ctx.fpr[20] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
      if (branch_taken) {
          goto L_08ABF2F8;
      }
      goto L_08ABF2A8;
    }
L_08ABF2A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ABF2B0;
L_08ABF2B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08ABF2EC;
    }
    goto L_08ABF2BC;
L_08ABF2BC:
    ctx.set_gpr(31, 0x08ABF2C4u);
    // nop
    goto L_08ABF1B8;
L_08ABF2C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08ABF2EC;
L_08ABF2EC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABF2B0;
      }
      goto L_08ABF2F8;
    }
L_08ABF2F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF318:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08ABF350;
    }
    goto L_08ABF330;
L_08ABF330:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08ABF348;
    }
    goto L_08ABF33C;
L_08ABF33C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABF364;
      }
      goto L_08ABF348;
    }
L_08ABF348:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABF364;
      }
      goto L_08ABF350;
    }
L_08ABF350:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08ABF360;
    }
    goto L_08ABF358;
L_08ABF358:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08ABF364;
      }
      goto L_08ABF360;
    }
L_08ABF360:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08ABF364;
L_08ABF364:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABF4E8;
      }
      goto L_08ABF390;
    }
L_08ABF390:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6676));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF3AC:
    ctx.set_gpr(31, 0x08ABF3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABF3B4u) goto L_08ABF3B4;
    return;
L_08ABF3B4:
    ctx.set_gpr(31, 0x08ABF3BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 404u, 0x08A81290u>(ctx, &aot_mem) && ctx.pc == 0x08ABF3BCu) goto L_08ABF3BC;
    return;
L_08ABF3BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF3C4;
L_08ABF3C4:
    ctx.set_gpr(31, 0x08ABF3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABF3CCu) goto L_08ABF3CC;
    return;
L_08ABF3CC:
    ctx.set_gpr(31, 0x08ABF3D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABF3D4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ABF3E8;
    }
    goto L_08ABF3E0;
L_08ABF3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF3E8;
    }
L_08ABF3E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF3EC;
L_08ABF3EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08ABF40C;
    }
    goto L_08ABF3F8;
L_08ABF3F8:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ABF408u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABE150;
L_08ABF408:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08ABF40C;
L_08ABF40C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF410;
L_08ABF410:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF428;
      }
      goto L_08ABF41C;
    }
L_08ABF41C:
    ctx.set_gpr(31, 0x08ABF424u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08ABF07C;
L_08ABF424:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08ABF428;
L_08ABF428:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08ABF438;
    }
    goto L_08ABF430;
L_08ABF430:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF438;
    }
L_08ABF438:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABF4EC;
    }
    goto L_08ABF440;
L_08ABF440:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABF4E8;
      }
      goto L_08ABF44C;
    }
L_08ABF44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08ABF46C;
    }
    goto L_08ABF458;
L_08ABF458:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ABF468u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ABE150;
L_08ABF468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_08ABF46C;
L_08ABF46C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF470;
L_08ABF470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF488;
      }
      goto L_08ABF47C;
    }
L_08ABF47C:
    ctx.set_gpr(31, 0x08ABF484u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08ABF07C;
L_08ABF484:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08ABF488;
L_08ABF488:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08ABF498;
    }
    goto L_08ABF490;
L_08ABF490:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF498;
    }
L_08ABF498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF4E8;
      }
      goto L_08ABF4A0;
    }
L_08ABF4A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF4A8;
L_08ABF4A8:
    ctx.set_gpr(31, 0x08ABF4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABF4B0u) goto L_08ABF4B0;
    return;
L_08ABF4B0:
    ctx.set_gpr(31, 0x08ABF4B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 393u, 0x08A811E0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF4B8u) goto L_08ABF4B8;
    return;
L_08ABF4B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF4C0;
L_08ABF4C0:
    ctx.set_gpr(31, 0x08ABF4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABF4C8u) goto L_08ABF4C8;
    return;
L_08ABF4C8:
    ctx.set_gpr(31, 0x08ABF4D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABCDA8;
L_08ABF4D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_08ABF4E4;
    }
    goto L_08ABF4DC;
L_08ABF4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF4E4;
    }
L_08ABF4E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08ABF4E8;
L_08ABF4E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABF4EC;
L_08ABF4EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABF51Cu);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABF51Cu) goto L_08ABF51C;
    return;
L_08ABF51C:
    ctx.set_gpr(31, 0x08ABF524u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF524u) goto L_08ABF524;
    return;
L_08ABF524:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3108)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3084)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3088)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3092)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3096)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08ABF61Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABF61Cu) goto L_08ABF61C;
    return;
L_08ABF61C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3156)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08ABF678u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08ABF678u) goto L_08ABF678;
    return;
L_08ABF678:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABF6B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08ABF6B0u) goto L_08ABF6B0;
    return;
L_08ABF6B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-32));
        goto L_08ABF6B8;
    }
    goto L_08ABF6B8;
L_08ABF6B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF6CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ABF6F4u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_08ABE3F4;
L_08ABF6F4:
    ctx.set_gpr(31, 0x08ABF6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF6FCu) goto L_08ABF6FC;
    return;
L_08ABF6FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08ABF710u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF710u) goto L_08ABF710;
    return;
L_08ABF710:
    ctx.set_gpr(31, 0x08ABF718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF718u) goto L_08ABF718;
    return;
L_08ABF718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08ABF72Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF72Cu) goto L_08ABF72C;
    return;
L_08ABF72C:
    ctx.set_gpr(31, 0x08ABF734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF734u) goto L_08ABF734;
    return;
L_08ABF734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08ABF748u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF748u) goto L_08ABF748;
    return;
L_08ABF748:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ABF848;
    }
    goto L_08ABF750;
L_08ABF750:
    ctx.set_gpr(31, 0x08ABF758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABF758u) goto L_08ABF758;
    return;
L_08ABF758:
    ctx.set_gpr(31, 0x08ABF760u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF760u) goto L_08ABF760;
    return;
L_08ABF760:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABF770u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 381u, 0x08861804u>(ctx, &aot_mem) && ctx.pc == 0x08ABF770u) goto L_08ABF770;
    return;
L_08ABF770:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF844;
      }
      goto L_08ABF77C;
    }
L_08ABF77C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08ABF788u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ABF880;
L_08ABF788:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABF794u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 242u, 0x08860D38u>(ctx, &aot_mem) && ctx.pc == 0x08ABF794u) goto L_08ABF794;
    return;
L_08ABF794:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08ABF7A0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 234u, 0x08860CB0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF7A0u) goto L_08ABF7A0;
    return;
L_08ABF7A0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08ABF7ACu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 248u, 0x08860DA0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF7ACu) goto L_08ABF7AC;
    return;
L_08ABF7AC:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF7F0;
      }
      goto L_08ABF7BC;
    }
L_08ABF7BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08ABF7C8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08ABF864;
L_08ABF7C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABF7D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 202u, 0x08860B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF7D4u) goto L_08ABF7D4;
    return;
L_08ABF7D4:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08ABF7E0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 240u, 0x08860D18u>(ctx, &aot_mem) && ctx.pc == 0x08ABF7E0u) goto L_08ABF7E0;
    return;
L_08ABF7E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABF7ECu);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 254u, 0x08860E08u>(ctx, &aot_mem) && ctx.pc == 0x08ABF7ECu) goto L_08ABF7EC;
    return;
L_08ABF7EC:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    goto L_08ABF7F0;
L_08ABF7F0:
    ctx.set_gpr(31, 0x08ABF7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF7F8u) goto L_08ABF7F8;
    return;
L_08ABF7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABF80Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF80Cu) goto L_08ABF80C;
    return;
L_08ABF80C:
    ctx.set_gpr(31, 0x08ABF814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF814u) goto L_08ABF814;
    return;
L_08ABF814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABF828u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF828u) goto L_08ABF828;
    return;
L_08ABF828:
    ctx.set_gpr(31, 0x08ABF830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ABF830u) goto L_08ABF830;
    return;
L_08ABF830:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ABF844u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF844u) goto L_08ABF844;
    return;
L_08ABF844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ABF848;
L_08ABF848:
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
L_08ABF864:
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
L_08ABF880:
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
L_08ABF8A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF908;
      }
      goto L_08ABF8C0;
    }
L_08ABF8C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
        goto L_08ABF8E4;
    }
    goto L_08ABF8CC;
L_08ABF8CC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08ABF8DC;
    }
    goto L_08ABF8D4;
L_08ABF8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF910;
      }
      goto L_08ABF8DC;
    }
L_08ABF8DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    goto L_08ABF8E4;
L_08ABF8E4:
    ctx.set_gpr(31, 0x08ABF8ECu);
    // nop
    goto L_08ABDEB4;
L_08ABF8EC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08ABF900;
    }
    goto L_08ABF8F8;
L_08ABF8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF910;
      }
      goto L_08ABF900;
    }
L_08ABF900:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08ABF908;
L_08ABF908:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABF910;
L_08ABF910:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF920:
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
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ABF954;
L_08ABF954:
    ctx.set_gpr(31, 0x08ABF95Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 649u, 0x08862818u>(ctx, &aot_mem) && ctx.pc == 0x08ABF95Cu) goto L_08ABF95C;
    return;
L_08ABF95C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08ABF970u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 381u, 0x08861804u>(ctx, &aot_mem) && ctx.pc == 0x08ABF970u) goto L_08ABF970;
    return;
L_08ABF970:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08ABF98C;
    }
    goto L_08ABF984;
L_08ABF984:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ABF998;
      }
      goto L_08ABF98C;
    }
L_08ABF98C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF954;
      }
      goto L_08ABF998;
    }
L_08ABF998:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ABF9B8;
    }
    goto L_08ABF9A0;
L_08ABF9A0:
    ctx.set_gpr(31, 0x08ABF9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABF9A8u) goto L_08ABF9A8;
    return;
L_08ABF9A8:
    ctx.set_gpr(31, 0x08ABF9B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 30u, 0x08864244u>(ctx, &aot_mem) && ctx.pc == 0x08ABF9B0u) goto L_08ABF9B0;
    return;
L_08ABF9B0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ABF9B8;
L_08ABF9B8:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08ABF9C8;
    }
    goto L_08ABF9C0;
L_08ABF9C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABF9F0;
      }
      goto L_08ABF9C8;
    }
L_08ABF9C8:
    ctx.set_gpr(31, 0x08ABF9D0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 649u, 0x08862818u>(ctx, &aot_mem) && ctx.pc == 0x08ABF9D0u) goto L_08ABF9D0;
    return;
L_08ABF9D0:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08ABF9E0;
    }
    goto L_08ABF9D8;
L_08ABF9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ABF9EC;
      }
      goto L_08ABF9E0;
    }
L_08ABF9E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF9C8;
      }
      goto L_08ABF9EC;
    }
L_08ABF9EC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08ABF9F0;
L_08ABF9F0:
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
L_08ABFA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABFA3Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA3Cu) goto L_08ABFA3C;
    return;
L_08ABFA3C:
    ctx.set_gpr(31, 0x08ABFA44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 915u, 0x08AAB1F0u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA44u) goto L_08ABFA44;
    return;
L_08ABFA44:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABFA54u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08ABF920;
L_08ABFA54:
    ctx.set_gpr(31, 0x08ABFA5Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA5Cu) goto L_08ABFA5C;
    return;
L_08ABFA5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFA68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA68u) goto L_08ABFA68;
    return;
L_08ABFA68:
    ctx.set_gpr(31, 0x08ABFA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABFA70u) goto L_08ABFA70;
    return;
L_08ABFA70:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFA7Cu);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 272u, 0x08AB5298u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA7Cu) goto L_08ABFA7C;
    return;
L_08ABFA7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08ABFA88u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA88u) goto L_08ABFA88;
    return;
L_08ABFA88:
    ctx.set_gpr(31, 0x08ABFA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ABFA90u) goto L_08ABFA90;
    return;
L_08ABFA90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFA9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ABFA9Cu) goto L_08ABFA9C;
    return;
L_08ABFA9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(31, 0x08ABFAA8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ABFC9C;
L_08ABFAA8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABFAD8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABFAD8u) goto L_08ABFAD8;
    return;
L_08ABFAD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABFAE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFAE4u) goto L_08ABFAE4;
    return;
L_08ABFAE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABFAFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08ABFAFCu) goto L_08ABFAFC;
    return;
L_08ABFAFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABFB14u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB14u) goto L_08ABFB14;
    return;
L_08ABFB14:
    ctx.set_gpr(31, 0x08ABFB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB1Cu) goto L_08ABFB1C;
    return;
L_08ABFB1C:
    ctx.set_gpr(31, 0x08ABFB24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABFC78;
L_08ABFB24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFB34u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB34u) goto L_08ABFB34;
    return;
L_08ABFB34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFB44u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB44u) goto L_08ABFB44;
    return;
L_08ABFB44:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08ABFB58u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ABFDBC;
L_08ABFB58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABFB70u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABFB70u) goto L_08ABFB70;
    return;
L_08ABFB70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFB8C;
      }
      goto L_08ABFB78;
    }
L_08ABFB78:
    ctx.set_gpr(31, 0x08ABFB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB80u) goto L_08ABFB80;
    return;
L_08ABFB80:
    ctx.set_gpr(31, 0x08ABFB88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABFB88u) goto L_08ABFB88;
    return;
L_08ABFB88:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    goto L_08ABFB8C;
L_08ABFB8C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
        goto L_08ABFBBC;
    }
    goto L_08ABFB94;
L_08ABFB94:
    ctx.set_gpr(31, 0x08ABFB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABFB9Cu) goto L_08ABFB9C;
    return;
L_08ABFB9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFBA8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ABFC68;
L_08ABFBA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ABFBB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08ABFBB8u) goto L_08ABFBB8;
    return;
L_08ABFBB8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
    goto L_08ABFBBC;
L_08ABFBBC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(92));
        goto L_08ABFBE0;
    }
    goto L_08ABFBC4;
L_08ABFBC4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08ABFBD8u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABF318;
L_08ABFBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08ABFBF4;
      }
      goto L_08ABFBE0;
    }
L_08ABFBE0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABFBF0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABF318;
L_08ABFBF0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ABFBF4;
L_08ABFBF4:
    ctx.set_gpr(31, 0x08ABFBFCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    goto L_08ABF36C;
L_08ABFBFC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3164)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3168)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3172)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3180)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3176)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3184)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08ABFC68:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4781), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFC78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem); return;
L_08ABFC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ABFCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCACu) goto L_08ABFCAC;
    return;
L_08ABFCAC:
    ctx.set_gpr(31, 0x08ABFCB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCB4u) goto L_08ABFCB4;
    return;
L_08ABFCB4:
    ctx.set_gpr(31, 0x08ABFCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCBCu) goto L_08ABFCBC;
    return;
L_08ABFCBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFCC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCC8u) goto L_08ABFCC8;
    return;
L_08ABFCC8:
    ctx.set_gpr(31, 0x08ABFCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCD0u) goto L_08ABFCD0;
    return;
L_08ABFCD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFCDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCDCu) goto L_08ABFCDC;
    return;
L_08ABFCDC:
    ctx.set_gpr(31, 0x08ABFCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCE4u) goto L_08ABFCE4;
    return;
L_08ABFCE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFCF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCF0u) goto L_08ABFCF0;
    return;
L_08ABFCF0:
    ctx.set_gpr(31, 0x08ABFCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFCF8u) goto L_08ABFCF8;
    return;
L_08ABFCF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFD04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD04u) goto L_08ABFD04;
    return;
L_08ABFD04:
    ctx.set_gpr(31, 0x08ABFD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD0Cu) goto L_08ABFD0C;
    return;
L_08ABFD0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFD18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD18u) goto L_08ABFD18;
    return;
L_08ABFD18:
    ctx.set_gpr(31, 0x08ABFD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD20u) goto L_08ABFD20;
    return;
L_08ABFD20:
    ctx.set_gpr(31, 0x08ABFD28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ABFD28u) goto L_08ABFD28;
    return;
L_08ABFD28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFD34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ABFD44u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(108));
    goto L_08ABDF4C;
L_08ABFD44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFD54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ABFD6Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    goto L_08ABDFB4;
L_08ABFD6C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABFD7Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABFD7Cu) goto L_08ABFD7C;
    return;
L_08ABFD7C:
    ctx.set_gpr(31, 0x08ABFD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD84u) goto L_08ABFD84;
    return;
L_08ABFD84:
    ctx.set_gpr(31, 0x08ABFD8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD8Cu) goto L_08ABFD8C;
    return;
L_08ABFD8C:
    ctx.set_gpr(31, 0x08ABFD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD94u) goto L_08ABFD94;
    return;
L_08ABFD94:
    ctx.set_gpr(31, 0x08ABFD9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08ABFD9Cu) goto L_08ABFD9C;
    return;
L_08ABFD9C:
    ctx.set_gpr(31, 0x08ABFDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABFDA4u) goto L_08ABFDA4;
    return;
L_08ABFDA4:
    ctx.set_gpr(31, 0x08ABFDACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFDACu) goto L_08ABFDAC;
    return;
L_08ABFDAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABFDF0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFDF0u) goto L_08ABFDF0;
    return;
L_08ABFDF0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08ABFE04u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08ABE2DC;
L_08ABFE04:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABFE14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABFEDC;
L_08ABFE14:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABFE2Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABFE2Cu) goto L_08ABFE2C;
    return;
L_08ABFE2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(0u));
        goto L_08ABFE54;
    }
    goto L_08ABFE38;
L_08ABFE38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08ABFE50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08ABFE50u) goto L_08ABFE50;
    return;
L_08ABFE50:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(0u));
    goto L_08ABFE54;
L_08ABFE54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    goto L_08ABFE68;
L_08ABFE68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABFE74u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08ABFEBC;
L_08ABFE74:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08ABFE8C;
    }
    goto L_08ABFE7C;
L_08ABFE7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ABFE8C;
L_08ABFE8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
        goto L_08ABFE68;
    }
    goto L_08ABFE98;
L_08ABFE98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08ABFEA4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ABFEE8;
L_08ABFEA4:
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
L_08ABFEBC:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(27866));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 458u, 0x08861BE8u>(ctx, &aot_mem); return;
L_08ABFEDC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFEE8:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08ABFF30u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08ABFF30u) goto L_08ABFF30;
    return;
L_08ABFF30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABFF40u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    goto L_08ABF880;
L_08ABFF40:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ABFF4C;
L_08ABFF4C:
    ctx.set_gpr(31, 0x08ABFF54u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08ABFF54u) goto L_08ABFF54;
    return;
L_08ABFF54:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABFF4C;
      }
      goto L_08ABFF64;
    }
L_08ABFF64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08ABFF70u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 381u, 0x08861804u>(ctx, &aot_mem) && ctx.pc == 0x08ABFF70u) goto L_08ABFF70;
    return;
L_08ABFF70:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 14u, 0x08AC0084u>(ctx, &aot_mem); return;
    }
    goto L_08ABFF78;
L_08ABFF78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3188));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(308));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08ABFF98u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ABFF98u) goto L_08ABFF98;
    return;
L_08ABFF98:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[23] << 4u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08ABFFAC;
L_08ABFFAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08ABFFC0u);
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(340));
    goto L_08ABFEBC;
L_08ABFFC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 11u, 0x08AC005Cu>(ctx, &aot_mem); return;
    }
    goto L_08ABFFC8;
L_08ABFFC8:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ABFFDCu);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08ABFFDCu) goto L_08ABFFDC;
    return;
L_08ABFFDC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08ABFFF0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3200));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ABFFF0u) goto L_08ABFFF0;
    return;
L_08ABFFF0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(976)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08ABFFFC;
L_08ABFFFC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 4u, 0x08AC001Cu>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 2u, 0x08AC0004u>(ctx, &aot_mem); return;
}

void recomp_unit_0174(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0174_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_174(Runtime &runtime) {
    runtime.register_generated_unit(174u, 0x08ABC000u, 16384u, &recomp_unit_0174, &recomp_unit_0174_entry);
    runtime.register_function(0x08ABC000u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC00Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC014u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC020u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC024u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC048u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC078u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC08Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC118u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC120u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC124u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC12Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC130u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC138u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC16Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC180u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC184u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC18Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC190u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC198u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC19Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC204u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC20Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC21Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC224u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC230u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC240u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC248u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC254u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC264u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC278u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC300u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC30Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC314u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC318u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC31Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC324u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC334u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC34Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC360u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC364u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC36Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC380u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC384u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC38Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC398u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC39Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC414u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC418u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC420u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC424u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC438u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC43Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC484u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC48Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC498u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC508u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC510u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC538u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC540u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC548u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC554u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC558u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC564u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC56Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC574u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC580u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC588u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC59Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC604u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC60Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC620u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC63Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC644u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC654u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC660u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC66Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC678u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC684u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC690u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC69Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC704u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC70Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC714u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC720u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC730u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC738u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC740u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC74Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC754u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC760u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC768u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC770u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC778u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC780u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC78Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC798u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC81Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC834u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC844u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC864u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC86Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC878u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC880u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC88Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC89Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC904u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC90Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC918u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC928u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC930u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC938u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC940u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC948u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC954u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC964u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC96Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCACCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD070u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD07Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD09Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD114u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD13Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD148u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD170u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD178u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD200u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD208u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD230u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD238u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD260u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD268u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD290u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD298u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD320u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD328u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD350u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD358u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD380u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD388u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD404u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD444u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD460u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD468u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD474u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD480u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD488u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD490u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD49Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD504u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD510u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD520u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD534u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD53Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD544u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD554u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD598u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD608u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD614u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD618u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD634u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD650u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD658u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD660u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD668u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD674u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD680u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD690u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD694u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD704u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD70Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD710u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD718u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD724u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD72Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD734u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD73Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD748u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD754u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD758u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD774u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD790u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD798u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD800u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD80Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD814u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD81Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD82Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD838u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD840u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD84Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD850u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD868u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD878u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD884u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD894u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD904u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD90Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD910u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD920u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD928u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD930u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD94Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD958u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD960u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD968u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD970u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD978u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD984u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD98Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD998u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD99Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDACCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDED0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDED8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE008u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE014u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE034u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE03Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE04Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE060u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE074u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE098u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE108u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE118u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE130u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE150u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE170u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE17Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE190u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE198u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE218u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE22Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE234u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE248u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE250u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE264u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE270u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE278u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE28Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE294u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE29Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE30Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE318u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE378u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE394u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE41Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE430u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE438u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE44Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE468u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE470u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE478u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE490u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE498u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE500u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE508u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE51Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE52Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE548u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE550u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE574u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE57Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE584u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE59Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE600u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE604u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE60Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE64Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE654u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE658u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE660u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE688u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE690u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE69Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE71Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE724u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE750u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE758u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE76Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE774u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE77Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE790u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE794u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE800u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE808u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE81Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE82Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE838u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE840u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE858u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE984u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEACCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEECCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF004u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF00Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF020u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF024u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF030u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF034u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF07Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF09Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF100u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF114u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF124u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF13Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF144u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF164u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF174u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF17Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF19Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF23Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF268u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF318u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF330u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF33Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF348u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF350u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF358u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF360u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF364u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF36Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF390u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF408u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF40Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF410u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF41Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF424u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF428u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF430u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF438u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF440u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF44Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF458u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF468u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF46Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF470u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF47Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF484u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF488u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF490u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF498u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF500u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF51Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF61Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF630u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF660u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF678u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF690u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF710u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF718u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF72Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF734u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF748u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF750u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF758u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF760u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF770u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF77Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF788u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF794u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF80Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF814u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF828u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF830u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF844u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF848u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF864u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF880u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF900u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF908u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF910u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF920u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF954u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF95Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF970u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF984u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF98Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF998u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFFCu, &recomp_unit_0174, "recomp_unit_0174");
}
} // namespace psprecomp
