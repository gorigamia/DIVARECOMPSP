#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0027[4090] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 11, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0,
    0, 29, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 47, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0,
    0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    83, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0,
    101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0,
    119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0,
    137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0,
    155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174,
    0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 185, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192,
    0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202,
    0, 0, 0, 0, 0, 203, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220,
    0, 0, 0, 0, 0, 221, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228,
    0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 246, 0, 0, 247, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 264, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 282, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0,
    302, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 0,
    320, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0,
    0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338,
    0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0,
    0, 356, 0, 357, 0, 358, 359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 369, 0, 370,
    0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 378, 379, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0,
    383, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 390, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0,
    395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 399, 0, 0, 400, 401, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407,
    0, 0, 408, 0, 409, 0, 0, 410, 411, 0, 0, 412, 413, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0,
    420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430,
    0, 0, 0, 431, 0, 432, 0, 0, 433, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440,
    0, 0, 0, 441, 0, 442, 0, 0, 443, 444, 0, 0, 0, 445, 446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0,
    452, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 457, 0, 458, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 464,
    0, 465, 0, 0, 466, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 477,
    0, 0, 478, 479, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0,
    0, 489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 498, 499, 0, 500,
    0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 508, 509, 0, 0, 510, 511, 0,
    0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 521, 522, 0, 0, 0, 523,
    0, 524, 0, 0, 525, 0, 0, 0, 526, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 533, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 539, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 545,
    0, 546, 0, 547, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 564, 0, 0, 0, 0, 565, 0, 566, 0, 567,
    0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587,
    0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0,
    0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0,
    612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0,
    0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0,
    622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0,
    0, 635, 636, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 648, 0, 649, 0, 0, 0, 650, 0, 651, 0,
    0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0,
    0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664,
    665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 668, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0,
    0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 688, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0,
    696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 700, 701, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0,
    0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0,
    714, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0,
    0, 720, 0, 0, 0, 0, 0, 721, 722, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 728, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 733,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 735, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 739, 740, 0, 741, 0, 742, 0, 743, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745,
    0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 751, 0, 752, 753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0,
    757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762,
    0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 770, 0, 0,
    0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    775, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 779, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0,
    0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 799,
    0, 0, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806,
    0, 807, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 811, 812, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0,
    0, 0, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824,
    0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0,
    0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 839, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 844, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 846, 0, 0, 0, 0,
    0, 0, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0,
    853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 859, 0, 860, 0, 861,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0027[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_08870008;
    case 3u: goto L_08870024;
    case 4u: goto L_08870030;
    case 5u: goto L_08870038;
    case 6u: goto L_08870040;
    case 7u: goto L_08870050;
    case 8u: goto L_0887005C;
    case 9u: goto L_08870064;
    case 10u: goto L_0887006C;
    case 11u: goto L_08870084;
    case 12u: goto L_08870088;
    case 13u: goto L_08870094;
    case 14u: goto L_088700A8;
    case 15u: goto L_088700D4;
    case 16u: goto L_088700DC;
    case 17u: goto L_088700E4;
    case 18u: goto L_088700EC;
    case 19u: goto L_088700F4;
    case 20u: goto L_08870108;
    case 21u: goto L_08870124;
    case 22u: goto L_08870130;
    case 23u: goto L_08870138;
    case 24u: goto L_08870140;
    case 25u: goto L_08870150;
    case 26u: goto L_0887015C;
    case 27u: goto L_08870164;
    case 28u: goto L_0887016C;
    case 29u: goto L_08870184;
    case 30u: goto L_08870188;
    case 31u: goto L_08870194;
    case 32u: goto L_088701A8;
    case 33u: goto L_088701D4;
    case 34u: goto L_088701DC;
    case 35u: goto L_088701E4;
    case 36u: goto L_088701EC;
    case 37u: goto L_088701F4;
    case 38u: goto L_08870208;
    case 39u: goto L_08870224;
    case 40u: goto L_08870230;
    case 41u: goto L_08870238;
    case 42u: goto L_08870240;
    case 43u: goto L_08870250;
    case 44u: goto L_0887025C;
    case 45u: goto L_08870264;
    case 46u: goto L_0887026C;
    case 47u: goto L_08870284;
    case 48u: goto L_08870288;
    case 49u: goto L_08870294;
    case 50u: goto L_088702A8;
    case 51u: goto L_088702D4;
    case 52u: goto L_088702DC;
    case 53u: goto L_088702E4;
    case 54u: goto L_088702EC;
    case 55u: goto L_088702F4;
    case 56u: goto L_08870308;
    case 57u: goto L_08870310;
    case 58u: goto L_08870318;
    case 59u: goto L_0887032C;
    case 60u: goto L_08870334;
    case 61u: goto L_0887033C;
    case 62u: goto L_08870350;
    case 63u: goto L_0887036C;
    case 64u: goto L_08870378;
    case 65u: goto L_08870380;
    case 66u: goto L_08870388;
    case 67u: goto L_08870398;
    case 68u: goto L_088703A4;
    case 69u: goto L_088703AC;
    case 70u: goto L_088703B4;
    case 71u: goto L_088703CC;
    case 72u: goto L_088703D0;
    case 73u: goto L_088703DC;
    case 74u: goto L_088703F0;
    case 75u: goto L_0887041C;
    case 76u: goto L_08870424;
    case 77u: goto L_0887042C;
    case 78u: goto L_08870434;
    case 79u: goto L_0887043C;
    case 80u: goto L_08870450;
    case 81u: goto L_0887046C;
    case 82u: goto L_08870478;
    case 83u: goto L_08870480;
    case 84u: goto L_08870488;
    case 85u: goto L_08870498;
    case 86u: goto L_088704A4;
    case 87u: goto L_088704AC;
    case 88u: goto L_088704B4;
    case 89u: goto L_088704CC;
    case 90u: goto L_088704D0;
    case 91u: goto L_088704DC;
    case 92u: goto L_088704F0;
    case 93u: goto L_0887051C;
    case 94u: goto L_08870524;
    case 95u: goto L_0887052C;
    case 96u: goto L_08870534;
    case 97u: goto L_0887053C;
    case 98u: goto L_08870550;
    case 99u: goto L_0887056C;
    case 100u: goto L_08870578;
    case 101u: goto L_08870580;
    case 102u: goto L_08870588;
    case 103u: goto L_08870598;
    case 104u: goto L_088705A4;
    case 105u: goto L_088705AC;
    case 106u: goto L_088705B4;
    case 107u: goto L_088705CC;
    case 108u: goto L_088705D0;
    case 109u: goto L_088705DC;
    case 110u: goto L_088705F0;
    case 111u: goto L_0887061C;
    case 112u: goto L_08870624;
    case 113u: goto L_0887062C;
    case 114u: goto L_08870634;
    case 115u: goto L_0887063C;
    case 116u: goto L_08870650;
    case 117u: goto L_0887066C;
    case 118u: goto L_08870678;
    case 119u: goto L_08870680;
    case 120u: goto L_08870688;
    case 121u: goto L_08870698;
    case 122u: goto L_088706A4;
    case 123u: goto L_088706AC;
    case 124u: goto L_088706B4;
    case 125u: goto L_088706CC;
    case 126u: goto L_088706D0;
    case 127u: goto L_088706DC;
    case 128u: goto L_088706F0;
    case 129u: goto L_0887071C;
    case 130u: goto L_08870724;
    case 131u: goto L_0887072C;
    case 132u: goto L_08870734;
    case 133u: goto L_0887073C;
    case 134u: goto L_08870750;
    case 135u: goto L_0887076C;
    case 136u: goto L_08870778;
    case 137u: goto L_08870780;
    case 138u: goto L_08870788;
    case 139u: goto L_08870798;
    case 140u: goto L_088707A4;
    case 141u: goto L_088707AC;
    case 142u: goto L_088707B4;
    case 143u: goto L_088707CC;
    case 144u: goto L_088707D0;
    case 145u: goto L_088707DC;
    case 146u: goto L_088707F0;
    case 147u: goto L_0887081C;
    case 148u: goto L_08870824;
    case 149u: goto L_0887082C;
    case 150u: goto L_08870834;
    case 151u: goto L_0887083C;
    case 152u: goto L_08870850;
    case 153u: goto L_0887086C;
    case 154u: goto L_08870878;
    case 155u: goto L_08870880;
    case 156u: goto L_08870888;
    case 157u: goto L_08870898;
    case 158u: goto L_088708A4;
    case 159u: goto L_088708AC;
    case 160u: goto L_088708B4;
    case 161u: goto L_088708CC;
    case 162u: goto L_088708D0;
    case 163u: goto L_088708DC;
    case 164u: goto L_088708F0;
    case 165u: goto L_0887091C;
    case 166u: goto L_08870924;
    case 167u: goto L_0887092C;
    case 168u: goto L_08870934;
    case 169u: goto L_0887093C;
    case 170u: goto L_08870950;
    case 171u: goto L_08870958;
    case 172u: goto L_08870960;
    case 173u: goto L_08870974;
    case 174u: goto L_0887097C;
    case 175u: goto L_08870984;
    case 176u: goto L_08870998;
    case 177u: goto L_088709B4;
    case 178u: goto L_088709C0;
    case 179u: goto L_088709C8;
    case 180u: goto L_088709D0;
    case 181u: goto L_088709E0;
    case 182u: goto L_088709EC;
    case 183u: goto L_088709F4;
    case 184u: goto L_088709FC;
    case 185u: goto L_08870A14;
    case 186u: goto L_08870A18;
    case 187u: goto L_08870A24;
    case 188u: goto L_08870A38;
    case 189u: goto L_08870A64;
    case 190u: goto L_08870A6C;
    case 191u: goto L_08870A74;
    case 192u: goto L_08870A7C;
    case 193u: goto L_08870A84;
    case 194u: goto L_08870A98;
    case 195u: goto L_08870AB4;
    case 196u: goto L_08870AC0;
    case 197u: goto L_08870AC8;
    case 198u: goto L_08870AD0;
    case 199u: goto L_08870AE0;
    case 200u: goto L_08870AEC;
    case 201u: goto L_08870AF4;
    case 202u: goto L_08870AFC;
    case 203u: goto L_08870B14;
    case 204u: goto L_08870B18;
    case 205u: goto L_08870B24;
    case 206u: goto L_08870B38;
    case 207u: goto L_08870B64;
    case 208u: goto L_08870B6C;
    case 209u: goto L_08870B74;
    case 210u: goto L_08870B7C;
    case 211u: goto L_08870B84;
    case 212u: goto L_08870B98;
    case 213u: goto L_08870BB4;
    case 214u: goto L_08870BC0;
    case 215u: goto L_08870BC8;
    case 216u: goto L_08870BD0;
    case 217u: goto L_08870BE0;
    case 218u: goto L_08870BEC;
    case 219u: goto L_08870BF4;
    case 220u: goto L_08870BFC;
    case 221u: goto L_08870C14;
    case 222u: goto L_08870C18;
    case 223u: goto L_08870C24;
    case 224u: goto L_08870C38;
    case 225u: goto L_08870C64;
    case 226u: goto L_08870C6C;
    case 227u: goto L_08870C74;
    case 228u: goto L_08870C7C;
    case 229u: goto L_08870C84;
    case 230u: goto L_08870C98;
    case 231u: goto L_08870CA0;
    case 232u: goto L_08870CA8;
    case 233u: goto L_08870CBC;
    case 234u: goto L_08870CC4;
    case 235u: goto L_08870CCC;
    case 236u: goto L_08870CE0;
    case 237u: goto L_08870CFC;
    case 238u: goto L_08870D08;
    case 239u: goto L_08870D10;
    case 240u: goto L_08870D18;
    case 241u: goto L_08870D28;
    case 242u: goto L_08870D34;
    case 243u: goto L_08870D3C;
    case 244u: goto L_08870D44;
    case 245u: goto L_08870D5C;
    case 246u: goto L_08870D60;
    case 247u: goto L_08870D6C;
    case 248u: goto L_08870D80;
    case 249u: goto L_08870DAC;
    case 250u: goto L_08870DB4;
    case 251u: goto L_08870DBC;
    case 252u: goto L_08870DC4;
    case 253u: goto L_08870DCC;
    case 254u: goto L_08870DE0;
    case 255u: goto L_08870DFC;
    case 256u: goto L_08870E08;
    case 257u: goto L_08870E10;
    case 258u: goto L_08870E18;
    case 259u: goto L_08870E28;
    case 260u: goto L_08870E34;
    case 261u: goto L_08870E3C;
    case 262u: goto L_08870E44;
    case 263u: goto L_08870E5C;
    case 264u: goto L_08870E60;
    case 265u: goto L_08870E6C;
    case 266u: goto L_08870E80;
    case 267u: goto L_08870EAC;
    case 268u: goto L_08870EB4;
    case 269u: goto L_08870EBC;
    case 270u: goto L_08870EC4;
    case 271u: goto L_08870ECC;
    case 272u: goto L_08870EE0;
    case 273u: goto L_08870EFC;
    case 274u: goto L_08870F08;
    case 275u: goto L_08870F10;
    case 276u: goto L_08870F18;
    case 277u: goto L_08870F28;
    case 278u: goto L_08870F34;
    case 279u: goto L_08870F3C;
    case 280u: goto L_08870F44;
    case 281u: goto L_08870F5C;
    case 282u: goto L_08870F60;
    case 283u: goto L_08870F6C;
    case 284u: goto L_08870F80;
    case 285u: goto L_08870FAC;
    case 286u: goto L_08870FB4;
    case 287u: goto L_08870FBC;
    case 288u: goto L_08870FC4;
    case 289u: goto L_08870FCC;
    case 290u: goto L_08870FE0;
    case 291u: goto L_08870FE8;
    case 292u: goto L_08870FF0;
    case 293u: goto L_08871004;
    case 294u: goto L_08871020;
    case 295u: goto L_0887102C;
    case 296u: goto L_08871034;
    case 297u: goto L_0887103C;
    case 298u: goto L_0887104C;
    case 299u: goto L_08871058;
    case 300u: goto L_08871060;
    case 301u: goto L_08871068;
    case 302u: goto L_08871080;
    case 303u: goto L_08871084;
    case 304u: goto L_08871090;
    case 305u: goto L_088710A4;
    case 306u: goto L_088710D0;
    case 307u: goto L_088710D8;
    case 308u: goto L_088710E0;
    case 309u: goto L_088710E8;
    case 310u: goto L_088710F0;
    case 311u: goto L_08871104;
    case 312u: goto L_08871120;
    case 313u: goto L_0887112C;
    case 314u: goto L_08871134;
    case 315u: goto L_0887113C;
    case 316u: goto L_0887114C;
    case 317u: goto L_08871158;
    case 318u: goto L_08871160;
    case 319u: goto L_08871168;
    case 320u: goto L_08871180;
    case 321u: goto L_08871184;
    case 322u: goto L_08871190;
    case 323u: goto L_088711A4;
    case 324u: goto L_088711D0;
    case 325u: goto L_088711D8;
    case 326u: goto L_088711E0;
    case 327u: goto L_088711E8;
    case 328u: goto L_088711F0;
    case 329u: goto L_08871204;
    case 330u: goto L_0887120C;
    case 331u: goto L_08871214;
    case 332u: goto L_08871228;
    case 333u: goto L_08871244;
    case 334u: goto L_08871250;
    case 335u: goto L_08871258;
    case 336u: goto L_08871260;
    case 337u: goto L_08871270;
    case 338u: goto L_0887127C;
    case 339u: goto L_08871284;
    case 340u: goto L_0887128C;
    case 341u: goto L_088712A4;
    case 342u: goto L_088712A8;
    case 343u: goto L_088712B4;
    case 344u: goto L_088712C8;
    case 345u: goto L_088712FC;
    case 346u: goto L_08871308;
    case 347u: goto L_08871314;
    case 348u: goto L_0887131C;
    case 349u: goto L_08871324;
    case 350u: goto L_08871330;
    case 351u: goto L_0887133C;
    case 352u: goto L_08871350;
    case 353u: goto L_08871360;
    case 354u: goto L_0887136C;
    case 355u: goto L_08871378;
    case 356u: goto L_08871384;
    case 357u: goto L_0887138C;
    case 358u: goto L_08871394;
    case 359u: goto L_08871398;
    case 360u: goto L_088713A0;
    case 361u: goto L_088713AC;
    case 362u: goto L_088713B4;
    case 363u: goto L_088713C0;
    case 364u: goto L_088713C8;
    case 365u: goto L_088713D4;
    case 366u: goto L_088713DC;
    case 367u: goto L_088713E4;
    case 368u: goto L_088713F0;
    case 369u: goto L_088713F4;
    case 370u: goto L_088713FC;
    case 371u: goto L_08871408;
    case 372u: goto L_08871410;
    case 373u: goto L_0887141C;
    case 374u: goto L_08871424;
    case 375u: goto L_08871430;
    case 376u: goto L_08871438;
    case 377u: goto L_08871444;
    case 378u: goto L_08871450;
    case 379u: goto L_08871454;
    case 380u: goto L_08871464;
    case 381u: goto L_0887146C;
    case 382u: goto L_08871478;
    case 383u: goto L_08871480;
    case 384u: goto L_08871494;
    case 385u: goto L_0887149C;
    case 386u: goto L_088714A4;
    case 387u: goto L_088714AC;
    case 388u: goto L_088714C0;
    case 389u: goto L_088714C8;
    case 390u: goto L_088714D4;
    case 391u: goto L_088714D8;
    case 392u: goto L_088714E0;
    case 393u: goto L_088714E8;
    case 394u: goto L_088714F8;
    case 395u: goto L_08871500;
    case 396u: goto L_0887150C;
    case 397u: goto L_08871514;
    case 398u: goto L_08871520;
    case 399u: goto L_08871528;
    case 400u: goto L_08871534;
    case 401u: goto L_08871538;
    case 402u: goto L_08871540;
    case 403u: goto L_0887154C;
    case 404u: goto L_08871558;
    case 405u: goto L_08871564;
    case 406u: goto L_08871570;
    case 407u: goto L_0887157C;
    case 408u: goto L_08871588;
    case 409u: goto L_08871590;
    case 410u: goto L_0887159C;
    case 411u: goto L_088715A0;
    case 412u: goto L_088715AC;
    case 413u: goto L_088715B0;
    case 414u: goto L_088715C0;
    case 415u: goto L_088715CC;
    case 416u: goto L_088715D4;
    case 417u: goto L_088715E8;
    case 418u: goto L_088715F0;
    case 419u: goto L_088715F8;
    case 420u: goto L_08871600;
    case 421u: goto L_08871614;
    case 422u: goto L_0887161C;
    case 423u: goto L_08871628;
    case 424u: goto L_0887162C;
    case 425u: goto L_08871634;
    case 426u: goto L_08871640;
    case 427u: goto L_08871654;
    case 428u: goto L_08871660;
    case 429u: goto L_08871670;
    case 430u: goto L_0887167C;
    case 431u: goto L_0887168C;
    case 432u: goto L_08871694;
    case 433u: goto L_088716A0;
    case 434u: goto L_088716A4;
    case 435u: goto L_088716AC;
    case 436u: goto L_088716BC;
    case 437u: goto L_088716CC;
    case 438u: goto L_088716DC;
    case 439u: goto L_088716EC;
    case 440u: goto L_088716FC;
    case 441u: goto L_0887170C;
    case 442u: goto L_08871714;
    case 443u: goto L_08871720;
    case 444u: goto L_08871724;
    case 445u: goto L_08871734;
    case 446u: goto L_08871738;
    case 447u: goto L_08871748;
    case 448u: goto L_08871754;
    case 449u: goto L_0887175C;
    case 450u: goto L_08871770;
    case 451u: goto L_08871778;
    case 452u: goto L_08871780;
    case 453u: goto L_08871788;
    case 454u: goto L_0887179C;
    case 455u: goto L_088717A4;
    case 456u: goto L_088717B0;
    case 457u: goto L_088717B4;
    case 458u: goto L_088717BC;
    case 459u: goto L_088717C4;
    case 460u: goto L_088717D4;
    case 461u: goto L_088717DC;
    case 462u: goto L_088717E8;
    case 463u: goto L_088717F0;
    case 464u: goto L_088717FC;
    case 465u: goto L_08871804;
    case 466u: goto L_08871810;
    case 467u: goto L_08871814;
    case 468u: goto L_0887181C;
    case 469u: goto L_08871828;
    case 470u: goto L_08871834;
    case 471u: goto L_08871840;
    case 472u: goto L_0887184C;
    case 473u: goto L_08871858;
    case 474u: goto L_08871864;
    case 475u: goto L_0887186C;
    case 476u: goto L_08871878;
    case 477u: goto L_0887187C;
    case 478u: goto L_08871888;
    case 479u: goto L_0887188C;
    case 480u: goto L_0887189C;
    case 481u: goto L_088718A8;
    case 482u: goto L_088718B0;
    case 483u: goto L_088718C4;
    case 484u: goto L_088718CC;
    case 485u: goto L_088718D4;
    case 486u: goto L_088718DC;
    case 487u: goto L_088718F0;
    case 488u: goto L_088718F8;
    case 489u: goto L_08871904;
    case 490u: goto L_08871910;
    case 491u: goto L_08871918;
    case 492u: goto L_0887192C;
    case 493u: goto L_08871934;
    case 494u: goto L_08871944;
    case 495u: goto L_0887194C;
    case 496u: goto L_0887195C;
    case 497u: goto L_08871964;
    case 498u: goto L_08871970;
    case 499u: goto L_08871974;
    case 500u: goto L_0887197C;
    case 501u: goto L_08871988;
    case 502u: goto L_08871998;
    case 503u: goto L_088719A4;
    case 504u: goto L_088719B4;
    case 505u: goto L_088719C0;
    case 506u: goto L_088719D0;
    case 507u: goto L_088719D8;
    case 508u: goto L_088719E4;
    case 509u: goto L_088719E8;
    case 510u: goto L_088719F4;
    case 511u: goto L_088719F8;
    case 512u: goto L_08871A08;
    case 513u: goto L_08871A14;
    case 514u: goto L_08871A1C;
    case 515u: goto L_08871A30;
    case 516u: goto L_08871A38;
    case 517u: goto L_08871A40;
    case 518u: goto L_08871A48;
    case 519u: goto L_08871A5C;
    case 520u: goto L_08871A64;
    case 521u: goto L_08871A68;
    case 522u: goto L_08871A6C;
    case 523u: goto L_08871A7C;
    case 524u: goto L_08871A84;
    case 525u: goto L_08871A90;
    case 526u: goto L_08871AA0;
    case 527u: goto L_08871AA4;
    case 528u: goto L_08871AAC;
    case 529u: goto L_08871AB4;
    case 530u: goto L_08871ADC;
    case 531u: goto L_08871AE4;
    case 532u: goto L_08871B04;
    case 533u: goto L_08871B0C;
    case 534u: goto L_08871B18;
    case 535u: goto L_08871B20;
    case 536u: goto L_08871B28;
    case 537u: goto L_08871B30;
    case 538u: goto L_08871B38;
    case 539u: goto L_08871B3C;
    case 540u: goto L_08871B50;
    case 541u: goto L_08871B58;
    case 542u: goto L_08871B60;
    case 543u: goto L_08871B68;
    case 544u: goto L_08871B70;
    case 545u: goto L_08871B7C;
    case 546u: goto L_08871B84;
    case 547u: goto L_08871B8C;
    case 548u: goto L_08871B94;
    case 549u: goto L_08871BA0;
    case 550u: goto L_08871BAC;
    case 551u: goto L_08871BB4;
    case 552u: goto L_08871BC4;
    case 553u: goto L_08871BDC;
    case 554u: goto L_08871BE8;
    case 555u: goto L_08871BEC;
    case 556u: goto L_08871C08;
    case 557u: goto L_08871C20;
    case 558u: goto L_08871C28;
    case 559u: goto L_08871C34;
    case 560u: goto L_08871C3C;
    case 561u: goto L_08871C44;
    case 562u: goto L_08871C4C;
    case 563u: goto L_08871C54;
    case 564u: goto L_08871C58;
    case 565u: goto L_08871C6C;
    case 566u: goto L_08871C74;
    case 567u: goto L_08871C7C;
    case 568u: goto L_08871C84;
    case 569u: goto L_08871C8C;
    case 570u: goto L_08871C94;
    case 571u: goto L_08871C9C;
    case 572u: goto L_08871CB0;
    case 573u: goto L_08871CBC;
    case 574u: goto L_08871CC4;
    case 575u: goto L_08871CDC;
    case 576u: goto L_08871CE0;
    case 577u: goto L_08871F8C;
    case 578u: goto L_08871FBC;
    case 579u: goto L_08871FCC;
    case 580u: goto L_08871FE0;
    case 581u: goto L_0887200C;
    case 582u: goto L_0887201C;
    case 583u: goto L_08872024;
    case 584u: goto L_0887203C;
    case 585u: goto L_08872050;
    case 586u: goto L_0887206C;
    case 587u: goto L_0887207C;
    case 588u: goto L_08872094;
    case 589u: goto L_088720A8;
    case 590u: goto L_088720B4;
    case 591u: goto L_088720BC;
    case 592u: goto L_088720D4;
    case 593u: goto L_088720E8;
    case 594u: goto L_08872104;
    case 595u: goto L_08872114;
    case 596u: goto L_0887212C;
    case 597u: goto L_0887213C;
    case 598u: goto L_08872160;
    case 599u: goto L_08872168;
    case 600u: goto L_08872170;
    case 601u: goto L_08872178;
    case 602u: goto L_08872188;
    case 603u: goto L_08872194;
    case 604u: goto L_088721E8;
    case 605u: goto L_088721F4;
    case 606u: goto L_08872208;
    case 607u: goto L_08872220;
    case 608u: goto L_0887223C;
    case 609u: goto L_08872258;
    case 610u: goto L_08872268;
    case 611u: goto L_08872278;
    case 612u: goto L_08872280;
    case 613u: goto L_0887229C;
    case 614u: goto L_088722B4;
    case 615u: goto L_088722C4;
    case 616u: goto L_088722D0;
    case 617u: goto L_088722D8;
    case 618u: goto L_088722F0;
    case 619u: goto L_0887230C;
    case 620u: goto L_08872358;
    case 621u: goto L_08872374;
    case 622u: goto L_08872380;
    case 623u: goto L_088723A0;
    case 624u: goto L_088723D8;
    case 625u: goto L_088723F4;
    case 626u: goto L_08872420;
    case 627u: goto L_08872450;
    case 628u: goto L_08872500;
    case 629u: goto L_08872514;
    case 630u: goto L_0887251C;
    case 631u: goto L_08872550;
    case 632u: goto L_08872568;
    case 633u: goto L_088726A0;
    case 634u: goto L_088726F0;
    case 635u: goto L_08872704;
    case 636u: goto L_08872708;
    case 637u: goto L_08872710;
    case 638u: goto L_08872720;
    case 639u: goto L_08872728;
    case 640u: goto L_0887274C;
    case 641u: goto L_08872750;
    case 642u: goto L_08872784;
    case 643u: goto L_08872794;
    case 644u: goto L_0887279C;
    case 645u: goto L_088727B4;
    case 646u: goto L_088727C0;
    case 647u: goto L_088727D4;
    case 648u: goto L_088727D8;
    case 649u: goto L_088727E0;
    case 650u: goto L_088727F0;
    case 651u: goto L_088727F8;
    case 652u: goto L_0887281C;
    case 653u: goto L_08872828;
    case 654u: goto L_0887283C;
    case 655u: goto L_0887284C;
    case 656u: goto L_08872858;
    case 657u: goto L_08872860;
    case 658u: goto L_08872868;
    case 659u: goto L_08872870;
    case 660u: goto L_08872884;
    case 661u: goto L_088728BC;
    case 662u: goto L_088728C4;
    case 663u: goto L_088728D0;
    case 664u: goto L_088728FC;
    case 665u: goto L_08872900;
    case 666u: goto L_08872908;
    case 667u: goto L_0887296C;
    case 668u: goto L_08872970;
    case 669u: goto L_08872998;
    case 670u: goto L_088729A0;
    case 671u: goto L_088729AC;
    case 672u: goto L_088729B4;
    case 673u: goto L_088729D0;
    case 674u: goto L_088729F4;
    case 675u: goto L_08872A0C;
    case 676u: goto L_08872A1C;
    case 677u: goto L_08872A60;
    case 678u: goto L_08872A6C;
    case 679u: goto L_08872B24;
    case 680u: goto L_08872B2C;
    case 681u: goto L_08872B34;
    case 682u: goto L_08872B3C;
    case 683u: goto L_08872B44;
    case 684u: goto L_08872B78;
    case 685u: goto L_08872BB4;
    case 686u: goto L_08872BD8;
    case 687u: goto L_08872BE4;
    case 688u: goto L_08872BF8;
    case 689u: goto L_08872C08;
    case 690u: goto L_08872C14;
    case 691u: goto L_08872C1C;
    case 692u: goto L_08872C24;
    case 693u: goto L_08872C2C;
    case 694u: goto L_08872C40;
    case 695u: goto L_08872C78;
    case 696u: goto L_08872C80;
    case 697u: goto L_08872C90;
    case 698u: goto L_08872CB0;
    case 699u: goto L_08872CB4;
    case 700u: goto L_08872D04;
    case 701u: goto L_08872D08;
    case 702u: goto L_08872D0C;
    case 703u: goto L_08872D2C;
    case 704u: goto L_08872D34;
    case 705u: goto L_08872D3C;
    case 706u: goto L_08872D44;
    case 707u: goto L_08872D5C;
    case 708u: goto L_08872D74;
    case 709u: goto L_08872D8C;
    case 710u: goto L_08872D98;
    case 711u: goto L_08872DCC;
    case 712u: goto L_08872DD8;
    case 713u: goto L_08872E78;
    case 714u: goto L_08872E80;
    case 715u: goto L_08872E88;
    case 716u: goto L_08872E90;
    case 717u: goto L_08872E98;
    case 718u: goto L_08872EB8;
    case 719u: goto L_08872EE4;
    case 720u: goto L_08872F04;
    case 721u: goto L_08872F1C;
    case 722u: goto L_08872F20;
    case 723u: goto L_08872F34;
    case 724u: goto L_08872F3C;
    case 725u: goto L_08872F44;
    case 726u: goto L_08873070;
    case 727u: goto L_088730C0;
    case 728u: goto L_088730C4;
    case 729u: goto L_088730C8;
    case 730u: goto L_088730DC;
    case 731u: goto L_088730E4;
    case 732u: goto L_088730F0;
    case 733u: goto L_088730FC;
    case 734u: goto L_088731A4;
    case 735u: goto L_088731A8;
    case 736u: goto L_088731B0;
    case 737u: goto L_088731B8;
    case 738u: goto L_088731D0;
    case 739u: goto L_088731D8;
    case 740u: goto L_088731DC;
    case 741u: goto L_088731E4;
    case 742u: goto L_088731EC;
    case 743u: goto L_088731F4;
    case 744u: goto L_088732EC;
    case 745u: goto L_088732FC;
    case 746u: goto L_08873310;
    case 747u: goto L_08873328;
    case 748u: goto L_088733A4;
    case 749u: goto L_088733AC;
    case 750u: goto L_088733B4;
    case 751u: goto L_088733B8;
    case 752u: goto L_088733C0;
    case 753u: goto L_088733C4;
    case 754u: goto L_088733C8;
    case 755u: goto L_088733EC;
    case 756u: goto L_088733F4;
    case 757u: goto L_08873400;
    case 758u: goto L_08873504;
    case 759u: goto L_0887350C;
    case 760u: goto L_08873514;
    case 761u: goto L_08873574;
    case 762u: goto L_0887357C;
    case 763u: goto L_088735A0;
    case 764u: goto L_088735AC;
    case 765u: goto L_088735C0;
    case 766u: goto L_088735D0;
    case 767u: goto L_088735DC;
    case 768u: goto L_088735E4;
    case 769u: goto L_088735EC;
    case 770u: goto L_088735F4;
    case 771u: goto L_08873608;
    case 772u: goto L_08873640;
    case 773u: goto L_08873648;
    case 774u: goto L_08873654;
    case 775u: goto L_08873680;
    case 776u: goto L_08873684;
    case 777u: goto L_0887368C;
    case 778u: goto L_088736F0;
    case 779u: goto L_088736F4;
    case 780u: goto L_0887371C;
    case 781u: goto L_08873724;
    case 782u: goto L_08873730;
    case 783u: goto L_08873738;
    case 784u: goto L_08873754;
    case 785u: goto L_08873778;
    case 786u: goto L_08873790;
    case 787u: goto L_088737A0;
    case 788u: goto L_088737E4;
    case 789u: goto L_088737F0;
    case 790u: goto L_088738A8;
    case 791u: goto L_088738B0;
    case 792u: goto L_088738B8;
    case 793u: goto L_088738C0;
    case 794u: goto L_088738C8;
    case 795u: goto L_088738FC;
    case 796u: goto L_08873938;
    case 797u: goto L_0887395C;
    case 798u: goto L_08873968;
    case 799u: goto L_0887397C;
    case 800u: goto L_0887398C;
    case 801u: goto L_08873998;
    case 802u: goto L_088739A0;
    case 803u: goto L_088739A8;
    case 804u: goto L_088739B0;
    case 805u: goto L_088739C4;
    case 806u: goto L_088739FC;
    case 807u: goto L_08873A04;
    case 808u: goto L_08873A14;
    case 809u: goto L_08873A34;
    case 810u: goto L_08873A38;
    case 811u: goto L_08873A88;
    case 812u: goto L_08873A8C;
    case 813u: goto L_08873A90;
    case 814u: goto L_08873AB0;
    case 815u: goto L_08873AB8;
    case 816u: goto L_08873AC0;
    case 817u: goto L_08873AC8;
    case 818u: goto L_08873AE0;
    case 819u: goto L_08873AF8;
    case 820u: goto L_08873B10;
    case 821u: goto L_08873B1C;
    case 822u: goto L_08873B50;
    case 823u: goto L_08873B5C;
    case 824u: goto L_08873BFC;
    case 825u: goto L_08873C04;
    case 826u: goto L_08873C0C;
    case 827u: goto L_08873C14;
    case 828u: goto L_08873C1C;
    case 829u: goto L_08873C3C;
    case 830u: goto L_08873C68;
    case 831u: goto L_08873C8C;
    case 832u: goto L_08873C98;
    case 833u: goto L_08873CAC;
    case 834u: goto L_08873CBC;
    case 835u: goto L_08873CC8;
    case 836u: goto L_08873CD0;
    case 837u: goto L_08873CD8;
    case 838u: goto L_08873CE0;
    case 839u: goto L_08873CF4;
    case 840u: goto L_08873D2C;
    case 841u: goto L_08873D34;
    case 842u: goto L_08873D4C;
    case 843u: goto L_08873D74;
    case 844u: goto L_08873D78;
    case 845u: goto L_08873DE8;
    case 846u: goto L_08873DEC;
    case 847u: goto L_08873E10;
    case 848u: goto L_08873E18;
    case 849u: goto L_08873E20;
    case 850u: goto L_08873E28;
    case 851u: goto L_08873E48;
    case 852u: goto L_08873E68;
    case 853u: goto L_08873E80;
    case 854u: goto L_08873E94;
    case 855u: goto L_08873ED8;
    case 856u: goto L_08873EE4;
    case 857u: goto L_08873FC4;
    case 858u: goto L_08873FCC;
    case 859u: goto L_08873FD4;
    case 860u: goto L_08873FDC;
    case 861u: goto L_08873FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08870000:
    ctx.set_gpr(31, 0x08870008u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870008u) goto L_08870008;
    return;
L_08870008:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870024;
L_08870024:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870030u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(158));
    goto L_088712C8;
