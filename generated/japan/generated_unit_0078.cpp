#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0078[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 18, 19, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0,
    0, 0, 0, 0, 32, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 47, 0, 0, 48, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 113, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119,
    0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0,
    128, 0, 129, 0, 0, 130, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 175, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0,
    182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190,
    0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 198, 0, 199, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218,
    0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234,
    0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 253, 0, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 267, 0, 0, 268, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275,
    276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0,
    0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 293, 0, 0, 0, 294, 0, 295,
    0, 0, 296, 297, 0, 0, 298, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 303,
    0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0,
    340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0,
    0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366,
    0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0,
    395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0,
    0, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0,
    0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 0,
    0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 446, 0, 447, 0, 0, 0, 448, 449, 0, 450, 0, 0, 0, 451, 452, 0, 0, 453, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458,
    0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0,
    464, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474,
    0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0,
    0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491,
    0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0,
    0, 510, 0, 0, 511, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0,
    520, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529,
    0, 530, 0, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0,
    540, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0,
    0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0,
    561, 0, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 571,
    572, 0, 573, 0, 0, 0, 574, 575, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0,
    0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0,
    0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 597, 0, 598, 599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 607,
    0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0,
    0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 639, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 660, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0,
    670, 0, 0, 0, 0, 0, 671, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0,
    679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0,
    0, 0, 694, 0, 0, 0, 0, 0, 695, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 702,
    0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 708, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0,
    711, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0,
    719, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0,
    0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 732, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0,
    0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 744, 0, 745, 0, 0, 0, 0,
    0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0,
    0, 0, 0, 0, 755, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 763, 0,
    764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0,
    0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0,
    787, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 794, 0, 795, 0, 0, 0, 0, 0,
    796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0,
    0, 804, 0, 0, 0, 0, 0, 805, 806, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 0,
    813, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0,
    0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 830, 0,
    831, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 837, 0, 838, 0, 0, 0, 0, 839, 0, 0,
    0, 0, 840, 0, 0, 0, 0, 0, 841, 842, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 847, 0, 848, 0,
    0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 854, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 857,
    0, 0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 866,
    0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 871, 0, 872, 0, 0, 873, 0, 874, 0, 0, 0, 0, 875, 0,
    0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 878, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 882, 0, 0, 883, 0, 884,
    0, 0, 885, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 890, 0, 891, 0, 0, 0, 0, 0, 892, 0, 0,
    893, 0, 0, 0, 0, 894, 0, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901,
    902, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 909, 0, 910, 0, 0, 0, 0, 911,
    0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 913, 914, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 918, 0,
    0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 920, 0, 921, 0, 922, 0, 923, 0, 924, 0, 925, 0, 926, 927, 0, 0, 0, 928, 0, 929, 0, 0,
    0, 0, 930, 0, 931, 932, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 935, 0, 936, 937, 0, 0, 0, 938, 0, 939, 0, 0, 940, 0, 0, 0,
    941, 0, 942, 0, 0, 0, 943, 0, 944, 0, 0, 0, 0, 945, 0, 946, 0, 0, 0, 0, 947, 0, 948, 0, 0, 0, 0, 949, 0, 950, 0, 0,
    0, 0, 951, 0, 952, 0, 0, 0, 0, 953, 0, 954, 955, 0, 0, 0, 956, 0, 957, 0, 0, 0, 0, 958, 0, 959, 960, 0, 0, 0, 961, 0,
    962, 0, 0, 0, 0, 963, 0, 964, 965, 0, 0, 0, 966, 0, 967, 0, 0, 0, 0, 968, 0, 969, 970, 0, 0, 0, 971, 0, 972, 0, 0, 0,
    0, 973, 0, 974, 975, 0, 0, 0, 976, 0, 977, 0, 0, 0, 0, 978, 0, 979, 980, 0, 0, 0, 981, 0, 982, 0, 0, 0, 0, 983, 0, 984,
    985, 0, 0, 0, 986, 0, 987, 0, 0, 0, 0, 988, 0, 989, 990, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 993, 0, 994, 995, 0, 0, 0,
    996, 0, 997, 0, 0, 0, 0, 998, 0, 999, 1000, 0, 0, 0, 1001, 0, 1002, 0, 0, 0, 0, 1003, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 0,
    0, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0,
    0, 0, 1010, 0, 0, 1011, 0, 1012, 0, 0, 0, 0, 0, 1013, 0, 0, 1014, 0, 0, 1015, 0, 0, 0, 0, 0, 0, 0, 1016, 0, 0, 0, 1017,
    0, 0, 0, 0, 0, 1018, 0, 1019, 1020, 0, 0, 1021, 1022, 0, 1023, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1024, 0, 0, 1025,
    1026, 0, 1027, 0, 0, 0, 0, 0, 1028, 0, 0, 0, 0, 1029, 0, 0, 0, 0, 1030, 0, 0, 0, 0, 0, 0, 0, 1031, 0, 0, 0, 0, 1032,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 0, 1034, 0, 0, 0, 1035, 0, 1036, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1037, 0, 0, 0, 0, 1038, 0, 0, 0, 1039, 0, 0, 0, 0, 1040, 0, 0, 0, 0, 0, 1041, 0, 0, 0, 0, 0, 1042,
    0, 0, 0, 0, 1043, 0, 0, 0, 0, 0, 1044, 0, 0, 0, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 0, 0, 0, 0, 1047, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 0, 0, 1049, 0,
    0, 1050, 0, 1051, 0, 1052, 0, 1053, 0, 1054, 0, 1055, 0, 1056, 1057, 0, 0, 0, 1058, 0, 1059, 0, 0, 0, 0, 1060, 0, 1061,
};
void recomp_unit_0078_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0893C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0078[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893C000;
    case 2u: goto L_0893C020;
    case 3u: goto L_0893C03C;
    case 4u: goto L_0893C04C;
    case 5u: goto L_0893C050;
    case 6u: goto L_0893C05C;
    case 7u: goto L_0893C08C;
    case 8u: goto L_0893C0D0;
    case 9u: goto L_0893C0E8;
    case 10u: goto L_0893C0EC;
    case 11u: goto L_0893C0F8;
    case 12u: goto L_0893C11C;
    case 13u: goto L_0893C134;
    case 14u: goto L_0893C144;
    case 15u: goto L_0893C15C;
    case 16u: goto L_0893C17C;
    case 17u: goto L_0893C184;
    case 18u: goto L_0893C194;
    case 19u: goto L_0893C198;
    case 20u: goto L_0893C19C;
    case 21u: goto L_0893C1A8;
    case 22u: goto L_0893C1B0;
    case 23u: goto L_0893C1C4;
    case 24u: goto L_0893C1CC;
    case 25u: goto L_0893C1E4;
    case 26u: goto L_0893C1F0;
    case 27u: goto L_0893C218;
    case 28u: goto L_0893C220;
    case 29u: goto L_0893C250;
    case 30u: goto L_0893C270;
    case 31u: goto L_0893C278;
    case 32u: goto L_0893C290;
    case 33u: goto L_0893C294;
    case 34u: goto L_0893C2A0;
    case 35u: goto L_0893C2A8;
    case 36u: goto L_0893C2B4;
    case 37u: goto L_0893C2BC;
    case 38u: goto L_0893C2C8;
    case 39u: goto L_0893C2EC;
    case 40u: goto L_0893C2FC;
    case 41u: goto L_0893C320;
    case 42u: goto L_0893C32C;
    case 43u: goto L_0893C330;
    case 44u: goto L_0893C33C;
    case 45u: goto L_0893C344;
    case 46u: goto L_0893C35C;
    case 47u: goto L_0893C360;
    case 48u: goto L_0893C36C;
    case 49u: goto L_0893C37C;
    case 50u: goto L_0893C38C;
    case 51u: goto L_0893C398;
    case 52u: goto L_0893C3A0;
    case 53u: goto L_0893C3B8;
    case 54u: goto L_0893C3C4;
    case 55u: goto L_0893C3CC;
    case 56u: goto L_0893C3DC;
    case 57u: goto L_0893C3E4;
    case 58u: goto L_0893C400;
    case 59u: goto L_0893C408;
    case 60u: goto L_0893C424;
    case 61u: goto L_0893C42C;
    case 62u: goto L_0893C438;
    case 63u: goto L_0893C440;
    case 64u: goto L_0893C458;
    case 65u: goto L_0893C480;
    case 66u: goto L_0893C488;
    case 67u: goto L_0893C4A0;
    case 68u: goto L_0893C4A4;
    case 69u: goto L_0893C4B0;
    case 70u: goto L_0893C4B8;
    case 71u: goto L_0893C4C4;
    case 72u: goto L_0893C4CC;
    case 73u: goto L_0893C4D8;
    case 74u: goto L_0893C4FC;
    case 75u: goto L_0893C50C;
    case 76u: goto L_0893C530;
    case 77u: goto L_0893C53C;
    case 78u: goto L_0893C540;
    case 79u: goto L_0893C54C;
    case 80u: goto L_0893C554;
    case 81u: goto L_0893C578;
    case 82u: goto L_0893C57C;
    case 83u: goto L_0893C588;
    case 84u: goto L_0893C598;
    case 85u: goto L_0893C5A8;
    case 86u: goto L_0893C5B0;
    case 87u: goto L_0893C5BC;
    case 88u: goto L_0893C5C8;
    case 89u: goto L_0893C5D0;
    case 90u: goto L_0893C5EC;
    case 91u: goto L_0893C608;
    case 92u: goto L_0893C620;
    case 93u: goto L_0893C62C;
    case 94u: goto L_0893C638;
    case 95u: goto L_0893C640;
    case 96u: goto L_0893C64C;
    case 97u: goto L_0893C654;
    case 98u: goto L_0893C664;
    case 99u: goto L_0893C670;
    case 100u: goto L_0893C68C;
    case 101u: goto L_0893C694;
    case 102u: goto L_0893C6A4;
    case 103u: goto L_0893C6AC;
    case 104u: goto L_0893C6B0;
    case 105u: goto L_0893C6C4;
    case 106u: goto L_0893C6EC;
    case 107u: goto L_0893C704;
    case 108u: goto L_0893C710;
    case 109u: goto L_0893C71C;
    case 110u: goto L_0893C724;
    case 111u: goto L_0893C730;
    case 112u: goto L_0893C740;
    case 113u: goto L_0893C748;
    case 114u: goto L_0893C74C;
    case 115u: goto L_0893C754;
    case 116u: goto L_0893C760;
    case 117u: goto L_0893C76C;
    case 118u: goto L_0893C774;
    case 119u: goto L_0893C77C;
    case 120u: goto L_0893C78C;
    case 121u: goto L_0893C794;
    case 122u: goto L_0893C7A8;
    case 123u: goto L_0893C7B4;
    case 124u: goto L_0893C7D0;
    case 125u: goto L_0893C7D4;
    case 126u: goto L_0893C7DC;
    case 127u: goto L_0893C7E4;
    case 128u: goto L_0893C800;
    case 129u: goto L_0893C808;
    case 130u: goto L_0893C814;
    case 131u: goto L_0893C818;
    case 132u: goto L_0893C834;
    case 133u: goto L_0893C84C;
    case 134u: goto L_0893C858;
    case 135u: goto L_0893C868;
    case 136u: goto L_0893C880;
    case 137u: goto L_0893C888;
    case 138u: goto L_0893C898;
    case 139u: goto L_0893C8A0;
    case 140u: goto L_0893C8B0;
    case 141u: goto L_0893C8BC;
    case 142u: goto L_0893C8F4;
    case 143u: goto L_0893C8F8;
    case 144u: goto L_0893C90C;
    case 145u: goto L_0893C928;
    case 146u: goto L_0893C940;
    case 147u: goto L_0893C94C;
    case 148u: goto L_0893C958;
    case 149u: goto L_0893C960;
    case 150u: goto L_0893C96C;
    case 151u: goto L_0893C974;
    case 152u: goto L_0893C984;
    case 153u: goto L_0893C990;
    case 154u: goto L_0893C9B8;
    case 155u: goto L_0893C9D4;
    case 156u: goto L_0893C9E0;
    case 157u: goto L_0893C9EC;
    case 158u: goto L_0893C9F0;
    case 159u: goto L_0893CA04;
    case 160u: goto L_0893CA1C;
    case 161u: goto L_0893CA28;
    case 162u: goto L_0893CA38;
    case 163u: goto L_0893CA40;
    case 164u: goto L_0893CA4C;
    case 165u: goto L_0893CA60;
    case 166u: goto L_0893CA78;
    case 167u: goto L_0893CA84;
    case 168u: goto L_0893CA90;
    case 169u: goto L_0893CA98;
    case 170u: goto L_0893CAA4;
    case 171u: goto L_0893CAB8;
    case 172u: goto L_0893CAC8;
    case 173u: goto L_0893CAD8;
    case 174u: goto L_0893CAFC;
    case 175u: goto L_0893CB04;
    case 176u: goto L_0893CB1C;
    case 177u: goto L_0893CB20;
    case 178u: goto L_0893CB34;
    case 179u: goto L_0893CB44;
    case 180u: goto L_0893CB60;
    case 181u: goto L_0893CB68;
    case 182u: goto L_0893CB80;
    case 183u: goto L_0893CB88;
    case 184u: goto L_0893CB90;
    case 185u: goto L_0893CBAC;
    case 186u: goto L_0893CBBC;
    case 187u: goto L_0893CBCC;
    case 188u: goto L_0893CBDC;
    case 189u: goto L_0893CBEC;
    case 190u: goto L_0893CBFC;
    case 191u: goto L_0893CC0C;
    case 192u: goto L_0893CC1C;
    case 193u: goto L_0893CC34;
    case 194u: goto L_0893CC38;
    case 195u: goto L_0893CC40;
    case 196u: goto L_0893CC50;
    case 197u: goto L_0893CC5C;
    case 198u: goto L_0893CC60;
    case 199u: goto L_0893CC68;
    case 200u: goto L_0893CC80;
    case 201u: goto L_0893CC98;
    case 202u: goto L_0893CCAC;
    case 203u: goto L_0893CCC4;
    case 204u: goto L_0893CCDC;
    case 205u: goto L_0893CCF0;
    case 206u: goto L_0893CD08;
    case 207u: goto L_0893CD20;
    case 208u: goto L_0893CD34;
    case 209u: goto L_0893CD4C;
    case 210u: goto L_0893CD64;
    case 211u: goto L_0893CD78;
    case 212u: goto L_0893CD90;
    case 213u: goto L_0893CDA8;
    case 214u: goto L_0893CDBC;
    case 215u: goto L_0893CDCC;
    case 216u: goto L_0893CDDC;
    case 217u: goto L_0893CDEC;
    case 218u: goto L_0893CDFC;
    case 219u: goto L_0893CE0C;
    case 220u: goto L_0893CE1C;
    case 221u: goto L_0893CE2C;
    case 222u: goto L_0893CE3C;
    case 223u: goto L_0893CE4C;
    case 224u: goto L_0893CE5C;
    case 225u: goto L_0893CE6C;
    case 226u: goto L_0893CE7C;
    case 227u: goto L_0893CE8C;
    case 228u: goto L_0893CE9C;
    case 229u: goto L_0893CEAC;
    case 230u: goto L_0893CEBC;
    case 231u: goto L_0893CECC;
    case 232u: goto L_0893CEDC;
    case 233u: goto L_0893CEEC;
    case 234u: goto L_0893CEFC;
    case 235u: goto L_0893CF0C;
    case 236u: goto L_0893CF1C;
    case 237u: goto L_0893CF2C;
    case 238u: goto L_0893CF3C;
    case 239u: goto L_0893CF4C;
    case 240u: goto L_0893CF68;
    case 241u: goto L_0893CF80;
    case 242u: goto L_0893CF8C;
    case 243u: goto L_0893CFA8;
    case 244u: goto L_0893CFB4;
    case 245u: goto L_0893CFC8;
    case 246u: goto L_0893CFDC;
    case 247u: goto L_0893CFEC;
    case 248u: goto L_0893D004;
    case 249u: goto L_0893D014;
    case 250u: goto L_0893D03C;
    case 251u: goto L_0893D054;
    case 252u: goto L_0893D05C;
    case 253u: goto L_0893D060;
    case 254u: goto L_0893D06C;
    case 255u: goto L_0893D07C;
    case 256u: goto L_0893D090;
    case 257u: goto L_0893D09C;
    case 258u: goto L_0893D0BC;
    case 259u: goto L_0893D0F4;
    case 260u: goto L_0893D110;
    case 261u: goto L_0893D124;
    case 262u: goto L_0893D12C;
    case 263u: goto L_0893D134;
    case 264u: goto L_0893D140;
    case 265u: goto L_0893D148;
    case 266u: goto L_0893D154;
    case 267u: goto L_0893D158;
    case 268u: goto L_0893D164;
    case 269u: goto L_0893D168;
    case 270u: goto L_0893D18C;
    case 271u: goto L_0893D1C4;
    case 272u: goto L_0893D1D0;
    case 273u: goto L_0893D1DC;
    case 274u: goto L_0893D1F4;
    case 275u: goto L_0893D1FC;
    case 276u: goto L_0893D200;
    case 277u: goto L_0893D218;
    case 278u: goto L_0893D220;
    case 279u: goto L_0893D22C;
    case 280u: goto L_0893D238;
    case 281u: goto L_0893D23C;
    case 282u: goto L_0893D248;
    case 283u: goto L_0893D264;
    case 284u: goto L_0893D278;
    case 285u: goto L_0893D284;
    case 286u: goto L_0893D29C;
    case 287u: goto L_0893D2A4;
    case 288u: goto L_0893D2A8;
    case 289u: goto L_0893D2C0;
    case 290u: goto L_0893D2C8;
    case 291u: goto L_0893D2D4;
    case 292u: goto L_0893D2E0;
    case 293u: goto L_0893D2E4;
    case 294u: goto L_0893D2F4;
    case 295u: goto L_0893D2FC;
    case 296u: goto L_0893D308;
    case 297u: goto L_0893D30C;
    case 298u: goto L_0893D318;
    case 299u: goto L_0893D31C;
    case 300u: goto L_0893D344;
    case 301u: goto L_0893D370;
    case 302u: goto L_0893D378;
    case 303u: goto L_0893D37C;
    case 304u: goto L_0893D384;
    case 305u: goto L_0893D390;
    case 306u: goto L_0893D398;
    case 307u: goto L_0893D3A4;
    case 308u: goto L_0893D3AC;
    case 309u: goto L_0893D3B8;
    case 310u: goto L_0893D3C0;
    case 311u: goto L_0893D3D4;
    case 312u: goto L_0893D3E0;
    case 313u: goto L_0893D3E8;
    case 314u: goto L_0893D3F4;
    case 315u: goto L_0893D3FC;
    case 316u: goto L_0893D408;
    case 317u: goto L_0893D424;
    case 318u: goto L_0893D42C;
    case 319u: goto L_0893D438;
    case 320u: goto L_0893D440;
    case 321u: goto L_0893D44C;
    case 322u: goto L_0893D458;
    case 323u: goto L_0893D460;
    case 324u: goto L_0893D464;
    case 325u: goto L_0893D480;
    case 326u: goto L_0893D4BC;
    case 327u: goto L_0893D4C4;
    case 328u: goto L_0893D4C8;
    case 329u: goto L_0893D4D0;
    case 330u: goto L_0893D4DC;
    case 331u: goto L_0893D4E8;
    case 332u: goto L_0893D500;
    case 333u: goto L_0893D510;
    case 334u: goto L_0893D518;
    case 335u: goto L_0893D524;
    case 336u: goto L_0893D534;
    case 337u: goto L_0893D550;
    case 338u: goto L_0893D568;
    case 339u: goto L_0893D570;
    case 340u: goto L_0893D580;
    case 341u: goto L_0893D588;
    case 342u: goto L_0893D5A4;
    case 343u: goto L_0893D5AC;
    case 344u: goto L_0893D5B8;
    case 345u: goto L_0893D5C4;
    case 346u: goto L_0893D5D4;
    case 347u: goto L_0893D5DC;
    case 348u: goto L_0893D5E8;
    case 349u: goto L_0893D5F8;
    case 350u: goto L_0893D604;
    case 351u: goto L_0893D610;
    case 352u: goto L_0893D61C;
    case 353u: goto L_0893D62C;
    case 354u: goto L_0893D638;
    case 355u: goto L_0893D648;
    case 356u: goto L_0893D654;
    case 357u: goto L_0893D65C;
    case 358u: goto L_0893D668;
    case 359u: goto L_0893D670;
    case 360u: goto L_0893D684;
    case 361u: goto L_0893D698;
    case 362u: goto L_0893D6A4;
    case 363u: goto L_0893D6AC;
    case 364u: goto L_0893D6B4;
    case 365u: goto L_0893D6C4;
    case 366u: goto L_0893D6FC;
    case 367u: goto L_0893D708;
    case 368u: goto L_0893D710;
    case 369u: goto L_0893D71C;
    case 370u: goto L_0893D724;
    case 371u: goto L_0893D738;
    case 372u: goto L_0893D74C;
    case 373u: goto L_0893D758;
    case 374u: goto L_0893D760;
    case 375u: goto L_0893D768;
    case 376u: goto L_0893D778;
    case 377u: goto L_0893D790;
    case 378u: goto L_0893D79C;
    case 379u: goto L_0893D7A4;
    case 380u: goto L_0893D7B0;
    case 381u: goto L_0893D7B8;
    case 382u: goto L_0893D7CC;
    case 383u: goto L_0893D7E0;
    case 384u: goto L_0893D7EC;
    case 385u: goto L_0893D7F4;
    case 386u: goto L_0893D7FC;
    case 387u: goto L_0893D80C;
    case 388u: goto L_0893D824;
    case 389u: goto L_0893D830;
    case 390u: goto L_0893D838;
    case 391u: goto L_0893D844;
    case 392u: goto L_0893D84C;
    case 393u: goto L_0893D860;
    case 394u: goto L_0893D874;
    case 395u: goto L_0893D880;
    case 396u: goto L_0893D888;
    case 397u: goto L_0893D890;
    case 398u: goto L_0893D8A0;
    case 399u: goto L_0893D8B8;
    case 400u: goto L_0893D8C4;
    case 401u: goto L_0893D8CC;
    case 402u: goto L_0893D8D8;
    case 403u: goto L_0893D8E0;
    case 404u: goto L_0893D8F4;
    case 405u: goto L_0893D908;
    case 406u: goto L_0893D914;
    case 407u: goto L_0893D91C;
    case 408u: goto L_0893D924;
    case 409u: goto L_0893D934;
    case 410u: goto L_0893D93C;
    case 411u: goto L_0893D950;
    case 412u: goto L_0893D958;
    case 413u: goto L_0893D96C;
    case 414u: goto L_0893D974;
    case 415u: goto L_0893D98C;
    case 416u: goto L_0893D994;
    case 417u: goto L_0893D99C;
    case 418u: goto L_0893D9A4;
    case 419u: goto L_0893D9B8;
    case 420u: goto L_0893D9C0;
    case 421u: goto L_0893D9C8;
    case 422u: goto L_0893D9D4;
    case 423u: goto L_0893D9E4;
    case 424u: goto L_0893D9EC;
    case 425u: goto L_0893D9F4;
    case 426u: goto L_0893DA0C;
    case 427u: goto L_0893DA18;
    case 428u: goto L_0893DA24;
    case 429u: goto L_0893DA30;
    case 430u: goto L_0893DA40;
    case 431u: goto L_0893DA48;
    case 432u: goto L_0893DA58;
    case 433u: goto L_0893DA60;
    case 434u: goto L_0893DA68;
    case 435u: goto L_0893DA74;
    case 436u: goto L_0893DA84;
    case 437u: goto L_0893DA8C;
    case 438u: goto L_0893DAA0;
    case 439u: goto L_0893DAAC;
    case 440u: goto L_0893DAB4;
    case 441u: goto L_0893DAC0;
    case 442u: goto L_0893DAC8;
    case 443u: goto L_0893DADC;
    case 444u: goto L_0893DAF0;
    case 445u: goto L_0893DAFC;
    case 446u: goto L_0893DB04;
    case 447u: goto L_0893DB0C;
    case 448u: goto L_0893DB1C;
    case 449u: goto L_0893DB20;
    case 450u: goto L_0893DB28;
    case 451u: goto L_0893DB38;
    case 452u: goto L_0893DB3C;
    case 453u: goto L_0893DB48;
    case 454u: goto L_0893DB54;
    case 455u: goto L_0893DB5C;
    case 456u: goto L_0893DB68;
    case 457u: goto L_0893DB70;
    case 458u: goto L_0893DB7C;
    case 459u: goto L_0893DB84;
    case 460u: goto L_0893DB88;
    case 461u: goto L_0893DBB8;
    case 462u: goto L_0893DBE8;
    case 463u: goto L_0893DBF4;
    case 464u: goto L_0893DC00;
    case 465u: goto L_0893DC0C;
    case 466u: goto L_0893DC1C;
    case 467u: goto L_0893DC24;
    case 468u: goto L_0893DC2C;
    case 469u: goto L_0893DC38;
    case 470u: goto L_0893DC48;
    case 471u: goto L_0893DC58;
    case 472u: goto L_0893DC64;
    case 473u: goto L_0893DC70;
    case 474u: goto L_0893DC7C;
    case 475u: goto L_0893DC8C;
    case 476u: goto L_0893DC98;
    case 477u: goto L_0893DCA8;
    case 478u: goto L_0893DCB4;
    case 479u: goto L_0893DCBC;
    case 480u: goto L_0893DCC8;
    case 481u: goto L_0893DCD0;
    case 482u: goto L_0893DCE4;
    case 483u: goto L_0893DCF8;
    case 484u: goto L_0893DD04;
    case 485u: goto L_0893DD0C;
    case 486u: goto L_0893DD14;
    case 487u: goto L_0893DD24;
    case 488u: goto L_0893DD5C;
    case 489u: goto L_0893DD68;
    case 490u: goto L_0893DD70;
    case 491u: goto L_0893DD7C;
    case 492u: goto L_0893DD84;
    case 493u: goto L_0893DD98;
    case 494u: goto L_0893DDAC;
    case 495u: goto L_0893DDB8;
    case 496u: goto L_0893DDC0;
    case 497u: goto L_0893DDC8;
    case 498u: goto L_0893DDD8;
    case 499u: goto L_0893DDF0;
    case 500u: goto L_0893DDFC;
    case 501u: goto L_0893DE04;
    case 502u: goto L_0893DE10;
    case 503u: goto L_0893DE18;
    case 504u: goto L_0893DE2C;
    case 505u: goto L_0893DE40;
    case 506u: goto L_0893DE4C;
    case 507u: goto L_0893DE54;
    case 508u: goto L_0893DE5C;
    case 509u: goto L_0893DE6C;
    case 510u: goto L_0893DE84;
    case 511u: goto L_0893DE90;
    case 512u: goto L_0893DE98;
    case 513u: goto L_0893DEA4;
    case 514u: goto L_0893DEAC;
    case 515u: goto L_0893DEC0;
    case 516u: goto L_0893DED4;
    case 517u: goto L_0893DEE0;
    case 518u: goto L_0893DEE8;
    case 519u: goto L_0893DEF0;
    case 520u: goto L_0893DF00;
    case 521u: goto L_0893DF18;
    case 522u: goto L_0893DF24;
    case 523u: goto L_0893DF2C;
    case 524u: goto L_0893DF38;
    case 525u: goto L_0893DF40;
    case 526u: goto L_0893DF54;
    case 527u: goto L_0893DF68;
    case 528u: goto L_0893DF74;
    case 529u: goto L_0893DF7C;
    case 530u: goto L_0893DF84;
    case 531u: goto L_0893DF94;
    case 532u: goto L_0893DF9C;
    case 533u: goto L_0893DFAC;
    case 534u: goto L_0893DFB4;
    case 535u: goto L_0893DFCC;
    case 536u: goto L_0893DFD4;
    case 537u: goto L_0893DFDC;
    case 538u: goto L_0893DFE4;
    case 539u: goto L_0893DFF8;
    case 540u: goto L_0893E000;
    case 541u: goto L_0893E008;
    case 542u: goto L_0893E014;
    case 543u: goto L_0893E020;
    case 544u: goto L_0893E02C;
    case 545u: goto L_0893E034;
    case 546u: goto L_0893E04C;
    case 547u: goto L_0893E058;
    case 548u: goto L_0893E064;
    case 549u: goto L_0893E06C;
    case 550u: goto L_0893E078;
    case 551u: goto L_0893E088;
    case 552u: goto L_0893E090;
    case 553u: goto L_0893E0A4;
    case 554u: goto L_0893E0AC;
    case 555u: goto L_0893E0B4;
    case 556u: goto L_0893E0BC;
    case 557u: goto L_0893E0C8;
    case 558u: goto L_0893E0E0;
    case 559u: goto L_0893E0E8;
    case 560u: goto L_0893E0F0;
    case 561u: goto L_0893E100;
    case 562u: goto L_0893E10C;
    case 563u: goto L_0893E114;
    case 564u: goto L_0893E120;
    case 565u: goto L_0893E128;
    case 566u: goto L_0893E13C;
    case 567u: goto L_0893E150;
    case 568u: goto L_0893E15C;
    case 569u: goto L_0893E164;
    case 570u: goto L_0893E16C;
    case 571u: goto L_0893E17C;
    case 572u: goto L_0893E180;
    case 573u: goto L_0893E188;
    case 574u: goto L_0893E198;
    case 575u: goto L_0893E19C;
    case 576u: goto L_0893E1A4;
    case 577u: goto L_0893E1B0;
    case 578u: goto L_0893E1BC;
    case 579u: goto L_0893E1C8;
    case 580u: goto L_0893E1D0;
    case 581u: goto L_0893E1F8;
    case 582u: goto L_0893E21C;
    case 583u: goto L_0893E234;
    case 584u: goto L_0893E23C;
    case 585u: goto L_0893E244;
    case 586u: goto L_0893E254;
    case 587u: goto L_0893E25C;
    case 588u: goto L_0893E268;
    case 589u: goto L_0893E278;
    case 590u: goto L_0893E284;
    case 591u: goto L_0893E290;
    case 592u: goto L_0893E298;
    case 593u: goto L_0893E2AC;
    case 594u: goto L_0893E2B0;
    case 595u: goto L_0893E2BC;
    case 596u: goto L_0893E2DC;
    case 597u: goto L_0893E310;
    case 598u: goto L_0893E318;
    case 599u: goto L_0893E31C;
    case 600u: goto L_0893E324;
    case 601u: goto L_0893E330;
    case 602u: goto L_0893E338;
    case 603u: goto L_0893E344;
    case 604u: goto L_0893E34C;
    case 605u: goto L_0893E358;
    case 606u: goto L_0893E370;
    case 607u: goto L_0893E37C;
    case 608u: goto L_0893E388;
    case 609u: goto L_0893E390;
    case 610u: goto L_0893E39C;
    case 611u: goto L_0893E3B0;
    case 612u: goto L_0893E3B8;
    case 613u: goto L_0893E3C0;
    case 614u: goto L_0893E3DC;
    case 615u: goto L_0893E3E4;
    case 616u: goto L_0893E3F0;
    case 617u: goto L_0893E3F8;
    case 618u: goto L_0893E404;
    case 619u: goto L_0893E414;
    case 620u: goto L_0893E424;
    case 621u: goto L_0893E42C;
    case 622u: goto L_0893E438;
    case 623u: goto L_0893E44C;
    case 624u: goto L_0893E45C;
    case 625u: goto L_0893E468;
    case 626u: goto L_0893E470;
    case 627u: goto L_0893E47C;
    case 628u: goto L_0893E498;
    case 629u: goto L_0893E4A0;
    case 630u: goto L_0893E4AC;
    case 631u: goto L_0893E4B4;
    case 632u: goto L_0893E4C0;
    case 633u: goto L_0893E4CC;
    case 634u: goto L_0893E4D4;
    case 635u: goto L_0893E4D8;
    case 636u: goto L_0893E4F8;
    case 637u: goto L_0893E520;
    case 638u: goto L_0893E528;
    case 639u: goto L_0893E52C;
    case 640u: goto L_0893E534;
    case 641u: goto L_0893E540;
    case 642u: goto L_0893E56C;
    case 643u: goto L_0893E598;
    case 644u: goto L_0893E5C4;
    case 645u: goto L_0893E5E8;
    case 646u: goto L_0893E60C;
    case 647u: goto L_0893E630;
    case 648u: goto L_0893E654;
    case 649u: goto L_0893E678;
    case 650u: goto L_0893E6A4;
    case 651u: goto L_0893E6D0;
    case 652u: goto L_0893E6FC;
    case 653u: goto L_0893E728;
    case 654u: goto L_0893E754;
    case 655u: goto L_0893E780;
    case 656u: goto L_0893E7AC;
    case 657u: goto L_0893E7D8;
    case 658u: goto L_0893E804;
    case 659u: goto L_0893E830;
    case 660u: goto L_0893E854;
    case 661u: goto L_0893E858;
    case 662u: goto L_0893E874;
    case 663u: goto L_0893E89C;
    case 664u: goto L_0893E8B0;
    case 665u: goto L_0893E8BC;
    case 666u: goto L_0893E8C4;
    case 667u: goto L_0893E8D0;
    case 668u: goto L_0893E8D8;
    case 669u: goto L_0893E8EC;
    case 670u: goto L_0893E900;
    case 671u: goto L_0893E918;
    case 672u: goto L_0893E91C;
    case 673u: goto L_0893E924;
    case 674u: goto L_0893E93C;
    case 675u: goto L_0893E948;
    case 676u: goto L_0893E960;
    case 677u: goto L_0893E96C;
    case 678u: goto L_0893E974;
    case 679u: goto L_0893E980;
    case 680u: goto L_0893E988;
    case 681u: goto L_0893E99C;
    case 682u: goto L_0893E9B0;
    case 683u: goto L_0893E9C8;
    case 684u: goto L_0893E9CC;
    case 685u: goto L_0893E9D4;
    case 686u: goto L_0893E9EC;
    case 687u: goto L_0893E9F8;
    case 688u: goto L_0893EA38;
    case 689u: goto L_0893EA44;
    case 690u: goto L_0893EA4C;
    case 691u: goto L_0893EA58;
    case 692u: goto L_0893EA60;
    case 693u: goto L_0893EA74;
    case 694u: goto L_0893EA88;
    case 695u: goto L_0893EAA0;
    case 696u: goto L_0893EAA4;
    case 697u: goto L_0893EAAC;
    case 698u: goto L_0893EAC4;
    case 699u: goto L_0893EAD0;
    case 700u: goto L_0893EAE8;
    case 701u: goto L_0893EAF4;
    case 702u: goto L_0893EAFC;
    case 703u: goto L_0893EB08;
    case 704u: goto L_0893EB10;
    case 705u: goto L_0893EB24;
    case 706u: goto L_0893EB38;
    case 707u: goto L_0893EB50;
    case 708u: goto L_0893EB54;
    case 709u: goto L_0893EB5C;
    case 710u: goto L_0893EB74;
    case 711u: goto L_0893EB80;
    case 712u: goto L_0893EB98;
    case 713u: goto L_0893EBA4;
    case 714u: goto L_0893EBAC;
    case 715u: goto L_0893EBB8;
    case 716u: goto L_0893EBC0;
    case 717u: goto L_0893EBD4;
    case 718u: goto L_0893EBE8;
    case 719u: goto L_0893EC00;
    case 720u: goto L_0893EC04;
    case 721u: goto L_0893EC0C;
    case 722u: goto L_0893EC24;
    case 723u: goto L_0893EC30;
    case 724u: goto L_0893EC48;
    case 725u: goto L_0893EC54;
    case 726u: goto L_0893EC5C;
    case 727u: goto L_0893EC68;
    case 728u: goto L_0893EC70;
    case 729u: goto L_0893EC84;
    case 730u: goto L_0893EC98;
    case 731u: goto L_0893ECB0;
    case 732u: goto L_0893ECB4;
    case 733u: goto L_0893ECBC;
    case 734u: goto L_0893ECD4;
    case 735u: goto L_0893ECE0;
    case 736u: goto L_0893ECF8;
    case 737u: goto L_0893ED04;
    case 738u: goto L_0893ED0C;
    case 739u: goto L_0893ED18;
    case 740u: goto L_0893ED20;
    case 741u: goto L_0893ED34;
    case 742u: goto L_0893ED48;
    case 743u: goto L_0893ED60;
    case 744u: goto L_0893ED64;
    case 745u: goto L_0893ED6C;
    case 746u: goto L_0893ED84;
    case 747u: goto L_0893ED90;
    case 748u: goto L_0893EDA8;
    case 749u: goto L_0893EDB4;
    case 750u: goto L_0893EDBC;
    case 751u: goto L_0893EDC8;
    case 752u: goto L_0893EDD0;
    case 753u: goto L_0893EDE4;
    case 754u: goto L_0893EDF8;
    case 755u: goto L_0893EE10;
    case 756u: goto L_0893EE14;
    case 757u: goto L_0893EE1C;
    case 758u: goto L_0893EE34;
    case 759u: goto L_0893EE40;
    case 760u: goto L_0893EE58;
    case 761u: goto L_0893EE64;
    case 762u: goto L_0893EE6C;
    case 763u: goto L_0893EE78;
    case 764u: goto L_0893EE80;
    case 765u: goto L_0893EE94;
    case 766u: goto L_0893EEA8;
    case 767u: goto L_0893EEC0;
    case 768u: goto L_0893EEC4;
    case 769u: goto L_0893EECC;
    case 770u: goto L_0893EEE4;
    case 771u: goto L_0893EEF0;
    case 772u: goto L_0893EF1C;
    case 773u: goto L_0893EF38;
    case 774u: goto L_0893EF48;
    case 775u: goto L_0893EF54;
    case 776u: goto L_0893EF5C;
    case 777u: goto L_0893EF68;
    case 778u: goto L_0893EF70;
    case 779u: goto L_0893EF84;
    case 780u: goto L_0893EF98;
    case 781u: goto L_0893EFB0;
    case 782u: goto L_0893EFB4;
    case 783u: goto L_0893EFBC;
    case 784u: goto L_0893EFD4;
    case 785u: goto L_0893EFE0;
    case 786u: goto L_0893EFF4;
    case 787u: goto L_0893F000;
    case 788u: goto L_0893F008;
    case 789u: goto L_0893F014;
    case 790u: goto L_0893F01C;
    case 791u: goto L_0893F030;
    case 792u: goto L_0893F044;
    case 793u: goto L_0893F05C;
    case 794u: goto L_0893F060;
    case 795u: goto L_0893F068;
    case 796u: goto L_0893F080;
    case 797u: goto L_0893F08C;
    case 798u: goto L_0893F0B4;
    case 799u: goto L_0893F0C0;
    case 800u: goto L_0893F0C8;
    case 801u: goto L_0893F0D4;
    case 802u: goto L_0893F0DC;
    case 803u: goto L_0893F0F0;
    case 804u: goto L_0893F104;
    case 805u: goto L_0893F11C;
    case 806u: goto L_0893F120;
    case 807u: goto L_0893F128;
    case 808u: goto L_0893F140;
    case 809u: goto L_0893F14C;
    case 810u: goto L_0893F160;
    case 811u: goto L_0893F16C;
    case 812u: goto L_0893F174;
    case 813u: goto L_0893F180;
    case 814u: goto L_0893F188;
    case 815u: goto L_0893F19C;
    case 816u: goto L_0893F1B0;
    case 817u: goto L_0893F1C8;
    case 818u: goto L_0893F1CC;
    case 819u: goto L_0893F1D4;
    case 820u: goto L_0893F1EC;
    case 821u: goto L_0893F1F8;
    case 822u: goto L_0893F20C;
    case 823u: goto L_0893F218;
    case 824u: goto L_0893F220;
    case 825u: goto L_0893F22C;
    case 826u: goto L_0893F234;
    case 827u: goto L_0893F248;
    case 828u: goto L_0893F25C;
    case 829u: goto L_0893F274;
    case 830u: goto L_0893F278;
    case 831u: goto L_0893F280;
    case 832u: goto L_0893F298;
    case 833u: goto L_0893F2A4;
    case 834u: goto L_0893F2B8;
    case 835u: goto L_0893F2C4;
    case 836u: goto L_0893F2CC;
    case 837u: goto L_0893F2D8;
    case 838u: goto L_0893F2E0;
    case 839u: goto L_0893F2F4;
    case 840u: goto L_0893F308;
    case 841u: goto L_0893F320;
    case 842u: goto L_0893F324;
    case 843u: goto L_0893F32C;
    case 844u: goto L_0893F344;
    case 845u: goto L_0893F350;
    case 846u: goto L_0893F364;
    case 847u: goto L_0893F370;
    case 848u: goto L_0893F378;
    case 849u: goto L_0893F384;
    case 850u: goto L_0893F38C;
    case 851u: goto L_0893F3A0;
    case 852u: goto L_0893F3B4;
    case 853u: goto L_0893F3CC;
    case 854u: goto L_0893F3D0;
    case 855u: goto L_0893F3D8;
    case 856u: goto L_0893F3F0;
    case 857u: goto L_0893F3FC;
    case 858u: goto L_0893F410;
    case 859u: goto L_0893F41C;
    case 860u: goto L_0893F424;
    case 861u: goto L_0893F430;
    case 862u: goto L_0893F438;
    case 863u: goto L_0893F44C;
    case 864u: goto L_0893F460;
    case 865u: goto L_0893F478;
    case 866u: goto L_0893F47C;
    case 867u: goto L_0893F484;
    case 868u: goto L_0893F49C;
    case 869u: goto L_0893F4A8;
    case 870u: goto L_0893F4BC;
    case 871u: goto L_0893F4C8;
    case 872u: goto L_0893F4D0;
    case 873u: goto L_0893F4DC;
    case 874u: goto L_0893F4E4;
    case 875u: goto L_0893F4F8;
    case 876u: goto L_0893F50C;
    case 877u: goto L_0893F524;
    case 878u: goto L_0893F528;
    case 879u: goto L_0893F530;
    case 880u: goto L_0893F548;
    case 881u: goto L_0893F554;
    case 882u: goto L_0893F568;
    case 883u: goto L_0893F574;
    case 884u: goto L_0893F57C;
    case 885u: goto L_0893F588;
    case 886u: goto L_0893F590;
    case 887u: goto L_0893F5A4;
    case 888u: goto L_0893F5B8;
    case 889u: goto L_0893F5D0;
    case 890u: goto L_0893F5D4;
    case 891u: goto L_0893F5DC;
    case 892u: goto L_0893F5F4;
    case 893u: goto L_0893F600;
    case 894u: goto L_0893F614;
    case 895u: goto L_0893F620;
    case 896u: goto L_0893F628;
    case 897u: goto L_0893F634;
    case 898u: goto L_0893F63C;
    case 899u: goto L_0893F650;
    case 900u: goto L_0893F664;
    case 901u: goto L_0893F67C;
    case 902u: goto L_0893F680;
    case 903u: goto L_0893F688;
    case 904u: goto L_0893F6A0;
    case 905u: goto L_0893F6AC;
    case 906u: goto L_0893F6C0;
    case 907u: goto L_0893F6CC;
    case 908u: goto L_0893F6D4;
    case 909u: goto L_0893F6E0;
    case 910u: goto L_0893F6E8;
    case 911u: goto L_0893F6FC;
    case 912u: goto L_0893F710;
    case 913u: goto L_0893F728;
    case 914u: goto L_0893F72C;
    case 915u: goto L_0893F734;
    case 916u: goto L_0893F74C;
    case 917u: goto L_0893F758;
    case 918u: goto L_0893F778;
    case 919u: goto L_0893F79C;
    case 920u: goto L_0893F7A8;
    case 921u: goto L_0893F7B0;
    case 922u: goto L_0893F7B8;
    case 923u: goto L_0893F7C0;
    case 924u: goto L_0893F7C8;
    case 925u: goto L_0893F7D0;
    case 926u: goto L_0893F7D8;
    case 927u: goto L_0893F7DC;
    case 928u: goto L_0893F7EC;
    case 929u: goto L_0893F7F4;
    case 930u: goto L_0893F808;
    case 931u: goto L_0893F810;
    case 932u: goto L_0893F814;
    case 933u: goto L_0893F824;
    case 934u: goto L_0893F82C;
    case 935u: goto L_0893F840;
    case 936u: goto L_0893F848;
    case 937u: goto L_0893F84C;
    case 938u: goto L_0893F85C;
    case 939u: goto L_0893F864;
    case 940u: goto L_0893F870;
    case 941u: goto L_0893F880;
    case 942u: goto L_0893F888;
    case 943u: goto L_0893F898;
    case 944u: goto L_0893F8A0;
    case 945u: goto L_0893F8B4;
    case 946u: goto L_0893F8BC;
    case 947u: goto L_0893F8D0;
    case 948u: goto L_0893F8D8;
    case 949u: goto L_0893F8EC;
    case 950u: goto L_0893F8F4;
    case 951u: goto L_0893F908;
    case 952u: goto L_0893F910;
    case 953u: goto L_0893F924;
    case 954u: goto L_0893F92C;
    case 955u: goto L_0893F930;
    case 956u: goto L_0893F940;
    case 957u: goto L_0893F948;
    case 958u: goto L_0893F95C;
    case 959u: goto L_0893F964;
    case 960u: goto L_0893F968;
    case 961u: goto L_0893F978;
    case 962u: goto L_0893F980;
    case 963u: goto L_0893F994;
    case 964u: goto L_0893F99C;
    case 965u: goto L_0893F9A0;
    case 966u: goto L_0893F9B0;
    case 967u: goto L_0893F9B8;
    case 968u: goto L_0893F9CC;
    case 969u: goto L_0893F9D4;
    case 970u: goto L_0893F9D8;
    case 971u: goto L_0893F9E8;
    case 972u: goto L_0893F9F0;
    case 973u: goto L_0893FA04;
    case 974u: goto L_0893FA0C;
    case 975u: goto L_0893FA10;
    case 976u: goto L_0893FA20;
    case 977u: goto L_0893FA28;
    case 978u: goto L_0893FA3C;
    case 979u: goto L_0893FA44;
    case 980u: goto L_0893FA48;
    case 981u: goto L_0893FA58;
    case 982u: goto L_0893FA60;
    case 983u: goto L_0893FA74;
    case 984u: goto L_0893FA7C;
    case 985u: goto L_0893FA80;
    case 986u: goto L_0893FA90;
    case 987u: goto L_0893FA98;
    case 988u: goto L_0893FAAC;
    case 989u: goto L_0893FAB4;
    case 990u: goto L_0893FAB8;
    case 991u: goto L_0893FAC8;
    case 992u: goto L_0893FAD0;
    case 993u: goto L_0893FAE4;
    case 994u: goto L_0893FAEC;
    case 995u: goto L_0893FAF0;
    case 996u: goto L_0893FB00;
    case 997u: goto L_0893FB08;
    case 998u: goto L_0893FB1C;
    case 999u: goto L_0893FB24;
    case 1000u: goto L_0893FB28;
    case 1001u: goto L_0893FB38;
    case 1002u: goto L_0893FB40;
    case 1003u: goto L_0893FB54;
    case 1004u: goto L_0893FB5C;
    case 1005u: goto L_0893FB70;
    case 1006u: goto L_0893FB94;
    case 1007u: goto L_0893FBB0;
    case 1008u: goto L_0893FBCC;
    case 1009u: goto L_0893FBE4;
    case 1010u: goto L_0893FC08;
    case 1011u: goto L_0893FC14;
    case 1012u: goto L_0893FC1C;
    case 1013u: goto L_0893FC34;
    case 1014u: goto L_0893FC40;
    case 1015u: goto L_0893FC4C;
    case 1016u: goto L_0893FC6C;
    case 1017u: goto L_0893FC7C;
    case 1018u: goto L_0893FC94;
    case 1019u: goto L_0893FC9C;
    case 1020u: goto L_0893FCA0;
    case 1021u: goto L_0893FCAC;
    case 1022u: goto L_0893FCB0;
    case 1023u: goto L_0893FCB8;
    case 1024u: goto L_0893FCF0;
    case 1025u: goto L_0893FCFC;
    case 1026u: goto L_0893FD00;
    case 1027u: goto L_0893FD08;
    case 1028u: goto L_0893FD20;
    case 1029u: goto L_0893FD34;
    case 1030u: goto L_0893FD48;
    case 1031u: goto L_0893FD68;
    case 1032u: goto L_0893FD7C;
    case 1033u: goto L_0893FDBC;
    case 1034u: goto L_0893FDD4;
    case 1035u: goto L_0893FDE4;
    case 1036u: goto L_0893FDEC;
    case 1037u: goto L_0893FE14;
    case 1038u: goto L_0893FE28;
    case 1039u: goto L_0893FE38;
    case 1040u: goto L_0893FE4C;
    case 1041u: goto L_0893FE64;
    case 1042u: goto L_0893FE7C;
    case 1043u: goto L_0893FE90;
    case 1044u: goto L_0893FEA8;
    case 1045u: goto L_0893FEC0;
    case 1046u: goto L_0893FED4;
    case 1047u: goto L_0893FEEC;
    case 1048u: goto L_0893FF54;
    case 1049u: goto L_0893FF78;
    case 1050u: goto L_0893FF84;
    case 1051u: goto L_0893FF8C;
    case 1052u: goto L_0893FF94;
    case 1053u: goto L_0893FF9C;
    case 1054u: goto L_0893FFA4;
    case 1055u: goto L_0893FFAC;
    case 1056u: goto L_0893FFB4;
    case 1057u: goto L_0893FFB8;
    case 1058u: goto L_0893FFC8;
    case 1059u: goto L_0893FFD0;
    case 1060u: goto L_0893FFE4;
    case 1061u: goto L_0893FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893C000:
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0893C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 2u, 0x0891C014u>(ctx, &aot_mem) && ctx.pc == 0x0893C020u) goto L_0893C020;
    return;
