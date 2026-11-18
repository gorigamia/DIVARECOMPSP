#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0023[4053] = {
    1, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19,
    20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 27, 0, 28, 0,
    0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 47, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 54, 0, 55, 0, 0, 56, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0,
    77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0,
    96, 0, 0, 97, 98, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104,
    105, 0, 106, 0, 0, 107, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 116, 0, 117, 0,
    0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 122, 123, 124, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 141, 0, 0,
    0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 154, 0, 0, 0, 155,
    0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 178, 0, 179, 180, 181, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193,
    194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208,
    209, 0, 210, 0, 0, 0, 211, 0, 212, 213, 0, 214, 0, 0, 0, 215, 0, 216, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0,
    222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 286, 0, 287, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0,
    348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 378, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0,
    389, 390, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396,
    0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 422, 0, 0, 423, 0, 0, 424, 0,
    425, 0, 0, 426, 0, 427, 0, 428, 429, 0, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 437, 438, 0, 0, 439, 0, 0,
    0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 451, 452,
    0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 460,
    0, 461, 0, 462, 463, 464, 0, 0, 465, 0, 466, 0, 0, 0, 0, 467, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 471, 0, 0, 0, 0, 0, 472, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0,
    490, 0, 491, 0, 492, 493, 0, 494, 0, 0, 0, 495, 0, 496, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 0,
    503, 0, 504, 0, 505, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 512, 0, 513, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0,
    0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 555,
    0, 0, 556, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0,
    562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 580, 0,
    581, 0, 582, 0, 0, 583, 0, 584, 0, 585, 586, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0,
    603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0,
    0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0,
    0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0,
    637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 647,
    648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659,
    0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0,
    0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0,
    0, 672, 0, 673, 674, 0, 675, 0, 0, 676, 0, 677, 678, 0, 679, 0, 0, 680, 0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685,
    0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0,
    0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0,
    0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 706, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0,
    0, 711, 0, 712, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0,
    719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724,
    0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 730, 731, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 741, 742, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0,
    748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0,
    0, 761, 0, 0, 762, 0, 763, 764, 0, 765, 766, 0, 767, 768, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 773, 0, 774,
    0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0,
    0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 792, 793, 0,
    0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0, 0,
    0, 0, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 814, 0, 815,
    816, 0, 0, 0, 817, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 821, 822, 0, 823, 824, 825, 826, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0,
    830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 0, 839, 0, 840, 0,
    0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 852, 0,
    0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 0, 860, 0, 861, 0, 0, 0, 862, 0,
    863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 874, 0,
    0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 884,
    0, 0, 0, 885, 0, 0, 0, 0, 886, 0, 887, 0, 888, 0, 0, 889, 0, 890, 0, 891, 892, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 894,
    0, 0, 0, 895, 0, 0, 896, 0, 0, 897, 0, 898, 0, 899, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 0, 905,
    0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 908, 0, 909, 0, 0, 0, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 914, 0, 915, 916, 0, 0,
    917, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 924, 0, 925, 0, 0, 0, 0, 926,
    0, 927, 0, 0, 0, 928, 0, 0, 929, 0, 0, 0, 930, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 934, 0, 935, 0, 0, 0, 936, 0, 937,
    0, 0, 0, 938, 0, 0, 0, 0, 939, 0, 0, 0, 940, 0, 0, 941, 0, 0, 0, 0, 942, 0, 943, 0, 0, 0, 0, 0, 0, 0, 944, 0,
    0, 0, 945, 0, 0, 946, 0, 0, 0, 0, 947, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 952,
    0, 0, 0, 953, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 956, 0, 0, 0, 957, 0, 958, 0, 959, 0, 0, 0, 0, 0,
    0, 0, 960, 0, 961, 962, 0, 963, 0, 0, 0, 964, 0, 0, 0, 0, 965, 0, 0, 966, 0, 0, 0, 967, 968, 0, 969, 0, 970, 0, 0, 0,
    971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 973, 974, 0, 975, 0, 0, 0, 976, 0, 977, 0, 978, 0, 0, 979, 0, 0, 0, 0, 980, 0,
    0, 981, 0, 982, 0, 983, 0, 0, 984, 0, 0, 0, 0, 985, 0, 0, 986, 0, 0, 0, 0, 0, 987, 0, 988, 0, 989, 0, 0, 0, 990, 0,
    0, 0, 991, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 993, 994, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0, 0, 0, 997, 0, 998, 0,
    999, 0, 0, 1000, 0, 1001, 0, 0, 0, 1002, 1003, 0, 0, 1004, 0, 1005, 0, 1006, 0, 1007, 0, 1008, 0, 0, 1009, 0, 0, 0, 1010, 0, 1011, 0,
    0, 1012, 0, 1013, 0, 1014, 0, 0, 0, 0, 1015, 0, 0, 1016, 0, 1017, 1018, 0, 0, 0, 1019, 0, 0, 0, 1020, 0, 1021, 0, 0, 0, 0, 0,
    0, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 0, 0, 0, 0, 0, 0, 0, 1026, 0, 1027, 0, 1028, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 0, 0,
    1033, 0, 1034, 0, 0, 0, 0, 0, 1035, 0, 1036, 0, 0, 0, 0, 1037, 0, 0, 0, 0, 0, 1038, 0, 0, 1039, 0, 0, 0, 1040, 0, 1041, 0,
    1042, 0, 1043, 0, 0, 0, 1044, 0, 1045, 0, 1046, 0, 0, 1047, 0, 1048, 0, 1049, 0, 0, 0, 1050, 0, 0, 1051, 0, 1052, 0, 1053, 0, 1054, 0,
    0, 1055, 0, 1056, 0, 0, 0, 1057, 0, 0, 1058, 0, 1059, 0, 1060, 0, 0, 1061, 0, 0, 0, 0, 0, 0, 0, 1062, 0, 1063, 0, 1064, 0, 1065,
    0, 0, 1066, 0, 0, 0, 1067, 0, 0, 1068, 0, 1069, 0, 0, 0, 0, 1070, 0, 1071, 0, 1072, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1073, 0, 1074, 0, 0, 0, 0, 1075, 0, 0, 0, 1076, 0, 1077, 0, 0, 0, 0, 0, 1078,
};
void recomp_unit_0023_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08860000u;
        entry_id = (entry_delta < 16212u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0023[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08860000;
    case 2u: goto L_08860004;
    case 3u: goto L_0886000C;
    case 4u: goto L_08860014;
    case 5u: goto L_0886001C;
    case 6u: goto L_08860024;
    case 7u: goto L_0886002C;
    case 8u: goto L_08860034;
    case 9u: goto L_08860040;
    case 10u: goto L_08860050;
    case 11u: goto L_08860058;
    case 12u: goto L_0886006C;
    case 13u: goto L_0886007C;
    case 14u: goto L_088600A4;
    case 15u: goto L_088600BC;
    case 16u: goto L_088600C8;
    case 17u: goto L_088600DC;
    case 18u: goto L_088600E4;
    case 19u: goto L_088600FC;
    case 20u: goto L_08860100;
    case 21u: goto L_08860118;
    case 22u: goto L_08860144;
    case 23u: goto L_0886014C;
    case 24u: goto L_0886015C;
    case 25u: goto L_08860164;
    case 26u: goto L_0886016C;
    case 27u: goto L_08860170;
    case 28u: goto L_08860178;
    case 29u: goto L_08860184;
    case 30u: goto L_08860190;
    case 31u: goto L_08860198;
    case 32u: goto L_088601A0;
    case 33u: goto L_088601A8;
    case 34u: goto L_088601B0;
    case 35u: goto L_088601B8;
    case 36u: goto L_088601BC;
    case 37u: goto L_088601C8;
    case 38u: goto L_088601D8;
    case 39u: goto L_088601E0;
    case 40u: goto L_088601E4;
    case 41u: goto L_08860218;
    case 42u: goto L_08860230;
    case 43u: goto L_0886023C;
    case 44u: goto L_08860250;
    case 45u: goto L_08860258;
    case 46u: goto L_08860270;
    case 47u: goto L_08860274;
    case 48u: goto L_08860278;
    case 49u: goto L_08860290;
    case 50u: goto L_088602B8;
    case 51u: goto L_088602C4;
    case 52u: goto L_088602D0;
    case 53u: goto L_088602D8;
    case 54u: goto L_088602DC;
    case 55u: goto L_088602E4;
    case 56u: goto L_088602F0;
    case 57u: goto L_088602F4;
    case 58u: goto L_08860300;
    case 59u: goto L_08860318;
    case 60u: goto L_08860320;
    case 61u: goto L_08860328;
    case 62u: goto L_08860334;
    case 63u: goto L_0886033C;
    case 64u: goto L_08860348;
    case 65u: goto L_08860354;
    case 66u: goto L_08860364;
    case 67u: goto L_08860368;
    case 68u: goto L_08860384;
    case 69u: goto L_088603A8;
    case 70u: goto L_088603B0;
    case 71u: goto L_088603BC;
    case 72u: goto L_088603C4;
    case 73u: goto L_088603D0;
    case 74u: goto L_088603E0;
    case 75u: goto L_088603E8;
    case 76u: goto L_088603F0;
    case 77u: goto L_08860400;
    case 78u: goto L_08860408;
    case 79u: goto L_08860410;
    case 80u: goto L_08860420;
    case 81u: goto L_08860428;
    case 82u: goto L_08860440;
    case 83u: goto L_08860470;
    case 84u: goto L_08860478;
    case 85u: goto L_08860484;
    case 86u: goto L_0886048C;
    case 87u: goto L_08860498;
    case 88u: goto L_088604A8;
    case 89u: goto L_088604B0;
    case 90u: goto L_088604B8;
    case 91u: goto L_088604C8;
    case 92u: goto L_088604D0;
    case 93u: goto L_088604E0;
    case 94u: goto L_088604EC;
    case 95u: goto L_088604F8;
    case 96u: goto L_08860500;
    case 97u: goto L_0886050C;
    case 98u: goto L_08860510;
    case 99u: goto L_08860514;
    case 100u: goto L_08860534;
    case 101u: goto L_0886055C;
    case 102u: goto L_08860568;
    case 103u: goto L_08860574;
    case 104u: goto L_0886057C;
    case 105u: goto L_08860580;
    case 106u: goto L_08860588;
    case 107u: goto L_08860594;
    case 108u: goto L_08860598;
    case 109u: goto L_088605A4;
    case 110u: goto L_088605AC;
    case 111u: goto L_088605C0;
    case 112u: goto L_088605CC;
    case 113u: goto L_088605D4;
    case 114u: goto L_088605E4;
    case 115u: goto L_088605EC;
    case 116u: goto L_088605F0;
    case 117u: goto L_088605F8;
    case 118u: goto L_08860604;
    case 119u: goto L_08860610;
    case 120u: goto L_08860618;
    case 121u: goto L_08860624;
    case 122u: goto L_08860628;
    case 123u: goto L_0886062C;
    case 124u: goto L_08860630;
    case 125u: goto L_0886063C;
    case 126u: goto L_08860640;
    case 127u: goto L_0886065C;
    case 128u: goto L_08860684;
    case 129u: goto L_0886068C;
    case 130u: goto L_088606A0;
    case 131u: goto L_088606B4;
    case 132u: goto L_088606DC;
    case 133u: goto L_088606E4;
    case 134u: goto L_08860700;
    case 135u: goto L_08860704;
    case 136u: goto L_08860714;
    case 137u: goto L_08860744;
    case 138u: goto L_0886074C;
    case 139u: goto L_08860764;
    case 140u: goto L_08860770;
    case 141u: goto L_08860774;
    case 142u: goto L_08860788;
    case 143u: goto L_08860790;
    case 144u: goto L_088607C8;
    case 145u: goto L_088607D0;
    case 146u: goto L_088607F0;
    case 147u: goto L_088607F4;
    case 148u: goto L_0886080C;
    case 149u: goto L_08860840;
    case 150u: goto L_08860848;
    case 151u: goto L_08860850;
    case 152u: goto L_08860858;
    case 153u: goto L_08860868;
    case 154u: goto L_0886086C;
    case 155u: goto L_0886087C;
    case 156u: goto L_08860884;
    case 157u: goto L_08860894;
    case 158u: goto L_0886089C;
    case 159u: goto L_088608BC;
    case 160u: goto L_088608C0;
    case 161u: goto L_088608DC;
    case 162u: goto L_08860910;
    case 163u: goto L_08860918;
    case 164u: goto L_08860920;
    case 165u: goto L_08860928;
    case 166u: goto L_08860938;
    case 167u: goto L_0886093C;
    case 168u: goto L_0886094C;
    case 169u: goto L_08860954;
    case 170u: goto L_08860964;
    case 171u: goto L_0886096C;
    case 172u: goto L_0886098C;
    case 173u: goto L_08860990;
    case 174u: goto L_088609AC;
    case 175u: goto L_088609B8;
    case 176u: goto L_088609C4;
    case 177u: goto L_088609D0;
    case 178u: goto L_088609D4;
    case 179u: goto L_088609DC;
    case 180u: goto L_088609E0;
    case 181u: goto L_088609E4;
    case 182u: goto L_088609EC;
    case 183u: goto L_08860A10;
    case 184u: goto L_08860A18;
    case 185u: goto L_08860A20;
    case 186u: goto L_08860A28;
    case 187u: goto L_08860A30;
    case 188u: goto L_08860A34;
    case 189u: goto L_08860A44;
    case 190u: goto L_08860A4C;
    case 191u: goto L_08860A5C;
    case 192u: goto L_08860A64;
    case 193u: goto L_08860A7C;
    case 194u: goto L_08860A80;
    case 195u: goto L_08860A94;
    case 196u: goto L_08860AA8;
    case 197u: goto L_08860AD0;
    case 198u: goto L_08860AE8;
    case 199u: goto L_08860AF0;
    case 200u: goto L_08860AF8;
    case 201u: goto L_08860B00;
    case 202u: goto L_08860B1C;
    case 203u: goto L_08860B2C;
    case 204u: goto L_08860B3C;
    case 205u: goto L_08860B44;
    case 206u: goto L_08860B54;
    case 207u: goto L_08860B74;
    case 208u: goto L_08860B7C;
    case 209u: goto L_08860B80;
    case 210u: goto L_08860B88;
    case 211u: goto L_08860B98;
    case 212u: goto L_08860BA0;
    case 213u: goto L_08860BA4;
    case 214u: goto L_08860BAC;
    case 215u: goto L_08860BBC;
    case 216u: goto L_08860BC4;
    case 217u: goto L_08860BC8;
    case 218u: goto L_08860BD0;
    case 219u: goto L_08860BDC;
    case 220u: goto L_08860BE8;
    case 221u: goto L_08860BF4;
    case 222u: goto L_08860C00;
    case 223u: goto L_08860C08;
    case 224u: goto L_08860C10;
    case 225u: goto L_08860C18;
    case 226u: goto L_08860C20;
    case 227u: goto L_08860C28;
    case 228u: goto L_08860C2C;
    case 229u: goto L_08860C38;
    case 230u: goto L_08860C44;
    case 231u: goto L_08860C54;
    case 232u: goto L_08860C7C;
    case 233u: goto L_08860C9C;
    case 234u: goto L_08860CB0;
    case 235u: goto L_08860CD0;
    case 236u: goto L_08860CD8;
    case 237u: goto L_08860CE8;
    case 238u: goto L_08860CF0;
    case 239u: goto L_08860CFC;
    case 240u: goto L_08860D18;
    case 241u: goto L_08860D28;
    case 242u: goto L_08860D38;
    case 243u: goto L_08860D58;
    case 244u: goto L_08860D60;
    case 245u: goto L_08860D70;
    case 246u: goto L_08860D78;
    case 247u: goto L_08860D84;
    case 248u: goto L_08860DA0;
    case 249u: goto L_08860DC0;
    case 250u: goto L_08860DC8;
    case 251u: goto L_08860DD8;
    case 252u: goto L_08860DE0;
    case 253u: goto L_08860DEC;
    case 254u: goto L_08860E08;
    case 255u: goto L_08860E18;
    case 256u: goto L_08860E28;
    case 257u: goto L_08860E30;
    case 258u: goto L_08860E50;
    case 259u: goto L_08860E58;
    case 260u: goto L_08860E6C;
    case 261u: goto L_08860E88;
    case 262u: goto L_08860EA0;
    case 263u: goto L_08860EB4;
    case 264u: goto L_08860EC0;
    case 265u: goto L_08860ED0;
    case 266u: goto L_08860EE4;
    case 267u: goto L_08860EF0;
    case 268u: goto L_08860F00;
    case 269u: goto L_08860F14;
    case 270u: goto L_08860F1C;
    case 271u: goto L_08860F24;
    case 272u: goto L_08860F2C;
    case 273u: goto L_08860F34;
    case 274u: goto L_08860F3C;
    case 275u: goto L_08860F44;
    case 276u: goto L_08860F4C;
    case 277u: goto L_08860F54;
    case 278u: goto L_08860F5C;
    case 279u: goto L_08860F6C;
    case 280u: goto L_08860F8C;
    case 281u: goto L_08860FB8;
    case 282u: goto L_08860FD8;
    case 283u: goto L_08861004;
    case 284u: goto L_08861010;
    case 285u: goto L_08861024;
    case 286u: goto L_08861028;
    case 287u: goto L_08861030;
    case 288u: goto L_08861034;
    case 289u: goto L_08861040;
    case 290u: goto L_08861058;
    case 291u: goto L_08861064;
    case 292u: goto L_08861084;
    case 293u: goto L_08861098;
    case 294u: goto L_088610B4;
    case 295u: goto L_088610CC;
    case 296u: goto L_088610D4;
    case 297u: goto L_088610E4;
    case 298u: goto L_088610F8;
    case 299u: goto L_08861120;
    case 300u: goto L_08861138;
    case 301u: goto L_0886114C;
    case 302u: goto L_08861154;
    case 303u: goto L_08861164;
    case 304u: goto L_08861174;
    case 305u: goto L_08861188;
    case 306u: goto L_088611A0;
    case 307u: goto L_088611C4;
    case 308u: goto L_088611EC;
    case 309u: goto L_08861204;
    case 310u: goto L_08861218;
    case 311u: goto L_08861220;
    case 312u: goto L_08861234;
    case 313u: goto L_08861244;
    case 314u: goto L_08861254;
    case 315u: goto L_0886126C;
    case 316u: goto L_08861274;
    case 317u: goto L_08861288;
    case 318u: goto L_08861298;
    case 319u: goto L_088612B0;
    case 320u: goto L_088612E0;
    case 321u: goto L_08861308;
    case 322u: goto L_08861328;
    case 323u: goto L_0886133C;
    case 324u: goto L_08861344;
    case 325u: goto L_08861354;
    case 326u: goto L_08861364;
    case 327u: goto L_08861378;
    case 328u: goto L_08861390;
    case 329u: goto L_088613B4;
    case 330u: goto L_088613E4;
    case 331u: goto L_08861404;
    case 332u: goto L_08861414;
    case 333u: goto L_08861434;
    case 334u: goto L_08861440;
    case 335u: goto L_08861450;
    case 336u: goto L_08861464;
    case 337u: goto L_08861474;
    case 338u: goto L_08861488;
    case 339u: goto L_0886149C;
    case 340u: goto L_088614B0;
    case 341u: goto L_088614C8;
    case 342u: goto L_088614E8;
    case 343u: goto L_0886150C;
    case 344u: goto L_08861534;
    case 345u: goto L_08861554;
    case 346u: goto L_08861568;
    case 347u: goto L_08861570;
    case 348u: goto L_08861580;
    case 349u: goto L_08861590;
    case 350u: goto L_088615A4;
    case 351u: goto L_088615BC;
    case 352u: goto L_088615E0;
    case 353u: goto L_08861608;
    case 354u: goto L_08861628;
    case 355u: goto L_0886163C;
    case 356u: goto L_08861644;
    case 357u: goto L_08861654;
    case 358u: goto L_08861664;
    case 359u: goto L_08861678;
    case 360u: goto L_08861690;
    case 361u: goto L_088616B4;
    case 362u: goto L_088616E8;
    case 363u: goto L_088616F8;
    case 364u: goto L_0886170C;
    case 365u: goto L_08861720;
    case 366u: goto L_08861728;
    case 367u: goto L_08861738;
    case 368u: goto L_08861748;
    case 369u: goto L_08861750;
    case 370u: goto L_08861768;
    case 371u: goto L_08861794;
    case 372u: goto L_0886179C;
    case 373u: goto L_088617A8;
    case 374u: goto L_088617B0;
    case 375u: goto L_088617BC;
    case 376u: goto L_088617C4;
    case 377u: goto L_088617D0;
    case 378u: goto L_088617D4;
    case 379u: goto L_088617D8;
    case 380u: goto L_088617F0;
    case 381u: goto L_08861804;
    case 382u: goto L_08861818;
    case 383u: goto L_08861844;
    case 384u: goto L_0886184C;
    case 385u: goto L_08861858;
    case 386u: goto L_08861860;
    case 387u: goto L_0886186C;
    case 388u: goto L_08861874;
    case 389u: goto L_08861880;
    case 390u: goto L_08861884;
    case 391u: goto L_08861888;
    case 392u: goto L_088618A0;
    case 393u: goto L_088618B4;
    case 394u: goto L_088618C8;
    case 395u: goto L_088618F4;
    case 396u: goto L_088618FC;
    case 397u: goto L_0886190C;
    case 398u: goto L_08861914;
    case 399u: goto L_08861920;
    case 400u: goto L_08861928;
    case 401u: goto L_08861938;
    case 402u: goto L_0886193C;
    case 403u: goto L_08861950;
    case 404u: goto L_08861968;
    case 405u: goto L_08861980;
    case 406u: goto L_088619A4;
    case 407u: goto L_088619AC;
    case 408u: goto L_088619B4;
    case 409u: goto L_088619BC;
    case 410u: goto L_088619C8;
    case 411u: goto L_088619D0;
    case 412u: goto L_088619D8;
    case 413u: goto L_088619E0;
    case 414u: goto L_088619E8;
    case 415u: goto L_088619F4;
    case 416u: goto L_08861A2C;
    case 417u: goto L_08861A38;
    case 418u: goto L_08861A40;
    case 419u: goto L_08861A4C;
    case 420u: goto L_08861A54;
    case 421u: goto L_08861A5C;
    case 422u: goto L_08861A60;
    case 423u: goto L_08861A6C;
    case 424u: goto L_08861A78;
    case 425u: goto L_08861A80;
    case 426u: goto L_08861A8C;
    case 427u: goto L_08861A94;
    case 428u: goto L_08861A9C;
    case 429u: goto L_08861AA0;
    case 430u: goto L_08861AAC;
    case 431u: goto L_08861AB8;
    case 432u: goto L_08861AC0;
    case 433u: goto L_08861AC8;
    case 434u: goto L_08861AD0;
    case 435u: goto L_08861AD8;
    case 436u: goto L_08861AE0;
    case 437u: goto L_08861AE4;
    case 438u: goto L_08861AE8;
    case 439u: goto L_08861AF4;
    case 440u: goto L_08861B08;
    case 441u: goto L_08861B10;
    case 442u: goto L_08861B20;
    case 443u: goto L_08861B38;
    case 444u: goto L_08861B40;
    case 445u: goto L_08861B4C;
    case 446u: goto L_08861B54;
    case 447u: goto L_08861B5C;
    case 448u: goto L_08861B64;
    case 449u: goto L_08861B6C;
    case 450u: goto L_08861B74;
    case 451u: goto L_08861B78;
    case 452u: goto L_08861B7C;
    case 453u: goto L_08861B88;
    case 454u: goto L_08861B9C;
    case 455u: goto L_08861BB8;
    case 456u: goto L_08861BC8;
    case 457u: goto L_08861BE0;
    case 458u: goto L_08861BE8;
    case 459u: goto L_08861BF4;
    case 460u: goto L_08861BFC;
    case 461u: goto L_08861C04;
    case 462u: goto L_08861C0C;
    case 463u: goto L_08861C10;
    case 464u: goto L_08861C14;
    case 465u: goto L_08861C20;
    case 466u: goto L_08861C28;
    case 467u: goto L_08861C3C;
    case 468u: goto L_08861C40;
    case 469u: goto L_08861C48;
    case 470u: goto L_08861C7C;
    case 471u: goto L_08861C88;
    case 472u: goto L_08861CA0;
    case 473u: goto L_08861CA4;
    case 474u: goto L_08861CB0;
    case 475u: goto L_08861CB8;
    case 476u: goto L_08861CC0;
    case 477u: goto L_08861CCC;
    case 478u: goto L_08861CD4;
    case 479u: goto L_08861CDC;
    case 480u: goto L_08861CF8;
    case 481u: goto L_08861D1C;
    case 482u: goto L_08861D30;
    case 483u: goto L_08861D38;
    case 484u: goto L_08861D48;
    case 485u: goto L_08861D50;
    case 486u: goto L_08861D58;
    case 487u: goto L_08861D68;
    case 488u: goto L_08861D70;
    case 489u: goto L_08861D78;
    case 490u: goto L_08861D80;
    case 491u: goto L_08861D88;
    case 492u: goto L_08861D90;
    case 493u: goto L_08861D94;
    case 494u: goto L_08861D9C;
    case 495u: goto L_08861DAC;
    case 496u: goto L_08861DB4;
    case 497u: goto L_08861DB8;
    case 498u: goto L_08861DC0;
    case 499u: goto L_08861DD8;
    case 500u: goto L_08861DE4;
    case 501u: goto L_08861DEC;
    case 502u: goto L_08861DF4;
    case 503u: goto L_08861E00;
    case 504u: goto L_08861E08;
    case 505u: goto L_08861E10;
    case 506u: goto L_08861E14;
    case 507u: goto L_08861E1C;
    case 508u: goto L_08861E24;
    case 509u: goto L_08861E34;
    case 510u: goto L_08861E3C;
    case 511u: goto L_08861E44;
    case 512u: goto L_08861E48;
    case 513u: goto L_08861E50;
    case 514u: goto L_08861E54;
    case 515u: goto L_08861E64;
    case 516u: goto L_08861E6C;
    case 517u: goto L_08861E74;
    case 518u: goto L_08861E90;
    case 519u: goto L_08861E9C;
    case 520u: goto L_08861EA4;
    case 521u: goto L_08861EB0;
    case 522u: goto L_08861EBC;
    case 523u: goto L_08861EC8;
    case 524u: goto L_08861ED4;
    case 525u: goto L_08861ED8;
    case 526u: goto L_08861EE8;
    case 527u: goto L_08861EF0;
    case 528u: goto L_08861EF8;
    case 529u: goto L_08861F0C;
    case 530u: goto L_08861F18;
    case 531u: goto L_08861F28;
    case 532u: goto L_08861F3C;
    case 533u: goto L_08861F58;
    case 534u: goto L_08861F8C;
    case 535u: goto L_08861F98;
    case 536u: goto L_08861FA0;
    case 537u: goto L_08861FB0;
    case 538u: goto L_08861FB8;
    case 539u: goto L_08861FC8;
    case 540u: goto L_08861FCC;
    case 541u: goto L_08861FD8;
    case 542u: goto L_08862000;
    case 543u: goto L_0886201C;
    case 544u: goto L_08862028;
    case 545u: goto L_08862034;
    case 546u: goto L_08862038;
    case 547u: goto L_0886204C;
    case 548u: goto L_0886205C;
    case 549u: goto L_0886206C;
    case 550u: goto L_0886207C;
    case 551u: goto L_088620BC;
    case 552u: goto L_088620C8;
    case 553u: goto L_088620DC;
    case 554u: goto L_088620F4;
    case 555u: goto L_088620FC;
    case 556u: goto L_08862108;
    case 557u: goto L_0886210C;
    case 558u: goto L_08862130;
    case 559u: goto L_08862140;
    case 560u: goto L_0886215C;
    case 561u: goto L_0886216C;
    case 562u: goto L_08862180;
    case 563u: goto L_08862198;
    case 564u: goto L_088621AC;
    case 565u: goto L_088621C4;
    case 566u: goto L_088621D8;
    case 567u: goto L_08862204;
    case 568u: goto L_0886220C;
    case 569u: goto L_08862214;
    case 570u: goto L_0886221C;
    case 571u: goto L_08862228;
    case 572u: goto L_08862230;
    case 573u: goto L_08862238;
    case 574u: goto L_08862240;
    case 575u: goto L_0886224C;
    case 576u: goto L_08862254;
    case 577u: goto L_0886225C;
    case 578u: goto L_08862264;
    case 579u: goto L_08862270;
    case 580u: goto L_08862278;
    case 581u: goto L_08862280;
    case 582u: goto L_08862288;
    case 583u: goto L_08862294;
    case 584u: goto L_0886229C;
    case 585u: goto L_088622A4;
    case 586u: goto L_088622A8;
    case 587u: goto L_088622AC;
    case 588u: goto L_088622C0;
    case 589u: goto L_08862350;
    case 590u: goto L_08862364;
    case 591u: goto L_08862384;
    case 592u: goto L_08862398;
    case 593u: goto L_088623AC;
    case 594u: goto L_088623CC;
    case 595u: goto L_088623E0;
    case 596u: goto L_088623F4;
    case 597u: goto L_08862414;
    case 598u: goto L_08862428;
    case 599u: goto L_08862438;
    case 600u: goto L_08862448;
    case 601u: goto L_0886246C;
    case 602u: goto L_08862474;
    case 603u: goto L_08862480;
    case 604u: goto L_08862488;
    case 605u: goto L_08862490;
    case 606u: goto L_0886249C;
    case 607u: goto L_088624B4;
    case 608u: goto L_088624C8;
    case 609u: goto L_088624E0;
    case 610u: goto L_088624F4;
    case 611u: goto L_08862530;
    case 612u: goto L_08862544;
    case 613u: goto L_08862564;
    case 614u: goto L_08862578;
    case 615u: goto L_0886258C;
    case 616u: goto L_088625AC;
    case 617u: goto L_088625C0;
    case 618u: goto L_088625D4;
    case 619u: goto L_088625F4;
    case 620u: goto L_08862608;
    case 621u: goto L_08862620;
    case 622u: goto L_08862640;
    case 623u: goto L_08862654;
    case 624u: goto L_08862664;
    case 625u: goto L_08862694;
    case 626u: goto L_088626B4;
    case 627u: goto L_088626C4;
    case 628u: goto L_088626E4;
    case 629u: goto L_088626F4;
    case 630u: goto L_08862714;
    case 631u: goto L_08862724;
    case 632u: goto L_08862744;
    case 633u: goto L_08862754;
    case 634u: goto L_0886275C;
    case 635u: goto L_0886276C;
    case 636u: goto L_08862778;
    case 637u: goto L_08862780;
    case 638u: goto L_08862794;
    case 639u: goto L_088627A0;
    case 640u: goto L_088627A8;
    case 641u: goto L_088627BC;
    case 642u: goto L_088627C8;
    case 643u: goto L_088627D0;
    case 644u: goto L_088627E0;
    case 645u: goto L_088627E8;
    case 646u: goto L_088627F0;
    case 647u: goto L_088627FC;
    case 648u: goto L_08862800;
    case 649u: goto L_08862818;
    case 650u: goto L_0886282C;
    case 651u: goto L_0886284C;
    case 652u: goto L_08862860;
    case 653u: goto L_08862874;
    case 654u: goto L_08862894;
    case 655u: goto L_088628A8;
    case 656u: goto L_088628BC;
    case 657u: goto L_088628D4;
    case 658u: goto L_088628E8;
    case 659u: goto L_088628FC;
    case 660u: goto L_0886291C;
    case 661u: goto L_08862934;
    case 662u: goto L_08862948;
    case 663u: goto L_08862968;
    case 664u: goto L_08862980;
    case 665u: goto L_08862994;
    case 666u: goto L_088629B4;
    case 667u: goto L_088629CC;
    case 668u: goto L_088629E0;
    case 669u: goto L_088629F8;
    case 670u: goto L_08862A0C;
    case 671u: goto L_08862A78;
    case 672u: goto L_08862A84;
    case 673u: goto L_08862A8C;
    case 674u: goto L_08862A90;
    case 675u: goto L_08862A98;
    case 676u: goto L_08862AA4;
    case 677u: goto L_08862AAC;
    case 678u: goto L_08862AB0;
    case 679u: goto L_08862AB8;
    case 680u: goto L_08862AC4;
    case 681u: goto L_08862ACC;
    case 682u: goto L_08862AD0;
    case 683u: goto L_08862AD8;
    case 684u: goto L_08862AF0;
    case 685u: goto L_08862AFC;
    case 686u: goto L_08862B0C;
    case 687u: goto L_08862B18;
    case 688u: goto L_08862B20;
    case 689u: goto L_08862B2C;
    case 690u: goto L_08862B34;
    case 691u: goto L_08862B4C;
    case 692u: goto L_08862B54;
    case 693u: goto L_08862B60;
    case 694u: goto L_08862B6C;
    case 695u: goto L_08862B78;
    case 696u: goto L_08862B84;
    case 697u: goto L_08862B90;
    case 698u: goto L_08862BD4;
    case 699u: goto L_08862C24;
    case 700u: goto L_08862C58;
    case 701u: goto L_08862C68;
    case 702u: goto L_08862C84;
    case 703u: goto L_08862CA0;
    case 704u: goto L_08862CA8;
    case 705u: goto L_08862CB4;
    case 706u: goto L_08862CBC;
    case 707u: goto L_08862CC0;
    case 708u: goto L_08862CD4;
    case 709u: goto L_08862CF0;
    case 710u: goto L_08862CF8;
    case 711u: goto L_08862D04;
    case 712u: goto L_08862D0C;
    case 713u: goto L_08862D10;
    case 714u: goto L_08862D24;
    case 715u: goto L_08862D38;
    case 716u: goto L_08862D4C;
    case 717u: goto L_08862D58;
    case 718u: goto L_08862D6C;
    case 719u: goto L_08862D80;
    case 720u: goto L_08862DB0;
    case 721u: goto L_08862DCC;
    case 722u: goto L_08862DDC;
    case 723u: goto L_08862DEC;
    case 724u: goto L_08862DFC;
    case 725u: goto L_08862E0C;
    case 726u: goto L_08862E1C;
    case 727u: goto L_08862E28;
    case 728u: goto L_08862E34;
    case 729u: goto L_08862E40;
    case 730u: goto L_08862E48;
    case 731u: goto L_08862E4C;
    case 732u: goto L_08862E60;
    case 733u: goto L_08862E68;
    case 734u: goto L_08862E70;
    case 735u: goto L_08862E98;
    case 736u: goto L_08862EA0;
    case 737u: goto L_08862EA8;
    case 738u: goto L_08862EB0;
    case 739u: goto L_08862F20;
    case 740u: goto L_08862F2C;
    case 741u: goto L_08862F34;
    case 742u: goto L_08862F38;
    case 743u: goto L_08862F3C;
    case 744u: goto L_08862F48;
    case 745u: goto L_08862F64;
    case 746u: goto L_08862F6C;
    case 747u: goto L_08862F74;
    case 748u: goto L_08862F80;
    case 749u: goto L_08862F88;
    case 750u: goto L_08862F90;
    case 751u: goto L_08862F98;
    case 752u: goto L_08862FA8;
    case 753u: goto L_08862FB0;
    case 754u: goto L_08862FB8;
    case 755u: goto L_08862FC0;
    case 756u: goto L_08862FCC;
    case 757u: goto L_08862FD4;
    case 758u: goto L_08862FDC;
    case 759u: goto L_08862FEC;
    case 760u: goto L_08862FF8;
    case 761u: goto L_08863004;
    case 762u: goto L_08863010;
    case 763u: goto L_08863018;
    case 764u: goto L_0886301C;
    case 765u: goto L_08863024;
    case 766u: goto L_08863028;
    case 767u: goto L_08863030;
    case 768u: goto L_08863034;
    case 769u: goto L_0886303C;
    case 770u: goto L_0886304C;
    case 771u: goto L_0886305C;
    case 772u: goto L_0886306C;
    case 773u: goto L_08863074;
    case 774u: goto L_0886307C;
    case 775u: goto L_08863088;
    case 776u: goto L_08863094;
    case 777u: goto L_088630B8;
    case 778u: goto L_088630C0;
    case 779u: goto L_088630D4;
    case 780u: goto L_088630DC;
    case 781u: goto L_088630E4;
    case 782u: goto L_088630F0;
    case 783u: goto L_088630F8;
    case 784u: goto L_08863104;
    case 785u: goto L_0886311C;
    case 786u: goto L_08863124;
    case 787u: goto L_08863134;
    case 788u: goto L_08863148;
    case 789u: goto L_08863150;
    case 790u: goto L_08863158;
    case 791u: goto L_08863160;
    case 792u: goto L_08863174;
    case 793u: goto L_08863178;
    case 794u: goto L_08863188;
    case 795u: goto L_08863190;
    case 796u: goto L_088631AC;
    case 797u: goto L_088631B4;
    case 798u: goto L_088631BC;
    case 799u: goto L_088631D8;
    case 800u: goto L_088631E0;
    case 801u: goto L_088631E8;
    case 802u: goto L_088631F4;
    case 803u: goto L_08863210;
    case 804u: goto L_08863218;
    case 805u: goto L_08863224;
    case 806u: goto L_0886322C;
    case 807u: goto L_08863234;
    case 808u: goto L_08863240;
    case 809u: goto L_08863248;
    case 810u: goto L_08863250;
    case 811u: goto L_08863258;
    case 812u: goto L_08863264;
    case 813u: goto L_0886326C;
    case 814u: goto L_08863274;
    case 815u: goto L_0886327C;
    case 816u: goto L_08863280;
    case 817u: goto L_08863290;
    case 818u: goto L_0886329C;
    case 819u: goto L_088632A8;
    case 820u: goto L_088632B4;
    case 821u: goto L_088632BC;
    case 822u: goto L_088632C0;
    case 823u: goto L_088632C8;
    case 824u: goto L_088632CC;
    case 825u: goto L_088632D0;
    case 826u: goto L_088632D4;
    case 827u: goto L_088632E4;
    case 828u: goto L_088632EC;
    case 829u: goto L_088632F8;
    case 830u: goto L_08863300;
    case 831u: goto L_08863308;
    case 832u: goto L_08863310;
    case 833u: goto L_08863318;
    case 834u: goto L_08863320;
    case 835u: goto L_08863338;
    case 836u: goto L_08863348;
    case 837u: goto L_08863350;
    case 838u: goto L_08863358;
    case 839u: goto L_08863370;
    case 840u: goto L_08863378;
    case 841u: goto L_08863384;
    case 842u: goto L_0886338C;
    case 843u: goto L_08863394;
    case 844u: goto L_0886339C;
    case 845u: goto L_088633A4;
    case 846u: goto L_088633AC;
    case 847u: goto L_088633C0;
    case 848u: goto L_088633C8;
    case 849u: goto L_088633D8;
    case 850u: goto L_088633E0;
    case 851u: goto L_088633F0;
    case 852u: goto L_088633F8;
    case 853u: goto L_08863408;
    case 854u: goto L_08863410;
    case 855u: goto L_08863428;
    case 856u: goto L_08863430;
    case 857u: goto L_0886343C;
    case 858u: goto L_0886344C;
    case 859u: goto L_08863454;
    case 860u: goto L_08863460;
    case 861u: goto L_08863468;
    case 862u: goto L_08863478;
    case 863u: goto L_08863480;
    case 864u: goto L_08863488;
    case 865u: goto L_088634A0;
    case 866u: goto L_088634A8;
    case 867u: goto L_088634B4;
    case 868u: goto L_088634BC;
    case 869u: goto L_088634C4;
    case 870u: goto L_088634CC;
    case 871u: goto L_088634D4;
    case 872u: goto L_088634DC;
    case 873u: goto L_088634F0;
    case 874u: goto L_088634F8;
    case 875u: goto L_08863508;
    case 876u: goto L_08863510;
    case 877u: goto L_08863520;
    case 878u: goto L_08863528;
    case 879u: goto L_08863538;
    case 880u: goto L_08863540;
    case 881u: goto L_08863558;
    case 882u: goto L_08863560;
    case 883u: goto L_0886356C;
    case 884u: goto L_0886357C;
    case 885u: goto L_0886358C;
    case 886u: goto L_088635A0;
    case 887u: goto L_088635A8;
    case 888u: goto L_088635B0;
    case 889u: goto L_088635BC;
    case 890u: goto L_088635C4;
    case 891u: goto L_088635CC;
    case 892u: goto L_088635D0;
    case 893u: goto L_088635DC;
    case 894u: goto L_088635FC;
    case 895u: goto L_0886360C;
    case 896u: goto L_08863618;
    case 897u: goto L_08863624;
    case 898u: goto L_0886362C;
    case 899u: goto L_08863634;
    case 900u: goto L_0886363C;
    case 901u: goto L_08863644;
    case 902u: goto L_08863658;
    case 903u: goto L_08863660;
    case 904u: goto L_08863670;
    case 905u: goto L_0886367C;
    case 906u: goto L_0886368C;
    case 907u: goto L_08863698;
    case 908u: goto L_088636A8;
    case 909u: goto L_088636B0;
    case 910u: goto L_088636C4;
    case 911u: goto L_088636CC;
    case 912u: goto L_088636D4;
    case 913u: goto L_088636E0;
    case 914u: goto L_088636E8;
    case 915u: goto L_088636F0;
    case 916u: goto L_088636F4;
    case 917u: goto L_08863700;
    case 918u: goto L_08863720;
    case 919u: goto L_08863730;
    case 920u: goto L_0886373C;
    case 921u: goto L_08863748;
    case 922u: goto L_08863750;
    case 923u: goto L_08863758;
    case 924u: goto L_08863760;
    case 925u: goto L_08863768;
    case 926u: goto L_0886377C;
    case 927u: goto L_08863784;
    case 928u: goto L_08863794;
    case 929u: goto L_088637A0;
    case 930u: goto L_088637B0;
    case 931u: goto L_088637BC;
    case 932u: goto L_088637CC;
    case 933u: goto L_088637D4;
    case 934u: goto L_088637DC;
    case 935u: goto L_088637E4;
    case 936u: goto L_088637F4;
    case 937u: goto L_088637FC;
    case 938u: goto L_0886380C;
    case 939u: goto L_08863820;
    case 940u: goto L_08863830;
    case 941u: goto L_0886383C;
    case 942u: goto L_08863850;
    case 943u: goto L_08863858;
    case 944u: goto L_08863878;
    case 945u: goto L_08863888;
    case 946u: goto L_08863894;
    case 947u: goto L_088638A8;
    case 948u: goto L_088638B4;
    case 949u: goto L_088638C8;
    case 950u: goto L_088638E0;
    case 951u: goto L_088638F0;
    case 952u: goto L_088638FC;
    case 953u: goto L_0886390C;
    case 954u: goto L_08863918;
    case 955u: goto L_0886393C;
    case 956u: goto L_08863948;
    case 957u: goto L_08863958;
    case 958u: goto L_08863960;
    case 959u: goto L_08863968;
    case 960u: goto L_08863988;
    case 961u: goto L_08863990;
    case 962u: goto L_08863994;
    case 963u: goto L_0886399C;
    case 964u: goto L_088639AC;
    case 965u: goto L_088639C0;
    case 966u: goto L_088639CC;
    case 967u: goto L_088639DC;
    case 968u: goto L_088639E0;
    case 969u: goto L_088639E8;
    case 970u: goto L_088639F0;
    case 971u: goto L_08863A00;
    case 972u: goto L_08863A18;
    case 973u: goto L_08863A2C;
    case 974u: goto L_08863A30;
    case 975u: goto L_08863A38;
    case 976u: goto L_08863A48;
    case 977u: goto L_08863A50;
    case 978u: goto L_08863A58;
    case 979u: goto L_08863A64;
    case 980u: goto L_08863A78;
    case 981u: goto L_08863A84;
    case 982u: goto L_08863A8C;
    case 983u: goto L_08863A94;
    case 984u: goto L_08863AA0;
    case 985u: goto L_08863AB4;
    case 986u: goto L_08863AC0;
    case 987u: goto L_08863AD8;
    case 988u: goto L_08863AE0;
    case 989u: goto L_08863AE8;
    case 990u: goto L_08863AF8;
    case 991u: goto L_08863B08;
    case 992u: goto L_08863B1C;
    case 993u: goto L_08863B34;
    case 994u: goto L_08863B38;
    case 995u: goto L_08863B40;
    case 996u: goto L_08863B60;
    case 997u: goto L_08863B70;
    case 998u: goto L_08863B78;
    case 999u: goto L_08863B80;
    case 1000u: goto L_08863B8C;
    case 1001u: goto L_08863B94;
    case 1002u: goto L_08863BA4;
    case 1003u: goto L_08863BA8;
    case 1004u: goto L_08863BB4;
    case 1005u: goto L_08863BBC;
    case 1006u: goto L_08863BC4;
    case 1007u: goto L_08863BCC;
    case 1008u: goto L_08863BD4;
    case 1009u: goto L_08863BE0;
    case 1010u: goto L_08863BF0;
    case 1011u: goto L_08863BF8;
    case 1012u: goto L_08863C04;
    case 1013u: goto L_08863C0C;
    case 1014u: goto L_08863C14;
    case 1015u: goto L_08863C28;
    case 1016u: goto L_08863C34;
    case 1017u: goto L_08863C3C;
    case 1018u: goto L_08863C40;
    case 1019u: goto L_08863C50;
    case 1020u: goto L_08863C60;
    case 1021u: goto L_08863C68;
    case 1022u: goto L_08863C88;
    case 1023u: goto L_08863C90;
    case 1024u: goto L_08863C98;
    case 1025u: goto L_08863CA0;
    case 1026u: goto L_08863CC4;
    case 1027u: goto L_08863CCC;
    case 1028u: goto L_08863CD4;
    case 1029u: goto L_08863CD8;
    case 1030u: goto L_08863CE0;
    case 1031u: goto L_08863CE8;
    case 1032u: goto L_08863CF0;
    case 1033u: goto L_08863D00;
    case 1034u: goto L_08863D08;
    case 1035u: goto L_08863D20;
    case 1036u: goto L_08863D28;
    case 1037u: goto L_08863D3C;
    case 1038u: goto L_08863D54;
    case 1039u: goto L_08863D60;
    case 1040u: goto L_08863D70;
    case 1041u: goto L_08863D78;
    case 1042u: goto L_08863D80;
    case 1043u: goto L_08863D88;
    case 1044u: goto L_08863D98;
    case 1045u: goto L_08863DA0;
    case 1046u: goto L_08863DA8;
    case 1047u: goto L_08863DB4;
    case 1048u: goto L_08863DBC;
    case 1049u: goto L_08863DC4;
    case 1050u: goto L_08863DD4;
    case 1051u: goto L_08863DE0;
    case 1052u: goto L_08863DE8;
    case 1053u: goto L_08863DF0;
    case 1054u: goto L_08863DF8;
    case 1055u: goto L_08863E04;
    case 1056u: goto L_08863E0C;
    case 1057u: goto L_08863E1C;
    case 1058u: goto L_08863E28;
    case 1059u: goto L_08863E30;
    case 1060u: goto L_08863E38;
    case 1061u: goto L_08863E44;
    case 1062u: goto L_08863E64;
    case 1063u: goto L_08863E6C;
    case 1064u: goto L_08863E74;
    case 1065u: goto L_08863E7C;
    case 1066u: goto L_08863E88;
    case 1067u: goto L_08863E98;
    case 1068u: goto L_08863EA4;
    case 1069u: goto L_08863EAC;
    case 1070u: goto L_08863EC0;
    case 1071u: goto L_08863EC8;
    case 1072u: goto L_08863ED0;
    case 1073u: goto L_08863F04;
    case 1074u: goto L_08863F0C;
    case 1075u: goto L_08863F20;
    case 1076u: goto L_08863F30;
    case 1077u: goto L_08863F38;
    case 1078u: goto L_08863F50;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08860000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    goto L_08860004;
L_08860004:
    ctx.set_gpr(31, 0x0886000Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08860290;
L_0886000C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08860040;
      }
      goto L_08860014;
    }
L_08860014:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_0886001C;
L_0886001C:
    ctx.set_gpr(31, 0x08860024u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860024u) goto L_08860024;
    return;
L_08860024:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08860034;
    }
    goto L_0886002C;