L_08870030:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870088;
    }
    goto L_08870038;
L_08870038:
    ctx.set_gpr(31, 0x08870040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870040u) goto L_08870040;
    return;
L_08870040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(158));
    ctx.set_gpr(31, 0x08870050u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870050u) goto L_08870050;
    return;
L_08870050:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870084;
      }
      goto L_0887005C;
    }
L_0887005C:
    ctx.set_gpr(31, 0x08870064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870064u) goto L_08870064;
    return;
L_08870064:
    ctx.set_gpr(31, 0x0887006Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(158));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0887006Cu) goto L_0887006C;
    return;
L_0887006C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870084u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870084u) goto L_08870084;
    return;
L_08870084:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870088;
L_08870088:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870094;
L_08870094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088700A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870124;
      }
      goto L_088700D4;
    }
L_088700D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088700E4;
      }
      goto L_088700DC;
    }
L_088700DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870194;
      }
      goto L_088700E4;
    }
L_088700E4:
    ctx.set_gpr(31, 0x088700ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088700ECu) goto L_088700EC;
    return;
L_088700EC:
    ctx.set_gpr(31, 0x088700F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088700F4u) goto L_088700F4;
    return;
L_088700F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(159));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870108u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870108u) goto L_08870108;
    return;
L_08870108:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870124;
L_08870124:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870130u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(159));
    goto L_088712C8;