L_0893C020:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C03Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C03Cu) goto L_0893C03C;
    return;
L_0893C03C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0893C04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0893C04Cu) goto L_0893C04C;
    return;
L_0893C04C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893C050;
L_0893C050:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 975u, 0x0893BF08u>(ctx, &aot_mem); return;
      }
      goto L_0893C05C;
    }
L_0893C05C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0EC;
      }
      goto L_0893C0D0;
    }
L_0893C0D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x0893C0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0893C0E8u) goto L_0893C0E8;
    return;
L_0893C0E8:
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0893C0EC;
L_0893C0EC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C19C;
      }
      goto L_0893C0F8;
    }
L_0893C0F8:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893C198;
      }
      goto L_0893C11C;
    }
L_0893C11C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C134u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C134u) goto L_0893C134;
    return;
L_0893C134:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893C144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0893C144u) goto L_0893C144;
    return;
L_0893C144:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C15Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C15Cu) goto L_0893C15C;
    return;
L_0893C15C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4860));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893C17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C17Cu) goto L_0893C17C;
    return;
L_0893C17C:
    ctx.set_gpr(31, 0x0893C184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C184u) goto L_0893C184;
    return;
L_0893C184:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893C198;
      }
      goto L_0893C194;
    }
L_0893C194:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0893C198;
L_0893C198:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893C19C;
L_0893C19C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F8;
      }
      goto L_0893C1A8;
    }