L_0886002C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08860040;
      }
      goto L_08860034;
    }
L_08860034:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886001C;
      }
      goto L_08860040;
    }
L_08860040:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
        goto L_08860058;
    }
    goto L_08860050;
L_08860050:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08860100;
      }
      goto L_08860058;
    }
L_08860058:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886006Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0886006Cu) goto L_0886006C;
    return;
L_0886006C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088600FC;
      }
      goto L_0886007C;
    }
L_0886007C:
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x088600A4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x088600A4u) goto L_088600A4;
    return;
L_088600A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088600BCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x088600BCu) goto L_088600BC;
    return;
L_088600BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088600C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088600C8u) goto L_088600C8;
    return;
L_088600C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088600DCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088600DCu) goto L_088600DC;
    return;
L_088600DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088600FC;
      }
      goto L_088600E4;
    }
L_088600E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11664), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08860100;
      }
      goto L_088600FC;
    }
L_088600FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08860100;
L_08860100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0886014C;
      }
      goto L_08860144;
    }
L_08860144:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08860274;
      }
      goto L_0886014C;
    }
L_0886014C:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886015Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0886015Cu) goto L_0886015C;
    return;
L_0886015C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08860170;
    }
    goto L_08860164;
L_08860164:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08860274;
      }
      goto L_0886016C;
    }