L_08870130:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870188;
    }
    goto L_08870138;
L_08870138:
    ctx.set_gpr(31, 0x08870140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870140u) goto L_08870140;
    return;
L_08870140:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(159));
    ctx.set_gpr(31, 0x08870150u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870150u) goto L_08870150;
    return;
L_08870150:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870184;
      }
      goto L_0887015C;
    }
L_0887015C:
    ctx.set_gpr(31, 0x08870164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870164u) goto L_08870164;
    return;
L_08870164:
    ctx.set_gpr(31, 0x0887016Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(159));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0887016Cu) goto L_0887016C;
    return;
L_0887016C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870184u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870184u) goto L_08870184;
    return;
L_08870184:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870188;
L_08870188:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870194;
L_08870194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088701A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870224;
      }
      goto L_088701D4;
    }
L_088701D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088701E4;
      }
      goto L_088701DC;
    }
L_088701DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870294;
      }
      goto L_088701E4;
    }
L_088701E4:
    ctx.set_gpr(31, 0x088701ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088701ECu) goto L_088701EC;
    return;
L_088701EC:
    ctx.set_gpr(31, 0x088701F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088701F4u) goto L_088701F4;
    return;
L_088701F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870208u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870208u) goto L_08870208;
    return;
L_08870208:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870224;
L_08870224:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870230u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(150));
    goto L_088712C8;
L_08870230:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870288;
    }
    goto L_08870238;
L_08870238:
    ctx.set_gpr(31, 0x08870240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870240u) goto L_08870240;
    return;
L_08870240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(31, 0x08870250u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870250u) goto L_08870250;
    return;
L_08870250:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870284;
      }
      goto L_0887025C;
    }
L_0887025C:
    ctx.set_gpr(31, 0x08870264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870264u) goto L_08870264;
    return;
L_08870264:
    ctx.set_gpr(31, 0x0887026Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(150));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0887026Cu) goto L_0887026C;
    return;
L_0887026C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870284u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870284u) goto L_08870284;
    return;
L_08870284:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870288;
L_08870288:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870294;
L_08870294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088702A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887036C;
      }
      goto L_088702D4;
    }
L_088702D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088702E4;
      }
      goto L_088702DC;
    }
L_088702DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088703DC;
      }
      goto L_088702E4;
    }
L_088702E4:
    ctx.set_gpr(31, 0x088702ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088702ECu) goto L_088702EC;
    return;
L_088702EC:
    ctx.set_gpr(31, 0x088702F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088702F4u) goto L_088702F4;
    return;
L_088702F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(161));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870308u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870308u) goto L_08870308;
    return;
L_08870308:
    ctx.set_gpr(31, 0x08870310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870310u) goto L_08870310;
    return;
L_08870310:
    ctx.set_gpr(31, 0x08870318u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870318u) goto L_08870318;
    return;
L_08870318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(135));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0887032Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0887032Cu) goto L_0887032C;
    return;
L_0887032C:
    ctx.set_gpr(31, 0x08870334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870334u) goto L_08870334;
    return;
L_08870334:
    ctx.set_gpr(31, 0x0887033Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887033Cu) goto L_0887033C;
    return;
L_0887033C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(135));
    ctx.set_gpr(31, 0x08870350u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870350u) goto L_08870350;
    return;
L_08870350:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887036C;
L_0887036C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870378u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(161));
    goto L_088712C8;
L_08870378:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088703D0;
    }
    goto L_08870380;
L_08870380:
    ctx.set_gpr(31, 0x08870388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870388u) goto L_08870388;
    return;
L_08870388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(161));
    ctx.set_gpr(31, 0x08870398u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870398u) goto L_08870398;
    return;
L_08870398:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088703CC;
      }
      goto L_088703A4;
    }
L_088703A4:
    ctx.set_gpr(31, 0x088703ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088703ACu) goto L_088703AC;
    return;
L_088703AC:
    ctx.set_gpr(31, 0x088703B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(161));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088703B4u) goto L_088703B4;
    return;
L_088703B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088703CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088703CCu) goto L_088703CC;
    return;
L_088703CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088703D0;
L_088703D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088703DC;
L_088703DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088703F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887046C;
      }
      goto L_0887041C;
    }
L_0887041C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887042C;
      }
      goto L_08870424;
    }
L_08870424:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088704DC;
      }
      goto L_0887042C;
    }
L_0887042C:
    ctx.set_gpr(31, 0x08870434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870434u) goto L_08870434;
    return;
L_08870434:
    ctx.set_gpr(31, 0x0887043Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887043Cu) goto L_0887043C;
    return;
L_0887043C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870450u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870450u) goto L_08870450;
    return;
L_08870450:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887046C;
L_0887046C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870478u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(138));
    goto L_088712C8;
L_08870478:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088704D0;
    }
    goto L_08870480;
L_08870480:
    ctx.set_gpr(31, 0x08870488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870488u) goto L_08870488;
    return;
L_08870488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(31, 0x08870498u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870498u) goto L_08870498;
    return;
L_08870498:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088704CC;
      }
      goto L_088704A4;
    }
L_088704A4:
    ctx.set_gpr(31, 0x088704ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088704ACu) goto L_088704AC;
    return;
L_088704AC:
    ctx.set_gpr(31, 0x088704B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(138));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088704B4u) goto L_088704B4;
    return;
L_088704B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088704CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088704CCu) goto L_088704CC;
    return;
L_088704CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088704D0;
L_088704D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088704DC;
L_088704DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088704F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887056C;
      }
      goto L_0887051C;
    }
L_0887051C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887052C;
      }
      goto L_08870524;
    }
L_08870524:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088705DC;
      }
      goto L_0887052C;
    }
L_0887052C:
    ctx.set_gpr(31, 0x08870534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870534u) goto L_08870534;
    return;
L_08870534:
    ctx.set_gpr(31, 0x0887053Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887053Cu) goto L_0887053C;
    return;
L_0887053C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(153));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870550u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870550u) goto L_08870550;
    return;
L_08870550:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887056C;
L_0887056C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870578u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(153));
    goto L_088712C8;