L_0893C1A8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C1CC;
      }
      goto L_0893C1B0;
    }
L_0893C1B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15032));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893C1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C1C4u) goto L_0893C1C4;
    return;
L_0893C1C4:
    ctx.set_gpr(31, 0x0893C1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C1CCu) goto L_0893C1CC;
    return;
L_0893C1CC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C1E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C1E4u) goto L_0893C1E4;
    return;
L_0893C1E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893C220;
      }
      goto L_0893C1F0;
    }
L_0893C1F0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4844));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C218u) goto L_0893C218;
    return;
L_0893C218:
    ctx.set_gpr(31, 0x0893C220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C220u) goto L_0893C220;
    return;
L_0893C220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C294;
      }
      goto L_0893C270;
    }
L_0893C270:
    ctx.set_gpr(31, 0x0893C278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 373u, 0x0893278Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C278u) goto L_0893C278;
    return;
L_0893C278:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4792));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893C290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893C290u) goto L_0893C290;
    return;
L_0893C290:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0893C294;
L_0893C294:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C2A0u) goto L_0893C2A0;
    return;
L_0893C2A0:
    ctx.set_gpr(31, 0x0893C2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C2A8u) goto L_0893C2A8;
    return;
L_0893C2A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C2B4u) goto L_0893C2B4;
    return;