L_0886016C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08860170;
L_08860170:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08860198;
      }
      goto L_08860178;
    }
L_08860178:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08860278;
    }
    goto L_08860184;
L_08860184:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08860190u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08860290;
L_08860190:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088601C8;
      }
      goto L_08860198;
    }
L_08860198:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_088601A0;
L_088601A0:
    ctx.set_gpr(31, 0x088601A8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088601A8u) goto L_088601A8;
    return;
L_088601A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088601BC;
    }
    goto L_088601B0;
L_088601B0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088601C8;
      }
      goto L_088601B8;
    }
L_088601B8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088601BC;
L_088601BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088601A0;
      }
      goto L_088601C8;
    }
L_088601C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
        goto L_088601E4;
    }
    goto L_088601D8;
L_088601D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860274;
      }
      goto L_088601E0;
    }
L_088601E0:
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    goto L_088601E4;
L_088601E4:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08860218u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1174u, 0x0884FD60u>(ctx, &aot_mem) && ctx.pc == 0x08860218u) goto L_08860218;
    return;
L_08860218:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860230u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08860230u) goto L_08860230;
    return;
L_08860230:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886023Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0886023Cu) goto L_0886023C;
    return;
L_0886023C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860250u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860250u) goto L_08860250;
    return;
L_08860250:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08860274;
    }
    goto L_08860258;