L_08870578:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088705D0;
    }
    goto L_08870580;
L_08870580:
    ctx.set_gpr(31, 0x08870588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870588u) goto L_08870588;
    return;
L_08870588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(153));
    ctx.set_gpr(31, 0x08870598u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870598u) goto L_08870598;
    return;
L_08870598:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088705CC;
      }
      goto L_088705A4;
    }
L_088705A4:
    ctx.set_gpr(31, 0x088705ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088705ACu) goto L_088705AC;
    return;
L_088705AC:
    ctx.set_gpr(31, 0x088705B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(153));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088705B4u) goto L_088705B4;
    return;
L_088705B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088705CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088705CCu) goto L_088705CC;
    return;
L_088705CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088705D0;
L_088705D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088705DC;
L_088705DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088705F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887066C;
      }
      goto L_0887061C;
    }
L_0887061C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887062C;
      }
      goto L_08870624;
    }
L_08870624:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088706DC;
      }
      goto L_0887062C;
    }
L_0887062C:
    ctx.set_gpr(31, 0x08870634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870634u) goto L_08870634;
    return;
L_08870634:
    ctx.set_gpr(31, 0x0887063Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887063Cu) goto L_0887063C;
    return;
L_0887063C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(155));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870650u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870650u) goto L_08870650;
    return;
L_08870650:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887066C;
L_0887066C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870678u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(155));
    goto L_088712C8;
L_08870678:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088706D0;
    }
    goto L_08870680;
L_08870680:
    ctx.set_gpr(31, 0x08870688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870688u) goto L_08870688;
    return;
L_08870688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(155));
    ctx.set_gpr(31, 0x08870698u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870698u) goto L_08870698;
    return;
L_08870698:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088706CC;
      }
      goto L_088706A4;
    }
L_088706A4:
    ctx.set_gpr(31, 0x088706ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088706ACu) goto L_088706AC;
    return;
L_088706AC:
    ctx.set_gpr(31, 0x088706B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(155));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088706B4u) goto L_088706B4;
    return;
L_088706B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088706CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088706CCu) goto L_088706CC;
    return;
L_088706CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088706D0;
L_088706D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088706DC;
L_088706DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088706F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887076C;
      }
      goto L_0887071C;
    }
L_0887071C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887072C;
      }
      goto L_08870724;
    }
L_08870724:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088707DC;
      }
      goto L_0887072C;
    }
L_0887072C:
    ctx.set_gpr(31, 0x08870734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870734u) goto L_08870734;
    return;
L_08870734:
    ctx.set_gpr(31, 0x0887073Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887073Cu) goto L_0887073C;
    return;
L_0887073C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(154));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870750u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870750u) goto L_08870750;
    return;
L_08870750:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887076C;
L_0887076C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870778u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(154));
    goto L_088712C8;
L_08870778:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088707D0;
    }
    goto L_08870780;
L_08870780:
    ctx.set_gpr(31, 0x08870788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870788u) goto L_08870788;
    return;
L_08870788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(154));
    ctx.set_gpr(31, 0x08870798u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870798u) goto L_08870798;
    return;
L_08870798:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088707CC;
      }
      goto L_088707A4;
    }
L_088707A4:
    ctx.set_gpr(31, 0x088707ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088707ACu) goto L_088707AC;
    return;
L_088707AC:
    ctx.set_gpr(31, 0x088707B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(154));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088707B4u) goto L_088707B4;
    return;
L_088707B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088707CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088707CCu) goto L_088707CC;
    return;
L_088707CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088707D0;
L_088707D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088707DC;
L_088707DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088707F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0887086C;
      }
      goto L_0887081C;
    }
L_0887081C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887082C;
      }
      goto L_08870824;
    }
L_08870824:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088708DC;
      }
      goto L_0887082C;
    }
L_0887082C:
    ctx.set_gpr(31, 0x08870834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870834u) goto L_08870834;
    return;
L_08870834:
    ctx.set_gpr(31, 0x0887083Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887083Cu) goto L_0887083C;
    return;
L_0887083C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(164));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870850u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870850u) goto L_08870850;
    return;
L_08870850:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0887086C;
L_0887086C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870878u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(164));
    goto L_088712C8;
L_08870878:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088708D0;
    }
    goto L_08870880;
L_08870880:
    ctx.set_gpr(31, 0x08870888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870888u) goto L_08870888;
    return;
L_08870888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08870898u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870898u) goto L_08870898;
    return;
L_08870898:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088708CC;
      }
      goto L_088708A4;
    }
L_088708A4:
    ctx.set_gpr(31, 0x088708ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088708ACu) goto L_088708AC;
    return;
L_088708AC:
    ctx.set_gpr(31, 0x088708B4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088708B4u) goto L_088708B4;
    return;
L_088708B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088708CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088708CCu) goto L_088708CC;
    return;
L_088708CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088708D0;
L_088708D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088708DC;
L_088708DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088708F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088709B4;
      }
      goto L_0887091C;
    }
L_0887091C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887092C;
      }
      goto L_08870924;
    }
L_08870924:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870A24;
      }
      goto L_0887092C;
    }
L_0887092C:
    ctx.set_gpr(31, 0x08870934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870934u) goto L_08870934;
    return;
L_08870934:
    ctx.set_gpr(31, 0x0887093Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887093Cu) goto L_0887093C;
    return;
L_0887093C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870950u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870950u) goto L_08870950;
    return;
L_08870950:
    ctx.set_gpr(31, 0x08870958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870958u) goto L_08870958;
    return;
L_08870958:
    ctx.set_gpr(31, 0x08870960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870960u) goto L_08870960;
    return;
L_08870960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870974u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870974u) goto L_08870974;
    return;
L_08870974:
    ctx.set_gpr(31, 0x0887097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0887097Cu) goto L_0887097C;
    return;
L_0887097C:
    ctx.set_gpr(31, 0x08870984u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870984u) goto L_08870984;
    return;
L_08870984:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08870998u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870998u) goto L_08870998;
    return;
L_08870998:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_088709B4;
L_088709B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088709C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    goto L_088712C8;
L_088709C0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870A18;
    }
    goto L_088709C8;
L_088709C8:
    ctx.set_gpr(31, 0x088709D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088709D0u) goto L_088709D0;
    return;
L_088709D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088709E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x088709E0u) goto L_088709E0;
    return;
L_088709E0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A14;
      }
      goto L_088709EC;
    }
L_088709EC:
    ctx.set_gpr(31, 0x088709F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088709F4u) goto L_088709F4;
    return;
L_088709F4:
    ctx.set_gpr(31, 0x088709FCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x088709FCu) goto L_088709FC;
    return;
L_088709FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870A14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870A14u) goto L_08870A14;
    return;
L_08870A14:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870A18;
L_08870A18:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870A24;
L_08870A24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870AB4;
      }
      goto L_08870A64;
    }
L_08870A64:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A74;
      }
      goto L_08870A6C;
    }
L_08870A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870B24;
      }
      goto L_08870A74;
    }
L_08870A74:
    ctx.set_gpr(31, 0x08870A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870A7Cu) goto L_08870A7C;
    return;
L_08870A7C:
    ctx.set_gpr(31, 0x08870A84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870A84u) goto L_08870A84;
    return;
L_08870A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870A98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870A98u) goto L_08870A98;
    return;
L_08870A98:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870AB4;
L_08870AB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870AC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(167));
    goto L_088712C8;
L_08870AC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870B18;
    }
    goto L_08870AC8;
L_08870AC8:
    ctx.set_gpr(31, 0x08870AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870AD0u) goto L_08870AD0;
    return;
L_08870AD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(167));
    ctx.set_gpr(31, 0x08870AE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870AE0u) goto L_08870AE0;
    return;
L_08870AE0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870B14;
      }
      goto L_08870AEC;
    }
L_08870AEC:
    ctx.set_gpr(31, 0x08870AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870AF4u) goto L_08870AF4;
    return;
L_08870AF4:
    ctx.set_gpr(31, 0x08870AFCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(167));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08870AFCu) goto L_08870AFC;
    return;
L_08870AFC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870B14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870B14u) goto L_08870B14;
    return;
L_08870B14:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870B18;
L_08870B18:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870B24;
L_08870B24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870BB4;
      }
      goto L_08870B64;
    }
L_08870B64:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870B74;
      }
      goto L_08870B6C;
    }
L_08870B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870C24;
      }
      goto L_08870B74;
    }
L_08870B74:
    ctx.set_gpr(31, 0x08870B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870B7Cu) goto L_08870B7C;
    return;
L_08870B7C:
    ctx.set_gpr(31, 0x08870B84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870B84u) goto L_08870B84;
    return;
L_08870B84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870B98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870B98u) goto L_08870B98;
    return;
L_08870B98:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870BB4;
L_08870BB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870BC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(123));
    goto L_088712C8;
L_08870BC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870C18;
    }
    goto L_08870BC8;
L_08870BC8:
    ctx.set_gpr(31, 0x08870BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870BD0u) goto L_08870BD0;
    return;
L_08870BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(31, 0x08870BE0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870BE0u) goto L_08870BE0;
    return;
L_08870BE0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870C14;
      }
      goto L_08870BEC;
    }
L_08870BEC:
    ctx.set_gpr(31, 0x08870BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870BF4u) goto L_08870BF4;
    return;
L_08870BF4:
    ctx.set_gpr(31, 0x08870BFCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(123));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08870BFCu) goto L_08870BFC;
    return;
L_08870BFC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870C14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870C14u) goto L_08870C14;
    return;
L_08870C14:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870C18;
L_08870C18:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870C24;
L_08870C24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870C38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870CFC;
      }
      goto L_08870C64;
    }
L_08870C64:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870C74;
      }
      goto L_08870C6C;
    }
L_08870C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870D6C;
      }
      goto L_08870C74;
    }
L_08870C74:
    ctx.set_gpr(31, 0x08870C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870C7Cu) goto L_08870C7C;
    return;
L_08870C7C:
    ctx.set_gpr(31, 0x08870C84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870C84u) goto L_08870C84;
    return;
L_08870C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(166));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870C98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870C98u) goto L_08870C98;
    return;
L_08870C98:
    ctx.set_gpr(31, 0x08870CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870CA0u) goto L_08870CA0;
    return;
L_08870CA0:
    ctx.set_gpr(31, 0x08870CA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870CA8u) goto L_08870CA8;
    return;
L_08870CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(165));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870CBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870CBCu) goto L_08870CBC;
    return;
L_08870CBC:
    ctx.set_gpr(31, 0x08870CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870CC4u) goto L_08870CC4;
    return;
L_08870CC4:
    ctx.set_gpr(31, 0x08870CCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870CCCu) goto L_08870CCC;
    return;
L_08870CCC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(165));
    ctx.set_gpr(31, 0x08870CE0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870CE0u) goto L_08870CE0;
    return;
L_08870CE0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870CFC;
L_08870CFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870D08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(166));
    goto L_088712C8;
L_08870D08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870D60;
    }
    goto L_08870D10;
L_08870D10:
    ctx.set_gpr(31, 0x08870D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870D18u) goto L_08870D18;
    return;
L_08870D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(166));
    ctx.set_gpr(31, 0x08870D28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870D28u) goto L_08870D28;
    return;
L_08870D28:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870D5C;
      }
      goto L_08870D34;
    }
L_08870D34:
    ctx.set_gpr(31, 0x08870D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870D3Cu) goto L_08870D3C;
    return;
L_08870D3C:
    ctx.set_gpr(31, 0x08870D44u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(166));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08870D44u) goto L_08870D44;
    return;
L_08870D44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870D5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870D5Cu) goto L_08870D5C;
    return;
L_08870D5C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870D60;
L_08870D60:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870D6C;
L_08870D6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870DFC;
      }
      goto L_08870DAC;
    }
L_08870DAC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870DBC;
      }
      goto L_08870DB4;
    }
L_08870DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870E6C;
      }
      goto L_08870DBC;
    }
L_08870DBC:
    ctx.set_gpr(31, 0x08870DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870DC4u) goto L_08870DC4;
    return;
L_08870DC4:
    ctx.set_gpr(31, 0x08870DCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870DCCu) goto L_08870DCC;
    return;
L_08870DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870DE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870DE0u) goto L_08870DE0;
    return;
L_08870DE0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870DFC;
L_08870DFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870E08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(124));
    goto L_088712C8;
L_08870E08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870E60;
    }
    goto L_08870E10;
L_08870E10:
    ctx.set_gpr(31, 0x08870E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870E18u) goto L_08870E18;
    return;
L_08870E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08870E28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870E28u) goto L_08870E28;
    return;
L_08870E28:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870E5C;
      }
      goto L_08870E34;
    }
L_08870E34:
    ctx.set_gpr(31, 0x08870E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870E3Cu) goto L_08870E3C;
    return;
L_08870E3C:
    ctx.set_gpr(31, 0x08870E44u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08870E44u) goto L_08870E44;
    return;
L_08870E44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870E5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870E5Cu) goto L_08870E5C;
    return;
L_08870E5C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870E60;
L_08870E60:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870E6C;
L_08870E6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870E80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08870EFC;
      }
      goto L_08870EAC;
    }
L_08870EAC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870EBC;
      }
      goto L_08870EB4;
    }
L_08870EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08870F6C;
      }
      goto L_08870EBC;
    }
L_08870EBC:
    ctx.set_gpr(31, 0x08870EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870EC4u) goto L_08870EC4;
    return;
L_08870EC4:
    ctx.set_gpr(31, 0x08870ECCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870ECCu) goto L_08870ECC;
    return;
L_08870ECC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(162));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870EE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870EE0u) goto L_08870EE0;
    return;
L_08870EE0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08870EFC;
L_08870EFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08870F08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(162));
    goto L_088712C8;
L_08870F08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08870F60;
    }
    goto L_08870F10;
L_08870F10:
    ctx.set_gpr(31, 0x08870F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870F18u) goto L_08870F18;
    return;
L_08870F18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(162));
    ctx.set_gpr(31, 0x08870F28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08870F28u) goto L_08870F28;
    return;
L_08870F28:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F5C;
      }
      goto L_08870F34;
    }
L_08870F34:
    ctx.set_gpr(31, 0x08870F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870F3Cu) goto L_08870F3C;
    return;
L_08870F3C:
    ctx.set_gpr(31, 0x08870F44u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(162));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08870F44u) goto L_08870F44;
    return;
L_08870F44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08870F5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08870F5Cu) goto L_08870F5C;
    return;