L_0893C2B4:
    ctx.set_gpr(31, 0x0893C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C2BCu) goto L_0893C2BC;
    return;
L_0893C2BC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C360;
      }
      goto L_0893C2C8;
    }
L_0893C2C8:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C35C;
      }
      goto L_0893C2EC;
    }
L_0893C2EC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C330;
      }
      goto L_0893C2FC;
    }
L_0893C2FC:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893C32C;
      }
      goto L_0893C320;
    }
L_0893C320:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C33C;
      }
      goto L_0893C32C;
    }
L_0893C32C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0893C330;
L_0893C330:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C2FC;
      }
      goto L_0893C33C;
    }
L_0893C33C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C35C;
      }
      goto L_0893C344;
    }
L_0893C344:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C35Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C35Cu) goto L_0893C35C;
    return;
L_0893C35C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0893C360;
L_0893C360:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C2C8;
      }
      goto L_0893C36C;
    }
L_0893C36C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893C440;
      }
      goto L_0893C37C;
    }
L_0893C37C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4756));
    ctx.set_gpr(31, 0x0893C38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 889u, 0x0892FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C38Cu) goto L_0893C38C;
    return;
L_0893C38C:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C398u) goto L_0893C398;
    return;
L_0893C398:
    ctx.set_gpr(31, 0x0893C3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C3A0u) goto L_0893C3A0;
    return;
L_0893C3A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C3B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C3B8u) goto L_0893C3B8;
    return;
L_0893C3B8:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C3C4u) goto L_0893C3C4;
    return;
L_0893C3C4:
    ctx.set_gpr(31, 0x0893C3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C3CCu) goto L_0893C3CC;
    return;
L_0893C3CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4728));
    ctx.set_gpr(31, 0x0893C3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C3DCu) goto L_0893C3DC;
    return;
L_0893C3DC:
    ctx.set_gpr(31, 0x0893C3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C3E4u) goto L_0893C3E4;
    return;
L_0893C3E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31360)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4696));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0893C400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C400u) goto L_0893C400;
    return;
L_0893C400:
    ctx.set_gpr(31, 0x0893C408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C408u) goto L_0893C408;
    return;
L_0893C408:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31364)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4656));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0893C424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C424u) goto L_0893C424;
    return;
L_0893C424:
    ctx.set_gpr(31, 0x0893C42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C42Cu) goto L_0893C42C;
    return;
L_0893C42C:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C438u) goto L_0893C438;
    return;
L_0893C438:
    ctx.set_gpr(31, 0x0893C440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C440u) goto L_0893C440;
    return;
L_0893C440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C4A4;
      }
      goto L_0893C480;
    }
L_0893C480:
    ctx.set_gpr(31, 0x0893C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 373u, 0x0893278Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C488u) goto L_0893C488;
    return;
L_0893C488:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4792));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893C4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893C4A0u) goto L_0893C4A0;
    return;
L_0893C4A0:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0893C4A4;
L_0893C4A4:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C4B0u) goto L_0893C4B0;
    return;
L_0893C4B0:
    ctx.set_gpr(31, 0x0893C4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C4B8u) goto L_0893C4B8;
    return;
L_0893C4B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893C4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C4C4u) goto L_0893C4C4;
    return;
L_0893C4C4:
    ctx.set_gpr(31, 0x0893C4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C4CCu) goto L_0893C4CC;
    return;
L_0893C4CC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C57C;
      }
      goto L_0893C4D8;
    }
L_0893C4D8:
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
          goto L_0893C578;
      }
      goto L_0893C4FC;
    }
L_0893C4FC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C540;
      }
      goto L_0893C50C;
    }
L_0893C50C:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893C53C;
      }
      goto L_0893C530;
    }
L_0893C530:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C54C;
      }
      goto L_0893C53C;
    }
L_0893C53C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0893C540;
L_0893C540:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C50C;
      }
      goto L_0893C54C;
    }
L_0893C54C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C554;
    }
L_0893C554:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(416)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C578u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C578u) goto L_0893C578;
    return;
L_0893C578:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893C57C;
L_0893C57C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C4D8;
      }
      goto L_0893C588;
    }
L_0893C588:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893C5D0;
      }
      goto L_0893C598;
    }
L_0893C598:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4616));
    ctx.set_gpr(31, 0x0893C5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C5A8u) goto L_0893C5A8;
    return;
L_0893C5A8:
    ctx.set_gpr(31, 0x0893C5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C5B0u) goto L_0893C5B0;
    return;
L_0893C5B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0893C5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 907u, 0x0892FE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C5BCu) goto L_0893C5BC;
    return;
L_0893C5BC:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893C5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893C5C8u) goto L_0893C5C8;
    return;
L_0893C5C8:
    ctx.set_gpr(31, 0x0893C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893C5D0u) goto L_0893C5D0;
    return;
L_0893C5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C5EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C654;
      }
      goto L_0893C608;
    }
L_0893C608:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C620u) goto L_0893C620;
    return;
L_0893C620:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C654;
      }
      goto L_0893C62C;
    }
L_0893C62C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 544u, 0x0895E370u>(ctx, &aot_mem) && ctx.pc == 0x0893C638u) goto L_0893C638;
    return;
L_0893C638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C654;
      }
      goto L_0893C640;
    }
L_0893C640:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 520u, 0x0895E1F8u>(ctx, &aot_mem) && ctx.pc == 0x0893C64Cu) goto L_0893C64C;
    return;
L_0893C64C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C6B0;
      }
      goto L_0893C654;
    }
L_0893C654:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893C68C;
      }
      goto L_0893C664;
    }
L_0893C664:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C68C;
      }
      goto L_0893C670;
    }
L_0893C670:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30980));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C6B0;
      }
      goto L_0893C68C;
    }
L_0893C68C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C6AC;
      }
      goto L_0893C694;
    }
L_0893C694:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C6AC;
      }
      goto L_0893C6A4;
    }
L_0893C6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C6B0;
      }
      goto L_0893C6AC;
    }
L_0893C6AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893C6B0;
L_0893C6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C6C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C794;
      }
      goto L_0893C6EC;
    }
L_0893C6EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C704u) goto L_0893C704;
    return;
L_0893C704:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C794;
      }
      goto L_0893C710;
    }
L_0893C710:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893C71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 544u, 0x0895E370u>(ctx, &aot_mem) && ctx.pc == 0x0893C71Cu) goto L_0893C71C;
    return;
L_0893C71C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C794;
      }
      goto L_0893C724;
    }
L_0893C724:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C74C;
      }
      goto L_0893C730;
    }
L_0893C730:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 524u, 0x0895E22Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C740u) goto L_0893C740;
    return;
L_0893C740:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893C754;
      }
      goto L_0893C748;
    }
L_0893C748:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0893C74C;
L_0893C74C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893C730;
      }
      goto L_0893C754;
    }
L_0893C754:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893C77C;
      }
      goto L_0893C760;
    }
L_0893C760:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 524u, 0x0895E22Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C76Cu) goto L_0893C76C;
    return;
L_0893C76C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893C814;
      }
      goto L_0893C774;
    }
L_0893C774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C818;
      }
      goto L_0893C77C;
    }
L_0893C77C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893C814;
      }
      goto L_0893C78C;
    }
L_0893C78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C818;
      }
      goto L_0893C794;
    }
L_0893C794:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C814;
      }
      goto L_0893C7A8;
    }
L_0893C7A8:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7D4;
      }
      goto L_0893C7B4;
    }
L_0893C7B4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893C808;
      }
      goto L_0893C7D0;
    }
L_0893C7D0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0893C7D4;
L_0893C7D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893C7B4;
      }
      goto L_0893C7DC;
    }
L_0893C7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C808;
      }
      goto L_0893C7E4;
    }
L_0893C7E4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893C808;
      }
      goto L_0893C800;
    }
L_0893C800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C818;
      }
      goto L_0893C808;
    }
L_0893C808:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893C7E4;
      }
      goto L_0893C814;
    }
L_0893C814:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893C818;
L_0893C818:
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
L_0893C834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C858;
      }
      goto L_0893C84C;
    }
L_0893C84C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8F8;
      }
      goto L_0893C858;
    }
L_0893C858:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8A0;
      }
      goto L_0893C868;
    }
L_0893C868:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C880u) goto L_0893C880;
    return;
L_0893C880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8A0;
      }
      goto L_0893C888;
    }
L_0893C888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 529u, 0x0895E268u>(ctx, &aot_mem) && ctx.pc == 0x0893C898u) goto L_0893C898;
    return;
L_0893C898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8F8;
      }
      goto L_0893C8A0;
    }
L_0893C8A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893C8F4;
      }
      goto L_0893C8B0;
    }
L_0893C8B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8F4;
      }
      goto L_0893C8BC;
    }
L_0893C8BC:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31016), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8F8;
      }
      goto L_0893C8F4;
    }
L_0893C8F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0893C8F8;
L_0893C8F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C90C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C974;
      }
      goto L_0893C928;
    }
L_0893C928:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893C940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893C940u) goto L_0893C940;
    return;
L_0893C940:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C974;
      }
      goto L_0893C94C;
    }
L_0893C94C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 544u, 0x0895E370u>(ctx, &aot_mem) && ctx.pc == 0x0893C958u) goto L_0893C958;
    return;
L_0893C958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C974;
      }
      goto L_0893C960;
    }
L_0893C960:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 537u, 0x0895E2E4u>(ctx, &aot_mem) && ctx.pc == 0x0893C96Cu) goto L_0893C96C;
    return;
L_0893C96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9F0;
      }
      goto L_0893C974;
    }
L_0893C974:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31016)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893C9EC;
      }
      goto L_0893C984;
    }
L_0893C984:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9EC;
      }
      goto L_0893C990;
    }
L_0893C990:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31016), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30984));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9E0;
      }
      goto L_0893C9B8;
    }
L_0893C9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9E0;
      }
      goto L_0893C9D4;
    }
L_0893C9D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893C9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893C9E0u) goto L_0893C9E0;
    return;
L_0893C9E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9F0;
      }
      goto L_0893C9EC;
    }
L_0893C9EC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893C9F0;
L_0893C9F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CA04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893CA1Cu) goto L_0893CA1C;
    return;
L_0893CA1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA40;
      }
      goto L_0893CA28;
    }
L_0893CA28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x0893CA38u) goto L_0893CA38;
    return;
L_0893CA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA4C;
      }
      goto L_0893CA40;
    }
L_0893CA40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893CA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x0893CA4Cu) goto L_0893CA4C;
    return;
L_0893CA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CA60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893CA78u) goto L_0893CA78;
    return;
L_0893CA78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA84;
    }
L_0893CA84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893CA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x0893CA90u) goto L_0893CA90;
    return;
L_0893CA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CAA4;
      }
      goto L_0893CA98;
    }
L_0893CA98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893CAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x0893CAA4u) goto L_0893CAA4;
    return;
L_0893CAA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CAB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30888)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CAC8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30888), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CAD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CB88;
      }
      goto L_0893CAFC;
    }
L_0893CAFC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893CB20;
      }
      goto L_0893CB04;
    }
L_0893CB04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x0893CB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0893CB1Cu) goto L_0893CB1C;
    return;
L_0893CB1C:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0893CB20;
L_0893CB20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CB34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CB34u) goto L_0893CB34;
    return;
L_0893CB34:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893CB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0893CB44u) goto L_0893CB44;
    return;
L_0893CB44:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4588));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893CB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893CB60u) goto L_0893CB60;
    return;
L_0893CB60:
    ctx.set_gpr(31, 0x0893CB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893CB68u) goto L_0893CB68;
    return;
L_0893CB68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CB80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CB80u) goto L_0893CB80;
    return;
L_0893CB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CB90;
      }
      goto L_0893CB88;
    }
L_0893CB88:
    ctx.set_gpr(31, 0x0893CB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 917u, 0x0892FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893CB90u) goto L_0893CB90;
    return;
L_0893CB90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CBAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0893CBBCu);
    // nop
    goto L_0893C5EC;
L_0893CBBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CBCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0893CBDCu);
    // nop
    goto L_0893C834;
L_0893CBDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CBEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0893CBFCu);
    // nop
    goto L_0893C90C;
L_0893CBFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CC0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CC34;
      }
      goto L_0893CC1C;
    }