L_08860258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11664), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08860274;
      }
      goto L_08860270;
    }
L_08860270:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08860274;
L_08860274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08860278;
L_08860278:
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
L_08860290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08860364;
      }
      goto L_088602B8;
    }
L_088602B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08860368;
    }
    goto L_088602C4;
L_088602C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < -1 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_088602DC;
    }
    goto L_088602D0;
L_088602D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860364;
      }
      goto L_088602D8;
    }
L_088602D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_088602DC;
L_088602DC:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088602F4;
    }
    goto L_088602E4;
L_088602E4:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_088602F4;
      }
      goto L_088602F0;
    }
L_088602F0:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088602F4;
L_088602F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08860364;
      }
      goto L_08860300;
    }
L_08860300:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(17, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[2]);
    goto L_08860318;
L_08860318:
    ctx.set_gpr(31, 0x08860320u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860320u) goto L_08860320;
    return;
L_08860320:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08860354;
    }
    goto L_08860328;
L_08860328:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08860334u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08860534;
L_08860334:
    ctx.set_gpr(31, 0x0886033Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x0886033Cu) goto L_0886033C;
    return;
L_0886033C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(31, 0x08860348u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08860348u) goto L_08860348;
    return;
L_08860348:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11664), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08860354;
L_08860354:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08860318;
      }
      goto L_08860364;
    }
L_08860364:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08860368;
L_08860368:
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
L_08860384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088603B0;
      }
      goto L_088603A8;
    }
L_088603A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860428;
      }
      goto L_088603B0;
    }
L_088603B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08860428;
    }
    goto L_088603BC;
L_088603BC:
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
        goto L_088603D0;
    }
    goto L_088603C4;
L_088603C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860428;
      }
      goto L_088603D0;
    }
L_088603D0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(31, 0x088603E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088603E0u) goto L_088603E0;
    return;
L_088603E0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
        goto L_088603F0;
    }
    goto L_088603E8;
L_088603E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860428;
      }
      goto L_088603F0;
    }
L_088603F0:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(11664));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(11664)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08860408;
    }
    goto L_08860400;
L_08860400:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860428;
      }
      goto L_08860408;
    }
L_08860408:
    ctx.set_gpr(31, 0x08860410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860410u) goto L_08860410;
    return;
L_08860410:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08860420u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08860420u) goto L_08860420;
    return;
L_08860420:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08860428;
L_08860428:
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
L_08860440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08860478;
      }
      goto L_08860470;
    }
L_08860470:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860514;
      }
      goto L_08860478;
    }
L_08860478:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08860514;
    }
    goto L_08860484;
L_08860484:
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(17, ctx.gpr[16] << 2u);
        goto L_08860498;
    }
    goto L_0886048C;
L_0886048C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860514;
      }
      goto L_08860498;
    }
L_08860498:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    ctx.set_gpr(31, 0x088604A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088604A8u) goto L_088604A8;
    return;
L_088604A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
        goto L_088604B8;
    }
    goto L_088604B0;
L_088604B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860514;
      }
      goto L_088604B8;
    }
L_088604B8:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(11664));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(11664)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[20]);
        goto L_088604D0;
    }
    goto L_088604C8;
L_088604C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860514;
      }
      goto L_088604D0;
    }
L_088604D0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11300), ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(11300));
    ctx.set_gpr(31, 0x088604E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088604E0u) goto L_088604E0;
    return;
L_088604E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088604ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 456u, 0x0884D828u>(ctx, &aot_mem) && ctx.pc == 0x088604ECu) goto L_088604EC;
    return;
L_088604EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08860510;
    }
    goto L_088604F8;
L_088604F8:
    ctx.set_gpr(31, 0x08860500u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860500u) goto L_08860500;
    return;
L_08860500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0886050Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0886050Cu) goto L_0886050C;
    return;
L_0886050C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08860510;
L_08860510:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08860514;
L_08860514:
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
L_08860534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0886063C;
      }
      goto L_0886055C;
    }
L_0886055C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08860640;
    }
    goto L_08860568;
L_08860568:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < -1 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_08860580;
    }
    goto L_08860574;
L_08860574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886063C;
      }
      goto L_0886057C;
    }
L_0886057C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08860580;
L_08860580:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08860598;
    }
    goto L_08860588;
L_08860588:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08860598;
      }
      goto L_08860594;
    }
L_08860594:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08860598;
L_08860598:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0886063C;
      }
      goto L_088605A4;
    }
L_088605A4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(17, ctx.gpr[20] + ctx.gpr[3]);
    goto L_088605AC;
L_088605AC:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(11664));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11664)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08860630;
    }
    goto L_088605C0;
L_088605C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11300)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
        goto L_088605F0;
    }
    goto L_088605CC;
L_088605CC:
    ctx.set_gpr(31, 0x088605D4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088605D4u) goto L_088605D4;
    return;
L_088605D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088605E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x088605E4u) goto L_088605E4;
    return;
L_088605E4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886062C;
      }
      goto L_088605EC;
    }
L_088605EC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    goto L_088605F0;
L_088605F0:
    ctx.set_gpr(31, 0x088605F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088605F8u) goto L_088605F8;
    return;
L_088605F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11300)));
    ctx.set_gpr(31, 0x08860604u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 456u, 0x0884D828u>(ctx, &aot_mem) && ctx.pc == 0x08860604u) goto L_08860604;
    return;
L_08860604:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(11300), 0u);
        goto L_08860628;
    }
    goto L_08860610;
L_08860610:
    ctx.set_gpr(31, 0x08860618u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860618u) goto L_08860618;
    return;
L_08860618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11300)));
    ctx.set_gpr(31, 0x08860624u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08860624u) goto L_08860624;
    return;
L_08860624:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(11300), 0u);
    goto L_08860628;
L_08860628:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0886062C;
L_0886062C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08860630;
L_08860630:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088605AC;
      }
      goto L_0886063C;
    }
L_0886063C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08860640;
L_08860640:
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
L_0886065C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860684u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860684u) goto L_08860684;
    return;
L_08860684:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_088606A0;
    }
    goto L_0886068C;
L_0886068C:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_088606A0;
L_088606A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088606B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088606DCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088606DCu) goto L_088606DC;
    return;
L_088606DC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08860704;
    }
    goto L_088606E4;
L_088606E4:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08860700u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x08860700u) goto L_08860700;
    return;
L_08860700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08860704;
L_08860704:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08860744u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860744u) goto L_08860744;
    return;
L_08860744:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08860774;
    }
    goto L_0886074C;
L_0886074C:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860764u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_08860788;
L_08860764:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08860770u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 943u, 0x0884F250u>(ctx, &aot_mem) && ctx.pc == 0x08860770u) goto L_08860770;
    return;
L_08860770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08860774;
L_08860774:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860788:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 936u, 0x0884F1F8u>(ctx, &aot_mem); return;
L_08860790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088607C8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088607C8u) goto L_088607C8;
    return;
L_088607C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088607F4;
    }
    goto L_088607D0;
L_088607D0:
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088607F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 275u, 0x08850D88u>(ctx, &aot_mem) && ctx.pc == 0x088607F0u) goto L_088607F0;
    return;
L_088607F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088607F4;
L_088607F4:
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
L_0886080C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08860884;
      }
      goto L_08860840;
    }
L_08860840:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    goto L_08860848;
L_08860848:
    ctx.set_gpr(31, 0x08860850u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860850u) goto L_08860850;
    return;
L_08860850:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0886086C;
    }
    goto L_08860858;
L_08860858:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08860868u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08860868u) goto L_08860868;
    return;
L_08860868:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0886086C;
L_0886086C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 91 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08860848;
      }
      goto L_0886087C;
    }
L_0886087C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088608C0;
      }
      goto L_08860884;
    }
L_08860884:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860894u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860894u) goto L_08860894;
    return;
L_08860894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088608BC;
      }
      goto L_0886089C;
    }
L_0886089C:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088608BCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x088608BCu) goto L_088608BC;
    return;
L_088608BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088608C0;
L_088608C0:
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
L_088608DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08860954;
      }
      goto L_08860910;
    }
L_08860910:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    goto L_08860918;
L_08860918:
    ctx.set_gpr(31, 0x08860920u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860920u) goto L_08860920;
    return;
L_08860920:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0886093C;
    }
    goto L_08860928;
L_08860928:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08860938u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_088609AC;
L_08860938:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0886093C;
L_0886093C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 91 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08860918;
      }
      goto L_0886094C;
    }
L_0886094C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08860990;
      }
      goto L_08860954;
    }
L_08860954:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860964u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860964u) goto L_08860964;
    return;
L_08860964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886098C;
      }
      goto L_0886096C;
    }
L_0886096C:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886098Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_088609AC;
L_0886098C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08860990;
L_08860990:
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
L_088609AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
        goto L_088609E0;
    }
    goto L_088609B8;
L_088609B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
        goto L_088609D4;
    }
    goto L_088609C4;
L_088609C4:
    ctx.set_gpr(1, ctx.gpr[6] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088609DC;
      }
      goto L_088609D0;
    }
L_088609D0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_088609D4;
L_088609D4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_088609E4;
      }
      goto L_088609DC;
    }
L_088609DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_088609E0;
L_088609E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    goto L_088609E4;
L_088609E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088609EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08860A4C;
      }
      goto L_08860A10;
    }
L_08860A10:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08860A18;
L_08860A18:
    ctx.set_gpr(31, 0x08860A20u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860A20u) goto L_08860A20;
    return;
L_08860A20:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08860A34;
    }
    goto L_08860A28;
L_08860A28:
    ctx.set_gpr(31, 0x08860A30u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08860A94;
L_08860A30:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08860A34;
L_08860A34:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 91 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08860A18;
      }
      goto L_08860A44;
    }
L_08860A44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08860A80;
      }
      goto L_08860A4C;
    }
L_08860A4C:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860A5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08860A5Cu) goto L_08860A5C;
    return;
L_08860A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860A7C;
      }
      goto L_08860A64;
    }
L_08860A64:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08860A7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_08860A94;
L_08860A7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08860A80;
L_08860A80:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860A94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860AA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08860AD0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08860B1C;
L_08860AD0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08860AE8u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08860C9C;
L_08860AE8:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08860B00;
    }
    goto L_08860AF0;
L_08860AF0:
    ctx.set_gpr(31, 0x08860AF8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08860B1C;
L_08860AF8:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08860B00;
L_08860B00:
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
L_08860B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08860B2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08860B3C;
L_08860B2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860B3C:
    // nop
    goto L_08860BD0;
L_08860B44:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860B54:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(540));
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
        goto L_08860B7C;
    }
    goto L_08860B74;
L_08860B74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860B80;
      }
      goto L_08860B7C;
    }
L_08860B7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08860B80;
L_08860B80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(552)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
        goto L_08860BA0;
    }
    goto L_08860B98;
L_08860B98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860BA4;
      }
      goto L_08860BA0;
    }
L_08860BA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08860BA4;
L_08860BA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860BAC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(556), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08860BC4;
    }
    goto L_08860BBC;
L_08860BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08860BC8;
      }
      goto L_08860BC4;
    }
L_08860BC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08860BC8;
L_08860BC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08860C2C;
      }
      goto L_08860BDC;
    }
L_08860BDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
        goto L_08860C28;
    }
    goto L_08860BE8;
L_08860BE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08860C20;
    }
    goto L_08860BF4;
L_08860BF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
        goto L_08860C18;
    }
    goto L_08860C00;
L_08860C00:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08860C10;
    }
    goto L_08860C08;
L_08860C08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08860C38;
      }
      goto L_08860C10;
    }
L_08860C10:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    goto L_08860C18;
L_08860C18:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08860C20;
L_08860C20:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    goto L_08860C28;
L_08860C28:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08860C2C;
L_08860C2C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08860C38;
L_08860C38:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9999));
    (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 915u, 0x0885B7D8u>(ctx, &aot_mem); return;
L_08860C44:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860C54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08860C7Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9999));
    goto L_08862AD8;
L_08860C7C:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860C9C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    goto L_08860C54;
L_08860CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08860CD0;
L_08860CD0:
    ctx.set_gpr(31, 0x08860CD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08860D18;
L_08860CD8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08860CF0;
    }
    goto L_08860CE8;
L_08860CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08860CFC;
      }
      goto L_08860CF0;
    }
L_08860CF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08860CD0;
      }
      goto L_08860CFC;
    }
L_08860CFC:
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
L_08860D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08860D28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08860B3C;
L_08860D28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08860D58;
L_08860D58:
    ctx.set_gpr(31, 0x08860D60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08860B1C;
L_08860D60:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08860D78;
    }
    goto L_08860D70;
L_08860D70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08860D84;
      }
      goto L_08860D78;
    }
L_08860D78:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08860D58;
      }
      goto L_08860D84;
    }
L_08860D84:
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
L_08860DA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08860DC0;
L_08860DC0:
    ctx.set_gpr(31, 0x08860DC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08860E08;
L_08860DC8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08860DE0;
    }
    goto L_08860DD8;
L_08860DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08860DEC;
      }
      goto L_08860DE0;
    }
L_08860DE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08860DC0;
      }
      goto L_08860DEC;
    }
L_08860DEC:
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
L_08860E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08860E18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08860E28;
L_08860E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860E28:
    // nop
    goto L_08860C44;
L_08860E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08860E50;
L_08860E50:
    ctx.set_gpr(31, 0x08860E58u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x08860E58u) goto L_08860E58;
    return;
L_08860E58:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08860E50;
      }
      goto L_08860E6C;
    }