L_08870F5C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08870F60;
L_08870F60:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08870F6C;
L_08870F6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08871020;
      }
      goto L_08870FAC;
    }
L_08870FAC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870FBC;
      }
      goto L_08870FB4;
    }
L_08870FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08871090;
      }
      goto L_08870FBC;
    }
L_08870FBC:
    ctx.set_gpr(31, 0x08870FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870FC4u) goto L_08870FC4;
    return;
L_08870FC4:
    ctx.set_gpr(31, 0x08870FCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870FCCu) goto L_08870FCC;
    return;
L_08870FCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08870FE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08870FE0u) goto L_08870FE0;
    return;
L_08870FE0:
    ctx.set_gpr(31, 0x08870FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08870FE8u) goto L_08870FE8;
    return;
L_08870FE8:
    ctx.set_gpr(31, 0x08870FF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08870FF0u) goto L_08870FF0;
    return;
L_08870FF0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08871004u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871004u) goto L_08871004;
    return;
L_08871004:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08871020;
L_08871020:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887102Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    goto L_088712C8;
L_0887102C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08871084;
    }
    goto L_08871034;
L_08871034:
    ctx.set_gpr(31, 0x0887103Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0887103Cu) goto L_0887103C;
    return;
L_0887103C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x0887104Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0887104Cu) goto L_0887104C;
    return;
L_0887104C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871080;
      }
      goto L_08871058;
    }
L_08871058:
    ctx.set_gpr(31, 0x08871060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871060u) goto L_08871060;
    return;
L_08871060:
    ctx.set_gpr(31, 0x08871068u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(126));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08871068u) goto L_08871068;
    return;
L_08871068:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08871080u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08871080u) goto L_08871080;
    return;
L_08871080:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08871084;
L_08871084:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08871090;
L_08871090:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088710A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08871120;
      }
      goto L_088710D0;
    }
L_088710D0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088710E0;
      }
      goto L_088710D8;
    }
L_088710D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08871190;
      }
      goto L_088710E0;
    }
L_088710E0:
    ctx.set_gpr(31, 0x088710E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088710E8u) goto L_088710E8;
    return;
L_088710E8:
    ctx.set_gpr(31, 0x088710F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088710F0u) goto L_088710F0;
    return;
L_088710F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08871104u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871104u) goto L_08871104;
    return;
L_08871104:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08871120;
L_08871120:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887112Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    goto L_088712C8;
L_0887112C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08871184;
    }
    goto L_08871134;
L_08871134:
    ctx.set_gpr(31, 0x0887113Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0887113Cu) goto L_0887113C;
    return;
L_0887113C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    ctx.set_gpr(31, 0x0887114Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0887114Cu) goto L_0887114C;
    return;
L_0887114C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871180;
      }
      goto L_08871158;
    }
L_08871158:
    ctx.set_gpr(31, 0x08871160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871160u) goto L_08871160;
    return;
L_08871160:
    ctx.set_gpr(31, 0x08871168u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(163));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x08871168u) goto L_08871168;
    return;
L_08871168:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08871180u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08871180u) goto L_08871180;
    return;
L_08871180:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08871184;
L_08871184:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08871190;
L_08871190:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088711A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08871244;
      }
      goto L_088711D0;
    }
L_088711D0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088711E0;
      }
      goto L_088711D8;
    }
L_088711D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088712B4;
      }
      goto L_088711E0;
    }
L_088711E0:
    ctx.set_gpr(31, 0x088711E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088711E8u) goto L_088711E8;
    return;
L_088711E8:
    ctx.set_gpr(31, 0x088711F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088711F0u) goto L_088711F0;
    return;
L_088711F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08871204u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871204u) goto L_08871204;
    return;
L_08871204:
    ctx.set_gpr(31, 0x0887120Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0887120Cu) goto L_0887120C;
    return;
L_0887120C:
    ctx.set_gpr(31, 0x08871214u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871214u) goto L_08871214;
    return;
L_08871214:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08871228u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871228u) goto L_08871228;
    return;
L_08871228:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_08871244;
L_08871244:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08871250u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    goto L_088712C8;
L_08871250:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_088712A8;
    }
    goto L_08871258;
L_08871258:
    ctx.set_gpr(31, 0x08871260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871260u) goto L_08871260;
    return;
L_08871260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08871270u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x08871270u) goto L_08871270;
    return;
L_08871270:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088712A4;
      }
      goto L_0887127C;
    }
L_0887127C:
    ctx.set_gpr(31, 0x08871284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871284u) goto L_08871284;
    return;
L_08871284:
    ctx.set_gpr(31, 0x0887128Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(126));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0887128Cu) goto L_0887128C;
    return;
L_0887128C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x088712A4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088712A4u) goto L_088712A4;
    return;
L_088712A4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_088712A8;
L_088712A8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088712B4;
L_088712B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088712C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088712FCu);
    ctx.set_gpr(22, 0u + 0u);
    goto L_08871ADC;
L_088712FC:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08871308;
L_08871308:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08871314;
L_08871314:
    ctx.set_gpr(31, 0x0887131Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0887131Cu) goto L_0887131C;
    return;
L_0887131C:
    ctx.set_gpr(31, 0x08871324u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871324u) goto L_08871324;
    return;
L_08871324:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08871330u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x08871330u) goto L_08871330;
    return;
L_08871330:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0887133Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0887133Cu) goto L_0887133C;
    return;
L_0887133C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08871314;
      }
      goto L_08871350;
    }
L_08871350:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08871904;
      }
      goto L_08871360;
    }
L_08871360:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_088717B4;
    }
    goto L_0887136C;
L_0887136C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0887162C;
    }
    goto L_08871378;
L_08871378:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_088714D8;
    }
    goto L_08871384;
L_08871384:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08871398;
    }
    goto L_0887138C;
L_0887138C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871A6C;
      }
      goto L_08871394;
    }
L_08871394:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08871398;
L_08871398:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
        goto L_088713F4;
    }
    goto L_088713A0;
L_088713A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088713ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088713ACu) goto L_088713AC;
    return;
L_088713AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08871464;
    }
    goto L_088713B4;
L_088713B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088713C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088713C0u) goto L_088713C0;
    return;
L_088713C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088713E4;
      }
      goto L_088713C8;
    }
L_088713C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088713D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088713D4u) goto L_088713D4;
    return;
L_088713D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088713E4;
      }
      goto L_088713DC;
    }
L_088713DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871464;
      }
      goto L_088713E4;
    }
L_088713E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871464;
      }
      goto L_088713F0;
    }
L_088713F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
    goto L_088713F4;
L_088713F4:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
        goto L_08871454;
    }
    goto L_088713FC;
L_088713FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871408u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08871408u) goto L_08871408;
    return;
L_08871408:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08871464;
    }
    goto L_08871410;
L_08871410:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0887141Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887141Cu) goto L_0887141C;
    return;
L_0887141C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871438;
      }
      goto L_08871424;
    }
L_08871424:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871430u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08871430u) goto L_08871430;
    return;
L_08871430:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08871464;
    }
    goto L_08871438;
L_08871438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871464;
      }
      goto L_08871444;
    }
L_08871444:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871464;
      }
      goto L_08871450;
    }
L_08871450:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    goto L_08871454;
L_08871454:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871464u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08871464u) goto L_08871464;
    return;
L_08871464:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08871A68;
    }
    goto L_0887146C;
L_0887146C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08871478u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871478u) goto L_08871478;
    return;
L_08871478:
    ctx.set_gpr(31, 0x08871480u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871480u) goto L_08871480;
    return;
L_08871480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08871494u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871494u) goto L_08871494;
    return;
L_08871494:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_0887149C;
    }
L_0887149C:
    ctx.set_gpr(31, 0x088714A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088714A4u) goto L_088714A4;
    return;
L_088714A4:
    ctx.set_gpr(31, 0x088714ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088714ACu) goto L_088714AC;
    return;
L_088714AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088714C0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x088714C0u) goto L_088714C0;
    return;
L_088714C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088714C8;
    }
L_088714C8:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088714D4;
    }
L_088714D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088714D8;
L_088714D8:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
        goto L_08871538;
    }
    goto L_088714E0;
L_088714E0:
    ctx.set_gpr(31, 0x088714E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x088714E8u) goto L_088714E8;
    return;
L_088714E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_088715B0;
    }
    goto L_088714F8;
L_088714F8:
    ctx.set_gpr(31, 0x08871500u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x08871500u) goto L_08871500;
    return;
L_08871500:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871528;
      }
      goto L_0887150C;
    }
L_0887150C:
    ctx.set_gpr(31, 0x08871514u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x08871514u) goto L_08871514;
    return;
L_08871514:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871528;
      }
      goto L_08871520;
    }
L_08871520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871528;
    }
L_08871528:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871534;
    }
L_08871534:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
    goto L_08871538;
L_08871538:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
        goto L_088715A0;
    }
    goto L_08871540;
L_08871540:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0887154Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x0887154Cu) goto L_0887154C;
    return;
L_0887154C:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871558;
    }
L_08871558:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871564u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x08871564u) goto L_08871564;
    return;
L_08871564:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871570;
    }
L_08871570:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0887157Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x0887157Cu) goto L_0887157C;
    return;
L_0887157C:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_088715B0;
    }
    goto L_08871588;
L_08871588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871590;
    }
L_08871590:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_0887159C;
    }
L_0887159C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    goto L_088715A0;
L_088715A0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x088715ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 843u, 0x0885B358u>(ctx, &aot_mem) && ctx.pc == 0x088715ACu) goto L_088715AC;
    return;
L_088715AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_088715B0;
L_088715B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08871A68;
    }
    goto L_088715C0;
L_088715C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088715CCu);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088715CCu) goto L_088715CC;
    return;
L_088715CC:
    ctx.set_gpr(31, 0x088715D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088715D4u) goto L_088715D4;
    return;
L_088715D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088715E8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x088715E8u) goto L_088715E8;
    return;
L_088715E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088715F0;
    }
L_088715F0:
    ctx.set_gpr(31, 0x088715F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088715F8u) goto L_088715F8;
    return;
L_088715F8:
    ctx.set_gpr(31, 0x08871600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871600u) goto L_08871600;
    return;
L_08871600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08871614u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871614u) goto L_08871614;
    return;
L_08871614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_0887161C;
    }
L_0887161C:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871628;
    }
L_08871628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0887162C;
L_0887162C:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
        goto L_088716A4;
    }
    goto L_08871634;
L_08871634:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08871640u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x08871640u) goto L_08871640;
    return;
L_08871640:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08871738;
    }
    goto L_08871654;
L_08871654:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08871660u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x08871660u) goto L_08871660;
    return;
L_08871660:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871694;
      }
      goto L_08871670;
    }
L_08871670:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0887167Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x0887167Cu) goto L_0887167C;
    return;
L_0887167C:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871694;
      }
      goto L_0887168C;
    }
L_0887168C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_08871694;
    }
L_08871694:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_088716A0;
    }
L_088716A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
    goto L_088716A4;
L_088716A4:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
        goto L_08871724;
    }
    goto L_088716AC;
L_088716AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088716BCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x088716BCu) goto L_088716BC;
    return;
L_088716BC:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_088716CC;
    }
L_088716CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088716DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x088716DCu) goto L_088716DC;
    return;
L_088716DC:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_088716EC;
    }
L_088716EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088716FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x088716FCu) goto L_088716FC;
    return;
L_088716FC:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08871738;
    }
    goto L_0887170C;
L_0887170C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_08871714;
    }
L_08871714:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_08871720;
    }
L_08871720:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    goto L_08871724;
L_08871724:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08871734u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 205u, 0x08860B44u>(ctx, &aot_mem) && ctx.pc == 0x08871734u) goto L_08871734;
    return;
L_08871734:
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    goto L_08871738;
L_08871738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08871A68;
    }
    goto L_08871748;
L_08871748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08871754u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871754u) goto L_08871754;
    return;
L_08871754:
    ctx.set_gpr(31, 0x0887175Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0887175Cu) goto L_0887175C;
    return;
L_0887175C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08871770u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871770u) goto L_08871770;
    return;
L_08871770:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871778;
    }
L_08871778:
    ctx.set_gpr(31, 0x08871780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871780u) goto L_08871780;
    return;
L_08871780:
    ctx.set_gpr(31, 0x08871788u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871788u) goto L_08871788;
    return;
L_08871788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0887179Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0887179Cu) goto L_0887179C;
    return;
L_0887179C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088717A4;
    }
L_088717A4:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088717B0;
    }
L_088717B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088717B4;
L_088717B4:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
        goto L_08871814;
    }
    goto L_088717BC;
L_088717BC:
    ctx.set_gpr(31, 0x088717C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x088717C4u) goto L_088717C4;
    return;
L_088717C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_0887188C;
    }
    goto L_088717D4;
L_088717D4:
    ctx.set_gpr(31, 0x088717DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x088717DCu) goto L_088717DC;
    return;
L_088717DC:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871804;
      }
      goto L_088717E8;
    }
L_088717E8:
    ctx.set_gpr(31, 0x088717F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x088717F0u) goto L_088717F0;
    return;
L_088717F0:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871804;
      }
      goto L_088717FC;
    }
L_088717FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_08871804;
    }
L_08871804:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_08871810;
    }
L_08871810:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
    goto L_08871814;
L_08871814:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
        goto L_0887187C;
    }
    goto L_0887181C;
L_0887181C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871828u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08871828u) goto L_08871828;
    return;
L_08871828:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_08871834;
    }
L_08871834:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871840u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08871840u) goto L_08871840;
    return;
L_08871840:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_0887184C;
    }
L_0887184C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871858u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08871858u) goto L_08871858;
    return;
L_08871858:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_0887188C;
    }
    goto L_08871864;
L_08871864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_0887186C;
    }
L_0887186C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887188C;
      }
      goto L_08871878;
    }
L_08871878:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    goto L_0887187C;
L_0887187C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08871888u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08871888u) goto L_08871888;
    return;
L_08871888:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0887188C;
L_0887188C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08871A68;
    }
    goto L_0887189C;
L_0887189C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088718A8u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088718A8u) goto L_088718A8;
    return;
L_088718A8:
    ctx.set_gpr(31, 0x088718B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088718B0u) goto L_088718B0;
    return;
L_088718B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088718C4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x088718C4u) goto L_088718C4;
    return;
L_088718C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088718CC;
    }
L_088718CC:
    ctx.set_gpr(31, 0x088718D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088718D4u) goto L_088718D4;
    return;
L_088718D4:
    ctx.set_gpr(31, 0x088718DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x088718DCu) goto L_088718DC;
    return;