L_0893CC1C:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CC38;
      }
      goto L_0893CC34;
    }
L_0893CC34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893CC38;
L_0893CC38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CC40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CC5C;
      }
      goto L_0893CC50;
    }
L_0893CC50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CC60;
      }
      goto L_0893CC5C;
    }
L_0893CC5C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893CC60;
L_0893CC60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CC80u);
    // nop
    goto L_0893CBAC;
L_0893CC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CC98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CC98u) goto L_0893CC98;
    return;
L_0893CC98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CCAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CCC4u);
    // nop
    goto L_0893CBAC;
L_0893CCC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CCDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CCDCu) goto L_0893CCDC;
    return;
L_0893CCDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CCF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CD08u);
    // nop
    goto L_0893CBAC;
L_0893CD08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CD20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CD20u) goto L_0893CD20;
    return;
L_0893CD20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CD34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CD4Cu);
    // nop
    goto L_0893CBAC;
L_0893CD4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CD64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CD64u) goto L_0893CD64;
    return;
L_0893CD64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CD78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893CD90u);
    // nop
    goto L_0893CBAC;
L_0893CD90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893CDA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CDA8u) goto L_0893CDA8;
    return;
L_0893CDA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31020));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31024));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31032));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31036));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31044));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31048));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31052));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31060));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31092));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31116));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31120));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31124));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31152));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31172));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CECC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31180));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31188));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31196));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CF0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31200));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CF1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31204));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CF2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31208));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CF3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CF4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
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
L_0893CF68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFB4;
      }
      goto L_0893CF80;
    }
L_0893CF80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0893CF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0893CF8Cu) goto L_0893CF8C;
    return;
L_0893CF8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFB4;
      }
      goto L_0893CFA8;
    }
L_0893CFA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893CFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893CFB4u) goto L_0893CFB4;
    return;
L_0893CFB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CFC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0893CFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0893CFDCu) goto L_0893CFDC;
    return;
L_0893CFDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CFEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893D004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem) && ctx.pc == 0x0893D004u) goto L_0893D004;
    return;
L_0893D004:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D060;
      }
      goto L_0893D03C;
    }
L_0893D03C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D05C;
      }
      goto L_0893D054;
    }
L_0893D054:
    ctx.set_gpr(31, 0x0893D05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893D05Cu) goto L_0893D05C;
    return;
L_0893D05C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893D060;
L_0893D060:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D03C;
      }
      goto L_0893D06C;
    }
L_0893D06C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D090;
      }
      goto L_0893D07C;
    }
L_0893D07C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0893D090;
L_0893D090:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D07C;
      }
      goto L_0893D09C;
    }
L_0893D09C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_0893D0BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D158;
      }
      goto L_0893D0F4;
    }
L_0893D0F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D154;
      }
      goto L_0893D110;
    }
L_0893D110:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D12C;
      }
      goto L_0893D124;
    }
L_0893D124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D134;
      }
      goto L_0893D12C;
    }
L_0893D12C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_0893D134;
L_0893D134:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893D140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893D140u) goto L_0893D140;
    return;
L_0893D140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D154;
      }
      goto L_0893D148;
    }
L_0893D148:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D168;
      }
      goto L_0893D154;
    }
L_0893D154:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893D158;
L_0893D158:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D0F4;
      }
      goto L_0893D164;
    }
L_0893D164:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893D168;
L_0893D168:
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
L_0893D18C:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D1D0;
      }
      goto L_0893D1C4;
    }
L_0893D1C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D1DC;
      }
      goto L_0893D1D0;
    }
L_0893D1D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D31C;
      }
      goto L_0893D1DC;
    }
L_0893D1DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x0893D1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0893D1F4u) goto L_0893D1F4;
    return;
L_0893D1F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D200;
      }
      goto L_0893D1FC;
    }
L_0893D1FC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(13));
    goto L_0893D200;
L_0893D200:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4572));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0893D218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0893D218u) goto L_0893D218;
    return;
L_0893D218:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D23C;
      }
      goto L_0893D220;
    }
L_0893D220:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893D22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0893D22Cu) goto L_0893D22C;
    return;
L_0893D22C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893D23C;
      }
      goto L_0893D238;
    }
L_0893D238:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(6));
    goto L_0893D23C;
L_0893D23C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D30C;
      }
      goto L_0893D248;
    }
L_0893D248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D308;
      }
      goto L_0893D264;
    }
L_0893D264:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D308;
      }
      goto L_0893D278;
    }
L_0893D278:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D308;
      }
      goto L_0893D284;
    }
L_0893D284:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x0893D29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0893D29Cu) goto L_0893D29C;
    return;
L_0893D29C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2A8;
      }
      goto L_0893D2A4;
    }
L_0893D2A4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(13));
    goto L_0893D2A8;
L_0893D2A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4572));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0893D2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0893D2C0u) goto L_0893D2C0;
    return;
L_0893D2C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2E4;
      }
      goto L_0893D2C8;
    }
L_0893D2C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893D2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0893D2D4u) goto L_0893D2D4;
    return;
L_0893D2D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893D2E4;
      }
      goto L_0893D2E0;
    }
L_0893D2E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    goto L_0893D2E4;
L_0893D2E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893D2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893D2F4u) goto L_0893D2F4;
    return;
L_0893D2F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D308;
      }
      goto L_0893D2FC;
    }
L_0893D2FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D31C;
      }
      goto L_0893D308;
    }
L_0893D308:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893D30C;
L_0893D30C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D248;
      }
      goto L_0893D318;
    }
L_0893D318:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893D31C;
L_0893D31C:
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
L_0893D344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D37C;
      }
      goto L_0893D370;
    }
L_0893D370:
    ctx.set_gpr(31, 0x0893D378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893D378u) goto L_0893D378;
    return;
L_0893D378:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_0893D37C;
L_0893D37C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3A4;
      }
      goto L_0893D384;
    }
L_0893D384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D398;
      }
      goto L_0893D390;
    }
L_0893D390:
    ctx.set_gpr(31, 0x0893D398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893D398u) goto L_0893D398;
    return;
L_0893D398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D464;
      }
      goto L_0893D3A4;
    }
L_0893D3A4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3B8;
      }
      goto L_0893D3AC;
    }
L_0893D3AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3C0;
      }
      goto L_0893D3B8;
    }
L_0893D3B8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4496)));
    goto L_0893D3C0;
L_0893D3C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893D3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x0893D3D4u) goto L_0893D3D4;
    return;
L_0893D3D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893D408;
      }
      goto L_0893D3E0;
    }
L_0893D3E0:
    ctx.set_gpr(31, 0x0893D3E8u);
    // nop
    goto L_0893CAB8;
L_0893D3E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3FC;
      }
      goto L_0893D3F4;
    }
L_0893D3F4:
    ctx.set_gpr(31, 0x0893D3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893D3FCu) goto L_0893D3FC;
    return;
L_0893D3FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D464;
      }
      goto L_0893D408;
    }
L_0893D408:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893D424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893D424u) goto L_0893D424;
    return;
L_0893D424:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D44C;
      }
      goto L_0893D42C;
    }
L_0893D42C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D440;
      }
      goto L_0893D438;
    }
L_0893D438:
    ctx.set_gpr(31, 0x0893D440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893D440u) goto L_0893D440;
    return;
L_0893D440:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D464;
      }
      goto L_0893D44C;
    }
L_0893D44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D460;
      }
      goto L_0893D458;
    }
L_0893D458:
    ctx.set_gpr(31, 0x0893D460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893D460u) goto L_0893D460;
    return;
L_0893D460:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0893D464;
L_0893D464:
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
L_0893D480:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D4C8;
      }
      goto L_0893D4BC;
    }
L_0893D4BC:
    ctx.set_gpr(31, 0x0893D4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893D4C4u) goto L_0893D4C4;
    return;
L_0893D4C4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_0893D4C8;
L_0893D4C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D4DC;
      }
      goto L_0893D4D0;
    }
L_0893D4D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB88;
      }
      goto L_0893D4DC;
    }
L_0893D4DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893D524;
      }
      goto L_0893D4E8;
    }
L_0893D4E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4496)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893D500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x0893D500u) goto L_0893D500;
    return;
L_0893D500:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893D524;
      }
      goto L_0893D510;
    }
L_0893D510:
    ctx.set_gpr(31, 0x0893D518u);
    // nop
    goto L_0893CAB8;
L_0893D518:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB88;
      }
      goto L_0893D524;
    }
L_0893D524:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893D534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 639u, 0x08952C00u>(ctx, &aot_mem) && ctx.pc == 0x0893D534u) goto L_0893D534;
    return;
L_0893D534:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB3C;
      }
      goto L_0893D550;
    }
L_0893D550:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0893D568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 649u, 0x08952CC0u>(ctx, &aot_mem) && ctx.pc == 0x0893D568u) goto L_0893D568;
    return;
L_0893D568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB48;
      }
      goto L_0893D570;
    }
L_0893D570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D588;
      }
      goto L_0893D580;
    }
L_0893D580:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893D588;
L_0893D588:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893D5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x0893D5A4u) goto L_0893D5A4;
    return;
L_0893D5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB38;
      }
      goto L_0893D5AC;
    }
L_0893D5AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB38;
      }
      goto L_0893D5B8;
    }
L_0893D5B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB38;
      }
      goto L_0893D5C4;
    }
L_0893D5C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D5DC;
      }
      goto L_0893D5D4;
    }
L_0893D5D4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893D5DC;
L_0893D5DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893D5E8u);
    // nop
    goto L_0893D0BC;
L_0893D5E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0893D5F8u) goto L_0893D5F8;
    return;
L_0893D5F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D638;
      }
      goto L_0893D604;
    }
L_0893D604:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893D610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D610u) goto L_0893D610;
    return;
L_0893D610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x0893D61Cu) goto L_0893D61C;
    return;
L_0893D61C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D62Cu) goto L_0893D62C;
    return;
L_0893D62C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D93C;
      }
      goto L_0893D638;
    }
L_0893D638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D648;
    }
L_0893D648:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893D654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893D654u) goto L_0893D654;
    return;
L_0893D654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D668;
      }
      goto L_0893D65C;
    }
L_0893D65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893D668u) goto L_0893D668;
    return;
L_0893D668:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893D670;
L_0893D670:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893D684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893D684u) goto L_0893D684;
    return;
L_0893D684:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D6AC;
      }
      goto L_0893D698;
    }
L_0893D698:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0893D6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D6A4u) goto L_0893D6A4;
    return;
L_0893D6A4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893D6AC;
L_0893D6AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D6C4;
      }
      goto L_0893D6B4;
    }
L_0893D6B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893D6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893D6C4u) goto L_0893D6C4;
    return;
L_0893D6C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D724;
      }
      goto L_0893D6FC;
    }
L_0893D6FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893D708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893D708u) goto L_0893D708;
    return;
L_0893D708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D71C;
      }
      goto L_0893D710;
    }
L_0893D710:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893D71Cu) goto L_0893D71C;
    return;
L_0893D71C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893D724;
L_0893D724:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893D738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893D738u) goto L_0893D738;
    return;
L_0893D738:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D760;
      }
      goto L_0893D74C;
    }
L_0893D74C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0893D758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D758u) goto L_0893D758;
    return;
L_0893D758:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893D760;
L_0893D760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D778;
      }
      goto L_0893D768;
    }
L_0893D768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893D778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893D778u) goto L_0893D778;
    return;
L_0893D778:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7B8;
      }
      goto L_0893D790;
    }
L_0893D790:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893D79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893D79Cu) goto L_0893D79C;
    return;
L_0893D79C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7B0;
      }
      goto L_0893D7A4;
    }
L_0893D7A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893D7B0u) goto L_0893D7B0;
    return;
L_0893D7B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893D7B8;
L_0893D7B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893D7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893D7CCu) goto L_0893D7CC;
    return;
L_0893D7CC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7F4;
      }
      goto L_0893D7E0;
    }
L_0893D7E0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0893D7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D7ECu) goto L_0893D7EC;
    return;
L_0893D7EC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893D7F4;
L_0893D7F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D80C;
      }
      goto L_0893D7FC;
    }
L_0893D7FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893D80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893D80Cu) goto L_0893D80C;
    return;
L_0893D80C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D84C;
      }
      goto L_0893D824;
    }
L_0893D824:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893D830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893D830u) goto L_0893D830;
    return;
L_0893D830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D844;
      }
      goto L_0893D838;
    }
L_0893D838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893D844u) goto L_0893D844;
    return;
L_0893D844:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893D84C;
L_0893D84C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893D860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893D860u) goto L_0893D860;
    return;
L_0893D860:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D888;
      }
      goto L_0893D874;
    }
L_0893D874:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0893D880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D880u) goto L_0893D880;
    return;
L_0893D880:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893D888;
L_0893D888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D8A0;
      }
      goto L_0893D890;
    }
L_0893D890:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893D8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893D8A0u) goto L_0893D8A0;
    return;
L_0893D8A0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D8E0;
      }
      goto L_0893D8B8;
    }
L_0893D8B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893D8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893D8C4u) goto L_0893D8C4;
    return;
L_0893D8C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D8D8;
      }
      goto L_0893D8CC;
    }
L_0893D8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893D8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893D8D8u) goto L_0893D8D8;
    return;
L_0893D8D8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893D8E0;
L_0893D8E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893D8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893D8F4u) goto L_0893D8F4;
    return;
L_0893D8F4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D91C;
      }
      goto L_0893D908;
    }
L_0893D908:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0893D914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D914u) goto L_0893D914;
    return;
L_0893D914:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893D91C;
L_0893D91C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D934;
      }
      goto L_0893D924;
    }
L_0893D924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893D934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893D934u) goto L_0893D934;
    return;
L_0893D934:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.set_gpr(22, 0u + 0u);
    goto L_0893D93C;
L_0893D93C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D958;
      }
      goto L_0893D950;
    }
L_0893D950:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893D958;
L_0893D958:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893D96Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893D96Cu) goto L_0893D96C;
    return;
L_0893D96C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB20;
      }
      goto L_0893D974;
    }
L_0893D974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D994;
      }
      goto L_0893D98C;
    }
L_0893D98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D99C;
      }
      goto L_0893D994;
    }
L_0893D994:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893D99C;
L_0893D99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9D4;
      }
      goto L_0893D9A4;
    }
L_0893D9A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9C0;
      }
      goto L_0893D9B8;
    }
L_0893D9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9C8;
      }
      goto L_0893D9C0;
    }
L_0893D9C0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893D9C8;
L_0893D9C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9F4;
      }
      goto L_0893D9D4;
    }
L_0893D9D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9EC;
      }
      goto L_0893D9E4;
    }
L_0893D9E4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893D9EC;
L_0893D9EC:
    ctx.set_gpr(31, 0x0893D9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0893D9F4u) goto L_0893D9F4;
    return;
L_0893D9F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA48;
      }
      goto L_0893DA0C;
    }
L_0893DA0C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA48;
      }
      goto L_0893DA18;
    }
L_0893DA18:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893DA24u);
    // nop
    goto L_0893D18C;
L_0893DA24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893DB20;
      }
      goto L_0893DA30;
    }
L_0893DA30:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DA40u);
    // nop
    goto L_0893CFEC;
L_0893DA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB20;
      }
      goto L_0893DA48;
    }
L_0893DA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA60;
      }
      goto L_0893DA58;
    }
L_0893DA58:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893DA60;
L_0893DA60:
    ctx.set_gpr(31, 0x0893DA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 338u, 0x089324CCu>(ctx, &aot_mem) && ctx.pc == 0x0893DA68u) goto L_0893DA68;
    return;
L_0893DA68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893DB20;
      }
      goto L_0893DA74;
    }
L_0893DA74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA8C;
      }
      goto L_0893DA84;
    }
L_0893DA84:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0893DA8C;
L_0893DA8C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DAC8;
      }
      goto L_0893DAA0;
    }
L_0893DAA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DAACu) goto L_0893DAAC;
    return;
L_0893DAAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DAC0;
      }
      goto L_0893DAB4;
    }
L_0893DAB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DAC0u) goto L_0893DAC0;
    return;
L_0893DAC0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DAC8;
L_0893DAC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893DADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DADCu) goto L_0893DADC;
    return;
L_0893DADC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB04;
      }
      goto L_0893DAF0;
    }
L_0893DAF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0893DAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DAFCu) goto L_0893DAFC;
    return;