L_08860E6C:
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
L_08860E88:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08860EB4u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08860E88;
L_08860EB4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08860EC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08860BD0;
L_08860EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08860EE4u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08860E88;
L_08860EE4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08860EF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08860C44;
L_08860EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08860F14u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08860F6C;
L_08860F14:
    ctx.set_gpr(31, 0x08860F1Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08861084;
L_08860F1C:
    ctx.set_gpr(31, 0x08860F24u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088610B4;
L_08860F24:
    ctx.set_gpr(31, 0x08860F2Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088610F8;
L_08860F2C:
    ctx.set_gpr(31, 0x08860F34u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088611C4;
L_08860F34:
    ctx.set_gpr(31, 0x08860F3Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088612E0;
L_08860F3C:
    ctx.set_gpr(31, 0x08860F44u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088613B4;
L_08860F44:
    ctx.set_gpr(31, 0x08860F4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886150C;
L_08860F4C:
    ctx.set_gpr(31, 0x08860F54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088615E0;
L_08860F54:
    ctx.set_gpr(31, 0x08860F5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088616B4;
L_08860F5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860F6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(70));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08860FB8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08B0E0B4u;
    return;
L_08860FB8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] | 16960u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08860FD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08860FD8u) goto L_08860FD8;
    return;
L_08860FD8:
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(838) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 15u << 16u);
        goto L_08861034;
    }
    goto L_08861004;
L_08861004:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(839) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 12457u << 16u);
        goto L_08861028;
    }
    goto L_08861010;
L_08861010:
    ctx.set_gpr(2, 12457u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 24001u);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861030;
      }
      goto L_08861024;
    }
L_08861024:
    ctx.set_gpr(2, 12457u << 16u);
    goto L_08861028;
L_08861028:
    ctx.set_gpr(4, ctx.gpr[2] | 24000u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(838));
    goto L_08861030;
L_08861030:
    ctx.set_gpr(2, 15u << 16u);
    goto L_08861034;
L_08861034:
    ctx.set_gpr(6, ctx.gpr[2] | 16960u);
    ctx.set_gpr(31, 0x08861040u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x08861040u) goto L_08861040;
    return;
L_08861040:
    ctx.set_gpr(1, 54u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, ctx.gpr[1] | 61056u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[1] ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
        goto L_08861064;
    }
    goto L_08861058;
L_08861058:
    ctx.set_gpr(3, 54u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 61055u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08861064;
L_08861064:
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
L_08861084:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08861098;
L_08861098:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088610B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_088610CC;
L_088610CC:
    ctx.set_gpr(31, 0x088610D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 236u, 0x0884902Cu>(ctx, &aot_mem) && ctx.pc == 0x088610D4u) goto L_088610D4;
    return;
L_088610D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1680));
      if (branch_taken) {
          goto L_088610CC;
      }
      goto L_088610E4;
    }
L_088610E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088610F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19032));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(175));
    goto L_08861120;
L_08861120:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861120;
      }
      goto L_08861138;
    }
L_08861138:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27768));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886114Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0886114Cu) goto L_0886114C;
    return;
L_0886114C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08861154;
L_08861154:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861164u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088611A0;
L_08861164:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861154;
      }
      goto L_08861174;
    }
L_08861174:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27790));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861188u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861188u) goto L_08861188;
    return;
L_08861188:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088611A0:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27768));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(27790));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(176));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32760));
    goto L_08861B40;
L_088611C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19208));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(175));
    goto L_088611EC;
L_088611EC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088611EC;
      }
      goto L_08861204;
    }
L_08861204:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27812));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861218u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861218u) goto L_08861218;
    return;
L_08861218:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08861220;
L_08861220:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08861234u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088612B0;
L_08861234:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861220;
      }
      goto L_08861244;
    }
L_08861244:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19384));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    goto L_08861254;
L_08861254:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861254;
      }
      goto L_0886126C;
    }
L_0886126C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(122));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08861274;
L_08861274:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08861288u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088612B0;
L_08861288:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861274;
      }
      goto L_08861298;
    }
L_08861298:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088612B0:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27812));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(176));
    goto L_08861AAC;
L_088612E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19440));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    goto L_08861308;
L_08861308:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08861308;
      }
      goto L_08861328;
    }
L_08861328:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27856));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886133Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0886133Cu) goto L_0886133C;
    return;
L_0886133C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08861344;
L_08861344:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861354u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08861390;
L_08861354:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861344;
      }
      goto L_08861364;
    }
L_08861364:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27861));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861378u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861378u) goto L_08861378;
    return;
L_08861378:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861390:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27856));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(27861));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32760));
    goto L_08861B40;
L_088613B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19476));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    goto L_088613E4;
L_088613E4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088613E4;
      }
      goto L_08861404;
    }
L_08861404:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19512));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    goto L_08861414;
L_08861414:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08861414;
      }
      goto L_08861434;
    }
L_08861434:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08861450;
      }
      goto L_08861440;
    }
L_08861440:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861440;
      }
      goto L_08861450;
    }
L_08861450:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27866));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861464u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861464u) goto L_08861464;
    return;
L_08861464:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08861474;
L_08861474:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08861488u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_088614E8;
L_08861488:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0886149Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088614E8;
L_0886149C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088614B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_088614E8;
L_088614B0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 36 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861474;
      }
      goto L_088614C8;
    }
L_088614C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088614E8:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27866));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    goto L_08861AAC;
L_0886150C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19548));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    goto L_08861534;
L_08861534:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08861534;
      }
      goto L_08861554;
    }
L_08861554:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27881));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861568u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861568u) goto L_08861568;
    return;
L_08861568:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08861570;
L_08861570:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861580u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088615BC;
L_08861580:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861570;
      }
      goto L_08861590;
    }
L_08861590:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27883));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088615A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088615A4u) goto L_088615A4;
    return;
L_088615A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088615BC:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27881));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(27883));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32760));
    goto L_08861B40;
L_088615E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19564));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(99));
    goto L_08861608;
L_08861608:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08861608;
      }
      goto L_08861628;
    }
L_08861628:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27885));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886163Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0886163Cu) goto L_0886163C;
    return;
L_0886163C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08861644;
L_08861644:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861654u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08861690;
L_08861654:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 198 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861644;
      }
      goto L_08861664;
    }
L_08861664:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(27910));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08861678u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08861678u) goto L_08861678;
    return;
L_08861678:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861690:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(27885));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(27910));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32760));
    goto L_08861B40;
L_088616B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(27935));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19764));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088616E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088616E8u) goto L_088616E8;
    return;
L_088616E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] & 255u);
    ctx.set_gpr(31, 0x088616F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 877u, 0x0885B554u>(ctx, &aot_mem) && ctx.pc == 0x088616F8u) goto L_088616F8;
    return;
L_088616F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886170C:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27885));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(200));
    goto L_08861BE8;
L_08861720:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08861738u);
    // nop
    goto L_088611A0;
L_08861738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861748:
    // nop
    goto L_08861750;
L_08861750:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27790));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(176));
    goto L_08861AAC;
L_08861768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08861794u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08862AB8;
L_08861794:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
        goto L_088617B0;
    }
    goto L_0886179C;
L_0886179C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088617A8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08861804;
L_088617A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088617D4;
      }
      goto L_088617B0;
    }
L_088617B0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088617BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    goto L_08862AB8;
L_088617BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_088617D8;
    }
    goto L_088617C4;
L_088617C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(31, 0x088617D0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088617F0;
L_088617D0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_088617D4;
L_088617D4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088617D8;
L_088617D8:
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
L_088617F0:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27881));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    goto L_08861BE8;
L_08861804:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27856));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    goto L_08861BE8;
L_08861818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08861844u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08862AB8;
L_08861844:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
        goto L_08861860;
    }
    goto L_0886184C;
L_0886184C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08861858u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_088618B4;
L_08861858:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08861884;
      }
      goto L_08861860;
    }
L_08861860:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886186Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    goto L_08862AB8;
L_0886186C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08861888;
    }
    goto L_08861874;
L_08861874:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(31, 0x08861880u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088618A0;
L_08861880:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08861884;
L_08861884:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08861888;
L_08861888:
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
L_088618A0:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27883));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    goto L_08861BE8;
L_088618B4:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27861));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    goto L_08861BE8;
L_088618C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088618F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    goto L_08862AB8;
L_088618F4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
        goto L_08861914;
    }
    goto L_088618FC;
L_088618FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886190Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08861968;
L_0886190C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0886193C;
      }
      goto L_08861914;
    }
L_08861914:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08861920u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    goto L_08862AB8;
L_08861920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861938;
      }
      goto L_08861928;
    }
L_08861928:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08861938u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08861950;
L_08861938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886193C;
L_0886193C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861950:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27883));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    goto L_08861AAC;
L_08861968:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27861));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    goto L_08861AAC;
L_08861980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088619A4;
L_088619A4:
    ctx.set_gpr(31, 0x088619ACu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08861804;
L_088619AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088619BC;
    }
    goto L_088619B4;
L_088619B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088619BC;
L_088619BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_088619A4;
    }
    goto L_088619C8;
L_088619C8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088619D0;
L_088619D0:
    ctx.set_gpr(31, 0x088619D8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_088617F0;
L_088619D8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088619E8;
    }
    goto L_088619E0;
L_088619E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088619E8;
L_088619E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 14 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_088619D0;
    }
    goto L_088619F4;
L_088619F4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16952u << 16u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861A2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08861A40;
      }
      goto L_08861A38;
    }
L_08861A38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861A60;
      }
      goto L_08861A40;
    }
L_08861A40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
        goto L_08861A54;
    }
    goto L_08861A4C;
L_08861A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08861A60;
      }
      goto L_08861A54;
    }
L_08861A54:
    ctx.set_gpr(31, 0x08861A5Cu);
    // nop
    goto L_08861768;
L_08861A5C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08861A60;
L_08861A60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08861A80;
      }
      goto L_08861A78;
    }
L_08861A78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08861AA0;
      }
      goto L_08861A80;
    }
L_08861A80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
        goto L_08861A94;
    }
    goto L_08861A8C;
L_08861A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08861AA0;
      }
      goto L_08861A94;
    }
L_08861A94:
    ctx.set_gpr(31, 0x08861A9Cu);
    // nop
    goto L_08861818;
L_08861A9C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08861AA0;
L_08861AA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861AAC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08861AC0;
    }
    goto L_08861AB8;
L_08861AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08861B38;
      }
      goto L_08861AC0;
    }
L_08861AC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08861AD0;
      }
      goto L_08861AC8;
    }
L_08861AC8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08861AD0;
L_08861AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(8, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08861AE4;
      }
      goto L_08861AD8;
    }
L_08861AD8:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
        goto L_08861AE8;
    }
    goto L_08861AE0;
L_08861AE0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    goto L_08861AE4;
L_08861AE4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08861AE8;
L_08861AE8:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[6] << (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08861B20;
      }
      goto L_08861AF4;
    }
L_08861AF4:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08861B10;
    }
    goto L_08861B08;
L_08861B08:
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08861B10;
L_08861B10:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08861B38;
      }
      goto L_08861B20;
    }
L_08861B20:
    ctx.set_gpr(3, ~(ctx.gpr[4] | 0u));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08861B38;
L_08861B38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861B40:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08861B54;
    }
    goto L_08861B4C;
L_08861B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08861BE0;
      }
      goto L_08861B54;
    }
L_08861B54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08861B64;
      }
      goto L_08861B5C;
    }
L_08861B5C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08861B64;
L_08861B64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(6, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08861B78;
      }
      goto L_08861B6C;
    }
L_08861B6C:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08861B7C;
    }
    goto L_08861B74;
L_08861B74:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08861B78;
L_08861B78:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08861B7C;
L_08861B7C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[4] << (ctx.gpr[6] & 31u));
      if (branch_taken) {
          goto L_08861BC8;
      }
      goto L_08861B88;
    }
L_08861B88:
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
        goto L_08861BB8;
    }
    goto L_08861B9C;
L_08861B9C:
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08861BB8;
L_08861BB8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08861BE0;
      }
      goto L_08861BC8;
    }
L_08861BC8:
    ctx.set_gpr(3, ~(ctx.gpr[9] | 0u));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08861BE0;
L_08861BE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861BE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08861BFC;
    }
    goto L_08861BF4;
L_08861BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08861C40;
      }
      goto L_08861BFC;
    }
L_08861BFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(5, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08861C10;
      }
      goto L_08861C04;
    }
L_08861C04:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08861C14;
    }
    goto L_08861C0C;
L_08861C0C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08861C10;
L_08861C10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08861C14;
L_08861C14:
    ctx.set_gpr(5, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08861C28;
      }
      goto L_08861C20;
    }
L_08861C20:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08861C28;
L_08861C28:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861C40;
      }
      goto L_08861C3C;
    }
L_08861C3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08861C40;
L_08861C40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861C48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08861C88;
      }
      goto L_08861C7C;
    }
L_08861C7C:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08861CF8;
      }
      goto L_08861C88;
    }
L_08861C88:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08861CCC;
      }
      goto L_08861CA0;
    }
L_08861CA0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08861CA4;
L_08861CA4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08861CB0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08861BE8;
L_08861CB0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08861CC0;
    }
    goto L_08861CB8;
L_08861CB8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08861CC0;
L_08861CC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08861CA4;
    }
    goto L_08861CCC;
L_08861CCC:
    if (ctx.gpr[19] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
        goto L_08861CDC;
    }
    goto L_08861CD4;
L_08861CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08861CF8;
      }
      goto L_08861CDC;
    }
L_08861CDC:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08861CF8;
L_08861CF8:
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
L_08861D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08861D30u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08861E74;
L_08861D30:
    ctx.set_gpr(31, 0x08861D38u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 213u, 0x08848DA4u>(ctx, &aot_mem) && ctx.pc == 0x08861D38u) goto L_08861D38;
    return;
L_08861D38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861D48:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861D50:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861D58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08861D70;
    }
    goto L_08861D68;
L_08861D68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861D94;
      }
      goto L_08861D70;
    }
L_08861D70:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08861D80;
    }
    goto L_08861D78;
L_08861D78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861D94;
      }
      goto L_08861D80;
    }
L_08861D80:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] ^ 7u);
        goto L_08861D90;
    }
    goto L_08861D88;
L_08861D88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861D94;
      }
      goto L_08861D90;
    }
L_08861D90:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08861D94;
L_08861D94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861D9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] ^ 5u);
        goto L_08861DB4;
    }
    goto L_08861DAC;
L_08861DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861DB8;
      }
      goto L_08861DB4;
    }
L_08861DB4:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08861DB8;
L_08861DB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08861E50;
      }
      goto L_08861DD8;
    }
L_08861DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08861E54;
    }
    goto L_08861DE4;
L_08861DE4:
    ctx.set_gpr(31, 0x08861DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08861DECu) goto L_08861DEC;
    return;
L_08861DEC:
    ctx.set_gpr(31, 0x08861DF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08861DF4u) goto L_08861DF4;
    return;
L_08861DF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(19232));
    ctx.set_gpr(31, 0x08861E00u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08861E6C;
L_08861E00:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08861E14;
    }
    goto L_08861E08;
L_08861E08:
    ctx.set_gpr(31, 0x08861E10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 39u, 0x08A7C2ACu>(ctx, &aot_mem) && ctx.pc == 0x08861E10u) goto L_08861E10;
    return;
L_08861E10:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08861E14;
L_08861E14:
    ctx.set_gpr(31, 0x08861E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08861E1Cu) goto L_08861E1C;
    return;
L_08861E1C:
    ctx.set_gpr(31, 0x08861E24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08861E24u) goto L_08861E24;
    return;
L_08861E24:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 11728u);
    ctx.set_gpr(31, 0x08861E34u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08861E64;
L_08861E34:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
        goto L_08861E48;
    }
    goto L_08861E3C;
L_08861E3C:
    ctx.set_gpr(31, 0x08861E44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1081u, 0x08A93B10u>(ctx, &aot_mem) && ctx.pc == 0x08861E44u) goto L_08861E44;
    return;
L_08861E44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08861E48;
L_08861E48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861E54;
      }
      goto L_08861E50;
    }
L_08861E50:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08861E54;
L_08861E54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861E64:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08861E6C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08861E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08861ED8;
    }
    goto L_08861E90;
L_08861E90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861ED4;
      }
      goto L_08861E9C;
    }
L_08861E9C:
    ctx.set_gpr(31, 0x08861EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 326u, 0x08A7D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08861EA4u) goto L_08861EA4;
    return;
L_08861EA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08861EB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 113u, 0x08A7C74Cu>(ctx, &aot_mem) && ctx.pc == 0x08861EB0u) goto L_08861EB0;
    return;
L_08861EB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x08861EBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 37u, 0x08A9434Cu>(ctx, &aot_mem) && ctx.pc == 0x08861EBCu) goto L_08861EBC;
    return;
L_08861EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08861EC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 13u, 0x08A940E8u>(ctx, &aot_mem) && ctx.pc == 0x08861EC8u) goto L_08861EC8;
    return;
L_08861EC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08861ED8;
      }
      goto L_08861ED4;
    }