L_088718DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088718F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x088718F0u) goto L_088718F0;
    return;
L_088718F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_088718F8;
    }
L_088718F8:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871904;
    }
L_08871904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
        goto L_08871974;
    }
    goto L_08871910;
L_08871910:
    ctx.set_gpr(31, 0x08871918u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x08871918u) goto L_08871918;
    return;
L_08871918:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_088719F8;
    }
    goto L_0887192C;
L_0887192C:
    ctx.set_gpr(31, 0x08871934u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x08871934u) goto L_08871934;
    return;
L_08871934:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871964;
      }
      goto L_08871944;
    }
L_08871944:
    ctx.set_gpr(31, 0x0887194Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x0887194Cu) goto L_0887194C;
    return;
L_0887194C:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871964;
      }
      goto L_0887195C;
    }
L_0887195C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_08871964;
    }
L_08871964:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_08871970;
    }
L_08871970:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-99));
    goto L_08871974;
L_08871974:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
        goto L_088719E8;
    }
    goto L_0887197C;
L_0887197C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08871988u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x08871988u) goto L_08871988;
    return;
L_08871988:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_08871998;
    }
L_08871998:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088719A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x088719A4u) goto L_088719A4;
    return;
L_088719A4:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_088719B4;
    }
L_088719B4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088719C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x088719C0u) goto L_088719C0;
    return;
L_088719C0:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_088719F8;
    }
    goto L_088719D0;
L_088719D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_088719D8;
    }
L_088719D8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088719F8;
      }
      goto L_088719E4;
    }
L_088719E4:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    goto L_088719E8;
L_088719E8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x088719F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 857u, 0x0885B438u>(ctx, &aot_mem) && ctx.pc == 0x088719F4u) goto L_088719F4;
    return;
L_088719F4:
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    goto L_088719F8;
L_088719F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08871A68;
    }
    goto L_08871A08;
L_08871A08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08871A14u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871A14u) goto L_08871A14;
    return;
L_08871A14:
    ctx.set_gpr(31, 0x08871A1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871A1Cu) goto L_08871A1C;
    return;
L_08871A1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08871A30u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871A30u) goto L_08871A30;
    return;
L_08871A30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871A38;
    }
L_08871A38:
    ctx.set_gpr(31, 0x08871A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871A40u) goto L_08871A40;
    return;
L_08871A40:
    ctx.set_gpr(31, 0x08871A48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871A48u) goto L_08871A48;
    return;
L_08871A48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08871A5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x08871A5Cu) goto L_08871A5C;
    return;
L_08871A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871A64;
    }
L_08871A64:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08871A68;
L_08871A68:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08871A6C;
L_08871A6C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08871308;
      }
      goto L_08871A7C;
    }
L_08871A7C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08871A84;
L_08871A84:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08871AA4;
    }
    goto L_08871A90;
L_08871A90:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871A84;
      }
      goto L_08871AA0;
    }
L_08871AA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08871AA4;
L_08871AA4:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
        goto L_08871AB4;
    }
    goto L_08871AAC;
L_08871AAC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    goto L_08871AB4;
L_08871AB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871ADC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-122));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 620u, 0x08862608u>(ctx, &aot_mem); return;
L_08871AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08871B04u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871B04u) goto L_08871B04;
    return;
L_08871B04:
    ctx.set_gpr(31, 0x08871B0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08871B0Cu) goto L_08871B0C;
    return;
L_08871B0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08871B3C;
    }
    goto L_08871B18;
L_08871B18:
    ctx.set_gpr(31, 0x08871B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871B20u) goto L_08871B20;
    return;
L_08871B20:
    ctx.set_gpr(31, 0x08871B28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08871B28u) goto L_08871B28;
    return;
L_08871B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B38;
      }
      goto L_08871B30;
    }
L_08871B30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08871BEC;
      }
      goto L_08871B38;
    }
L_08871B38:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08871B3C;
L_08871B3C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08871B58;
    }
    goto L_08871B50;
L_08871B50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08871BEC;
      }
      goto L_08871B58;
    }
L_08871B58:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08871B60;
L_08871B60:
    ctx.set_gpr(31, 0x08871B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871B68u) goto L_08871B68;
    return;
L_08871B68:
    ctx.set_gpr(31, 0x08871B70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871B70u) goto L_08871B70;
    return;
L_08871B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08871B7Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x08871B7Cu) goto L_08871B7C;
    return;
L_08871B7C:
    ctx.set_gpr(31, 0x08871B84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 257u, 0x08860E30u>(ctx, &aot_mem) && ctx.pc == 0x08871B84u) goto L_08871B84;
    return;
L_08871B84:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08871B94;
    }
    goto L_08871B8C;
L_08871B8C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08871B94;
L_08871B94:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871B60;
      }
      goto L_08871BA0;
    }
L_08871BA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08871BEC;
    }
    goto L_08871BAC;
L_08871BAC:
    ctx.set_gpr(31, 0x08871BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871BB4u) goto L_08871BB4;
    return;
L_08871BB4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08871BC4u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 548u, 0x0886205Cu>(ctx, &aot_mem) && ctx.pc == 0x08871BC4u) goto L_08871BC4;
    return;
L_08871BC4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-17460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871BE8;
      }
      goto L_08871BDC;
    }
L_08871BDC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-17460), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08871BE8;
L_08871BE8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08871BEC;
L_08871BEC:
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
L_08871C08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08871C20u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871C20u) goto L_08871C20;
    return;
L_08871C20:
    ctx.set_gpr(31, 0x08871C28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08871C28u) goto L_08871C28;
    return;
L_08871C28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08871C58;
    }
    goto L_08871C34;
L_08871C34:
    ctx.set_gpr(31, 0x08871C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871C3Cu) goto L_08871C3C;
    return;
L_08871C3C:
    ctx.set_gpr(31, 0x08871C44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08871C44u) goto L_08871C44;
    return;
L_08871C44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C54;
      }
      goto L_08871C4C;
    }
L_08871C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08871CE0;
      }
      goto L_08871C54;
    }
L_08871C54:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08871C58;
L_08871C58:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08871C74;
    }
    goto L_08871C6C;
L_08871C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08871CE0;
      }
      goto L_08871C74;
    }
L_08871C74:
    ctx.set_gpr(31, 0x08871C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871C7Cu) goto L_08871C7C;
    return;
L_08871C7C:
    ctx.set_gpr(31, 0x08871C84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08871C84u) goto L_08871C84;
    return;
L_08871C84:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08871CE0;
    }
    goto L_08871C8C;
L_08871C8C:
    ctx.set_gpr(31, 0x08871C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08871C94u) goto L_08871C94;
    return;
L_08871C94:
    ctx.set_gpr(31, 0x08871C9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08871C9Cu) goto L_08871C9C;
    return;
L_08871C9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08871CB0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 342u, 0x088614E8u>(ctx, &aot_mem) && ctx.pc == 0x08871CB0u) goto L_08871CB0;
    return;
L_08871CB0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CDC;
      }
      goto L_08871CBC;
    }
L_08871CBC:
    ctx.set_gpr(31, 0x08871CC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08871CC4u) goto L_08871CC4;
    return;
L_08871CC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08871CDCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08871CDCu) goto L_08871CDC;
    return;
L_08871CDC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08871CE0;
L_08871CE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0887200C;
      }
      goto L_08871FBC;
    }
L_08871FBC:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(6, ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08872160;
      }
      goto L_08871FCC;
    }
L_08871FCC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887200C;
      }
      goto L_08871FE0;
    }
L_08871FE0:
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08871FE0;
      }
      goto L_0887200C;
    }
L_0887200C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088720A8;
      }
      goto L_0887201C;
    }
L_0887201C:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08872024;
L_08872024:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0887203Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887203Cu) goto L_0887203C;
    return;
L_0887203C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08872050u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872050u) goto L_08872050;
    return;
L_08872050:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x0887206Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887206Cu) goto L_0887206C;
    return;
L_0887206C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887207Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0887207Cu) goto L_0887207C;
    return;
L_0887207C:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x08872094u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872094u) goto L_08872094;
    return;
L_08872094:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08872024;
    }
    goto L_088720A8;
L_088720A8:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0887213C;
      }
      goto L_088720B4;
    }
L_088720B4:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088720BC;
L_088720BC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088720D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088720D4u) goto L_088720D4;
    return;
L_088720D4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088720E8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088720E8u) goto L_088720E8;
    return;
L_088720E8:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08872104u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872104u) goto L_08872104;
    return;
L_08872104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08872114u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08872114u) goto L_08872114;
    return;
L_08872114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0887212Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887212Cu) goto L_0887212C;
    return;
L_0887212C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088720BC;
    }
    goto L_0887213C;
L_0887213C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872160:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871FE0;
      }
      goto L_08872168;
    }
L_08872168:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871FCC;
      }
      goto L_08872170;
    }
L_08872170:
    if (ctx.gpr[9] != 0u) {
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
        goto L_08872188;
    }
    goto L_08872178;
L_08872178:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08872188;
L_08872188:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08871FCC;
L_08872194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08872420;
      }
      goto L_088721E8;
    }
L_088721E8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(30, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088721F4;
L_088721F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08872208u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872208u) goto L_08872208;
    return;
L_08872208:
    ctx.set_gpr(12, ctx.gpr[2] >> 31u);
    ctx.set_gpr(10, ctx.gpr[2] + ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[18] == 0u) {
    ctx.pc = 0x0887221Cu; rt.stop("Allegrex BREAK code 7 at 0x0887221C"); return;
        goto L_08872220;
    }
    goto L_08872220;
L_08872220:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, ctx.lo);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x0887223Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887223Cu) goto L_0887223C;
    return;
L_0887223C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 28u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? ctx.gpr[4] : ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(14, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088723F4;
      }
      goto L_08872258;
    }
L_08872258:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[14]);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[30] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08872268;
L_08872268:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08872380;
      }
      goto L_08872278;
    }
L_08872278:
    ctx.set_gpr(19, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08872280;
L_08872280:
    ctx.set_gpr(7, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0887229Cu);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887229Cu) goto L_0887229C;
    return;
L_0887229C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[25] >> 31u);
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08872358;
      }
      goto L_088722B4;
    }
L_088722B4:
    ctx.set_gpr(9, 0u - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[9] & 3u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0887230C;
      }
      goto L_088722C4;
    }
L_088722C4:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088722F0;
      }
      goto L_088722D0;
    }
L_088722D0:
    if (ctx.gpr[11] != 0u) {
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08872450;
    }
    goto L_088722D8;
L_088722D8:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, 0u - ctx.gpr[24]);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[24]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[24] : ctx.gpr[25]);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[16]) > static_cast<std::int32_t>(ctx.gpr[15]) ? ctx.gpr[16] : ctx.gpr[15]);
    goto L_088722F0;
L_088722F0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[3]) ? ctx.gpr[7] : ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[16]) > static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[16] : ctx.gpr[8]);
      if (branch_taken) {
          goto L_08872358;
      }
      goto L_0887230C;
    }
L_0887230C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(11, 0u - ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[16]) > static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[16] : ctx.gpr[9]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[3]) ? ctx.gpr[7] : ctx.gpr[3]);
    ctx.set_gpr(24, 0u - ctx.gpr[15]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[25]) > static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[25] : ctx.gpr[8]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) > static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[15] : ctx.gpr[24]);
    ctx.set_gpr(12, 0u - ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[13]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[13] : ctx.gpr[14]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[11]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[11] : ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[10]) ? ctx.gpr[9] : ctx.gpr[10]);
      if (branch_taken) {
          goto L_0887230C;
      }
      goto L_08872358;
    }
L_08872358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08872374u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872374u) goto L_08872374;
    return;
L_08872374:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08872280;
    }
    goto L_08872380;
L_08872380:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x088723A0u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088723A0u) goto L_088723A0;
    return;
L_088723A0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x088723D8u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088723D8u) goto L_088723D8;
    return;
L_088723D8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08872268;
      }
      goto L_088723F4;
    }
L_088723F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088721F4;
      }
      goto L_08872420;
    }
L_08872420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872450:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, 0u - ctx.gpr[13]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[13]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[13] : ctx.gpr[14]);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[16]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[16] : ctx.gpr[12]);
    goto L_088722D8;
L_08872500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08872550;
      }
      goto L_08872514;
    }
L_08872514:
    ctx.set_gpr(31, 0x0887251Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887251Cu) goto L_0887251C;
    return;
L_0887251C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08872550u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08872550u) goto L_08872550;
    return;
L_08872550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872568:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088726A0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088726F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08872710;
      }
      goto L_08872704;
    }
L_08872704:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08872708;
L_08872708:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872710:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26860)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08872720u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872720u) goto L_08872720;
    return;
L_08872720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08872708;
L_08872728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08872784;
      }
      goto L_0887274C;
    }
L_0887274C:
    ctx.set_gpr(10, 10922u << 16u);
    goto L_08872750;
L_08872750:
    ctx.set_gpr(9, ctx.gpr[10] | 43691u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.hi);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872784:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26856)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08872794u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872794u) goto L_08872794;
    return;
L_08872794:
    ctx.set_gpr(10, 10922u << 16u);
    goto L_08872750;
L_0887279C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26848)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088727B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088727B4u) goto L_088727B4;
    return;
L_088727B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088727C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088727E0;
      }
      goto L_088727D4;
    }
L_088727D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088727D8;
L_088727D8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088727E0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26852)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088727F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088727F0u) goto L_088727F0;
    return;
L_088727F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088727D8;
L_088727F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08872858;
      }
      goto L_0887281C;
    }
L_0887281C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_0887283C;
    }
    goto L_08872828;
L_08872828:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887283C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x0887284Cu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887284Cu) goto L_0887284C;
    return;
L_0887284C:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    goto L_08872828;
L_08872858:
    ctx.set_gpr(31, 0x08872860u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08872860u) goto L_08872860;
    return;
L_08872860:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08872870;
    }
    goto L_08872868;
L_08872868:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887281C;
L_08872870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08872884u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872884u) goto L_08872884;
    return;
L_08872884:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[5] : ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[9] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088729F4;
      }
      goto L_088728BC;
    }
L_088728BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08872970;
      }
      goto L_088728C4;
    }
L_088728C4:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_08872998;
      }
      goto L_088728D0;
    }
L_088728D0:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(25, ctx.gpr[12] << 8u);
    ctx.set_gpr(24, ctx.gpr[12] >> 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
      if (branch_taken) {
          goto L_0887296C;
      }
      goto L_088728FC;
    }