L_0893DAFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DB04;
L_0893DB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB1C;
      }
      goto L_0893DB0C;
    }
L_0893DB0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB1Cu) goto L_0893DB1C;
    return;
L_0893DB1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    goto L_0893DB20;
L_0893DB20:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB38;
      }
      goto L_0893DB28;
    }
L_0893DB28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0893DB38u);
    // nop
    goto L_0893CFC8;
L_0893DB38:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893DB3C;
L_0893DB3C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D550;
      }
      goto L_0893DB48;
    }
L_0893DB48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB5C;
      }
      goto L_0893DB54;
    }
L_0893DB54:
    ctx.set_gpr(31, 0x0893DB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893DB5Cu) goto L_0893DB5C;
    return;
L_0893DB5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB70;
      }
      goto L_0893DB68;
    }
L_0893DB68:
    ctx.set_gpr(31, 0x0893DB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893DB70u) goto L_0893DB70;
    return;
L_0893DB70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB84;
      }
      goto L_0893DB7C;
    }
L_0893DB7C:
    ctx.set_gpr(31, 0x0893DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893DB84u) goto L_0893DB84;
    return;
L_0893DB84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893DB88;
L_0893DB88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893DBB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E19C;
      }
      goto L_0893DBE8;
    }
L_0893DBE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC24;
      }
      goto L_0893DBF4;
    }
L_0893DBF4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC24;
      }
      goto L_0893DC00;
    }
L_0893DC00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893DC0Cu);
    // nop
    goto L_0893D18C;
L_0893DC0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC1Cu) goto L_0893DC1C;
    return;
L_0893DC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC58;
      }
      goto L_0893DC24;
    }
L_0893DC24:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC58;
      }
      goto L_0893DC2C;
    }
L_0893DC2C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC58;
      }
      goto L_0893DC38;
    }
L_0893DC38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0893DC48u);
    // nop
    goto L_0893D0BC;
L_0893DC48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC58u) goto L_0893DC58;
    return;
L_0893DC58:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC98;
      }
      goto L_0893DC64;
    }
L_0893DC64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893DC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC70u) goto L_0893DC70;
    return;
L_0893DC70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x0893DC7Cu) goto L_0893DC7C;
    return;
L_0893DC7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC8Cu) goto L_0893DC8C;
    return;
L_0893DC8C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF9C;
      }
      goto L_0893DC98;
    }
L_0893DC98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DCD0;
      }
      goto L_0893DCA8;
    }
L_0893DCA8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DCB4u) goto L_0893DCB4;
    return;
L_0893DCB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DCC8;
      }
      goto L_0893DCBC;
    }
L_0893DCBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DCC8u) goto L_0893DCC8;
    return;
L_0893DCC8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DCD0;
L_0893DCD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893DCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DCE4u) goto L_0893DCE4;
    return;
L_0893DCE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD0C;
      }
      goto L_0893DCF8;
    }
L_0893DCF8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0893DD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DD04u) goto L_0893DD04;
    return;
L_0893DD04:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DD0C;
L_0893DD0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD24;
      }
      goto L_0893DD14;
    }
L_0893DD14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DD24u) goto L_0893DD24;
    return;
L_0893DD24:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD84;
      }
      goto L_0893DD5C;
    }
L_0893DD5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DD68u) goto L_0893DD68;
    return;
L_0893DD68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD7C;
      }
      goto L_0893DD70;
    }
L_0893DD70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DD7Cu) goto L_0893DD7C;
    return;
L_0893DD7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DD84;
L_0893DD84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893DD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DD98u) goto L_0893DD98;
    return;
L_0893DD98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DDC0;
      }
      goto L_0893DDAC;
    }
L_0893DDAC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0893DDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DDB8u) goto L_0893DDB8;
    return;
L_0893DDB8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DDC0;
L_0893DDC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DDD8;
      }
      goto L_0893DDC8;
    }
L_0893DDC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DDD8u) goto L_0893DDD8;
    return;
L_0893DDD8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE18;
      }
      goto L_0893DDF0;
    }
L_0893DDF0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DDFCu) goto L_0893DDFC;
    return;
L_0893DDFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE10;
      }
      goto L_0893DE04;
    }
L_0893DE04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DE10u) goto L_0893DE10;
    return;
L_0893DE10:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DE18;
L_0893DE18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893DE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DE2Cu) goto L_0893DE2C;
    return;
L_0893DE2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE54;
      }
      goto L_0893DE40;
    }
L_0893DE40:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0893DE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DE4Cu) goto L_0893DE4C;
    return;
L_0893DE4C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DE54;
L_0893DE54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE6C;
      }
      goto L_0893DE5C;
    }
L_0893DE5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DE6Cu) goto L_0893DE6C;
    return;
L_0893DE6C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DEAC;
      }
      goto L_0893DE84;
    }
L_0893DE84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DE90u) goto L_0893DE90;
    return;
L_0893DE90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DEA4;
      }
      goto L_0893DE98;
    }
L_0893DE98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DEA4u) goto L_0893DEA4;
    return;
L_0893DEA4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DEAC;
L_0893DEAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893DEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DEC0u) goto L_0893DEC0;
    return;
L_0893DEC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DEE8;
      }
      goto L_0893DED4;
    }
L_0893DED4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0893DEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DEE0u) goto L_0893DEE0;
    return;
L_0893DEE0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DEE8;
L_0893DEE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF00;
      }
      goto L_0893DEF0;
    }
L_0893DEF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DF00u) goto L_0893DF00;
    return;
L_0893DF00:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF40;
      }
      goto L_0893DF18;
    }
L_0893DF18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893DF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893DF24u) goto L_0893DF24;
    return;
L_0893DF24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF38;
      }
      goto L_0893DF2C;
    }
L_0893DF2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893DF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893DF38u) goto L_0893DF38;
    return;
L_0893DF38:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893DF40;
L_0893DF40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893DF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893DF54u) goto L_0893DF54;
    return;
L_0893DF54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF7C;
      }
      goto L_0893DF68;
    }
L_0893DF68:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0893DF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DF74u) goto L_0893DF74;
    return;
L_0893DF74:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893DF7C;
L_0893DF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF94;
      }
      goto L_0893DF84;
    }
L_0893DF84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893DF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893DF94u) goto L_0893DF94;
    return;
L_0893DF94:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(20, 0u + 0u);
    goto L_0893DF9C;
L_0893DF9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893DFACu);
    // nop
    goto L_0893E874;
L_0893DFAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E180;
      }
      goto L_0893DFB4;
    }
L_0893DFB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DFD4;
      }
      goto L_0893DFCC;
    }
L_0893DFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DFDC;
      }
      goto L_0893DFD4;
    }
L_0893DFD4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893DFDC;
L_0893DFDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E014;
      }
      goto L_0893DFE4;
    }
L_0893DFE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E000;
      }
      goto L_0893DFF8;
    }
L_0893DFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E008;
      }
      goto L_0893E000;
    }
L_0893E000:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893E008;
L_0893E008:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E034;
      }
      goto L_0893E014;
    }
L_0893E014:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E034;
      }
      goto L_0893E020;
    }
L_0893E020:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E034;
      }
      goto L_0893E02C;
    }
L_0893E02C:
    ctx.set_gpr(31, 0x0893E034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0893E034u) goto L_0893E034;
    return;
L_0893E034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E090;
      }
      goto L_0893E04C;
    }
L_0893E04C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E090;
      }
      goto L_0893E058;
    }
L_0893E058:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893E064u);
    // nop
    goto L_0893D18C;
L_0893E064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E180;
      }
      goto L_0893E06C;
    }
L_0893E06C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893E180;
      }
      goto L_0893E078;
    }
L_0893E078:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893E088u);
    // nop
    goto L_0893CFEC;
L_0893E088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E180;
      }
      goto L_0893E090;
    }
L_0893E090:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E0AC;
      }
      goto L_0893E0A4;
    }
L_0893E0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E0B4;
      }
      goto L_0893E0AC;
    }
L_0893E0AC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_0893E0B4;
L_0893E0B4:
    ctx.set_gpr(31, 0x0893E0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 338u, 0x089324CCu>(ctx, &aot_mem) && ctx.pc == 0x0893E0BCu) goto L_0893E0BC;
    return;
L_0893E0BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893E180;
      }
      goto L_0893E0C8;
    }
L_0893E0C8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E0E8;
      }
      goto L_0893E0E0;
    }
L_0893E0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E0F0;
      }
      goto L_0893E0E8;
    }
L_0893E0E8:
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8240));
    goto L_0893E0F0;
L_0893E0F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E128;
      }
      goto L_0893E100;
    }
L_0893E100:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893E10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893E10Cu) goto L_0893E10C;
    return;
L_0893E10C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E120;
      }
      goto L_0893E114;
    }
L_0893E114:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893E120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893E120u) goto L_0893E120;
    return;
L_0893E120:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893E128;
L_0893E128:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893E13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893E13Cu) goto L_0893E13C;
    return;
L_0893E13C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E164;
      }
      goto L_0893E150;
    }
L_0893E150:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0893E15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E15Cu) goto L_0893E15C;
    return;
L_0893E15C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893E164;
L_0893E164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E17C;
      }
      goto L_0893E16C;
    }
L_0893E16C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893E17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893E17Cu) goto L_0893E17C;
    return;
L_0893E17C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    goto L_0893E180;
L_0893E180:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E198;
      }
      goto L_0893E188;
    }
L_0893E188:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0893E198u);
    // nop
    goto L_0893CFC8;
L_0893E198:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_0893E19C;
L_0893E19C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E1BC;
      }
      goto L_0893E1A4;
    }
L_0893E1A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DBE8;
      }
      goto L_0893E1B0;
    }
L_0893E1B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DBE8;
      }
      goto L_0893E1BC;
    }
L_0893E1BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E1D0;
      }
      goto L_0893E1C8;
    }
L_0893E1C8:
    ctx.set_gpr(31, 0x0893E1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E1D0u) goto L_0893E1D0;
    return;
L_0893E1D0:
    ctx.set_gpr(2, 0u + 0u);
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
L_0893E1F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893E21Cu);
    // nop
    goto L_0893CF3C;
L_0893E21C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E23C;
      }
      goto L_0893E234;
    }
L_0893E234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E244;
      }
      goto L_0893E23C;
    }
L_0893E23C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_0893E244;
L_0893E244:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4564));
    ctx.set_gpr(31, 0x0893E254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893E254u) goto L_0893E254;
    return;
L_0893E254:
    ctx.set_gpr(31, 0x0893E25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893E25Cu) goto L_0893E25C;
    return;
L_0893E25C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E2B0;
      }
      goto L_0893E268;
    }
L_0893E268:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893E278u);
    // nop
    goto L_0893CF4C;
L_0893E278:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E2AC;
      }
      goto L_0893E284;
    }
L_0893E284:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0893E290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893E290u) goto L_0893E290;
    return;
L_0893E290:
    ctx.set_gpr(31, 0x0893E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893E298u) goto L_0893E298;
    return;
L_0893E298:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893E2ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893E2ACu) goto L_0893E2AC;
    return;
L_0893E2AC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893E2B0;
L_0893E2B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E268;
      }
      goto L_0893E2BC;
    }
L_0893E2BC:
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
L_0893E2DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E31C;
      }
      goto L_0893E310;
    }
L_0893E310:
    ctx.set_gpr(31, 0x0893E318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893E318u) goto L_0893E318;
    return;
L_0893E318:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_0893E31C;
L_0893E31C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E344;
      }
      goto L_0893E324;
    }
L_0893E324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E338;
      }
      goto L_0893E330;
    }
L_0893E330:
    ctx.set_gpr(31, 0x0893E338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E338u) goto L_0893E338;
    return;
L_0893E338:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D8;
      }
      goto L_0893E344;
    }
L_0893E344:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E358;
      }
      goto L_0893E34C;
    }
L_0893E34C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E424;
      }
      goto L_0893E358;
    }
L_0893E358:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4496)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893E370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x0893E370u) goto L_0893E370;
    return;
L_0893E370:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893E39C;
      }
      goto L_0893E37C;
    }
L_0893E37C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E390;
      }
      goto L_0893E388;
    }
L_0893E388:
    ctx.set_gpr(31, 0x0893E390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E390u) goto L_0893E390;
    return;
L_0893E390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D8;
      }
      goto L_0893E39C;
    }
L_0893E39C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E3B8;
      }
      goto L_0893E3B0;
    }
L_0893E3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E3C0;
      }
      goto L_0893E3B8;
    }
L_0893E3B8:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_0893E3C0;
L_0893E3C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x0893E3DCu) goto L_0893E3DC;
    return;
L_0893E3DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E404;
      }
      goto L_0893E3E4;
    }
L_0893E3E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E3F8;
      }
      goto L_0893E3F0;
    }
L_0893E3F0:
    ctx.set_gpr(31, 0x0893E3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E3F8u) goto L_0893E3F8;
    return;
L_0893E3F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D8;
      }
      goto L_0893E404;
    }
L_0893E404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E424;
      }
      goto L_0893E414;
    }
L_0893E414:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E424;
      }
      goto L_0893E424;
    }
L_0893E424:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E47C;
      }
      goto L_0893E42C;
    }
L_0893E42C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E47C;
      }
      goto L_0893E438;
    }
L_0893E438:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0893E44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x0893E44Cu) goto L_0893E44C;
    return;
L_0893E44C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893E47C;
      }
      goto L_0893E45C;
    }
L_0893E45C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E470;
      }
      goto L_0893E468;
    }
L_0893E468:
    ctx.set_gpr(31, 0x0893E470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E470u) goto L_0893E470;
    return;
L_0893E470:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D8;
      }
      goto L_0893E47C;
    }
L_0893E47C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893E498u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893E498u) goto L_0893E498;
    return;
L_0893E498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893E4A0;
    }
L_0893E4A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4B4;
      }
      goto L_0893E4AC;
    }
L_0893E4AC:
    ctx.set_gpr(31, 0x0893E4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E4B4u) goto L_0893E4B4;
    return;
L_0893E4B4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D8;
      }
      goto L_0893E4C0;
    }
L_0893E4C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D4;
      }
      goto L_0893E4CC;
    }
L_0893E4CC:
    ctx.set_gpr(31, 0x0893E4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0893E4D4u) goto L_0893E4D4;
    return;
L_0893E4D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0893E4D8;
L_0893E4D8:
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
L_0893E4F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E52C;
      }
      goto L_0893E520;
    }
L_0893E520:
    ctx.set_gpr(31, 0x0893E528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893E528u) goto L_0893E528;
    return;
L_0893E528:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_0893E52C;
L_0893E52C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E540;
      }
      goto L_0893E534;
    }
L_0893E534:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E858;
      }
      goto L_0893E540;
    }
L_0893E540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4484)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E56Cu) goto L_0893E56C;
    return;
L_0893E56C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4480)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E598u) goto L_0893E598;
    return;
L_0893E598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4464)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E5C4u) goto L_0893E5C4;
    return;
L_0893E5C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4448)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893E5E8u) goto L_0893E5E8;
    return;
L_0893E5E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4436)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893E60Cu) goto L_0893E60C;
    return;
L_0893E60C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4424)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893E630u) goto L_0893E630;
    return;
L_0893E630:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4400)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893E654u) goto L_0893E654;
    return;
L_0893E654:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4388)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893E678u) goto L_0893E678;
    return;
L_0893E678:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4376)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E6A4u) goto L_0893E6A4;
    return;
L_0893E6A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4360)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E6D0u) goto L_0893E6D0;
    return;
L_0893E6D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4348)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E6FCu) goto L_0893E6FC;
    return;
L_0893E6FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4344)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E728u) goto L_0893E728;
    return;
L_0893E728:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4324)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E754u) goto L_0893E754;
    return;
L_0893E754:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4304)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E780u) goto L_0893E780;
    return;
L_0893E780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4284)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E7ACu) goto L_0893E7AC;
    return;
L_0893E7AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4264)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E7D8u) goto L_0893E7D8;
    return;
L_0893E7D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4244)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E804u) goto L_0893E804;
    return;
L_0893E804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4224)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893E830u) goto L_0893E830;
    return;
L_0893E830:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4196)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893E854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893E854u) goto L_0893E854;
    return;
L_0893E854:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0893E858;
L_0893E858:
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
L_0893E874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893E89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0893E89Cu) goto L_0893E89C;
    return;