L_08861ED4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08861ED8;
L_08861ED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861EE8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861EF0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08861F0Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.pc = 0x08B0E0B4u;
    return;
L_08861F0C:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08861F18u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08861F18u) goto L_08861F18;
    return;
L_08861F18:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861F28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861F3C;
L_08861F28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861F3C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4808), ctx.gpr[6]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4804), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861F58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08861F8Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_088611A0;
L_08861F8C:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(77));
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(104));
    goto L_08861F98;
L_08861F98:
    if (ctx.gpr[20] != ctx.gpr[17]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08861FCC;
    }
    goto L_08861FA0;
L_08861FA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(181));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861FB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(197));
    goto L_08862A98;
L_08861FB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861FC8;
      }
      goto L_08861FB8;
    }
L_08861FB8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08861FC8u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_0886205C;
L_08861FC8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08861FCC;
L_08861FCC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 94 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861F98;
      }
      goto L_08861FD8;
    }
L_08861FD8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08862000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886201Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08861390;
L_0886201C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08862038;
    }
    goto L_08862028;
L_08862028:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862034u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0886204C;
L_08862034:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08862038;
L_08862038:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886204C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4684), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886205C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0886206Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    goto L_08861690;
L_0886206C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886207C:
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
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088620BCu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x088620BCu) goto L_088620BC;
    return;
L_088620BC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088620C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x088620C8u) goto L_088620C8;
    return;
L_088620C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088620DCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08860AA8;
L_088620DC:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088620F4u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    goto L_08862140;
L_088620F4:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0886210C;
    }
    goto L_088620FC;
L_088620FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08862108u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08862130;
L_08862108:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886210C;
L_0886210C:
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
L_08862130:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4683), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0886215Cu);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    goto L_08862180;
L_0886215C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886216Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08860C9C;
L_0886216C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862180:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19768));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    goto L_088621AC;
L_088621AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088621AC;
      }
      goto L_088621C4;
    }
L_088621C4:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088621D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08862204u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(19980));
    goto L_08862A78;
L_08862204:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
        goto L_0886221C;
    }
    goto L_0886220C;
L_0886220C:
    ctx.set_gpr(31, 0x08862214u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088622C0;
L_08862214:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088622A8;
      }
      goto L_0886221C;
    }
L_0886221C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862228u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    goto L_08862A78;
L_08862228:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(68));
        goto L_08862240;
    }
    goto L_08862230;
L_08862230:
    ctx.set_gpr(31, 0x08862238u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    goto L_08862350;
L_08862238:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088622A8;
      }
      goto L_08862240;
    }
L_08862240:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886224Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    goto L_08862A78;
L_0886224C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(94));
        goto L_08862264;
    }
    goto L_08862254;
L_08862254:
    ctx.set_gpr(31, 0x0886225Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-68));
    goto L_08862398;
L_0886225C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088622A8;
      }
      goto L_08862264;
    }
L_08862264:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862270u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(121));
    goto L_08862A78;
L_08862270:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(122));
        goto L_08862288;
    }
    goto L_08862278;
L_08862278:
    ctx.set_gpr(31, 0x08862280u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-94));
    goto L_088623E0;
L_08862280:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088622A8;
      }
      goto L_08862288;
    }
L_08862288:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862294u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(174));
    goto L_08862A78;
L_08862294:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_088622AC;
    }
    goto L_0886229C;
L_0886229C:
    ctx.set_gpr(31, 0x088622A4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-122));
    goto L_088624B4;
L_088622A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088622A8;
L_088622A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088622AC;
L_088622AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088622C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20188)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21168));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    goto L_08862364;
L_08862364:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862364;
      }
      goto L_08862384;
    }
L_08862384:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    goto L_088623AC;
L_088623AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088623AC;
      }
      goto L_088623CC;
    }
L_088623CC:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088623E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22524));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    goto L_088623F4;
L_088623F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088623F4;
      }
      goto L_08862414;
    }
L_08862414:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08862438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08862438u) goto L_08862438;
    return;
L_08862438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22656)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22660)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08862474;
      }
      goto L_0886246C;
    }
L_0886246C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08862490;
      }
      goto L_08862474;
    }
L_08862474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
        goto L_08862488;
    }
    goto L_08862480;
L_08862480:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08862490;
      }
      goto L_08862488;
    }
L_08862488:
    ctx.set_gpr(31, 0x08862490u);
    // nop
    goto L_0886249C;
L_08862490:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886249C:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16776));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088624B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23400));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    goto L_088624C8;
L_088624C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088624C8;
      }
      goto L_088624E0;
    }
L_088624E0:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088624F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23636)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23644)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23648));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    goto L_08862544;
L_08862544:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862544;
      }
      goto L_08862564;
    }
L_08862564:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23792));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    goto L_0886258C;
L_0886258C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886258C;
      }
      goto L_088625AC;
    }
L_088625AC:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088625C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23936));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    goto L_088625D4;
L_088625D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088625D4;
      }
      goto L_088625F4;
    }
L_088625F4:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-3408));
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24612));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(424));
    goto L_08862620;
L_08862620:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_08862640;
    }
L_08862640:
    ctx.set_gpr(2, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08862654u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08862654u) goto L_08862654;
    return;
L_08862654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(3408));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28004));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    goto L_08862694;
L_08862694:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862694;
      }
      goto L_088626B4;
    }
L_088626B4:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28084));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(58));
    goto L_088626C4;
L_088626C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088626C4;
      }
      goto L_088626E4;
    }
L_088626E4:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28548));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(26));
    goto L_088626F4;
L_088626F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088626F4;
      }
      goto L_08862714;
    }
L_08862714:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28756));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(28));
    goto L_08862724;
L_08862724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862724;
      }
      goto L_08862744;
    }
L_08862744:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862754u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08862A78;
L_08862754:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
        goto L_0886276C;
    }
    goto L_0886275C;
L_0886275C:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(912));
      if (branch_taken) {
          goto L_088627E0;
      }
      goto L_0886276C;
    }
L_0886276C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08862778u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    goto L_08862A78;
L_08862778:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(68));
        goto L_08862794;
    }
    goto L_08862780;
L_08862780:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_088627E0;
      }
      goto L_08862794;
    }
L_08862794:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088627A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    goto L_08862A78;
L_088627A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(94));
        goto L_088627BC;
    }
    goto L_088627A8;
L_088627A8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-68));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_088627E0;
      }
      goto L_088627BC;
    }
L_088627BC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088627C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(121));
    goto L_08862A78;
L_088627C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088627E0;
      }
      goto L_088627D0;
    }
L_088627D0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-94));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_088627E0;
L_088627E0:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_088627F0;
    }
    goto L_088627E8;
L_088627E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08862800;
      }
      goto L_088627F0;
    }
L_088627F0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088627FCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088627FCu) goto L_088627FC;
    return;
L_088627FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08862800;
L_08862800:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(992));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(28980));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    goto L_0886282C;
L_0886282C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886282C;
      }
      goto L_0886284C;
    }
L_0886284C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    goto L_08862874;
L_08862874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862874;
      }
      goto L_08862894;
    }
L_08862894:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088628A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29308));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    goto L_088628BC;
L_088628BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088628BC;
      }
      goto L_088628D4;
    }
L_088628D4:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088628E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29520));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    goto L_088628FC;
L_088628FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088628FC;
      }
      goto L_0886291C;
    }
L_0886291C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862934:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29752));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    goto L_08862948;
L_08862948:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862948;
      }
      goto L_08862968;
    }
L_08862968:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-68));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29856));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    goto L_08862994;
L_08862994:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08862994;
      }
      goto L_088629B4;
    }
L_088629B4:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-94));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088629CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    goto L_088629E0;
L_088629E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088629E0;
      }
      goto L_088629F8;
    }
L_088629F8:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30200)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862A78:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08862A8C;
    }
    goto L_08862A84;
L_08862A84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08862A90;
      }
      goto L_08862A8C;
    }
L_08862A8C:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08862A90;
L_08862A90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862A98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08862AAC;
    }
    goto L_08862AA4;
L_08862AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08862AB0;
      }
      goto L_08862AAC;
    }
L_08862AAC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08862AB0;
L_08862AB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862AB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08862ACC;
    }
    goto L_08862AC4;
L_08862AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08862AD0;
      }
      goto L_08862ACC;
    }
L_08862ACC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08862AD0;
L_08862AD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862AD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08862AF0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    goto L_08862B20;
L_08862AF0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08862AFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08862B0C;
L_08862AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862B0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
        goto L_08862B18;
    }
    goto L_08862B18;
L_08862B18:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862B20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
        goto L_08862B2C;
    }
    goto L_08862B2C;
L_08862B2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08862B4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 942u, 0x08853CE4u>(ctx, &aot_mem) && ctx.pc == 0x08862B4Cu) goto L_08862B4C;
    return;
L_08862B4C:
    ctx.set_gpr(31, 0x08862B54u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 618u, 0x0885E49Cu>(ctx, &aot_mem) && ctx.pc == 0x08862B54u) goto L_08862B54;
    return;
L_08862B54:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(31, 0x08862B60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 991u, 0x0885FCE0u>(ctx, &aot_mem) && ctx.pc == 0x08862B60u) goto L_08862B60;
    return;
L_08862B60:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x08862B6Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 706u, 0x088A6B54u>(ctx, &aot_mem) && ctx.pc == 0x08862B6Cu) goto L_08862B6C;
    return;
L_08862B6C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15024));
    ctx.set_gpr(31, 0x08862B78u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08862D58;
L_08862B78:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(31, 0x08862B84u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x08862B84u) goto L_08862B84;
    return;
L_08862B84:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(31, 0x08862B90u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08862D4C;
L_08862B90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15112));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17672), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08862BD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08862BD4u) goto L_08862BD4;
    return;
L_08862BD4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-17623), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17352), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17348), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-17344), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15184));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17340), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08862C24u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08862C24u) goto L_08862C24;
    return;
L_08862C24:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-17460), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862C58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08862C58u) goto L_08862C58;
    return;
L_08862C58:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862C68u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08862D24;
L_08862C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862C84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08862CBC;
      }
      goto L_08862CA0;
    }
L_08862CA0:
    ctx.set_gpr(31, 0x08862CA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08862CA8u) goto L_08862CA8;
    return;
L_08862CA8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08862CC0;
    }
    goto L_08862CB4;
L_08862CB4:
    ctx.set_gpr(31, 0x08862CBCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08862CBCu) goto L_08862CBC;
    return;
L_08862CBC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08862CC0;
L_08862CC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08862D0C;
      }
      goto L_08862CF0;
    }
L_08862CF0:
    ctx.set_gpr(31, 0x08862CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 53u, 0x08AF0418u>(ctx, &aot_mem) && ctx.pc == 0x08862CF8u) goto L_08862CF8;
    return;
L_08862CF8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08862D10;
    }
    goto L_08862D04;
L_08862D04:
    ctx.set_gpr(31, 0x08862D0Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08862D0Cu) goto L_08862D0C;
    return;
L_08862D0C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08862D10;
L_08862D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08862D38u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08862D38u) goto L_08862D38;
    return;
L_08862D38:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D4C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08862D6Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08862D80;
L_08862D6C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D80:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862DB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08862E48;
      }
      goto L_08862DCC;
    }
L_08862DCC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862DDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08862C84;
L_08862DDC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862DECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08862DECu) goto L_08862DEC;
    return;
L_08862DEC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15024));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862DFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08862CD4;
L_08862DFC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862E0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 708u, 0x088A6B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08862E0Cu) goto L_08862E0C;
    return;
L_08862E0C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08862E1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 997u, 0x0885FD98u>(ctx, &aot_mem) && ctx.pc == 0x08862E1Cu) goto L_08862E1C;
    return;
L_08862E1C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32208));
    ctx.set_gpr(31, 0x08862E28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 626u, 0x0885E5ACu>(ctx, &aot_mem) && ctx.pc == 0x08862E28u) goto L_08862E28;
    return;
L_08862E28:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08862E34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 948u, 0x08853D90u>(ctx, &aot_mem) && ctx.pc == 0x08862E34u) goto L_08862E34;
    return;
L_08862E34:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08862E4C;
    }
    goto L_08862E40;
L_08862E40:
    ctx.set_gpr(31, 0x08862E48u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08862E60;
L_08862E48:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08862E4C;
L_08862E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862E60:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08862E68:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08862E98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08862E98u) goto L_08862E98;
    return;
L_08862E98:
    ctx.set_gpr(31, 0x08862EA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08862EA0u) goto L_08862EA0;
    return;
L_08862EA0:
    ctx.set_gpr(31, 0x08862EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08862EA8u) goto L_08862EA8;
    return;
L_08862EA8:
    ctx.set_gpr(31, 0x08862EB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861EF0;
L_08862EB0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30232)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30256)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08862F3C;
    }
    goto L_08862F20;
L_08862F20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F38;
      }
      goto L_08862F2C;
    }
L_08862F2C:
    ctx.set_gpr(31, 0x08862F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08862F34u) goto L_08862F34;
    return;
L_08862F34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08862F38;
L_08862F38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08862F3C;
L_08862F3C:
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 15u, 0x0886415Cu>(ctx, &aot_mem); return;
    }
    goto L_08862F48;
L_08862F48:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8984));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862F64:
    ctx.set_gpr(31, 0x08862F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08862F6Cu) goto L_08862F6C;
    return;
L_08862F6C:
    ctx.set_gpr(31, 0x08862F74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D58;
L_08862F74:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08862FA8;
    }
    goto L_08862F80;
L_08862F80:
    ctx.set_gpr(31, 0x08862F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08862F88u) goto L_08862F88;
    return;
L_08862F88:
    ctx.set_gpr(31, 0x08862F90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 730u, 0x08857818u>(ctx, &aot_mem) && ctx.pc == 0x08862F90u) goto L_08862F90;
    return;
L_08862F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08862F98;
    }
L_08862F98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08862FA8;
    }
L_08862FA8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08862FB0;
L_08862FB0:
    ctx.set_gpr(31, 0x08862FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08862FB8u) goto L_08862FB8;
    return;
L_08862FB8:
    ctx.set_gpr(31, 0x08862FC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08862FC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08863030;
    }
    goto L_08862FCC;
L_08862FCC:
    ctx.set_gpr(31, 0x08862FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08862FD4u) goto L_08862FD4;
    return;
L_08862FD4:
    ctx.set_gpr(31, 0x08862FDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 30u, 0x08864244u>(ctx, &aot_mem) && ctx.pc == 0x08862FDCu) goto L_08862FDC;
    return;
L_08862FDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08863024;
      }
      goto L_08862FEC;
    }
L_08862FEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
        goto L_08863028;
    }
    goto L_08862FF8;
L_08862FF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
        goto L_0886301C;
    }
    goto L_08863004;
L_08863004:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08863018;
      }
      goto L_08863010;
    }
L_08863010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863034;
      }
      goto L_08863018;
    }
L_08863018:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    goto L_0886301C;
L_0886301C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08863034;
      }
      goto L_08863024;
    }
L_08863024:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    goto L_08863028;
L_08863028:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08863034;
      }
      goto L_08863030;
    }
L_08863030:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08863034;
L_08863034:
    ctx.set_gpr(31, 0x0886303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0886303Cu) goto L_0886303C;
    return;
L_0886303C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0886304Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17732), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886304Cu) goto L_0886304C;
    return;
L_0886304C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0886305Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 29u, 0x08864238u>(ctx, &aot_mem) && ctx.pc == 0x0886305Cu) goto L_0886305C;
    return;
L_0886305C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886306C;
    }
L_0886306C:
    ctx.set_gpr(31, 0x08863074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863074u) goto L_08863074;
    return;
L_08863074:
    ctx.set_gpr(31, 0x0886307Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_0886307C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_088630DC;
    }
    goto L_08863088;
L_08863088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08863094u);
    ctx.set_gpr(17, 0u | 47820u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08863094u) goto L_08863094;
    return;
L_08863094:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17716), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088630B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088630B8u) goto L_088630B8;
    return;
L_088630B8:
    ctx.set_gpr(31, 0x088630C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x088630C0u) goto L_088630C0;
    return;
L_088630C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088630D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088630D4u) goto L_088630D4;
    return;
L_088630D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08863178;
      }
      goto L_088630DC;
    }
L_088630DC:
    ctx.set_gpr(31, 0x088630E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x08864230u>(ctx, &aot_mem) && ctx.pc == 0x088630E4u) goto L_088630E4;
    return;