L_088728FC:
    ctx.set_gpr(14, ctx.gpr[9] << 1u);
    goto L_08872900;
L_08872900:
    ctx.set_gpr(5, ctx.gpr[14] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[14] + ctx.gpr[11]);
    goto L_08872908;
L_08872908:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[10] << 8u);
    ctx.set_gpr(7, ctx.gpr[10] >> 8u);
    ctx.set_gpr(11, ctx.gpr[7] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[3] << 8u);
    ctx.set_gpr(13, ctx.gpr[3] >> 8u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, ctx.gpr[2] << 8u);
    ctx.set_gpr(24, ctx.gpr[2] >> 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[10] << 8u);
    ctx.set_gpr(7, ctx.gpr[10] >> 8u);
    ctx.set_gpr(11, ctx.gpr[7] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08872908;
      }
      goto L_0887296C;
    }
L_0887296C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08872970;
L_08872970:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    goto L_0887281C;
L_08872998:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(14, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08872900;
      }
      goto L_088729A0;
    }
L_088729A0:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088728D0;
      }
      goto L_088729AC;
    }
L_088729AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_088729D0;
      }
      goto L_088729B4;
    }
L_088729B4:
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(15, ctx.gpr[25] >> 8u);
    ctx.set_gpr(10, ctx.gpr[15] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
    goto L_088729D0;
L_088729D0:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[6] << 8u);
    ctx.set_gpr(14, ctx.gpr[6] >> 8u);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    goto L_088728D0;
L_088729F4:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[13] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08872970;
      }
      goto L_08872A0C;
    }
L_08872A0C:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_08872B2C;
      }
      goto L_08872A1C;
    }
L_08872A1C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(14, ctx.gpr[3] << 8u);
    ctx.set_gpr(13, ctx.gpr[3] >> 8u);
    ctx.set_gpr(5, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[25] << 8u);
    ctx.set_gpr(24, ctx.gpr[25] >> 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
      if (branch_taken) {
          goto L_0887296C;
      }
      goto L_08872A60;
    }
L_08872A60:
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[10]);
    goto L_08872A6C;
L_08872A6C:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[11] << 8u);
    ctx.set_gpr(14, ctx.gpr[11] >> 8u);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[3] << 8u);
    ctx.set_gpr(25, ctx.gpr[3] >> 8u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[12]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(24, ctx.gpr[2] << 8u);
    ctx.set_gpr(15, ctx.gpr[2] >> 8u);
    ctx.set_gpr(11, ctx.gpr[15] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(14, ctx.gpr[7] << 8u);
    ctx.set_gpr(13, ctx.gpr[7] >> 8u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[25] << 8u);
    ctx.set_gpr(24, ctx.gpr[25] >> 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(7, ctx.gpr[3] >> 8u);
    ctx.set_gpr(14, ctx.gpr[7] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, ctx.gpr[2] << 8u);
    ctx.set_gpr(12, ctx.gpr[2] >> 8u);
    ctx.set_gpr(25, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(24, ctx.gpr[17] << 8u);
    ctx.set_gpr(15, ctx.gpr[17] >> 8u);
    ctx.set_gpr(11, ctx.gpr[15] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08872A6C;
      }
      goto L_08872B24;
    }
L_08872B24:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08872970;
L_08872B2C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872A60;
      }
      goto L_08872B34;
    }
L_08872B34:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872A1C;
      }
      goto L_08872B3C;
    }
L_08872B3C:
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08872B78;
    }
    goto L_08872B44;
L_08872B44:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[2] << 8u);
    ctx.set_gpr(12, ctx.gpr[2] >> 8u);
    ctx.set_gpr(5, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(25, ctx.gpr[3] >> 8u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08872B78;
L_08872B78:
    ctx.set_gpr(25, ctx.gpr[9] << 1u);
    ctx.set_gpr(4, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[3] << 8u);
    ctx.set_gpr(12, ctx.gpr[3] >> 8u);
    ctx.set_gpr(5, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(14, ctx.gpr[25] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[17] << 8u);
    ctx.set_gpr(15, ctx.gpr[17] >> 8u);
    ctx.set_gpr(7, ctx.gpr[15] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08872A1C;
L_08872BB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08872C14;
      }
      goto L_08872BD8;
    }
L_08872BD8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08872BF8;
    }
    goto L_08872BE4;
L_08872BE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872BF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08872C08u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872C08u) goto L_08872C08;
    return;
L_08872C08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08872BE4;
L_08872C14:
    ctx.set_gpr(31, 0x08872C1Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08872C1Cu) goto L_08872C1C;
    return;
L_08872C1C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08872C2C;
    }
    goto L_08872C24;
L_08872C24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08872BD8;
L_08872C2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08872C40u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872C40u) goto L_08872C40;
    return;
L_08872C40:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[5] : ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(12, ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08872D74;
      }
      goto L_08872C78;
    }
L_08872C78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08872D0C;
      }
      goto L_08872C80;
    }
L_08872C80:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08872D2C;
      }
      goto L_08872C90;
    }
L_08872C90:
    ctx.set_gpr(12, ctx.gpr[17] + ctx.gpr[10]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872D04;
      }
      goto L_08872CB0;
    }
L_08872CB0:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[17]);
    goto L_08872CB4;
L_08872CB4:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[15] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, ctx.gpr[12] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.gpr[5] << 8u);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[8] << 8u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08872CB4;
      }
      goto L_08872D04;
    }
L_08872D04:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08872D08;
L_08872D08:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    goto L_08872D0C;
L_08872D0C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(10, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    goto L_08872BD8;
L_08872D2C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872CB0;
      }
      goto L_08872D34;
    }
L_08872D34:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872C90;
      }
      goto L_08872D3C;
    }
L_08872D3C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08872D5C;
      }
      goto L_08872D44;
    }
L_08872D44:
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08872D5C;
L_08872D5C:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[15] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08872C90;
L_08872D74:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08872D08;
      }
      goto L_08872D8C;
    }
L_08872D8C:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08872E80;
      }
      goto L_08872D98;
    }
L_08872D98:
    ctx.set_gpr(5, ctx.gpr[10] << 1u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[8] << 8u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[13] << 8u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
      if (branch_taken) {
          goto L_08872D04;
      }
      goto L_08872DCC;
    }
L_08872DCC:
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[24] + ctx.gpr[12]);
    ctx.set_gpr(8, ctx.gpr[24] + ctx.gpr[6]);
    goto L_08872DD8;
L_08872DD8:
    ctx.set_gpr(4, ctx.gpr[10] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[24] << 1u);
    ctx.set_gpr(14, ctx.gpr[12] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(14, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[15] << 1u);
    ctx.set_gpr(15, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[11] << 1u);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[24] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[13] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08872DD8;
      }
      goto L_08872E78;
    }
L_08872E78:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08872D08;
L_08872E80:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872DCC;
      }
      goto L_08872E88;
    }
L_08872E88:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872D98;
      }
      goto L_08872E90;
    }
L_08872E90:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
      if (branch_taken) {
          goto L_08872EB8;
      }
      goto L_08872E98;
    }
L_08872E98:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
    goto L_08872EB8;
L_08872EB8:
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[12]);
    ctx.set_gpr(11, ctx.gpr[24] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[9] << 8u);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, ctx.gpr[13] << 8u);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08872D98;
L_08872EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(9796));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08872F04u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08872F04u) goto L_08872F04;
    return;
L_08872F04:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(9804));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872F34;
      }
      goto L_08872F1C;
    }
L_08872F1C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08872F20;
L_08872F20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872F34:
    ctx.set_gpr(31, 0x08872F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08872F3Cu) goto L_08872F3C;
    return;
L_08872F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08872F20;
      }
      goto L_08872F44;
    }
L_08872F44:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08872F20;
L_08873070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[2]) < 4096 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_088730DC;
      }
      goto L_088730C0;
    }
L_088730C0:
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_088730C4;
L_088730C4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088730C8;
L_088730C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088730DC:
    ctx.set_gpr(31, 0x088730E4u);
    // nop
    goto L_088731F4;
L_088730E4:
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
      if (branch_taken) {
          goto L_088730C4;
      }
      goto L_088730F0;
    }
L_088730F0:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088730C4;
      }
      goto L_088730FC;
    }
L_088730FC:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[5] >> 29u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[12]))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[15]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[12]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
      if (branch_taken) {
          goto L_088731B0;
      }
      goto L_088731A4;
    }
L_088731A4:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    goto L_088731A8;
L_088731A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_088730C8;
L_088731B0:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(ctx.gpr[13]));
    goto L_088731A8;
L_088731B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088731E4;
      }
      goto L_088731D0;
    }
L_088731D0:
    ctx.set_gpr(31, 0x088731D8u);
    // nop
    goto L_088727F8;
L_088731D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088731DC;
L_088731DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088731E4:
    ctx.set_gpr(31, 0x088731ECu);
    // nop
    goto L_08872BB4;
L_088731EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088731DC;
L_088731F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[22] << 16u);
    ctx.set_gpr(22, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[17] | ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[14] << 24u);
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, ctx.gpr[18] | ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    ctx.set_gpr(15, ctx.gpr[19] << 8u);
    ctx.set_gpr(19, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(25, ctx.gpr[16] | ctx.gpr[15]);
    ctx.set_gpr(13, ctx.gpr[11] << 16u);
    ctx.set_gpr(2, ctx.gpr[14] >> 24u);
    ctx.set_gpr(11, ctx.gpr[20] << 8u);
    ctx.set_gpr(21, ctx.gpr[14] << 8u);
    ctx.set_gpr(9, ctx.gpr[10] & 65280u);
    ctx.set_gpr(4, 255u << 16u);
    ctx.set_gpr(20, ctx.gpr[25] | ctx.gpr[13]);
    ctx.set_gpr(16, ctx.gpr[21] & ctx.gpr[4]);
    ctx.set_gpr(25, ctx.gpr[18] << 16u);
    ctx.set_gpr(21, ctx.gpr[17] | ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[2] | ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[12] << 24u);
    ctx.set_gpr(18, 19794u << 16u);
    ctx.set_gpr(2, ctx.gpr[13] | ctx.gpr[16]);
    ctx.set_gpr(12, ctx.gpr[19] << 24u);
    ctx.set_gpr(13, ctx.gpr[21] | ctx.gpr[25]);
    ctx.set_gpr(16, ctx.gpr[14] << 24u);
    ctx.set_gpr(10, ctx.gpr[20] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] | 20294u);
    ctx.set_gpr(25, ctx.gpr[2] | ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(11, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(24, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_088733C4;
      }
      goto L_088732EC;
    }
L_088732EC:
    ctx.set_gpr(6, 17990u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | 18753u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088733C8;
      }
      goto L_088732FC;
    }
L_088732FC:
    ctx.set_gpr(8, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, ctx.gpr[24] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, 17486u << 16u);
      if (branch_taken) {
          goto L_088733C0;
      }
      goto L_08873310;
    }
L_08873310:
    ctx.set_gpr(15, 19789u << 16u);
    ctx.set_gpr(10, 255u << 16u);
    ctx.set_gpr(11, ctx.gpr[3] | 21331u);
    ctx.set_gpr(13, ctx.gpr[15] | 20291u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16398));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    goto L_08873328;
L_08873328:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[3] << 16u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[25] << 24u);
    ctx.set_gpr(25, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 8u));
    ctx.set_gpr(7, ctx.gpr[6] << 8u);
    ctx.set_gpr(5, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] & 65280u);
    ctx.set_gpr(8, ctx.gpr[9] << 16u);
    ctx.set_gpr(2, ctx.gpr[25] << 8u);
    ctx.set_gpr(9, ctx.gpr[25] >> 24u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[15] << 24u);
    ctx.set_gpr(15, ctx.gpr[2] & ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[8] | ctx.gpr[15]);
    ctx.set_gpr(9, ctx.gpr[25] << 24u);
    ctx.set_gpr(15, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(25, ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[11];
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887350C;
      }
      goto L_088733A4;
    }
L_088733A4:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[13];
    ctx.set_gpr(4, ctx.gpr[25] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088733EC;
      }
      goto L_088733AC;
    }
L_088733AC:
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(24, ctx.gpr[24] + ctx.gpr[4]);
    goto L_088733B4;
L_088733B4:
    ctx.set_gpr(25, ctx.gpr[24] < ctx.gpr[12] ? 1u : 0u);
    goto L_088733B8;
L_088733B8:
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
        goto L_08873328;
    }
    goto L_088733C0;
L_088733C0:
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    goto L_088733C4;
L_088733C4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088733C8;
L_088733C8:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088733EC:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(25, ctx.gpr[24] < ctx.gpr[12] ? 1u : 0u);
        goto L_088733B8;
    }
    goto L_088733F4;
L_088733F4:
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[25]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_088733C4;
      }
      goto L_08873400;
    }
L_08873400:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[3] << 8u);
    ctx.set_gpr(9, ctx.gpr[25] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[9] << 8u);
    ctx.set_gpr(7, ctx.gpr[6] & 65280u);
    ctx.set_gpr(15, ctx.gpr[9] >> 8u);
    ctx.set_gpr(17, ctx.gpr[15] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[5] << 8u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[25] << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[9] << 24u);
    ctx.set_gpr(9, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] >> 24u);
    ctx.set_gpr(7, ctx.gpr[9] << 8u);
    ctx.set_gpr(2, ctx.gpr[25] & 65280u);
    ctx.set_gpr(25, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[9] << 24u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(25, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[9] << 8u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] << 8u);
    ctx.set_gpr(7, ctx.gpr[4] & 65280u);
    ctx.set_gpr(25, ctx.gpr[5] >> 8u);
    ctx.set_gpr(9, ctx.gpr[25] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] << 8u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] << 8u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[25]);
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(4, (ctx.gpr[6] >> 8u) & 0x000000FFu);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[7] << 8u);
    ctx.set_gpr(25, (ctx.gpr[7] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(25, ctx.gpr[22] - ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[25] & 31u)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088733B4;
      }
      goto L_08873504;
    }
L_08873504:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088733C8;
L_0887350C:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(25, ctx.gpr[24] < ctx.gpr[12] ? 1u : 0u);
      if (branch_taken) {
          goto L_088733B8;
      }
      goto L_08873514;
    }