L_0893E89C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8D8;
      }
      goto L_0893E8B0;
    }
L_0893E8B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893E8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893E8BCu) goto L_0893E8BC;
    return;
L_0893E8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8D0;
      }
      goto L_0893E8C4;
    }
L_0893E8C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893E8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893E8D0u) goto L_0893E8D0;
    return;
L_0893E8D0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893E8D8;
L_0893E8D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893E8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893E8ECu) goto L_0893E8EC;
    return;
L_0893E8EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E91C;
      }
      goto L_0893E900;
    }
L_0893E900:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E91C;
      }
      goto L_0893E918;
    }
L_0893E918:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893E91C;
L_0893E91C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E948;
      }
      goto L_0893E924;
    }
L_0893E924:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E948;
      }
      goto L_0893E93C;
    }
L_0893E93C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893E948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E948u) goto L_0893E948;
    return;
L_0893E948:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E988;
      }
      goto L_0893E960;
    }
L_0893E960:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893E96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893E96Cu) goto L_0893E96C;
    return;
L_0893E96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E980;
      }
      goto L_0893E974;
    }
L_0893E974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893E980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893E980u) goto L_0893E980;
    return;
L_0893E980:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893E988;
L_0893E988:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893E99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893E99Cu) goto L_0893E99C;
    return;
L_0893E99C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9CC;
      }
      goto L_0893E9B0;
    }
L_0893E9B0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9CC;
      }
      goto L_0893E9C8;
    }
L_0893E9C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893E9CC;
L_0893E9CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9F8;
      }
      goto L_0893E9D4;
    }
L_0893E9D4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9F8;
      }
      goto L_0893E9EC;
    }
L_0893E9EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893E9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E9F8u) goto L_0893E9F8;
    return;
L_0893E9F8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA60;
      }
      goto L_0893EA38;
    }
L_0893EA38:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EA44u) goto L_0893EA44;
    return;
L_0893EA44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA58;
      }
      goto L_0893EA4C;
    }
L_0893EA4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EA58u) goto L_0893EA58;
    return;
L_0893EA58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EA60;
L_0893EA60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EA74u) goto L_0893EA74;
    return;
L_0893EA74:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAA4;
      }
      goto L_0893EA88;
    }
L_0893EA88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAA4;
      }
      goto L_0893EAA0;
    }
L_0893EAA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EAA4;
L_0893EAA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAD0;
      }
      goto L_0893EAAC;
    }
L_0893EAAC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAD0;
      }
      goto L_0893EAC4;
    }
L_0893EAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EAD0u) goto L_0893EAD0;
    return;
L_0893EAD0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB10;
      }
      goto L_0893EAE8;
    }
L_0893EAE8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EAF4u) goto L_0893EAF4;
    return;
L_0893EAF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB08;
      }
      goto L_0893EAFC;
    }
L_0893EAFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EB08u) goto L_0893EB08;
    return;
L_0893EB08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EB10;
L_0893EB10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EB24u) goto L_0893EB24;
    return;
L_0893EB24:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB54;
      }
      goto L_0893EB38;
    }
L_0893EB38:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB54;
      }
      goto L_0893EB50;
    }
L_0893EB50:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EB54;
L_0893EB54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB80;
      }
      goto L_0893EB5C;
    }
L_0893EB5C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB80;
      }
      goto L_0893EB74;
    }
L_0893EB74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EB80u) goto L_0893EB80;
    return;
L_0893EB80:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EBC0;
      }
      goto L_0893EB98;
    }
L_0893EB98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EBA4u) goto L_0893EBA4;
    return;
L_0893EBA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EBB8;
      }
      goto L_0893EBAC;
    }
L_0893EBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EBB8u) goto L_0893EBB8;
    return;
L_0893EBB8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EBC0;
L_0893EBC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EBD4u) goto L_0893EBD4;
    return;
L_0893EBD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC04;
      }
      goto L_0893EBE8;
    }
L_0893EBE8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC04;
      }
      goto L_0893EC00;
    }
L_0893EC00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EC04;
L_0893EC04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC30;
      }
      goto L_0893EC0C;
    }
L_0893EC0C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC30;
      }
      goto L_0893EC24;
    }
L_0893EC24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EC30u) goto L_0893EC30;
    return;
L_0893EC30:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC70;
      }
      goto L_0893EC48;
    }
L_0893EC48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EC54u) goto L_0893EC54;
    return;
L_0893EC54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC68;
      }
      goto L_0893EC5C;
    }
L_0893EC5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EC68u) goto L_0893EC68;
    return;
L_0893EC68:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EC70;
L_0893EC70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EC84u) goto L_0893EC84;
    return;
L_0893EC84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECB4;
      }
      goto L_0893EC98;
    }
L_0893EC98:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECB4;
      }
      goto L_0893ECB0;
    }
L_0893ECB0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893ECB4;
L_0893ECB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECE0;
      }
      goto L_0893ECBC;
    }
L_0893ECBC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECE0;
      }
      goto L_0893ECD4;
    }
L_0893ECD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893ECE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893ECE0u) goto L_0893ECE0;
    return;
L_0893ECE0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED20;
      }
      goto L_0893ECF8;
    }
L_0893ECF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893ED04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893ED04u) goto L_0893ED04;
    return;
L_0893ED04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED18;
      }
      goto L_0893ED0C;
    }
L_0893ED0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893ED18u) goto L_0893ED18;
    return;
L_0893ED18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893ED20;
L_0893ED20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893ED34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893ED34u) goto L_0893ED34;
    return;
L_0893ED34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED64;
      }
      goto L_0893ED48;
    }
L_0893ED48:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED64;
      }
      goto L_0893ED60;
    }
L_0893ED60:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893ED64;
L_0893ED64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED90;
      }
      goto L_0893ED6C;
    }
L_0893ED6C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED90;
      }
      goto L_0893ED84;
    }
L_0893ED84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893ED90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893ED90u) goto L_0893ED90;
    return;
L_0893ED90:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDD0;
      }
      goto L_0893EDA8;
    }
L_0893EDA8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EDB4u) goto L_0893EDB4;
    return;
L_0893EDB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDC8;
      }
      goto L_0893EDBC;
    }
L_0893EDBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EDC8u) goto L_0893EDC8;
    return;
L_0893EDC8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EDD0;
L_0893EDD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EDE4u) goto L_0893EDE4;
    return;
L_0893EDE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE14;
      }
      goto L_0893EDF8;
    }
L_0893EDF8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE14;
      }
      goto L_0893EE10;
    }
L_0893EE10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EE14;
L_0893EE14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE40;
      }
      goto L_0893EE1C;
    }
L_0893EE1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE40;
      }
      goto L_0893EE34;
    }
L_0893EE34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EE40u) goto L_0893EE40;
    return;
L_0893EE40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE80;
      }
      goto L_0893EE58;
    }
L_0893EE58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EE64u) goto L_0893EE64;
    return;
L_0893EE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE78;
      }
      goto L_0893EE6C;
    }
L_0893EE6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EE78u) goto L_0893EE78;
    return;
L_0893EE78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EE80;
L_0893EE80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893EE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EE94u) goto L_0893EE94;
    return;
L_0893EE94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEC4;
      }
      goto L_0893EEA8;
    }
L_0893EEA8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEC4;
      }
      goto L_0893EEC0;
    }
L_0893EEC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EEC4;
L_0893EEC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEF0;
      }
      goto L_0893EECC;
    }
L_0893EECC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEF0;
      }
      goto L_0893EEE4;
    }
L_0893EEE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EEF0u) goto L_0893EEF0;
    return;
L_0893EEF0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
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
L_0893EF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893EF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 440u, 0x08945F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EF38u) goto L_0893EF38;
    return;
L_0893EF38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF70;
      }
      goto L_0893EF48;
    }
L_0893EF48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893EF54u) goto L_0893EF54;
    return;
L_0893EF54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF68;
      }
      goto L_0893EF5C;
    }
L_0893EF5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893EF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893EF68u) goto L_0893EF68;
    return;
L_0893EF68:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893EF70;
L_0893EF70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893EF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893EF84u) goto L_0893EF84;
    return;
L_0893EF84:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFB4;
      }
      goto L_0893EF98;
    }
L_0893EF98:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFB4;
      }
      goto L_0893EFB0;
    }
L_0893EFB0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893EFB4;
L_0893EFB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFE0;
      }
      goto L_0893EFBC;
    }
L_0893EFBC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFE0;
      }
      goto L_0893EFD4;
    }
L_0893EFD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893EFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EFE0u) goto L_0893EFE0;
    return;
L_0893EFE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F01C;
      }
      goto L_0893EFF4;
    }
L_0893EFF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F000u) goto L_0893F000;
    return;
L_0893F000:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F014;
      }
      goto L_0893F008;
    }
L_0893F008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F014u) goto L_0893F014;
    return;
L_0893F014:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F01C;
L_0893F01C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F030u) goto L_0893F030;
    return;
L_0893F030:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F060;
      }
      goto L_0893F044;
    }
L_0893F044:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F060;
      }
      goto L_0893F05C;
    }
L_0893F05C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F060;
L_0893F060:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F08C;
      }
      goto L_0893F068;
    }
L_0893F068:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F08C;
      }
      goto L_0893F080;
    }
L_0893F080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F08Cu) goto L_0893F08C;
    return;
L_0893F08C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0DC;
      }
      goto L_0893F0B4;
    }
L_0893F0B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F0C0u) goto L_0893F0C0;
    return;
L_0893F0C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0D4;
      }
      goto L_0893F0C8;
    }
L_0893F0C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F0D4u) goto L_0893F0D4;
    return;
L_0893F0D4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F0DC;
L_0893F0DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F0F0u) goto L_0893F0F0;
    return;
L_0893F0F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F120;
      }
      goto L_0893F104;
    }
L_0893F104:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F120;
      }
      goto L_0893F11C;
    }
L_0893F11C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F120;
L_0893F120:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F14C;
      }
      goto L_0893F128;
    }
L_0893F128:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F14C;
      }
      goto L_0893F140;
    }
L_0893F140:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F14Cu) goto L_0893F14C;
    return;
L_0893F14C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F188;
      }
      goto L_0893F160;
    }
L_0893F160:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F16Cu) goto L_0893F16C;
    return;
L_0893F16C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F180;
      }
      goto L_0893F174;
    }
L_0893F174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F180u) goto L_0893F180;
    return;
L_0893F180:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F188;
L_0893F188:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F19Cu) goto L_0893F19C;
    return;
L_0893F19C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F1CC;
      }
      goto L_0893F1B0;
    }
L_0893F1B0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F1CC;
      }
      goto L_0893F1C8;
    }
L_0893F1C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F1CC;
L_0893F1CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F1F8;
      }
      goto L_0893F1D4;
    }
L_0893F1D4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F1F8;
      }
      goto L_0893F1EC;
    }
L_0893F1EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F1F8u) goto L_0893F1F8;
    return;
L_0893F1F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F234;
      }
      goto L_0893F20C;
    }
L_0893F20C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F218u) goto L_0893F218;
    return;
L_0893F218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F220;
    }
L_0893F220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F22Cu) goto L_0893F22C;
    return;
L_0893F22C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F234;
L_0893F234:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F248u) goto L_0893F248;
    return;
L_0893F248:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F278;
      }
      goto L_0893F25C;
    }
L_0893F25C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F278;
      }
      goto L_0893F274;
    }
L_0893F274:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F278;
L_0893F278:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2A4;
      }
      goto L_0893F280;
    }
L_0893F280:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2A4;
      }
      goto L_0893F298;
    }
L_0893F298:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F2A4u) goto L_0893F2A4;
    return;
L_0893F2A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2E0;
      }
      goto L_0893F2B8;
    }
L_0893F2B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F2C4u) goto L_0893F2C4;
    return;
L_0893F2C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2D8;
      }
      goto L_0893F2CC;
    }
L_0893F2CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F2D8u) goto L_0893F2D8;
    return;
L_0893F2D8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F2E0;
L_0893F2E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F2F4u) goto L_0893F2F4;
    return;
L_0893F2F4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F324;
      }
      goto L_0893F308;
    }
L_0893F308:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F324;
      }
      goto L_0893F320;
    }
L_0893F320:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F324;
L_0893F324:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F350;
      }
      goto L_0893F32C;
    }
L_0893F32C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F350;
      }
      goto L_0893F344;
    }
L_0893F344:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F350u) goto L_0893F350;
    return;
L_0893F350:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F38C;
      }
      goto L_0893F364;
    }
L_0893F364:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F370u) goto L_0893F370;
    return;
L_0893F370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F384;
      }
      goto L_0893F378;
    }
L_0893F378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F384u) goto L_0893F384;
    return;
L_0893F384:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F38C;
L_0893F38C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F3A0u) goto L_0893F3A0;
    return;
L_0893F3A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3D0;
      }
      goto L_0893F3B4;
    }
L_0893F3B4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3D0;
      }
      goto L_0893F3CC;
    }
L_0893F3CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F3D0;
L_0893F3D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3FC;
      }
      goto L_0893F3D8;
    }
L_0893F3D8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3FC;
      }
      goto L_0893F3F0;
    }
L_0893F3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F3FCu) goto L_0893F3FC;
    return;
L_0893F3FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F438;
      }
      goto L_0893F410;
    }
L_0893F410:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F41Cu) goto L_0893F41C;
    return;
L_0893F41C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F430;
      }
      goto L_0893F424;
    }
L_0893F424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F430u) goto L_0893F430;
    return;
L_0893F430:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F438;
L_0893F438:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F44Cu) goto L_0893F44C;
    return;
L_0893F44C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F47C;
      }
      goto L_0893F460;
    }
L_0893F460:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F47C;
      }
      goto L_0893F478;
    }
L_0893F478:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F47C;
L_0893F47C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4A8;
      }
      goto L_0893F484;
    }
L_0893F484:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4A8;
      }
      goto L_0893F49C;
    }
L_0893F49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F4A8u) goto L_0893F4A8;
    return;
L_0893F4A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4E4;
      }
      goto L_0893F4BC;
    }
L_0893F4BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F4C8u) goto L_0893F4C8;
    return;
L_0893F4C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4DC;
      }
      goto L_0893F4D0;
    }
L_0893F4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F4DCu) goto L_0893F4DC;
    return;
L_0893F4DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F4E4;
L_0893F4E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F4F8u) goto L_0893F4F8;
    return;
L_0893F4F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F528;
      }
      goto L_0893F50C;
    }
L_0893F50C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F528;
      }
      goto L_0893F524;
    }
L_0893F524:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F528;
L_0893F528:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F554;
      }
      goto L_0893F530;
    }
L_0893F530:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F554;
      }
      goto L_0893F548;
    }
L_0893F548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F554u) goto L_0893F554;
    return;
L_0893F554:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F590;
      }
      goto L_0893F568;
    }
L_0893F568:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F574u) goto L_0893F574;
    return;
L_0893F574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F588;
      }
      goto L_0893F57C;
    }
L_0893F57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F588u) goto L_0893F588;
    return;
L_0893F588:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F590;
L_0893F590:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F5A4u) goto L_0893F5A4;
    return;
L_0893F5A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F5D4;
      }
      goto L_0893F5B8;
    }
L_0893F5B8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F5D4;
      }
      goto L_0893F5D0;
    }
L_0893F5D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F5D4;
L_0893F5D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F600;
      }
      goto L_0893F5DC;
    }
L_0893F5DC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F600;
      }
      goto L_0893F5F4;
    }
L_0893F5F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F600u) goto L_0893F600;
    return;
L_0893F600:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F63C;
      }
      goto L_0893F614;
    }
L_0893F614:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F620u) goto L_0893F620;
    return;
L_0893F620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F634;
      }
      goto L_0893F628;
    }
L_0893F628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F634u) goto L_0893F634;
    return;
L_0893F634:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F63C;
L_0893F63C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F650u) goto L_0893F650;
    return;
L_0893F650:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F680;
      }
      goto L_0893F664;
    }
L_0893F664:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F680;
      }
      goto L_0893F67C;
    }
L_0893F67C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F680;
L_0893F680:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6AC;
      }
      goto L_0893F688;
    }
L_0893F688:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6AC;
      }
      goto L_0893F6A0;
    }
L_0893F6A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F6ACu) goto L_0893F6AC;
    return;