L_088630E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_0886311C;
    }
    goto L_088630F0;
L_088630F0:
    ctx.set_gpr(31, 0x088630F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088630F8u) goto L_088630F8;
    return;
L_088630F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863104u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08863104u) goto L_08863104;
    return;
L_08863104:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u | 47820u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17716), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08863134;
      }
      goto L_0886311C;
    }
L_0886311C:
    ctx.set_gpr(31, 0x08863124u);
    ctx.set_gpr(17, 0u | 47820u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08863124u) goto L_08863124;
    return;
L_08863124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17716), ctx.gpr[3]);
    goto L_08863134;
L_08863134:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08863148u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08863148u) goto L_08863148;
    return;
L_08863148:
    ctx.set_gpr(31, 0x08863150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863150u) goto L_08863150;
    return;
L_08863150:
    ctx.set_gpr(31, 0x08863158u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861EE8;
L_08863158:
    ctx.set_gpr(31, 0x08863160u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 26u, 0x08864210u>(ctx, &aot_mem) && ctx.pc == 0x08863160u) goto L_08863160;
    return;
L_08863160:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08863174u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08863174u) goto L_08863174;
    return;
L_08863174:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    goto L_08863178;
L_08863178:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088631B4;
      }
      goto L_08863188;
    }
L_08863188:
    ctx.set_gpr(31, 0x08863190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08863190u) goto L_08863190;
    return;
L_08863190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088631ACu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 323u, 0x08AB1304u>(ctx, &aot_mem) && ctx.pc == 0x088631ACu) goto L_088631AC;
    return;
L_088631AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088631D8;
      }
      goto L_088631B4;
    }
L_088631B4:
    ctx.set_gpr(31, 0x088631BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088631BCu) goto L_088631BC;
    return;
L_088631BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088631D8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 323u, 0x08AB1304u>(ctx, &aot_mem) && ctx.pc == 0x088631D8u) goto L_088631D8;
    return;
L_088631D8:
    ctx.set_gpr(31, 0x088631E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088631E0u) goto L_088631E0;
    return;
L_088631E0:
    ctx.set_gpr(31, 0x088631E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_088631E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863224;
      }
      goto L_088631F4;
    }
L_088631F4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(952)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17668), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08863224;
      }
      goto L_08863210;
    }
L_08863210:
    ctx.set_gpr(31, 0x08863218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08863218u) goto L_08863218;
    return;
L_08863218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863224u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08863224u) goto L_08863224;
    return;
L_08863224:
    ctx.set_gpr(31, 0x0886322Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886322Cu) goto L_0886322C;
    return;
L_0886322C:
    ctx.set_gpr(31, 0x08863234u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863234:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08863348;
    }
    goto L_08863240;
L_08863240:
    ctx.set_gpr(31, 0x08863248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863248u) goto L_08863248;
    return;
L_08863248:
    ctx.set_gpr(31, 0x08863250u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863264;
      }
      goto L_08863258;
    }
L_08863258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(956)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08863280;
      }
      goto L_08863264;
    }
L_08863264:
    ctx.set_gpr(31, 0x0886326Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886326Cu) goto L_0886326C;
    return;
L_0886326C:
    ctx.set_gpr(31, 0x08863274u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08863274u) goto L_08863274;
    return;
L_08863274:
    ctx.set_gpr(31, 0x0886327Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x0886327Cu) goto L_0886327C;
    return;
L_0886327C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08863280;
L_08863280:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(35));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
        goto L_088632CC;
    }
    goto L_08863290;
L_08863290:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088632C8;
      }
      goto L_0886329C;
    }
L_0886329C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(33));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
        goto L_088632C0;
    }
    goto L_088632A8;
L_088632A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088632BC;
      }
      goto L_088632B4;
    }
L_088632B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088632D4;
      }
      goto L_088632BC;
    }
L_088632BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    goto L_088632C0;
L_088632C0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088632D0;
      }
      goto L_088632C8;
    }
L_088632C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    goto L_088632CC;
L_088632CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_088632D0;
L_088632D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088632D4;
L_088632D4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(960)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(31, 0x088632E4u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(142));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088632E4u) goto L_088632E4;
    return;
L_088632E4:
    ctx.set_gpr(31, 0x088632ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08862198;
L_088632EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08863300;
      }
      goto L_088632F8;
    }
L_088632F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863318;
      }
      goto L_08863300;
    }
L_08863300:
    ctx.set_gpr(31, 0x08863308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863308u) goto L_08863308;
    return;
L_08863308:
    ctx.set_gpr(31, 0x08863310u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08862198;
L_08863310:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08863318;
L_08863318:
    ctx.set_gpr(31, 0x08863320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863320u) goto L_08863320;
    return;
L_08863320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08863338u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 975u, 0x0885BBD0u>(ctx, &aot_mem) && ctx.pc == 0x08863338u) goto L_08863338;
    return;
L_08863338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863348;
    }
L_08863348:
    ctx.set_gpr(31, 0x08863350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08863350u) goto L_08863350;
    return;
L_08863350:
    ctx.set_gpr(31, 0x08863358u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863358u) goto L_08863358;
    return;
L_08863358:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08863370u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08863370u) goto L_08863370;
    return;
L_08863370:
    ctx.set_gpr(31, 0x08863378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863378u) goto L_08863378;
    return;
L_08863378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863384u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 626u, 0x088571F8u>(ctx, &aot_mem) && ctx.pc == 0x08863384u) goto L_08863384;
    return;
L_08863384:
    ctx.set_gpr(31, 0x0886338Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886338Cu) goto L_0886338C;
    return;
L_0886338C:
    ctx.set_gpr(31, 0x08863394u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 680u, 0x0884E4C4u>(ctx, &aot_mem) && ctx.pc == 0x08863394u) goto L_08863394;
    return;
L_08863394:
    ctx.set_gpr(31, 0x0886339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886339Cu) goto L_0886339C;
    return;
L_0886339C:
    ctx.set_gpr(31, 0x088633A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 954u, 0x0885BAA4u>(ctx, &aot_mem) && ctx.pc == 0x088633A4u) goto L_088633A4;
    return;
L_088633A4:
    ctx.set_gpr(31, 0x088633ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088633ACu) goto L_088633AC;
    return;
L_088633AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088633C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x088633C0u) goto L_088633C0;
    return;
L_088633C0:
    ctx.set_gpr(31, 0x088633C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088633C8u) goto L_088633C8;
    return;
L_088633C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x088633D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x088633D8u) goto L_088633D8;
    return;
L_088633D8:
    ctx.set_gpr(31, 0x088633E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088633E0u) goto L_088633E0;
    return;
L_088633E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088633F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x088633F0u) goto L_088633F0;
    return;
L_088633F0:
    ctx.set_gpr(31, 0x088633F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088633F8u) goto L_088633F8;
    return;
L_088633F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08863408u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08863408u) goto L_08863408;
    return;
L_08863408:
    ctx.set_gpr(31, 0x08863410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863410u) goto L_08863410;
    return;
L_08863410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08863428u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x08863428u) goto L_08863428;
    return;
L_08863428:
    ctx.set_gpr(31, 0x08863430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863430u) goto L_08863430;
    return;
L_08863430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886343Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x0886343Cu) goto L_0886343C;
    return;
L_0886343C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886344C;
    }
L_0886344C:
    ctx.set_gpr(31, 0x08863454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863454u) goto L_08863454;
    return;
L_08863454:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863460u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 985u, 0x0885BCF8u>(ctx, &aot_mem) && ctx.pc == 0x08863460u) goto L_08863460;
    return;
L_08863460:
    ctx.set_gpr(31, 0x08863468u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08863468u) goto L_08863468;
    return;
L_08863468:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08863478u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08863478u) goto L_08863478;
    return;
L_08863478:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863480;
    }
L_08863480:
    ctx.set_gpr(31, 0x08863488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863488u) goto L_08863488;
    return;
L_08863488:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088634A0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088634A0u) goto L_088634A0;
    return;
L_088634A0:
    ctx.set_gpr(31, 0x088634A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088634A8u) goto L_088634A8;
    return;
L_088634A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088634B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 626u, 0x088571F8u>(ctx, &aot_mem) && ctx.pc == 0x088634B4u) goto L_088634B4;
    return;
L_088634B4:
    ctx.set_gpr(31, 0x088634BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088634BCu) goto L_088634BC;
    return;
L_088634BC:
    ctx.set_gpr(31, 0x088634C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 680u, 0x0884E4C4u>(ctx, &aot_mem) && ctx.pc == 0x088634C4u) goto L_088634C4;
    return;
L_088634C4:
    ctx.set_gpr(31, 0x088634CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088634CCu) goto L_088634CC;
    return;
L_088634CC:
    ctx.set_gpr(31, 0x088634D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 954u, 0x0885BAA4u>(ctx, &aot_mem) && ctx.pc == 0x088634D4u) goto L_088634D4;
    return;
L_088634D4:
    ctx.set_gpr(31, 0x088634DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088634DCu) goto L_088634DC;
    return;
L_088634DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088634F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x088634F0u) goto L_088634F0;
    return;
L_088634F0:
    ctx.set_gpr(31, 0x088634F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088634F8u) goto L_088634F8;
    return;
L_088634F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08863508u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08863508u) goto L_08863508;
    return;
L_08863508:
    ctx.set_gpr(31, 0x08863510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863510u) goto L_08863510;
    return;
L_08863510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08863520u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08863520u) goto L_08863520;
    return;
L_08863520:
    ctx.set_gpr(31, 0x08863528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863528u) goto L_08863528;
    return;
L_08863528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08863538u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08863538u) goto L_08863538;
    return;
L_08863538:
    ctx.set_gpr(31, 0x08863540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863540u) goto L_08863540;
    return;
L_08863540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08863558u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x08863558u) goto L_08863558;
    return;
L_08863558:
    ctx.set_gpr(31, 0x08863560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863560u) goto L_08863560;
    return;
L_08863560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886356Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x0886356Cu) goto L_0886356C;
    return;
L_0886356C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886357C;
    }
L_0886357C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088636A8;
      }
      goto L_0886358C;
    }
L_0886358C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088635DC;
    }
    goto L_088635A0;
L_088635A0:
    ctx.set_gpr(31, 0x088635A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x088635A8u) goto L_088635A8;
    return;
L_088635A8:
    ctx.set_gpr(31, 0x088635B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x088635B0u) goto L_088635B0;
    return;
L_088635B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x088635BCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x088641F0u>(ctx, &aot_mem) && ctx.pc == 0x088635BCu) goto L_088635BC;
    return;
L_088635BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_088635D0;
    }
    goto L_088635C4;
L_088635C4:
    ctx.set_gpr(31, 0x088635CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x088635CCu) goto L_088635CC;
    return;
L_088635CC:
    ctx.set_gpr(3, 1u << 16u);
    goto L_088635D0;
L_088635D0:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17728), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_088635DC;
L_088635DC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(444));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088635FCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x088635FCu) goto L_088635FC;
    return;
L_088635FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886360Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x0886360Cu) goto L_0886360C;
    return;
L_0886360C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08863618u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08863618u) goto L_08863618;
    return;
L_08863618:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(31, 0x08863624u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08863624u) goto L_08863624;
    return;
L_08863624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886362C;
    }
L_0886362C:
    ctx.set_gpr(31, 0x08863634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863634u) goto L_08863634;
    return;
L_08863634:
    ctx.set_gpr(31, 0x0886363Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x0886363Cu) goto L_0886363C;
    return;
L_0886363C:
    ctx.set_gpr(31, 0x08863644u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 64u, 0x0885C310u>(ctx, &aot_mem) && ctx.pc == 0x08863644u) goto L_08863644;
    return;
L_08863644:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30264));
    ctx.set_gpr(31, 0x08863658u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08863658u) goto L_08863658;
    return;
L_08863658:
    ctx.set_gpr(31, 0x08863660u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 57u, 0x0885C2C0u>(ctx, &aot_mem) && ctx.pc == 0x08863660u) goto L_08863660;
    return;
L_08863660:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863670u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08862D24;
L_08863670:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(31, 0x0886367Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 22u, 0x088641E8u>(ctx, &aot_mem) && ctx.pc == 0x0886367Cu) goto L_0886367C;
    return;
L_0886367C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886368Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0886368Cu) goto L_0886368C;
    return;
L_0886368C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08863698u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08863698u) goto L_08863698;
    return;
L_08863698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088636A8;
    }
L_088636A8:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_088637CC;
    }
    goto L_088636B0;
L_088636B0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08863700;
    }
    goto L_088636C4;
L_088636C4:
    ctx.set_gpr(31, 0x088636CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x088636CCu) goto L_088636CC;
    return;
L_088636CC:
    ctx.set_gpr(31, 0x088636D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x088636D4u) goto L_088636D4;
    return;
L_088636D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x088636E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x088641F0u>(ctx, &aot_mem) && ctx.pc == 0x088636E0u) goto L_088636E0;
    return;
L_088636E0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_088636F4;
    }
    goto L_088636E8;
L_088636E8:
    ctx.set_gpr(31, 0x088636F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x088636F0u) goto L_088636F0;
    return;
L_088636F0:
    ctx.set_gpr(3, 1u << 16u);
    goto L_088636F4;
L_088636F4:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17728), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08863700;
L_08863700:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17728)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(445));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08863720u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08863720u) goto L_08863720;
    return;
L_08863720:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08863730u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08863730u) goto L_08863730;
    return;
L_08863730:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0886373Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0886373Cu) goto L_0886373C;
    return;
L_0886373C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(31, 0x08863748u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08863748u) goto L_08863748;
    return;
L_08863748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863750;
    }
L_08863750:
    ctx.set_gpr(31, 0x08863758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863758u) goto L_08863758;
    return;
L_08863758:
    ctx.set_gpr(31, 0x08863760u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x08863760u) goto L_08863760;
    return;
L_08863760:
    ctx.set_gpr(31, 0x08863768u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 64u, 0x0885C310u>(ctx, &aot_mem) && ctx.pc == 0x08863768u) goto L_08863768;
    return;
L_08863768:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30272));
    ctx.set_gpr(31, 0x0886377Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x0886377Cu) goto L_0886377C;
    return;
L_0886377C:
    ctx.set_gpr(31, 0x08863784u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 57u, 0x0885C2C0u>(ctx, &aot_mem) && ctx.pc == 0x08863784u) goto L_08863784;
    return;
L_08863784:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863794u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08862D24;
L_08863794:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(31, 0x088637A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 22u, 0x088641E8u>(ctx, &aot_mem) && ctx.pc == 0x088637A0u) goto L_088637A0;
    return;
L_088637A0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15052));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088637B0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x088637B0u) goto L_088637B0;
    return;
L_088637B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088637BCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088637BCu) goto L_088637BC;
    return;
L_088637BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088637CC;
    }
L_088637CC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088637D4;
    }
L_088637D4:
    ctx.set_gpr(31, 0x088637DCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x088637DCu) goto L_088637DC;
    return;
L_088637DC:
    ctx.set_gpr(31, 0x088637E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088637E4u) goto L_088637E4;
    return;
L_088637E4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088637F4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1005u, 0x0885FE18u>(ctx, &aot_mem) && ctx.pc == 0x088637F4u) goto L_088637F4;
    return;
L_088637F4:
    ctx.set_gpr(31, 0x088637FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x088637FCu) goto L_088637FC;
    return;
L_088637FC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886380Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30280));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 759u, 0x0885303Cu>(ctx, &aot_mem) && ctx.pc == 0x0886380Cu) goto L_0886380C;
    return;
L_0886380C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863820;
    }
L_08863820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_0886383C;
    }
    goto L_08863830;
L_08863830:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886383C;
    }
L_0886383C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08863850u);
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 712u, 0x0885EB80u>(ctx, &aot_mem) && ctx.pc == 0x08863850u) goto L_08863850;
    return;
L_08863850:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863858;
    }
L_08863858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863878;
    }
L_08863878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08863894;
    }
    goto L_08863888;
L_08863888:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863894;
    }
L_08863894:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(31, 0x088638A8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x088638A8u) goto L_088638A8;
    return;
L_088638A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088638B4;
    }
L_088638B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088638E0;
      }
      goto L_088638C8;
    }
L_088638C8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088638E0;
    }
L_088638E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_088638F0;
    }
L_088638F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(31, 0x088638FCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1004u, 0x0885FE10u>(ctx, &aot_mem) && ctx.pc == 0x088638FCu) goto L_088638FC;
    return;