L_08873514:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[6] << 8u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[15] << 16u);
    ctx.set_gpr(14, ctx.gpr[5] | ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[16] << 24u);
    ctx.set_gpr(15, ctx.gpr[14] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[15] >> 8u);
    ctx.set_gpr(2, ctx.gpr[4] & 65280u);
    ctx.set_gpr(25, ctx.gpr[15] >> 24u);
    ctx.set_gpr(6, ctx.gpr[15] << 8u);
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[6] & ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[9]);
    ctx.set_gpr(16, ctx.gpr[15] << 24u);
    ctx.set_gpr(14, ctx.gpr[8] | ctx.gpr[16]);
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[14]);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088733B4;
      }
      goto L_08873574;
    }
L_08873574:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088733C8;
L_0887357C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088735DC;
      }
      goto L_088735A0;
    }
L_088735A0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_088735C0;
    }
    goto L_088735AC;
L_088735AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x088735D0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088735D0u) goto L_088735D0;
    return;
L_088735D0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    goto L_088735AC;
L_088735DC:
    ctx.set_gpr(31, 0x088735E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x088735E4u) goto L_088735E4;
    return;
L_088735E4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_088735F4;
    }
    goto L_088735EC;
L_088735EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088735A0;
L_088735F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08873608u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873608u) goto L_08873608;
    return;
L_08873608:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[5] : ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[9] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08873778;
      }
      goto L_08873640;
    }
L_08873640:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_088736F4;
      }
      goto L_08873648;
    }
L_08873648:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_0887371C;
      }
      goto L_08873654;
    }
L_08873654:
    ctx.set_gpr(15, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[15] + ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[14] >> 8u);
    ctx.set_gpr(12, ctx.gpr[14] << 8u);
    ctx.set_gpr(25, ctx.gpr[12] | ctx.gpr[13]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
      if (branch_taken) {
          goto L_088736F0;
      }
      goto L_08873680;
    }
L_08873680:
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
    goto L_08873684;
L_08873684:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[11]);
    goto L_0887368C;
L_0887368C:
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[25] >> 8u);
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    ctx.set_gpr(24, ctx.gpr[6] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(17, ctx.gpr[3] >> 8u);
    ctx.set_gpr(7, ctx.gpr[3] << 8u);
    ctx.set_gpr(15, ctx.gpr[7] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, ctx.gpr[14] >> 8u);
    ctx.set_gpr(12, ctx.gpr[14] << 8u);
    ctx.set_gpr(25, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[10] >> 8u);
    ctx.set_gpr(24, ctx.gpr[10] << 8u);
    ctx.set_gpr(17, ctx.gpr[24] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[17]));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887368C;
      }
      goto L_088736F0;
    }
L_088736F0:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_088736F4;
L_088736F4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    goto L_088735A0;
L_0887371C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08873684;
      }
      goto L_08873724;
    }
L_08873724:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873654;
      }
      goto L_08873730;
    }
L_08873730:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08873754;
      }
      goto L_08873738;
    }
L_08873738:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[3] >> 8u);
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    ctx.set_gpr(10, ctx.gpr[25] | ctx.gpr[12]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
    goto L_08873754;
L_08873754:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[24] >> 8u);
    ctx.set_gpr(15, ctx.gpr[24] << 8u);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_08873654;
L_08873778:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[13] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088736F4;
      }
      goto L_08873790;
    }
L_08873790:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_088738B0;
      }
      goto L_088737A0;
    }
L_088737A0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[9] << 1u);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[11]);
    ctx.set_gpr(15, ctx.gpr[3] >> 8u);
    ctx.set_gpr(14, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[14] | ctx.gpr[15]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[13] + ctx.gpr[10]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, ctx.gpr[12] >> 8u);
    ctx.set_gpr(17, ctx.gpr[12] << 8u);
    ctx.set_gpr(24, ctx.gpr[17] | ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
      if (branch_taken) {
          goto L_088736F0;
      }
      goto L_088737E4;
    }
L_088737E4:
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[10]);
    goto L_088737F0;
L_088737F0:
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[17] >> 8u);
    ctx.set_gpr(11, ctx.gpr[17] << 8u);
    ctx.set_gpr(7, ctx.gpr[11] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[15] >> 8u);
    ctx.set_gpr(13, ctx.gpr[15] << 8u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, ctx.gpr[3] >> 8u);
    ctx.set_gpr(17, ctx.gpr[3] << 8u);
    ctx.set_gpr(24, ctx.gpr[17] | ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(7, ctx.gpr[11] >> 8u);
    ctx.set_gpr(15, ctx.gpr[11] << 8u);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, ctx.gpr[13] >> 8u);
    ctx.set_gpr(25, ctx.gpr[13] << 8u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[12]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(24, ctx.gpr[3] >> 8u);
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(7, ctx.gpr[11] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(14, ctx.gpr[15] >> 8u);
    ctx.set_gpr(13, ctx.gpr[15] << 8u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[25] >> 8u);
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(11, ctx.gpr[24] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088737F0;
      }
      goto L_088738A8;
    }
L_088738A8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_088736F4;
L_088738B0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088737E4;
      }
      goto L_088738B8;
    }
L_088738B8:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088737A0;
      }
      goto L_088738C0;
    }
L_088738C0:
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_088738FC;
    }
    goto L_088738C8;
L_088738C8:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[14] >> 8u);
    ctx.set_gpr(12, ctx.gpr[14] << 8u);
    ctx.set_gpr(5, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] >> 8u);
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088738FC;
L_088738FC:
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(14, ctx.gpr[3] >> 8u);
    ctx.set_gpr(13, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[25] >> 8u);
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    goto L_088737A0;
L_08873938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08873998;
      }
      goto L_0887395C;
    }
L_0887395C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_0887397C;
    }
    goto L_08873968;
L_08873968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887397C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x0887398Cu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887398Cu) goto L_0887398C;
    return;
L_0887398C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08873968;
L_08873998:
    ctx.set_gpr(31, 0x088739A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x088739A0u) goto L_088739A0;
    return;
L_088739A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_088739B0;
    }
    goto L_088739A8;
L_088739A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887395C;
L_088739B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088739C4u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088739C4u) goto L_088739C4;
    return;
L_088739C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[5] : ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(12, ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08873AF8;
      }
      goto L_088739FC;
    }
L_088739FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08873A90;
      }
      goto L_08873A04;
    }
L_08873A04:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08873AB0;
      }
      goto L_08873A14;
    }
L_08873A14:
    ctx.set_gpr(12, ctx.gpr[17] + ctx.gpr[10]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08873A88;
      }
      goto L_08873A34;
    }
L_08873A34:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[17]);
    goto L_08873A38;
L_08873A38:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[15] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, ctx.gpr[12] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.gpr[5] << 8u);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[8] << 8u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08873A38;
      }
      goto L_08873A88;
    }
L_08873A88:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08873A8C;
L_08873A8C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    goto L_08873A90;
L_08873A90:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(10, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    goto L_0887395C;
L_08873AB0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873A34;
      }
      goto L_08873AB8;
    }
L_08873AB8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873A14;
      }
      goto L_08873AC0;
    }
L_08873AC0:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08873AE0;
      }
      goto L_08873AC8;
    }
L_08873AC8:
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08873AE0;
L_08873AE0:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[15] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08873A14;
L_08873AF8:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08873A8C;
      }
      goto L_08873B10;
    }
L_08873B10:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08873C04;
      }
      goto L_08873B1C;
    }
L_08873B1C:
    ctx.set_gpr(5, ctx.gpr[10] << 1u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[8] << 8u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[13] << 8u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
      if (branch_taken) {
          goto L_08873A88;
      }
      goto L_08873B50;
    }
L_08873B50:
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[24] + ctx.gpr[12]);
    ctx.set_gpr(8, ctx.gpr[24] + ctx.gpr[6]);
    goto L_08873B5C;
L_08873B5C:
    ctx.set_gpr(4, ctx.gpr[10] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[24] << 1u);
    ctx.set_gpr(14, ctx.gpr[12] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(14, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[15] << 1u);
    ctx.set_gpr(15, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[11] << 1u);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[24] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[13] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08873B5C;
      }
      goto L_08873BFC;
    }
L_08873BFC:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08873A8C;
L_08873C04:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873B50;
      }
      goto L_08873C0C;
    }
L_08873C0C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873B1C;
      }
      goto L_08873C14;
    }
L_08873C14:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
      if (branch_taken) {
          goto L_08873C3C;
      }
      goto L_08873C1C;
    }
L_08873C1C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
    goto L_08873C3C;
L_08873C3C:
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[12]);
    ctx.set_gpr(11, ctx.gpr[24] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[9] << 8u);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, ctx.gpr[13] << 8u);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08873B1C;
L_08873C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08873CC8;
      }
      goto L_08873C8C;
    }
L_08873C8C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_08873CAC;
    }
    goto L_08873C98;
L_08873C98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873CAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08873CBCu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873CBCu) goto L_08873CBC;
    return;
L_08873CBC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08873C98;
L_08873CC8:
    ctx.set_gpr(31, 0x08873CD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08873CD0u) goto L_08873CD0;
    return;
L_08873CD0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08873CE0;
    }
    goto L_08873CD8;
L_08873CD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08873C8C;
L_08873CE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08873CF4u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873CF4u) goto L_08873CF4;
    return;
L_08873CF4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[5] : ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(13, ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08873E68;
      }
      goto L_08873D2C;
    }
L_08873D2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08873DEC;
      }
      goto L_08873D34;
    }
L_08873D34:
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-132));
    ctx.set_gpr(4, ctx.gpr[13] + 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(5, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_08873E10;
      }
      goto L_08873D4C;
    }
L_08873D4C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[10]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[24] << 1u);
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08873DE8;
      }
      goto L_08873D74;
    }
L_08873D74:
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[17]);
    goto L_08873D78;
L_08873D78:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[24] << 1u);
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(13, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[9] << 1u);
    ctx.set_gpr(14, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(24, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[24] + ctx.gpr[7]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[9] << 1u);
    ctx.set_gpr(14, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
      if (branch_taken) {
          goto L_08873D78;
      }
      goto L_08873DE8;
    }
L_08873DE8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08873DEC;
L_08873DEC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(10, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    goto L_08873C8C;
L_08873E10:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873D74;
      }
      goto L_08873E18;
    }
L_08873E18:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873D4C;
      }
      goto L_08873E20;
    }
L_08873E20:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08873E48;
      }
      goto L_08873E28;
    }
L_08873E28:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[12] << 1u);
    ctx.set_gpr(6, ctx.gpr[24] + ctx.gpr[7]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08873E48;
L_08873E48:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(14, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08873D4C;
L_08873E68:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[14] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(14, ctx.gpr[9] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08873DEC;
      }
      goto L_08873E80;
    }
L_08873E80:
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(-132));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_08873FCC;
      }
      goto L_08873E94;
    }
L_08873E94:
    ctx.set_gpr(3, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[3] + ctx.gpr[13]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[12] << 1u);
    ctx.set_gpr(4, ctx.gpr[24] + ctx.gpr[11]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[14]);
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[6] << 1u);
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08873DE8;
      }
      goto L_08873ED8;
    }
L_08873ED8:
    ctx.set_gpr(15, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[15] + ctx.gpr[13]);
    ctx.set_gpr(7, ctx.gpr[15] + ctx.gpr[14]);
    goto L_08873EE4;
L_08873EE4:
    ctx.set_gpr(5, ctx.gpr[10] << 1u);
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[2] << 1u);
    ctx.set_gpr(25, ctx.gpr[14] << 1u);
    ctx.set_gpr(12, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[15] << 1u);
    ctx.set_gpr(15, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(25, ctx.gpr[14] << 1u);
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[14] << 1u);
    ctx.set_gpr(3, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[25] << 1u);
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, ctx.gpr[12] << 1u);
    ctx.set_gpr(25, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[14] << 1u);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[11]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[5] << 1u);
    ctx.set_gpr(6, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[14]));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08873EE4;
      }
      goto L_08873FC4;
    }
L_08873FC4:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08873DEC;
L_08873FCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873ED8;
      }
      goto L_08873FD4;
    }
L_08873FD4:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873E94;
      }
      goto L_08873FDC;
    }
L_08873FDC:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(2, ctx.gpr[10] << 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 2u, 0x08874014u>(ctx, &aot_mem); return;
      }
      goto L_08873FE4;
    }
L_08873FE4:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.pc = 0x08874000u; return;
}

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x08870000u, 16384u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870024u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870030u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870038u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870040u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887005Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870064u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887006Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870084u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870094u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870108u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870124u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870138u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870140u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870150u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887015Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870164u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887016Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870184u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870194u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870230u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870238u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870240u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887025Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870264u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887026Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870288u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870310u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870318u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887032Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870334u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887033Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870350u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887036Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870378u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870380u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870388u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887041Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870424u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887042Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870434u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887043Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870450u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887046Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870480u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870488u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870498u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887051Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870524u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887052Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870534u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887053Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887056Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870578u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870580u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870588u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870598u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887061Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870624u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887062Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870634u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887063Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887066Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870698u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887071Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870724u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887072Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870734u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887073Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887076Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870780u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870798u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887081Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887082Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887083Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887086Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870898u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887091Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870924u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887092Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870934u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887093Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870950u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870960u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870974u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887097Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870984u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871004u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871020u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887102Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871034u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887103Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887104Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871058u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871060u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871080u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871084u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871090u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871120u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887112Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871134u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887113Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887114Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871158u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871160u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871180u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871184u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871190u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887120Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871214u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871228u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871244u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871270u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887127Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887128Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871314u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887131Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871324u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871330u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887133Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871350u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871360u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887136Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871378u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887138Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871394u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871408u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871410u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887141Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871424u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871444u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871450u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871454u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871464u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887146Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871480u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887149Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871500u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887150Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871520u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871528u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871534u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871538u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871540u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887154Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871558u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871570u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887157Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871588u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871590u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887159Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871614u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887161Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871628u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887162Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871634u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871640u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871654u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871660u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871670u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887167Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887168Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887170Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871720u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871724u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871734u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871748u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871754u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887175Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871780u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887179Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871804u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871810u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871814u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887181Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871840u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887184Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871858u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887186Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887187Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887188Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887189Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871904u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871910u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887192Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871934u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871944u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887194Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887195Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871964u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871974u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887197Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871988u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887200Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887201Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872024u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887203Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887206Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887207Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872094u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872114u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887212Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887213Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872160u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872178u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872194u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872220u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887223Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872280u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887229Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887230Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872358u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872380u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872420u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872450u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872500u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887251Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872568u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872704u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872710u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872720u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872728u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887274Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872794u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887279Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887281Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887283Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887284Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872858u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872860u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872868u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872870u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872884u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872900u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887296Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873310u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873328u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873504u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887350Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887357Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873608u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873640u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873654u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873684u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887368Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887371Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873724u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873730u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873754u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873790u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887395Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887397Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887398Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FE4u, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