L_0893F6AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6E8;
      }
      goto L_0893F6C0;
    }
L_0893F6C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893F6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893F6CCu) goto L_0893F6CC;
    return;
L_0893F6CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6E0;
      }
      goto L_0893F6D4;
    }
L_0893F6D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893F6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F6E0u) goto L_0893F6E0;
    return;
L_0893F6E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893F6E8;
L_0893F6E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893F6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893F6FCu) goto L_0893F6FC;
    return;
L_0893F6FC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F72C;
      }
      goto L_0893F710;
    }
L_0893F710:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F72C;
      }
      goto L_0893F728;
    }
L_0893F728:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893F72C;
L_0893F72C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F758;
      }
      goto L_0893F734;
    }
L_0893F734:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F758;
      }
      goto L_0893F74C;
    }
L_0893F74C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893F758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F758u) goto L_0893F758;
    return;
L_0893F758:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
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
L_0893F778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7A8;
      }
      goto L_0893F79C;
    }
L_0893F79C:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7B0;
      }
      goto L_0893F7A8;
    }
L_0893F7A8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893F7B0;
L_0893F7B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7D8;
      }
      goto L_0893F7B8;
    }
L_0893F7B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7C8;
      }
      goto L_0893F7C0;
    }
L_0893F7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7D0;
      }
      goto L_0893F7C8;
    }
L_0893F7C8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_0893F7D0;
L_0893F7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7DC;
      }
      goto L_0893F7D8;
    }
L_0893F7D8:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F7DC;
L_0893F7DC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4192));
    ctx.set_gpr(31, 0x0893F7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F7ECu) goto L_0893F7EC;
    return;
L_0893F7EC:
    ctx.set_gpr(31, 0x0893F7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F7F4u) goto L_0893F7F4;
    return;
L_0893F7F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F810;
      }
      goto L_0893F808;
    }
L_0893F808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F814;
      }
      goto L_0893F810;
    }
L_0893F810:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F814;
L_0893F814:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4160));
    ctx.set_gpr(31, 0x0893F824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F824u) goto L_0893F824;
    return;
L_0893F824:
    ctx.set_gpr(31, 0x0893F82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F82Cu) goto L_0893F82C;
    return;
L_0893F82C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F848;
      }
      goto L_0893F840;
    }
L_0893F840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F84C;
      }
      goto L_0893F848;
    }
L_0893F848:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F84C;
L_0893F84C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4128));
    ctx.set_gpr(31, 0x0893F85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F85Cu) goto L_0893F85C;
    return;
L_0893F85C:
    ctx.set_gpr(31, 0x0893F864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F864u) goto L_0893F864;
    return;
L_0893F864:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F880;
      }
      goto L_0893F870;
    }
L_0893F870:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13332));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F888;
      }
      goto L_0893F880;
    }
L_0893F880:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13324));
    goto L_0893F888;
L_0893F888:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4096));
    ctx.set_gpr(31, 0x0893F898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F898u) goto L_0893F898;
    return;
L_0893F898:
    ctx.set_gpr(31, 0x0893F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F8A0u) goto L_0893F8A0;
    return;
L_0893F8A0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4064));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0893F8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F8B4u) goto L_0893F8B4;
    return;
L_0893F8B4:
    ctx.set_gpr(31, 0x0893F8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F8BCu) goto L_0893F8BC;
    return;
L_0893F8BC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4032));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0893F8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F8D0u) goto L_0893F8D0;
    return;
L_0893F8D0:
    ctx.set_gpr(31, 0x0893F8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F8D8u) goto L_0893F8D8;
    return;
L_0893F8D8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4000));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0893F8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F8ECu) goto L_0893F8EC;
    return;
L_0893F8EC:
    ctx.set_gpr(31, 0x0893F8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F8F4u) goto L_0893F8F4;
    return;
L_0893F8F4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3968));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0893F908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F908u) goto L_0893F908;
    return;
L_0893F908:
    ctx.set_gpr(31, 0x0893F910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F910u) goto L_0893F910;
    return;
L_0893F910:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F92C;
      }
      goto L_0893F924;
    }
L_0893F924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F930;
      }
      goto L_0893F92C;
    }
L_0893F92C:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F930;
L_0893F930:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3932));
    ctx.set_gpr(31, 0x0893F940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F940u) goto L_0893F940;
    return;
L_0893F940:
    ctx.set_gpr(31, 0x0893F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F948u) goto L_0893F948;
    return;
L_0893F948:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F964;
      }
      goto L_0893F95C;
    }
L_0893F95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F968;
      }
      goto L_0893F964;
    }
L_0893F964:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F968;
L_0893F968:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3900));
    ctx.set_gpr(31, 0x0893F978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F978u) goto L_0893F978;
    return;
L_0893F978:
    ctx.set_gpr(31, 0x0893F980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F980u) goto L_0893F980;
    return;
L_0893F980:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F99C;
      }
      goto L_0893F994;
    }
L_0893F994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9A0;
      }
      goto L_0893F99C;
    }
L_0893F99C:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F9A0;
L_0893F9A0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3868));
    ctx.set_gpr(31, 0x0893F9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F9B0u) goto L_0893F9B0;
    return;
L_0893F9B0:
    ctx.set_gpr(31, 0x0893F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F9B8u) goto L_0893F9B8;
    return;
L_0893F9B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9D4;
      }
      goto L_0893F9CC;
    }
L_0893F9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9D8;
      }
      goto L_0893F9D4;
    }
L_0893F9D4:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893F9D8;
L_0893F9D8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3836));
    ctx.set_gpr(31, 0x0893F9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893F9E8u) goto L_0893F9E8;
    return;
L_0893F9E8:
    ctx.set_gpr(31, 0x0893F9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893F9F0u) goto L_0893F9F0;
    return;
L_0893F9F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA0C;
      }
      goto L_0893FA04;
    }
L_0893FA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA10;
      }
      goto L_0893FA0C;
    }
L_0893FA0C:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FA10;
L_0893FA10:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3804));
    ctx.set_gpr(31, 0x0893FA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FA20u) goto L_0893FA20;
    return;
L_0893FA20:
    ctx.set_gpr(31, 0x0893FA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FA28u) goto L_0893FA28;
    return;
L_0893FA28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FA3C;
    }
L_0893FA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA48;
      }
      goto L_0893FA44;
    }
L_0893FA44:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FA48;
L_0893FA48:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3772));
    ctx.set_gpr(31, 0x0893FA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FA58u) goto L_0893FA58;
    return;
L_0893FA58:
    ctx.set_gpr(31, 0x0893FA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FA60u) goto L_0893FA60;
    return;
L_0893FA60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA7C;
      }
      goto L_0893FA74;
    }
L_0893FA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA80;
      }
      goto L_0893FA7C;
    }
L_0893FA7C:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FA80;
L_0893FA80:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3740));
    ctx.set_gpr(31, 0x0893FA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FA90u) goto L_0893FA90;
    return;
L_0893FA90:
    ctx.set_gpr(31, 0x0893FA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FA98u) goto L_0893FA98;
    return;
L_0893FA98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FAB4;
      }
      goto L_0893FAAC;
    }
L_0893FAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FAB8;
      }
      goto L_0893FAB4;
    }
L_0893FAB4:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FAB8;
L_0893FAB8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3708));
    ctx.set_gpr(31, 0x0893FAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FAC8u) goto L_0893FAC8;
    return;
L_0893FAC8:
    ctx.set_gpr(31, 0x0893FAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FAD0u) goto L_0893FAD0;
    return;
L_0893FAD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FAEC;
      }
      goto L_0893FAE4;
    }
L_0893FAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FAF0;
      }
      goto L_0893FAEC;
    }
L_0893FAEC:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FAF0;
L_0893FAF0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3676));
    ctx.set_gpr(31, 0x0893FB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FB00u) goto L_0893FB00;
    return;
L_0893FB00:
    ctx.set_gpr(31, 0x0893FB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FB08u) goto L_0893FB08;
    return;
L_0893FB08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB24;
      }
      goto L_0893FB1C;
    }
L_0893FB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB28;
      }
      goto L_0893FB24;
    }
L_0893FB24:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FB28;
L_0893FB28:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3644));
    ctx.set_gpr(31, 0x0893FB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FB38u) goto L_0893FB38;
    return;
L_0893FB38:
    ctx.set_gpr(31, 0x0893FB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FB40u) goto L_0893FB40;
    return;
L_0893FB40:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3612));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x0893FB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FB54u) goto L_0893FB54;
    return;
L_0893FB54:
    ctx.set_gpr(31, 0x0893FB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FB5Cu) goto L_0893FB5C;
    return;
L_0893FB5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(31, 0x0893FB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893FB94u) goto L_0893FB94;
    return;
L_0893FB94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893FBB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FBB0u) goto L_0893FBB0;
    return;
L_0893FBB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893FBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0893FBCCu) goto L_0893FBCC;
    return;
L_0893FBCC:
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
L_0893FBE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC4C;
      }
      goto L_0893FC08;
    }
L_0893FC08:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC34;
      }
      goto L_0893FC14;
    }
L_0893FC14:
    ctx.set_gpr(31, 0x0893FC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893FC1Cu) goto L_0893FC1C;
    return;
L_0893FC1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893FC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FC34u) goto L_0893FC34;
    return;
L_0893FC34:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893FC4C;
      }
      goto L_0893FC40;
    }
L_0893FC40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893FC4Cu);
    // nop
    goto L_0893FE90;
L_0893FC4C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_0893FC6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCA0;
      }
      goto L_0893FC7C;
    }
L_0893FC7C:
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893FC9C;
      }
      goto L_0893FC94;
    }
L_0893FC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC9C;
    }
L_0893FC9C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0893FCA0;
L_0893FCA0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC7C;
      }
      goto L_0893FCAC;
    }
L_0893FCAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0893FCB0;
L_0893FCB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FCB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD7C;
      }
      goto L_0893FCF0;
    }
L_0893FCF0:
    ctx.set_gpr(18, ctx.gpr[5] << 1u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD00;
      }
      goto L_0893FCFC;
    }
L_0893FCFC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(256));
    goto L_0893FD00;
L_0893FD00:
    ctx.set_gpr(31, 0x0893FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893FD08u) goto L_0893FD08;
    return;
L_0893FD08:
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893FD20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FD20u) goto L_0893FD20;
    return;
L_0893FD20:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD48;
      }
      goto L_0893FD34;
    }
L_0893FD34:
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893FD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0893FD48u) goto L_0893FD48;
    return;
L_0893FD48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0893FD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0893FD68u) goto L_0893FD68;
    return;
L_0893FD68:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893FD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0893FD7Cu) goto L_0893FD7C;
    return;
L_0893FD7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
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
L_0893FDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893FE38;
      }
      goto L_0893FDD4;
    }
L_0893FDD4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE38;
      }
      goto L_0893FDE4;
    }
L_0893FDE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE28;
      }
      goto L_0893FDEC;
    }
L_0893FDEC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x0893FE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0893FE14u) goto L_0893FE14;
    return;
L_0893FE14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE38;
      }
      goto L_0893FE28;
    }
L_0893FE28:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_0893FE38;
L_0893FE38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FE4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893FE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893FE64u) goto L_0893FE64;
    return;
L_0893FE64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893FE7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FE7Cu) goto L_0893FE7C;
    return;
L_0893FE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FE90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893FEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893FEA8u) goto L_0893FEA8;
    return;
L_0893FEA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893FEC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FEC0u) goto L_0893FEC0;
    return;
L_0893FEC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893FEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 440u, 0x08945F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FEECu) goto L_0893FEEC;
    return;
L_0893FEEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893FF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FF84;
      }
      goto L_0893FF78;
    }
L_0893FF78:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FF8C;
      }
      goto L_0893FF84;
    }
L_0893FF84:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0893FF8C;
L_0893FF8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FFB4;
      }
      goto L_0893FF94;
    }
L_0893FF94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FFA4;
      }
      goto L_0893FF9C;
    }
L_0893FF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FFAC;
      }
      goto L_0893FFA4;
    }
L_0893FFA4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_0893FFAC;
L_0893FFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FFB8;
      }
      goto L_0893FFB4;
    }
L_0893FFB4:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0893FFB8;
L_0893FFB8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3580));
    ctx.set_gpr(31, 0x0893FFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FFC8u) goto L_0893FFC8;
    return;
L_0893FFC8:
    ctx.set_gpr(31, 0x0893FFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FFD0u) goto L_0893FFD0;
    return;
L_0893FFD0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3544));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0893FFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893FFE4u) goto L_0893FFE4;
    return;
L_0893FFE4:
    ctx.set_gpr(31, 0x0893FFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893FFECu) goto L_0893FFEC;
    return;
L_0893FFEC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3508));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08940000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0078(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0078_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_78(Runtime &runtime) {
    runtime.register_generated_unit(78u, 0x0893C000u, 16384u, &recomp_unit_0078, &recomp_unit_0078_entry);
    runtime.register_function(0x0893C000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C020u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C03Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C04Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C050u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C08Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C11Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C134u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C144u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C15Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C17Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C184u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C194u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C198u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C218u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C220u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C250u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C270u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C290u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C294u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C320u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C32Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C330u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C33Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C35Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C360u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C36Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C37Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C38Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C398u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C400u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C408u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C42Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C440u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C458u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C480u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C488u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C50Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C530u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C53Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C54Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C554u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C578u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C57Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C588u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C598u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C608u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C620u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C62Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C640u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C64Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C654u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C670u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C68Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C694u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C704u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C710u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C71Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C724u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C730u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C740u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C748u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C76Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C774u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C77Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C78Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C794u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C800u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C808u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C814u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C818u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C834u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C858u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C868u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C880u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C90Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C928u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C94Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C958u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C960u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C96Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C974u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C984u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C990u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CECCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D004u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D014u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D03Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D054u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D060u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D06Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D07Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D090u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D09Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D110u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D124u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D12Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D134u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D140u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D148u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D154u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D158u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D164u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D168u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D18Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D200u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D218u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D220u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D238u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D23Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D248u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D264u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D284u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D29Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D308u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D30Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D318u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D31Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D370u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D378u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D37Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D384u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D390u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D398u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D408u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D42Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D440u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D458u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D460u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D464u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D480u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D500u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D518u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D524u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D534u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D550u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D568u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D570u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D580u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D588u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D610u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D61Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D62Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D648u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D654u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D65Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D668u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D670u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D684u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D698u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D708u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D710u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D71Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D724u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D738u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D758u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D768u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D778u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D790u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D79Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D80Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D824u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D830u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D838u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D844u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D860u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D880u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D890u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D908u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D914u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D934u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D93Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D950u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D958u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D96Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D974u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D98Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D994u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D99Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DADCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DED4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DFF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E008u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E014u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E020u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E02Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E034u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E04Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E058u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E064u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E06Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E078u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E088u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E090u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E100u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E10Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E114u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E120u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E128u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E13Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E150u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E15Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E164u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E16Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E17Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E180u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E188u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E198u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E21Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E234u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E23Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E244u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E254u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E25Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E268u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E284u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E290u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E298u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E2ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E2B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E2BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E2DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E310u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E318u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E31Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E324u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E330u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E338u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E34Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E358u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E370u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E37Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E388u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E390u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E39Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E404u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E414u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E42Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E45Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E468u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E470u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E47Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E498u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E520u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E528u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E52Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E534u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E56Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E598u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E60Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E630u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E654u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E678u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E728u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E780u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E804u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E830u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E854u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E858u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E89Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E900u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E918u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E93Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E960u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E96Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E974u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E980u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E988u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E99Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EECCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F008u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F014u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F01Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F030u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F044u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F060u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F080u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F08Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F104u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F11Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F120u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F128u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F140u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F14Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F160u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F16Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F174u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F180u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F188u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F20Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F218u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F220u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F234u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F248u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F25Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F274u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F280u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F298u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F308u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F320u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F324u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F32Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F350u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F364u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F370u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F378u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F384u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F38Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F410u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F41Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F430u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F460u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F478u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F47Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F484u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F49Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F50Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F524u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F528u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F530u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F548u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F554u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F568u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F57Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F588u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F590u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F600u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F614u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F620u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F628u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F634u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F63Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F650u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F67Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F680u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F688u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F710u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F728u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F72Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F734u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F758u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F778u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F79Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F808u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F810u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F814u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F824u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F82Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F840u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F848u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F85Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F864u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F870u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F880u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F908u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F910u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F92Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F930u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F95Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F964u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F968u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F978u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F980u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F994u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F99Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FED4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFECu, &recomp_unit_0078, "recomp_unit_0078");
}
} // namespace psprecomp