L_088638FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_0886390C;
L_0886390C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863A84;
      }
      goto L_08863918;
    }
L_08863918:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08863A48;
      }
      goto L_0886393C;
    }
L_0886393C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08863968;
      }
      goto L_08863948;
    }
L_08863948:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08863958u);
    ctx.set_gpr(18, 0u | 35744u);
    goto L_08860118;
L_08863958:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08863994;
      }
      goto L_08863960;
    }
L_08863960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863994;
      }
      goto L_08863968;
    }
L_08863968:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08863988u);
    ctx.set_gpr(18, 0u | 35744u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1027u, 0x0885FFA0u>(ctx, &aot_mem) && ctx.pc == 0x08863988u) goto L_08863988;
    return;
L_08863988:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08863994;
      }
      goto L_08863990;
    }
L_08863990:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08863994;
L_08863994:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_0886399C;
    }
L_0886399C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088639ACu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 880u, 0x0885F5ACu>(ctx, &aot_mem) && ctx.pc == 0x088639ACu) goto L_088639AC;
    return;
L_088639AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088639C0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08860440;
L_088639C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_088639E0;
    }
    goto L_088639CC;
L_088639CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088639DCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08860714;
L_088639DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_088639E0;
L_088639E0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08863A30;
    }
    goto L_088639E8;
L_088639E8:
    ctx.set_gpr(31, 0x088639F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x088639F0u) goto L_088639F0;
    return;
L_088639F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08863A00u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5000));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x08863A00u) goto L_08863A00;
    return;
L_08863A00:
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[3] | 16960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863A18u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08863A18u) goto L_08863A18;
    return;
L_08863A18:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08863A2Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08860790;
L_08863A2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08863A30;
L_08863A30:
    ctx.set_gpr(31, 0x08863A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1004u, 0x0885FE10u>(ctx, &aot_mem) && ctx.pc == 0x08863A38u) goto L_08863A38;
    return;
L_08863A38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863A48;
    }
L_08863A48:
    ctx.set_gpr(31, 0x08863A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863A50u) goto L_08863A50;
    return;
L_08863A50:
    ctx.set_gpr(31, 0x08863A58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D58;
L_08863A58:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08863A78;
    }
    goto L_08863A64;
L_08863A64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863A78;
    }
L_08863A78:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863A84;
    }
L_08863A84:
    ctx.set_gpr(31, 0x08863A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863A8Cu) goto L_08863A8C;
    return;
L_08863A8C:
    ctx.set_gpr(31, 0x08863A94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D58;
L_08863A94:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08863AB4;
    }
    goto L_08863AA0;
L_08863AA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863AB4;
    }
L_08863AB4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863AC0;
    }
L_08863AC0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(898));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08863AD8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 712u, 0x0885EB80u>(ctx, &aot_mem) && ctx.pc == 0x08863AD8u) goto L_08863AD8;
    return;
L_08863AD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863AE0;
    }
L_08863AE0:
    ctx.set_gpr(31, 0x08863AE8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08863AE8u) goto L_08863AE8;
    return;
L_08863AE8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863AF8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30300));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 759u, 0x0885303Cu>(ctx, &aot_mem) && ctx.pc == 0x08863AF8u) goto L_08863AF8;
    return;
L_08863AF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863B08;
    }
L_08863B08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08863B1Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08863B1Cu) goto L_08863B1C;
    return;
L_08863B1C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08863B34u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08863B34u) goto L_08863B34;
    return;
L_08863B34:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08863B38;
L_08863B38:
    ctx.set_gpr(31, 0x08863B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08863B40u) goto L_08863B40;
    return;
L_08863B40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08863B60u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08863B60u) goto L_08863B60;
    return;
L_08863B60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863B38;
      }
      goto L_08863B70;
    }
L_08863B70:
    ctx.set_gpr(31, 0x08863B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863B78u) goto L_08863B78;
    return;
L_08863B78:
    ctx.set_gpr(31, 0x08863B80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863B80:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08863BA8;
    }
    goto L_08863B8C;
L_08863B8C:
    ctx.set_gpr(31, 0x08863B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08863B94u) goto L_08863B94;
    return;
L_08863B94:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(15108));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08863BA4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 17u, 0x08864184u>(ctx, &aot_mem) && ctx.pc == 0x08863BA4u) goto L_08863BA4;
    return;
L_08863BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08863BA8;
L_08863BA8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863BB4;
    }
L_08863BB4:
    ctx.set_gpr(31, 0x08863BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08863BBCu) goto L_08863BBC;
    return;
L_08863BBC:
    ctx.set_gpr(31, 0x08863BC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08863BC4u) goto L_08863BC4;
    return;
L_08863BC4:
    ctx.set_gpr(31, 0x08863BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863BCCu) goto L_08863BCC;
    return;
L_08863BCC:
    ctx.set_gpr(31, 0x08863BD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863BD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14744));
        goto L_08863BF0;
    }
    goto L_08863BE0;
L_08863BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863BF0;
    }
L_08863BF0:
    ctx.set_gpr(31, 0x08863BF8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 944u, 0x088A7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08863BF8u) goto L_08863BF8;
    return;
L_08863BF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863C04;
    }
L_08863C04:
    ctx.set_gpr(31, 0x08863C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08863C0Cu) goto L_08863C0C;
    return;
L_08863C0C:
    ctx.set_gpr(31, 0x08863C14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem) && ctx.pc == 0x08863C14u) goto L_08863C14;
    return;
L_08863C14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863C28;
    }
L_08863C28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08863CD4;
      }
      goto L_08863C34;
    }
L_08863C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08863C50;
      }
      goto L_08863C3C;
    }
L_08863C3C:
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    goto L_08863C40;
L_08863C40:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863C40;
      }
      goto L_08863C50;
    }
L_08863C50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(900));
      if (branch_taken) {
          goto L_08863C98;
      }
      goto L_08863C60;
    }
L_08863C60:
    ctx.set_gpr(31, 0x08863C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08863C68u) goto L_08863C68;
    return;
L_08863C68:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08863C88u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 788u, 0x088531BCu>(ctx, &aot_mem) && ctx.pc == 0x08863C88u) goto L_08863C88;
    return;
L_08863C88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863CD8;
      }
      goto L_08863C90;
    }
L_08863C90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863CD8;
      }
      goto L_08863C98;
    }
L_08863C98:
    ctx.set_gpr(31, 0x08863CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08863CA0u) goto L_08863CA0;
    return;
L_08863CA0:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(680));
    ctx.set_gpr(9, ctx.gpr[18] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08863CC4u);
    ctx.set_gpr(11, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 843u, 0x08853544u>(ctx, &aot_mem) && ctx.pc == 0x08863CC4u) goto L_08863CC4;
    return;
L_08863CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863CD8;
      }
      goto L_08863CCC;
    }
L_08863CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863CD8;
      }
      goto L_08863CD4;
    }
L_08863CD4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08863CD8;
L_08863CD8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863CE0;
    }
L_08863CE0:
    ctx.set_gpr(31, 0x08863CE8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08863CE8u) goto L_08863CE8;
    return;
L_08863CE8:
    ctx.set_gpr(31, 0x08863CF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 311u, 0x088494D4u>(ctx, &aot_mem) && ctx.pc == 0x08863CF0u) goto L_08863CF0;
    return;
L_08863CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863D00;
    }
L_08863D00:
    ctx.set_gpr(31, 0x08863D08u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08863D08u) goto L_08863D08;
    return;
L_08863D08:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(964)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08863D20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 312u, 0x088494DCu>(ctx, &aot_mem) && ctx.pc == 0x08863D20u) goto L_08863D20;
    return;
L_08863D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863D28;
    }
L_08863D28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08863D54;
      }
      goto L_08863D3C;
    }
L_08863D3C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(964)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08863D70;
      }
      goto L_08863D54;
    }
L_08863D54:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x08863D60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 944u, 0x088A7E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08863D60u) goto L_08863D60;
    return;
L_08863D60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863D70;
    }
L_08863D70:
    ctx.set_gpr(31, 0x08863D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08863D78u) goto L_08863D78;
    return;
L_08863D78:
    ctx.set_gpr(31, 0x08863D80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 311u, 0x088494D4u>(ctx, &aot_mem) && ctx.pc == 0x08863D80u) goto L_08863D80;
    return;
L_08863D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863D88;
    }
L_08863D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08863DB4;
      }
      goto L_08863D98;
    }
L_08863D98:
    ctx.set_gpr(31, 0x08863DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863DA0u) goto L_08863DA0;
    return;
L_08863DA0:
    ctx.set_gpr(31, 0x08863DA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D58;
L_08863DA8:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1067));
      if (branch_taken) {
          goto L_08863DD4;
      }
      goto L_08863DB4;
    }
L_08863DB4:
    ctx.set_gpr(31, 0x08863DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863DBCu) goto L_08863DBC;
    return;
L_08863DBC:
    ctx.set_gpr(31, 0x08863DC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D58;
L_08863DC4:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(995));
    goto L_08863DD4;
L_08863DD4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14744));
    ctx.set_gpr(31, 0x08863DE0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 717u, 0x088A6CA0u>(ctx, &aot_mem) && ctx.pc == 0x08863DE0u) goto L_08863DE0;
    return;
L_08863DE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863DE8;
    }
L_08863DE8:
    ctx.set_gpr(31, 0x08863DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863DF0u) goto L_08863DF0;
    return;
L_08863DF0:
    ctx.set_gpr(31, 0x08863DF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863DF8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08863E1C;
    }
    goto L_08863E04;
L_08863E04:
    ctx.set_gpr(31, 0x08863E0Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 953u, 0x08853DD0u>(ctx, &aot_mem) && ctx.pc == 0x08863E0Cu) goto L_08863E0C;
    return;
L_08863E0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863E1C;
    }
L_08863E1C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863E28;
    }
L_08863E28:
    ctx.set_gpr(31, 0x08863E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863E30u) goto L_08863E30;
    return;
L_08863E30:
    ctx.set_gpr(31, 0x08863E38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08863E38u) goto L_08863E38;
    return;
L_08863E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(972)));
    ctx.set_gpr(31, 0x08863E44u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08863E44u) goto L_08863E44;
    return;
L_08863E44:
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(2984));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(32208));
    ctx.set_gpr(31, 0x08863E64u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 954u, 0x08853DD8u>(ctx, &aot_mem) && ctx.pc == 0x08863E64u) goto L_08863E64;
    return;
L_08863E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863E6C;
    }
L_08863E6C:
    ctx.set_gpr(31, 0x08863E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08863E74u) goto L_08863E74;
    return;
L_08863E74:
    ctx.set_gpr(31, 0x08863E7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08861D50;
L_08863E7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08863E98;
    }
    goto L_08863E88;
L_08863E88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863E98;
    }
L_08863E98:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863EA4;
    }
L_08863EA4:
    ctx.set_gpr(31, 0x08863EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08863EACu) goto L_08863EAC;
    return;
L_08863EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08863EC0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1075));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08863EC0u) goto L_08863EC0;
    return;
L_08863EC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863EC8;
    }
L_08863EC8:
    ctx.set_gpr(31, 0x08863ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08863ED0u) goto L_08863ED0;
    return;
L_08863ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17277u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08863F04u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08863F04u) goto L_08863F04;
    return;
L_08863F04:
    ctx.set_gpr(31, 0x08863F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08863F0Cu) goto L_08863F0C;
    return;
L_08863F0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08863F20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08863F20u) goto L_08863F20;
    return;
L_08863F20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 14u, 0x08864158u>(ctx, &aot_mem); return;
      }
      goto L_08863F30;
    }
L_08863F30:
    ctx.set_gpr(31, 0x08863F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08863F38u) goto L_08863F38;
    return;
L_08863F38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08863F50u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08863F50u) goto L_08863F50;
    return;
L_08863F50:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17432), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17428), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17424), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17420), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17412), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17416), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17368), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17364), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17360), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17356), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17408), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17388), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17404), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17384), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.pc = 0x08864000u; return;
}

void recomp_unit_0023(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0023_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_23(Runtime &runtime) {
    runtime.register_generated_unit(23u, 0x08860000u, 16384u, &recomp_unit_0023, &recomp_unit_0023_entry);
    runtime.register_function(0x08860000u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860004u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886000Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860014u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886001Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860024u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886002Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860034u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860040u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860050u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860058u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886006Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886007Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860100u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860118u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860144u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886014Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886015Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860164u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886016Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860170u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860178u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860184u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860190u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860198u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088601E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860218u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860230u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886023Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860250u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860258u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860270u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860274u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860278u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860290u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088602F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860300u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860318u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860320u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860328u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860334u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886033Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860348u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860354u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860364u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860368u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860384u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860400u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860408u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860410u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860420u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860428u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860440u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860470u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860478u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860484u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886048Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860498u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860500u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886050Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860510u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860514u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860534u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886055Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860574u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886057Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860580u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860588u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860594u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860598u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860604u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860610u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860618u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860624u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860628u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886062Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860630u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886063Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860640u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886065Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860684u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886068Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860700u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860704u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860714u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860744u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886074Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860764u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860770u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860774u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860788u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860790u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886080Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860840u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860848u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860850u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860858u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860868u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886086Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886087Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860884u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860894u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886089Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860910u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860918u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860920u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860928u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860938u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886093Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886094Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860954u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860964u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886096Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886098Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860990u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860CFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860D84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860DECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860E88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860EA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860EB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860EC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860ED0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860EE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860EF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860F8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860FB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860FD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861004u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861010u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861024u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861028u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861030u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861034u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861040u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861058u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861064u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861084u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861098u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088610B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088610CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088610D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088610E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088610F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861120u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861138u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886114Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861154u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861164u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861174u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861188u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088611A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088611C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088611ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861204u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861218u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861220u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861234u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861244u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861254u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886126Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861274u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861288u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861298u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088612B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088612E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861308u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861328u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886133Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861344u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861354u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861364u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861378u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861390u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861404u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861414u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861434u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861440u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861450u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861464u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861474u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861488u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886149Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886150Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861534u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861554u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861570u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861580u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861590u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861608u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861628u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886163Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861644u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861654u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861664u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861678u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861690u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886170Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861720u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861728u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861738u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861748u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861750u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861768u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861794u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886179Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861804u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861818u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861844u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886184Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861858u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861860u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886186Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861874u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861880u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861884u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861888u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886190Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861914u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861920u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861928u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861938u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886193Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861950u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861968u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861980u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ED4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ED8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862000u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886201Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862028u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862034u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862038u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886204Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886205Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886206Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886207Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862108u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886210Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862130u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862140u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886215Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886216Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862180u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862198u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862204u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886220Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862214u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886221Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862228u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862230u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862238u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862240u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886224Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862254u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886225Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862264u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862270u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862278u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862280u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862288u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862294u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886229Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862350u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862364u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862384u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862398u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862414u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862428u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862438u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862448u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886246Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862474u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862480u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862488u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862490u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886249Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862530u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862544u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862564u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862578u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886258Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862608u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862620u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862640u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862654u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862664u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862694u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862714u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862724u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862744u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862754u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886275Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886276Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862778u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862780u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862794u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862800u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862818u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886282Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886284Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862860u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862874u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862894u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886291Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862934u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862948u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862968u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862980u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862994u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862ACCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863004u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863010u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863018u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886301Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863024u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863028u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863030u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863034u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886303Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886304Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886305Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886306Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863074u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886307Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863088u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863094u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863104u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886311Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863124u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863134u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863148u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863150u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863158u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863160u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863174u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863178u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863188u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863190u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863210u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863218u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863224u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886322Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863234u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863240u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863248u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863250u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863258u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863264u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886326Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863274u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886327Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863280u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863290u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886329Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863300u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863308u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863310u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863318u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863320u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863338u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863348u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863350u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863358u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863370u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863378u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863384u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886338Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863394u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886339Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863408u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863410u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863428u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863430u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886343Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886344Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863454u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863460u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863468u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863478u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863480u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863488u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863508u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863510u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863520u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863528u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863538u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863540u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863558u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863560u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886356Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886357Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886358Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886360Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863618u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863624u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886362Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863634u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886363Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863644u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863658u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863660u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863670u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886367Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886368Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863698u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863700u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863720u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863730u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886373Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863748u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863750u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863758u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863760u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863768u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886377Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863784u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863794u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886380Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863820u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863830u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886383Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863850u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863858u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863878u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863888u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863894u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886390Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863918u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886393Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863948u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863958u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863960u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863968u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863988u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863990u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863994u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886399Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863ED0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F50u, &recomp_unit_0023, "recomp_unit_0023");
}
} // namespace psprecomp
