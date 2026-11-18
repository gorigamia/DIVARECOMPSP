#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0187[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 21, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 49, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 85, 86, 0, 87, 0,
    88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 96, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105,
    0, 0, 106, 0, 107, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126,
    0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138,
    0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 143, 0, 0, 144, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0,
    183, 0, 184, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 202, 0, 203, 0, 204, 0, 205, 206, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0,
    0, 217, 0, 218, 0, 0, 219, 220, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245,
    0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 257, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0,
    0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0,
    0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 296, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 302, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0,
    0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 321, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0,
    0, 343, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0,
    352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 360, 361, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373,
    0, 0, 0, 0, 0, 374, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0,
    0, 0, 388, 0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 0, 0, 397, 398, 399, 0, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 433,
    0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 438, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 442, 0, 0, 443, 0, 444, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 449, 450, 0, 451, 0, 452, 0, 453, 454,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476,
    0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 483, 484, 0, 0, 485, 0, 486, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0,
    0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 511, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 512, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0,
    0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0,
    540, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 550, 551, 0, 0, 552,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0,
    0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563,
    0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0, 581, 582, 0, 0, 0, 0, 583, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 0,
    0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604,
    0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0,
    0, 616, 0, 0, 0, 617, 0, 0, 618, 619, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 630, 631, 632, 0, 0, 0, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0,
    0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 652, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0,
    0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0,
    668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 674, 675, 0, 0, 0, 676, 0, 677,
    0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 680, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685,
    686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0,
    0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 713, 0,
    0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0,
    0, 724, 0, 725, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 0,
    0, 734, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 742, 743, 0, 0, 0,
    0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 749,
    0, 750, 0, 0, 751, 752, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0,
    764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771, 772, 0, 0, 773, 774, 0, 0, 0, 0,
    0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 778, 779, 0, 780, 0, 0, 0, 0, 0,
    0, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 788, 0,
    0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 805, 806, 0, 807,
    0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 0, 0, 812, 0, 813, 0, 814, 815, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0,
    0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 832, 0, 833, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 836, 0, 0, 0, 837, 838, 839, 0, 0, 0, 0, 840, 0, 841, 0, 0,
    0, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 845, 846, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 849, 850, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0,
    853, 0, 854, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0,
    0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 868, 0, 869, 0, 0,
    0, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 878, 0, 879,
    0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 882, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0,
    0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 0, 893, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 894, 895, 0, 0, 0, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0,
    0, 0, 902, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 909, 0, 0, 0, 0, 0,
    0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 912, 0, 913, 0, 0, 914, 0, 0, 0, 0, 915, 0, 916, 0, 917, 0,
    0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 0, 924, 0,
    925, 0, 926, 0, 0, 0, 0, 927, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0,
    935, 0, 0, 936, 0, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 940, 0, 0, 0, 0, 941, 0, 942, 0, 943, 0, 0, 944, 0, 0, 0, 0,
    945, 0, 0, 946, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 0, 949, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0,
    951, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 955, 0, 0, 0, 956, 0, 957, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 962, 0, 963, 0, 0, 0, 0, 0, 964, 0, 965, 0,
    966, 0, 0, 967, 0, 968, 0, 969, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    973, 0, 974, 0, 975, 976, 0, 977, 0, 978, 0, 0, 979, 0, 0, 0, 0, 0, 980, 0, 981, 0, 982, 0, 0, 983, 0, 0, 0, 0, 0, 984,
};
void recomp_unit_0187_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0187[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF0000;
    case 2u: goto L_08AF000C;
    case 3u: goto L_08AF0018;
    case 4u: goto L_08AF0024;
    case 5u: goto L_08AF0030;
    case 6u: goto L_08AF005C;
    case 7u: goto L_08AF0088;
    case 8u: goto L_08AF0098;
    case 9u: goto L_08AF00AC;
    case 10u: goto L_08AF00B8;
    case 11u: goto L_08AF00CC;
    case 12u: goto L_08AF0140;
    case 13u: goto L_08AF0158;
    case 14u: goto L_08AF0170;
    case 15u: goto L_08AF0188;
    case 16u: goto L_08AF01A8;
    case 17u: goto L_08AF01B4;
    case 18u: goto L_08AF01B8;
    case 19u: goto L_08AF01D8;
    case 20u: goto L_08AF01E4;
    case 21u: goto L_08AF01E8;
    case 22u: goto L_08AF01FC;
    case 23u: goto L_08AF0210;
    case 24u: goto L_08AF021C;
    case 25u: goto L_08AF022C;
    case 26u: goto L_08AF023C;
    case 27u: goto L_08AF0248;
    case 28u: goto L_08AF0254;
    case 29u: goto L_08AF0260;
    case 30u: goto L_08AF0274;
    case 31u: goto L_08AF027C;
    case 32u: goto L_08AF029C;
    case 33u: goto L_08AF02BC;
    case 34u: goto L_08AF02C8;
    case 35u: goto L_08AF02D8;
    case 36u: goto L_08AF02E0;
    case 37u: goto L_08AF02F8;
    case 38u: goto L_08AF0310;
    case 39u: goto L_08AF0314;
    case 40u: goto L_08AF032C;
    case 41u: goto L_08AF0344;
    case 42u: goto L_08AF034C;
    case 43u: goto L_08AF037C;
    case 44u: goto L_08AF0398;
    case 45u: goto L_08AF03A0;
    case 46u: goto L_08AF03A8;
    case 47u: goto L_08AF03B4;
    case 48u: goto L_08AF03BC;
    case 49u: goto L_08AF03C4;
    case 50u: goto L_08AF03C8;
    case 51u: goto L_08AF03D4;
    case 52u: goto L_08AF0410;
    case 53u: goto L_08AF0418;
    case 54u: goto L_08AF0434;
    case 55u: goto L_08AF043C;
    case 56u: goto L_08AF0440;
    case 57u: goto L_08AF0448;
    case 58u: goto L_08AF0458;
    case 59u: goto L_08AF0474;
    case 60u: goto L_08AF0480;
    case 61u: goto L_08AF0488;
    case 62u: goto L_08AF0490;
    case 63u: goto L_08AF04C8;
    case 64u: goto L_08AF04D0;
    case 65u: goto L_08AF04DC;
    case 66u: goto L_08AF04E4;
    case 67u: goto L_08AF04F0;
    case 68u: goto L_08AF04F8;
    case 69u: goto L_08AF0504;
    case 70u: goto L_08AF0528;
    case 71u: goto L_08AF0534;
    case 72u: goto L_08AF053C;
    case 73u: goto L_08AF0544;
    case 74u: goto L_08AF054C;
    case 75u: goto L_08AF0554;
    case 76u: goto L_08AF057C;
    case 77u: goto L_08AF0590;
    case 78u: goto L_08AF0598;
    case 79u: goto L_08AF05B4;
    case 80u: goto L_08AF05C0;
    case 81u: goto L_08AF05C8;
    case 82u: goto L_08AF05D0;
    case 83u: goto L_08AF05D8;
    case 84u: goto L_08AF05E4;
    case 85u: goto L_08AF05EC;
    case 86u: goto L_08AF05F0;
    case 87u: goto L_08AF05F8;
    case 88u: goto L_08AF0600;
    case 89u: goto L_08AF0608;
    case 90u: goto L_08AF061C;
    case 91u: goto L_08AF0624;
    case 92u: goto L_08AF0630;
    case 93u: goto L_08AF0638;
    case 94u: goto L_08AF0644;
    case 95u: goto L_08AF064C;
    case 96u: goto L_08AF0654;
    case 97u: goto L_08AF0658;
    case 98u: goto L_08AF066C;
    case 99u: goto L_08AF068C;
    case 100u: goto L_08AF0694;
    case 101u: goto L_08AF06A4;
    case 102u: goto L_08AF06C0;
    case 103u: goto L_08AF06D8;
    case 104u: goto L_08AF06F4;
    case 105u: goto L_08AF06FC;
    case 106u: goto L_08AF0708;
    case 107u: goto L_08AF0710;
    case 108u: goto L_08AF0714;
    case 109u: goto L_08AF0728;
    case 110u: goto L_08AF0754;
    case 111u: goto L_08AF075C;
    case 112u: goto L_08AF0764;
    case 113u: goto L_08AF0788;
    case 114u: goto L_08AF0790;
    case 115u: goto L_08AF07A0;
    case 116u: goto L_08AF07A8;
    case 117u: goto L_08AF07AC;
    case 118u: goto L_08AF07C4;
    case 119u: goto L_08AF07F8;
    case 120u: goto L_08AF0800;
    case 121u: goto L_08AF0808;
    case 122u: goto L_08AF0818;
    case 123u: goto L_08AF082C;
    case 124u: goto L_08AF0844;
    case 125u: goto L_08AF0874;
    case 126u: goto L_08AF087C;
    case 127u: goto L_08AF0884;
    case 128u: goto L_08AF0898;
    case 129u: goto L_08AF08A0;
    case 130u: goto L_08AF08E4;
    case 131u: goto L_08AF08EC;
    case 132u: goto L_08AF0914;
    case 133u: goto L_08AF0924;
    case 134u: goto L_08AF0928;
    case 135u: goto L_08AF0944;
    case 136u: goto L_08AF0968;
    case 137u: goto L_08AF0974;
    case 138u: goto L_08AF097C;
    case 139u: goto L_08AF098C;
    case 140u: goto L_08AF0998;
    case 141u: goto L_08AF09A0;
    case 142u: goto L_08AF09B0;
    case 143u: goto L_08AF09B4;
    case 144u: goto L_08AF09C0;
    case 145u: goto L_08AF09C4;
    case 146u: goto L_08AF09D4;
    case 147u: goto L_08AF09FC;
    case 148u: goto L_08AF0A0C;
    case 149u: goto L_08AF0A18;
    case 150u: goto L_08AF0A20;
    case 151u: goto L_08AF0A2C;
    case 152u: goto L_08AF0A34;
    case 153u: goto L_08AF0A40;
    case 154u: goto L_08AF0A44;
    case 155u: goto L_08AF0A50;
    case 156u: goto L_08AF0A6C;
    case 157u: goto L_08AF0AA4;
    case 158u: goto L_08AF0AAC;
    case 159u: goto L_08AF0AC8;
    case 160u: goto L_08AF0AD4;
    case 161u: goto L_08AF0ADC;
    case 162u: goto L_08AF0AE4;
    case 163u: goto L_08AF0AEC;
    case 164u: goto L_08AF0AFC;
    case 165u: goto L_08AF0B20;
    case 166u: goto L_08AF0B28;
    case 167u: goto L_08AF0B30;
    case 168u: goto L_08AF0B48;
    case 169u: goto L_08AF0B58;
    case 170u: goto L_08AF0B6C;
    case 171u: goto L_08AF0B78;
    case 172u: goto L_08AF0B80;
    case 173u: goto L_08AF0B98;
    case 174u: goto L_08AF0BA8;
    case 175u: goto L_08AF0BC8;
    case 176u: goto L_08AF0BCC;
    case 177u: goto L_08AF0BF0;
    case 178u: goto L_08AF0C20;
    case 179u: goto L_08AF0C54;
    case 180u: goto L_08AF0C5C;
    case 181u: goto L_08AF0C6C;
    case 182u: goto L_08AF0C78;
    case 183u: goto L_08AF0C80;
    case 184u: goto L_08AF0C88;
    case 185u: goto L_08AF0C8C;
    case 186u: goto L_08AF0C94;
    case 187u: goto L_08AF0C9C;
    case 188u: goto L_08AF0CB4;
    case 189u: goto L_08AF0CC4;
    case 190u: goto L_08AF0CE0;
    case 191u: goto L_08AF0D00;
    case 192u: goto L_08AF0D30;
    case 193u: goto L_08AF0D48;
    case 194u: goto L_08AF0D54;
    case 195u: goto L_08AF0D5C;
    case 196u: goto L_08AF0D60;
    case 197u: goto L_08AF0D70;
    case 198u: goto L_08AF0D90;
    case 199u: goto L_08AF0D98;
    case 200u: goto L_08AF0DA0;
    case 201u: goto L_08AF0DB0;
    case 202u: goto L_08AF0DB4;
    case 203u: goto L_08AF0DBC;
    case 204u: goto L_08AF0DC4;
    case 205u: goto L_08AF0DCC;
    case 206u: goto L_08AF0DD0;
    case 207u: goto L_08AF0DD4;
    case 208u: goto L_08AF0DE8;
    case 209u: goto L_08AF0E00;
    case 210u: goto L_08AF0E0C;
    case 211u: goto L_08AF0E1C;
    case 212u: goto L_08AF0E34;
    case 213u: goto L_08AF0E4C;
    case 214u: goto L_08AF0E64;
    case 215u: goto L_08AF0E70;
    case 216u: goto L_08AF0E78;
    case 217u: goto L_08AF0E84;
    case 218u: goto L_08AF0E8C;
    case 219u: goto L_08AF0E98;
    case 220u: goto L_08AF0E9C;
    case 221u: goto L_08AF0EA4;
    case 222u: goto L_08AF0EB4;
    case 223u: goto L_08AF0EC0;
    case 224u: goto L_08AF0EC8;
    case 225u: goto L_08AF0ECC;
    case 226u: goto L_08AF0ED4;
    case 227u: goto L_08AF0EE8;
    case 228u: goto L_08AF0EF8;
    case 229u: goto L_08AF0F04;
    case 230u: goto L_08AF0F0C;
    case 231u: goto L_08AF0F14;
    case 232u: goto L_08AF0F1C;
    case 233u: goto L_08AF0F24;
    case 234u: goto L_08AF0F28;
    case 235u: goto L_08AF0F30;
    case 236u: goto L_08AF0F84;
    case 237u: goto L_08AF0F88;
    case 238u: goto L_08AF0FA0;
    case 239u: goto L_08AF0FB0;
    case 240u: goto L_08AF0FBC;
    case 241u: goto L_08AF0FC8;
    case 242u: goto L_08AF0FD0;
    case 243u: goto L_08AF0FD8;
    case 244u: goto L_08AF0FF0;
    case 245u: goto L_08AF0FFC;
    case 246u: goto L_08AF1004;
    case 247u: goto L_08AF100C;
    case 248u: goto L_08AF1014;
    case 249u: goto L_08AF1020;
    case 250u: goto L_08AF1030;
    case 251u: goto L_08AF103C;
    case 252u: goto L_08AF1044;
    case 253u: goto L_08AF104C;
    case 254u: goto L_08AF1058;
    case 255u: goto L_08AF1068;
    case 256u: goto L_08AF1070;
    case 257u: goto L_08AF1074;
    case 258u: goto L_08AF107C;
    case 259u: goto L_08AF10A8;
    case 260u: goto L_08AF10BC;
    case 261u: goto L_08AF10DC;
    case 262u: goto L_08AF10F0;
    case 263u: goto L_08AF1104;
    case 264u: goto L_08AF1118;
    case 265u: goto L_08AF112C;
    case 266u: goto L_08AF1140;
    case 267u: goto L_08AF114C;
    case 268u: goto L_08AF1154;
    case 269u: goto L_08AF1160;
    case 270u: goto L_08AF1168;
    case 271u: goto L_08AF1170;
    case 272u: goto L_08AF1178;
    case 273u: goto L_08AF1184;
    case 274u: goto L_08AF1194;
    case 275u: goto L_08AF11A0;
    case 276u: goto L_08AF11A8;
    case 277u: goto L_08AF11B0;
    case 278u: goto L_08AF11BC;
    case 279u: goto L_08AF11D4;
    case 280u: goto L_08AF11D8;
    case 281u: goto L_08AF11F4;
    case 282u: goto L_08AF1200;
    case 283u: goto L_08AF1208;
    case 284u: goto L_08AF1238;
    case 285u: goto L_08AF1244;
    case 286u: goto L_08AF124C;
    case 287u: goto L_08AF1254;
    case 288u: goto L_08AF125C;
    case 289u: goto L_08AF1268;
    case 290u: goto L_08AF1278;
    case 291u: goto L_08AF1284;
    case 292u: goto L_08AF128C;
    case 293u: goto L_08AF1294;
    case 294u: goto L_08AF12A0;
    case 295u: goto L_08AF12B8;
    case 296u: goto L_08AF12BC;
    case 297u: goto L_08AF12D0;
    case 298u: goto L_08AF12D4;
    case 299u: goto L_08AF1300;
    case 300u: goto L_08AF1308;
    case 301u: goto L_08AF135C;
    case 302u: goto L_08AF1360;
    case 303u: goto L_08AF1378;
    case 304u: goto L_08AF1388;
    case 305u: goto L_08AF1394;
    case 306u: goto L_08AF13A0;
    case 307u: goto L_08AF13A8;
    case 308u: goto L_08AF13B0;
    case 309u: goto L_08AF13C8;
    case 310u: goto L_08AF13D4;
    case 311u: goto L_08AF13DC;
    case 312u: goto L_08AF13E4;
    case 313u: goto L_08AF13EC;
    case 314u: goto L_08AF13F8;
    case 315u: goto L_08AF1408;
    case 316u: goto L_08AF1414;
    case 317u: goto L_08AF141C;
    case 318u: goto L_08AF1424;
    case 319u: goto L_08AF1430;
    case 320u: goto L_08AF1440;
    case 321u: goto L_08AF1448;
    case 322u: goto L_08AF144C;
    case 323u: goto L_08AF1454;
    case 324u: goto L_08AF1470;
    case 325u: goto L_08AF1484;
    case 326u: goto L_08AF14A4;
    case 327u: goto L_08AF14B8;
    case 328u: goto L_08AF14CC;
    case 329u: goto L_08AF14E0;
    case 330u: goto L_08AF14F4;
    case 331u: goto L_08AF1508;
    case 332u: goto L_08AF1514;
    case 333u: goto L_08AF151C;
    case 334u: goto L_08AF1528;
    case 335u: goto L_08AF1530;
    case 336u: goto L_08AF1538;
    case 337u: goto L_08AF1540;
    case 338u: goto L_08AF154C;
    case 339u: goto L_08AF155C;
    case 340u: goto L_08AF1568;
    case 341u: goto L_08AF1570;
    case 342u: goto L_08AF1578;
    case 343u: goto L_08AF1584;
    case 344u: goto L_08AF159C;
    case 345u: goto L_08AF15A0;
    case 346u: goto L_08AF15BC;
    case 347u: goto L_08AF15C8;
    case 348u: goto L_08AF15DC;
    case 349u: goto L_08AF15E8;
    case 350u: goto L_08AF15F0;
    case 351u: goto L_08AF15F8;
    case 352u: goto L_08AF1600;
    case 353u: goto L_08AF160C;
    case 354u: goto L_08AF161C;
    case 355u: goto L_08AF1628;
    case 356u: goto L_08AF1630;
    case 357u: goto L_08AF1638;
    case 358u: goto L_08AF1644;
    case 359u: goto L_08AF1654;
    case 360u: goto L_08AF165C;
    case 361u: goto L_08AF1660;
    case 362u: goto L_08AF1668;
    case 363u: goto L_08AF1694;
    case 364u: goto L_08AF16A0;
    case 365u: goto L_08AF16A8;
    case 366u: goto L_08AF16B0;
    case 367u: goto L_08AF16B8;
    case 368u: goto L_08AF16C4;
    case 369u: goto L_08AF16D4;
    case 370u: goto L_08AF16E0;
    case 371u: goto L_08AF16E8;
    case 372u: goto L_08AF16F0;
    case 373u: goto L_08AF16FC;
    case 374u: goto L_08AF1714;
    case 375u: goto L_08AF1718;
    case 376u: goto L_08AF172C;
    case 377u: goto L_08AF1730;
    case 378u: goto L_08AF175C;
    case 379u: goto L_08AF1784;
    case 380u: goto L_08AF1790;
    case 381u: goto L_08AF1798;
    case 382u: goto L_08AF17C8;
    case 383u: goto L_08AF17D4;
    case 384u: goto L_08AF17DC;
    case 385u: goto L_08AF17E4;
    case 386u: goto L_08AF17EC;
    case 387u: goto L_08AF17F8;
    case 388u: goto L_08AF1808;
    case 389u: goto L_08AF1814;
    case 390u: goto L_08AF181C;
    case 391u: goto L_08AF1824;
    case 392u: goto L_08AF1830;
    case 393u: goto L_08AF1840;
    case 394u: goto L_08AF1848;
    case 395u: goto L_08AF1850;
    case 396u: goto L_08AF185C;
    case 397u: goto L_08AF186C;
    case 398u: goto L_08AF1870;
    case 399u: goto L_08AF1874;
    case 400u: goto L_08AF1894;
    case 401u: goto L_08AF18A4;
    case 402u: goto L_08AF18AC;
    case 403u: goto L_08AF18B4;
    case 404u: goto L_08AF18C8;
    case 405u: goto L_08AF18DC;
    case 406u: goto L_08AF190C;
    case 407u: goto L_08AF1918;
    case 408u: goto L_08AF1920;
    case 409u: goto L_08AF1928;
    case 410u: goto L_08AF193C;
    case 411u: goto L_08AF1950;
    case 412u: goto L_08AF1970;
    case 413u: goto L_08AF1980;
    case 414u: goto L_08AF1998;
    case 415u: goto L_08AF199C;
    case 416u: goto L_08AF19BC;
    case 417u: goto L_08AF19EC;
    case 418u: goto L_08AF1A08;
    case 419u: goto L_08AF1A1C;
    case 420u: goto L_08AF1A24;
    case 421u: goto L_08AF1A34;
    case 422u: goto L_08AF1A40;
    case 423u: goto L_08AF1A48;
    case 424u: goto L_08AF1A80;
    case 425u: goto L_08AF1A84;
    case 426u: goto L_08AF1A94;
    case 427u: goto L_08AF1ABC;
    case 428u: goto L_08AF1AC8;
    case 429u: goto L_08AF1AD0;
    case 430u: goto L_08AF1AD8;
    case 431u: goto L_08AF1AE4;
    case 432u: goto L_08AF1AEC;
    case 433u: goto L_08AF1AFC;
    case 434u: goto L_08AF1B08;
    case 435u: goto L_08AF1B10;
    case 436u: goto L_08AF1B20;
    case 437u: goto L_08AF1B28;
    case 438u: goto L_08AF1B34;
    case 439u: goto L_08AF1B38;
    case 440u: goto L_08AF1B48;
    case 441u: goto L_08AF1B6C;
    case 442u: goto L_08AF1B84;
    case 443u: goto L_08AF1B90;
    case 444u: goto L_08AF1B98;
    case 445u: goto L_08AF1B9C;
    case 446u: goto L_08AF1BAC;
    case 447u: goto L_08AF1BCC;
    case 448u: goto L_08AF1BD4;
    case 449u: goto L_08AF1BDC;
    case 450u: goto L_08AF1BE0;
    case 451u: goto L_08AF1BE8;
    case 452u: goto L_08AF1BF0;
    case 453u: goto L_08AF1BF8;
    case 454u: goto L_08AF1BFC;
    case 455u: goto L_08AF1C18;
    case 456u: goto L_08AF1C38;
    case 457u: goto L_08AF1C44;
    case 458u: goto L_08AF1C54;
    case 459u: goto L_08AF1C9C;
    case 460u: goto L_08AF1CA4;
    case 461u: goto L_08AF1CB0;
    case 462u: goto L_08AF1CB8;
    case 463u: goto L_08AF1CC8;
    case 464u: goto L_08AF1CD4;
    case 465u: goto L_08AF1CDC;
    case 466u: goto L_08AF1CEC;
    case 467u: goto L_08AF1D0C;
    case 468u: goto L_08AF1D14;
    case 469u: goto L_08AF1D1C;
    case 470u: goto L_08AF1D24;
    case 471u: goto L_08AF1D38;
    case 472u: goto L_08AF1D40;
    case 473u: goto L_08AF1D48;
    case 474u: goto L_08AF1D54;
    case 475u: goto L_08AF1D68;
    case 476u: goto L_08AF1D7C;
    case 477u: goto L_08AF1D8C;
    case 478u: goto L_08AF1D98;
    case 479u: goto L_08AF1DD4;
    case 480u: goto L_08AF1DF8;
    case 481u: goto L_08AF1E20;
    case 482u: goto L_08AF1E24;
    case 483u: goto L_08AF1E3C;
    case 484u: goto L_08AF1E40;
    case 485u: goto L_08AF1E4C;
    case 486u: goto L_08AF1E54;
    case 487u: goto L_08AF1E5C;
    case 488u: goto L_08AF1E6C;
    case 489u: goto L_08AF1E84;
    case 490u: goto L_08AF1E9C;
    case 491u: goto L_08AF1EAC;
    case 492u: goto L_08AF1EC4;
    case 493u: goto L_08AF1EDC;
    case 494u: goto L_08AF1EF4;
    case 495u: goto L_08AF1EFC;
    case 496u: goto L_08AF1F10;
    case 497u: goto L_08AF1F2C;
    case 498u: goto L_08AF1F30;
    case 499u: goto L_08AF1F68;
    case 500u: goto L_08AF1F84;
    case 501u: goto L_08AF1F90;
    case 502u: goto L_08AF1F98;
    case 503u: goto L_08AF1FA0;
    case 504u: goto L_08AF1FAC;
    case 505u: goto L_08AF1FB4;
    case 506u: goto L_08AF1FC4;
    case 507u: goto L_08AF1FD0;
    case 508u: goto L_08AF1FD8;
    case 509u: goto L_08AF1FE0;
    case 510u: goto L_08AF1FF0;
    case 511u: goto L_08AF1FF8;
    case 512u: goto L_08AF2020;
    case 513u: goto L_08AF2024;
    case 514u: goto L_08AF2038;
    case 515u: goto L_08AF2040;
    case 516u: goto L_08AF2060;
    case 517u: goto L_08AF206C;
    case 518u: goto L_08AF2074;
    case 519u: goto L_08AF2084;
    case 520u: goto L_08AF2090;
    case 521u: goto L_08AF2098;
    case 522u: goto L_08AF20C8;
    case 523u: goto L_08AF20D0;
    case 524u: goto L_08AF20E0;
    case 525u: goto L_08AF20EC;
    case 526u: goto L_08AF20FC;
    case 527u: goto L_08AF2104;
    case 528u: goto L_08AF2130;
    case 529u: goto L_08AF2138;
    case 530u: goto L_08AF2140;
    case 531u: goto L_08AF2180;
    case 532u: goto L_08AF2188;
    case 533u: goto L_08AF219C;
    case 534u: goto L_08AF21A4;
    case 535u: goto L_08AF21C0;
    case 536u: goto L_08AF21C8;
    case 537u: goto L_08AF21CC;
    case 538u: goto L_08AF21E4;
    case 539u: goto L_08AF21F4;
    case 540u: goto L_08AF2200;
    case 541u: goto L_08AF2208;
    case 542u: goto L_08AF2210;
    case 543u: goto L_08AF221C;
    case 544u: goto L_08AF2224;
    case 545u: goto L_08AF2234;
    case 546u: goto L_08AF2240;
    case 547u: goto L_08AF2248;
    case 548u: goto L_08AF2258;
    case 549u: goto L_08AF2260;
    case 550u: goto L_08AF226C;
    case 551u: goto L_08AF2270;
    case 552u: goto L_08AF227C;
    case 553u: goto L_08AF22EC;
    case 554u: goto L_08AF2308;
    case 555u: goto L_08AF2310;
    case 556u: goto L_08AF231C;
    case 557u: goto L_08AF2324;
    case 558u: goto L_08AF2328;
    case 559u: goto L_08AF233C;
    case 560u: goto L_08AF2344;
    case 561u: goto L_08AF2368;
    case 562u: goto L_08AF2370;
    case 563u: goto L_08AF237C;
    case 564u: goto L_08AF2384;
    case 565u: goto L_08AF238C;
    case 566u: goto L_08AF2398;
    case 567u: goto L_08AF23A0;
    case 568u: goto L_08AF23AC;
    case 569u: goto L_08AF23B4;
    case 570u: goto L_08AF23C8;
    case 571u: goto L_08AF23DC;
    case 572u: goto L_08AF23E8;
    case 573u: goto L_08AF23F0;
    case 574u: goto L_08AF2408;
    case 575u: goto L_08AF2424;
    case 576u: goto L_08AF242C;
    case 577u: goto L_08AF2438;
    case 578u: goto L_08AF2440;
    case 579u: goto L_08AF2448;
    case 580u: goto L_08AF2454;
    case 581u: goto L_08AF245C;
    case 582u: goto L_08AF2460;
    case 583u: goto L_08AF2474;
    case 584u: goto L_08AF24A4;
    case 585u: goto L_08AF24A8;
    case 586u: goto L_08AF24B4;
    case 587u: goto L_08AF24C8;
    case 588u: goto L_08AF2530;
    case 589u: goto L_08AF2560;
    case 590u: goto L_08AF256C;
    case 591u: goto L_08AF2574;
    case 592u: goto L_08AF259C;
    case 593u: goto L_08AF25A4;
    case 594u: goto L_08AF25C0;
    case 595u: goto L_08AF25C8;
    case 596u: goto L_08AF25D8;
    case 597u: goto L_08AF25F0;
    case 598u: goto L_08AF25F8;
    case 599u: goto L_08AF2608;
    case 600u: goto L_08AF2618;
    case 601u: goto L_08AF2624;
    case 602u: goto L_08AF2634;
    case 603u: goto L_08AF2640;
    case 604u: goto L_08AF267C;
    case 605u: goto L_08AF2688;
    case 606u: goto L_08AF2698;
    case 607u: goto L_08AF26A8;
    case 608u: goto L_08AF26AC;
    case 609u: goto L_08AF26B4;
    case 610u: goto L_08AF26C0;
    case 611u: goto L_08AF26CC;
    case 612u: goto L_08AF26D8;
    case 613u: goto L_08AF26E4;
    case 614u: goto L_08AF26EC;
    case 615u: goto L_08AF26F8;
    case 616u: goto L_08AF2704;
    case 617u: goto L_08AF2714;
    case 618u: goto L_08AF2720;
    case 619u: goto L_08AF2724;
    case 620u: goto L_08AF272C;
    case 621u: goto L_08AF2734;
    case 622u: goto L_08AF273C;
    case 623u: goto L_08AF2748;
    case 624u: goto L_08AF2764;
    case 625u: goto L_08AF2778;
    case 626u: goto L_08AF278C;
    case 627u: goto L_08AF27A0;
    case 628u: goto L_08AF27B4;
    case 629u: goto L_08AF27C8;
    case 630u: goto L_08AF27D8;
    case 631u: goto L_08AF27DC;
    case 632u: goto L_08AF27E0;
    case 633u: goto L_08AF2800;
    case 634u: goto L_08AF281C;
    case 635u: goto L_08AF2840;
    case 636u: goto L_08AF2854;
    case 637u: goto L_08AF285C;
    case 638u: goto L_08AF289C;
    case 639u: goto L_08AF28A4;
    case 640u: goto L_08AF28AC;
    case 641u: goto L_08AF28D0;
    case 642u: goto L_08AF28F0;
    case 643u: goto L_08AF28F8;
    case 644u: goto L_08AF2918;
    case 645u: goto L_08AF2938;
    case 646u: goto L_08AF2974;
    case 647u: goto L_08AF2990;
    case 648u: goto L_08AF29A4;
    case 649u: goto L_08AF29AC;
    case 650u: goto L_08AF29B4;
    case 651u: goto L_08AF29BC;
    case 652u: goto L_08AF29C8;
    case 653u: goto L_08AF29CC;
    case 654u: goto L_08AF29EC;
    case 655u: goto L_08AF29F4;
    case 656u: goto L_08AF2A14;
    case 657u: goto L_08AF2A34;
    case 658u: goto L_08AF2A40;
    case 659u: goto L_08AF2A44;
    case 660u: goto L_08AF2A64;
    case 661u: goto L_08AF2A6C;
    case 662u: goto L_08AF2A8C;
    case 663u: goto L_08AF2AAC;
    case 664u: goto L_08AF2ACC;
    case 665u: goto L_08AF2AE8;
    case 666u: goto L_08AF2AF0;
    case 667u: goto L_08AF2AF8;
    case 668u: goto L_08AF2B00;
    case 669u: goto L_08AF2B08;
    case 670u: goto L_08AF2B1C;
    case 671u: goto L_08AF2B44;
    case 672u: goto L_08AF2B4C;
    case 673u: goto L_08AF2B54;
    case 674u: goto L_08AF2B60;
    case 675u: goto L_08AF2B64;
    case 676u: goto L_08AF2B74;
    case 677u: goto L_08AF2B7C;
    case 678u: goto L_08AF2B90;
    case 679u: goto L_08AF2BA4;
    case 680u: goto L_08AF2BAC;
    case 681u: goto L_08AF2BB0;
    case 682u: goto L_08AF2BBC;
    case 683u: goto L_08AF2BCC;
    case 684u: goto L_08AF2BEC;
    case 685u: goto L_08AF2BFC;
    case 686u: goto L_08AF2C00;
    case 687u: goto L_08AF2C14;
    case 688u: goto L_08AF2C1C;
    case 689u: goto L_08AF2C2C;
    case 690u: goto L_08AF2C34;
    case 691u: goto L_08AF2C50;
    case 692u: goto L_08AF2C6C;
    case 693u: goto L_08AF2CA8;
    case 694u: goto L_08AF2CB0;
    case 695u: goto L_08AF2CC0;
    case 696u: goto L_08AF2CC8;
    case 697u: goto L_08AF2CD0;
    case 698u: goto L_08AF2CE0;
    case 699u: goto L_08AF2CEC;
    case 700u: goto L_08AF2D1C;
    case 701u: goto L_08AF2D38;
    case 702u: goto L_08AF2D44;
    case 703u: goto L_08AF2D84;
    case 704u: goto L_08AF2DC8;
    case 705u: goto L_08AF2DEC;
    case 706u: goto L_08AF2E10;
    case 707u: goto L_08AF2E18;
    case 708u: goto L_08AF2E40;
    case 709u: goto L_08AF2E48;
    case 710u: goto L_08AF2E60;
    case 711u: goto L_08AF2E6C;
    case 712u: goto L_08AF2E74;
    case 713u: goto L_08AF2E78;
    case 714u: goto L_08AF2E88;
    case 715u: goto L_08AF2EA4;
    case 716u: goto L_08AF2EAC;
    case 717u: goto L_08AF2EB4;
    case 718u: goto L_08AF2EC0;
    case 719u: goto L_08AF2ECC;
    case 720u: goto L_08AF2ED8;
    case 721u: goto L_08AF2EE0;
    case 722u: goto L_08AF2EE8;
    case 723u: goto L_08AF2EF0;
    case 724u: goto L_08AF2F04;
    case 725u: goto L_08AF2F0C;
    case 726u: goto L_08AF2F1C;
    case 727u: goto L_08AF2F24;
    case 728u: goto L_08AF2F38;
    case 729u: goto L_08AF2F40;
    case 730u: goto L_08AF2F50;
    case 731u: goto L_08AF2F58;
    case 732u: goto L_08AF2F6C;
    case 733u: goto L_08AF2F74;
    case 734u: goto L_08AF2F84;
    case 735u: goto L_08AF2F8C;
    case 736u: goto L_08AF2FA4;
    case 737u: goto L_08AF2FBC;
    case 738u: goto L_08AF2FC4;
    case 739u: goto L_08AF2FCC;
    case 740u: goto L_08AF2FD4;
    case 741u: goto L_08AF2FDC;
    case 742u: goto L_08AF2FEC;
    case 743u: goto L_08AF2FF0;
    case 744u: goto L_08AF3004;
    case 745u: goto L_08AF304C;
    case 746u: goto L_08AF3058;
    case 747u: goto L_08AF3060;
    case 748u: goto L_08AF3074;
    case 749u: goto L_08AF307C;
    case 750u: goto L_08AF3084;
    case 751u: goto L_08AF3090;
    case 752u: goto L_08AF3094;
    case 753u: goto L_08AF30A4;
    case 754u: goto L_08AF30B0;
    case 755u: goto L_08AF30B8;
    case 756u: goto L_08AF30C0;
    case 757u: goto L_08AF30CC;
    case 758u: goto L_08AF30D8;
    case 759u: goto L_08AF30F8;
    case 760u: goto L_08AF312C;
    case 761u: goto L_08AF3138;
    case 762u: goto L_08AF3164;
    case 763u: goto L_08AF3174;
    case 764u: goto L_08AF3180;
    case 765u: goto L_08AF3188;
    case 766u: goto L_08AF3194;
    case 767u: goto L_08AF31A0;
    case 768u: goto L_08AF31B0;
    case 769u: goto L_08AF31BC;
    case 770u: goto L_08AF31CC;
    case 771u: goto L_08AF31D8;
    case 772u: goto L_08AF31DC;
    case 773u: goto L_08AF31E8;
    case 774u: goto L_08AF31EC;
    case 775u: goto L_08AF3204;
    case 776u: goto L_08AF323C;
    case 777u: goto L_08AF3250;
    case 778u: goto L_08AF325C;
    case 779u: goto L_08AF3260;
    case 780u: goto L_08AF3268;
    case 781u: goto L_08AF328C;
    case 782u: goto L_08AF3298;
    case 783u: goto L_08AF32C0;
    case 784u: goto L_08AF32CC;
    case 785u: goto L_08AF32D8;
    case 786u: goto L_08AF32E4;
    case 787u: goto L_08AF32F0;
    case 788u: goto L_08AF32F8;
    case 789u: goto L_08AF3304;
    case 790u: goto L_08AF330C;
    case 791u: goto L_08AF3318;
    case 792u: goto L_08AF3320;
    case 793u: goto L_08AF332C;
    case 794u: goto L_08AF3330;
    case 795u: goto L_08AF3344;
    case 796u: goto L_08AF3384;
    case 797u: goto L_08AF338C;
    case 798u: goto L_08AF3394;
    case 799u: goto L_08AF33A0;
    case 800u: goto L_08AF33A8;
    case 801u: goto L_08AF33B4;
    case 802u: goto L_08AF33BC;
    case 803u: goto L_08AF33DC;
    case 804u: goto L_08AF33E8;
    case 805u: goto L_08AF33F0;
    case 806u: goto L_08AF33F4;
    case 807u: goto L_08AF33FC;
    case 808u: goto L_08AF3404;
    case 809u: goto L_08AF3418;
    case 810u: goto L_08AF3420;
    case 811u: goto L_08AF3428;
    case 812u: goto L_08AF343C;
    case 813u: goto L_08AF3444;
    case 814u: goto L_08AF344C;
    case 815u: goto L_08AF3450;
    case 816u: goto L_08AF3464;
    case 817u: goto L_08AF346C;
    case 818u: goto L_08AF34EC;
    case 819u: goto L_08AF34F8;
    case 820u: goto L_08AF3524;
    case 821u: goto L_08AF3534;
    case 822u: goto L_08AF3540;
    case 823u: goto L_08AF3548;
    case 824u: goto L_08AF3550;
    case 825u: goto L_08AF3574;
    case 826u: goto L_08AF3588;
    case 827u: goto L_08AF3590;
    case 828u: goto L_08AF3598;
    case 829u: goto L_08AF35A0;
    case 830u: goto L_08AF35C4;
    case 831u: goto L_08AF35D8;
    case 832u: goto L_08AF35DC;
    case 833u: goto L_08AF35E4;
    case 834u: goto L_08AF3628;
    case 835u: goto L_08AF3638;
    case 836u: goto L_08AF3640;
    case 837u: goto L_08AF3650;
    case 838u: goto L_08AF3654;
    case 839u: goto L_08AF3658;
    case 840u: goto L_08AF366C;
    case 841u: goto L_08AF3674;
    case 842u: goto L_08AF3688;
    case 843u: goto L_08AF3690;
    case 844u: goto L_08AF36A0;
    case 845u: goto L_08AF36BC;
    case 846u: goto L_08AF36C0;
    case 847u: goto L_08AF36C4;
    case 848u: goto L_08AF36D4;
    case 849u: goto L_08AF36F0;
    case 850u: goto L_08AF36F4;
    case 851u: goto L_08AF3770;
    case 852u: goto L_08AF3778;
    case 853u: goto L_08AF3780;
    case 854u: goto L_08AF3788;
    case 855u: goto L_08AF379C;
    case 856u: goto L_08AF37BC;
    case 857u: goto L_08AF37D0;
    case 858u: goto L_08AF37E4;
    case 859u: goto L_08AF37F8;
    case 860u: goto L_08AF3804;
    case 861u: goto L_08AF380C;
    case 862u: goto L_08AF3818;
    case 863u: goto L_08AF3820;
    case 864u: goto L_08AF3828;
    case 865u: goto L_08AF3840;
    case 866u: goto L_08AF3854;
    case 867u: goto L_08AF385C;
    case 868u: goto L_08AF386C;
    case 869u: goto L_08AF3874;
    case 870u: goto L_08AF3888;
    case 871u: goto L_08AF3894;
    case 872u: goto L_08AF389C;
    case 873u: goto L_08AF38A4;
    case 874u: goto L_08AF38AC;
    case 875u: goto L_08AF38B4;
    case 876u: goto L_08AF38D8;
    case 877u: goto L_08AF38EC;
    case 878u: goto L_08AF38F4;
    case 879u: goto L_08AF38FC;
    case 880u: goto L_08AF3920;
    case 881u: goto L_08AF3934;
    case 882u: goto L_08AF393C;
    case 883u: goto L_08AF3944;
    case 884u: goto L_08AF394C;
    case 885u: goto L_08AF3970;
    case 886u: goto L_08AF3984;
    case 887u: goto L_08AF39A4;
    case 888u: goto L_08AF39AC;
    case 889u: goto L_08AF39B8;
    case 890u: goto L_08AF39CC;
    case 891u: goto L_08AF39D4;
    case 892u: goto L_08AF39DC;
    case 893u: goto L_08AF39E8;
    case 894u: goto L_08AF3A18;
    case 895u: goto L_08AF3A1C;
    case 896u: goto L_08AF3A30;
    case 897u: goto L_08AF3A38;
    case 898u: goto L_08AF3A40;
    case 899u: goto L_08AF3A48;
    case 900u: goto L_08AF3A50;
    case 901u: goto L_08AF3A74;
    case 902u: goto L_08AF3A88;
    case 903u: goto L_08AF3A90;
    case 904u: goto L_08AF3A98;
    case 905u: goto L_08AF3ABC;
    case 906u: goto L_08AF3AD0;
    case 907u: goto L_08AF3AD8;
    case 908u: goto L_08AF3AE0;
    case 909u: goto L_08AF3AE8;
    case 910u: goto L_08AF3B0C;
    case 911u: goto L_08AF3B20;
    case 912u: goto L_08AF3B40;
    case 913u: goto L_08AF3B48;
    case 914u: goto L_08AF3B54;
    case 915u: goto L_08AF3B68;
    case 916u: goto L_08AF3B70;
    case 917u: goto L_08AF3B78;
    case 918u: goto L_08AF3B84;
    case 919u: goto L_08AF3BB4;
    case 920u: goto L_08AF3BC0;
    case 921u: goto L_08AF3BC8;
    case 922u: goto L_08AF3BD0;
    case 923u: goto L_08AF3BE4;
    case 924u: goto L_08AF3BF8;
    case 925u: goto L_08AF3C00;
    case 926u: goto L_08AF3C08;
    case 927u: goto L_08AF3C1C;
    case 928u: goto L_08AF3C30;
    case 929u: goto L_08AF3C40;
    case 930u: goto L_08AF3C48;
    case 931u: goto L_08AF3C50;
    case 932u: goto L_08AF3C5C;
    case 933u: goto L_08AF3C70;
    case 934u: goto L_08AF3C78;
    case 935u: goto L_08AF3C80;
    case 936u: goto L_08AF3C8C;
    case 937u: goto L_08AF3CA0;
    case 938u: goto L_08AF3CA8;
    case 939u: goto L_08AF3CB0;
    case 940u: goto L_08AF3CBC;
    case 941u: goto L_08AF3CD0;
    case 942u: goto L_08AF3CD8;
    case 943u: goto L_08AF3CE0;
    case 944u: goto L_08AF3CEC;
    case 945u: goto L_08AF3D00;
    case 946u: goto L_08AF3D0C;
    case 947u: goto L_08AF3D18;
    case 948u: goto L_08AF3D44;
    case 949u: goto L_08AF3D50;
    case 950u: goto L_08AF3D60;
    case 951u: goto L_08AF3D80;
    case 952u: goto L_08AF3D90;
    case 953u: goto L_08AF3DB4;
    case 954u: goto L_08AF3DC4;
    case 955u: goto L_08AF3E04;
    case 956u: goto L_08AF3E14;
    case 957u: goto L_08AF3E1C;
    case 958u: goto L_08AF3E2C;
    case 959u: goto L_08AF3EA0;
    case 960u: goto L_08AF3EB0;
    case 961u: goto L_08AF3EC8;
    case 962u: goto L_08AF3ED0;
    case 963u: goto L_08AF3ED8;
    case 964u: goto L_08AF3EF0;
    case 965u: goto L_08AF3EF8;
    case 966u: goto L_08AF3F00;
    case 967u: goto L_08AF3F0C;
    case 968u: goto L_08AF3F14;
    case 969u: goto L_08AF3F1C;
    case 970u: goto L_08AF3F24;
    case 971u: goto L_08AF3F50;
    case 972u: goto L_08AF3F58;
    case 973u: goto L_08AF3F80;
    case 974u: goto L_08AF3F88;
    case 975u: goto L_08AF3F90;
    case 976u: goto L_08AF3F94;
    case 977u: goto L_08AF3F9C;
    case 978u: goto L_08AF3FA4;
    case 979u: goto L_08AF3FB0;
    case 980u: goto L_08AF3FC8;
    case 981u: goto L_08AF3FD0;
    case 982u: goto L_08AF3FD8;
    case 983u: goto L_08AF3FE4;
    case 984u: goto L_08AF3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF0000:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1588), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF0018;
      }
      goto L_08AF000C;
    }
L_08AF000C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1110u, 0x08AEFF58u>(ctx, &aot_mem); return;
      }
      goto L_08AF0018;
    }
L_08AF0018:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AF0024u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0024u) goto L_08AF0024;
    return;
L_08AF0024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AF0030u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0030u) goto L_08AF0030;
    return;
L_08AF0030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF005C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AF0088u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AF0088u) goto L_08AF0088;
    return;
L_08AF0088:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08AF0098u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 46u, 0x08AE8458u>(ctx, &aot_mem) && ctx.pc == 0x08AF0098u) goto L_08AF0098;
    return;
L_08AF0098:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AF00ACu);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 91u, 0x08A01240u>(ctx, &aot_mem) && ctx.pc == 0x08AF00ACu) goto L_08AF00AC;
    return;
L_08AF00AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AF00B8u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF00B8u) goto L_08AF00B8;
    return;
L_08AF00B8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF00CCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF00CCu) goto L_08AF00CC;
    return;
L_08AF00CC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6000));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08AF0140u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 620u, 0x0884A54Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0140u) goto L_08AF0140;
    return;
L_08AF0140:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AF0158u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0158u) goto L_08AF0158;
    return;
L_08AF0158:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AF0170u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0170u) goto L_08AF0170;
    return;
L_08AF0170:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AF0188u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0188u) goto L_08AF0188;
    return;
L_08AF0188:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 49024u << 16u);
        goto L_08AF01B4;
    }
    goto L_08AF01A8;
L_08AF01A8:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF01B8;
      }
      goto L_08AF01B4;
    }
L_08AF01B4:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08AF01B8;
L_08AF01B8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 49024u << 16u);
        goto L_08AF01E4;
    }
    goto L_08AF01D8;
L_08AF01D8:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF01E8;
      }
      goto L_08AF01E4;
    }
L_08AF01E4:
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08AF01E8;
L_08AF01E8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08AF01FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF01FCu) goto L_08AF01FC;
    return;
L_08AF01FC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08AF0210u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0210u) goto L_08AF0210;
    return;
L_08AF0210:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AF021Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08AF029C;
L_08AF021C:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AF022Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08AF029C;
L_08AF022C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AF023Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 593u, 0x0884A414u>(ctx, &aot_mem) && ctx.pc == 0x08AF023Cu) goto L_08AF023C;
    return;
L_08AF023C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AF0248u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 602u, 0x0884A47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0248u) goto L_08AF0248;
    return;
L_08AF0248:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AF0254u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 659u, 0x0884A770u>(ctx, &aot_mem) && ctx.pc == 0x08AF0254u) goto L_08AF0254;
    return;
L_08AF0254:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08AF0260u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 536u, 0x0884A0ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF0260u) goto L_08AF0260;
    return;
L_08AF0260:
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(31, 0x08AF0274u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 611u, 0x0884A4E4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0274u) goto L_08AF0274;
    return;
L_08AF0274:
    ctx.set_gpr(31, 0x08AF027Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 741u, 0x0884AB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF027Cu) goto L_08AF027C;
    return;
L_08AF027C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF029C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF02BCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 655u, 0x0884A728u>(ctx, &aot_mem) && ctx.pc == 0x08AF02BCu) goto L_08AF02BC;
    return;
L_08AF02BC:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AF02C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 655u, 0x0884A728u>(ctx, &aot_mem) && ctx.pc == 0x08AF02C8u) goto L_08AF02C8;
    return;
L_08AF02C8:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF02D8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AF034C;
L_08AF02D8:
    ctx.set_gpr(31, 0x08AF02E0u);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[20];
    goto L_08AF02F8;
L_08AF02E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF02F8:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[1])) || ctx.fpr[12] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF0314;
      }
      goto L_08AF0310;
    }
L_08AF0310:
    ctx.set_fpr_bits(1, ctx.fpr_bits(12));
    goto L_08AF0314;
L_08AF0314:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
        goto L_08AF0344;
    }
    goto L_08AF032C;
L_08AF032C:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
        goto L_08AF0344;
    }
    goto L_08AF0344;
L_08AF0344:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 581u, 0x0880EC58u>(ctx, &aot_mem); return;
L_08AF034C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[4];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF037C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF0398u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AF0398u) goto L_08AF0398;
    return;
L_08AF0398:
    ctx.set_gpr(31, 0x08AF03A0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF03A0u) goto L_08AF03A0;
    return;
L_08AF03A0:
    ctx.set_gpr(31, 0x08AF03A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AF03A8u) goto L_08AF03A8;
    return;
L_08AF03A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(952));
    ctx.set_gpr(31, 0x08AF03B4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AF0410;
L_08AF03B4:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF03C8;
    }
    goto L_08AF03BC;
L_08AF03BC:
    ctx.set_gpr(31, 0x08AF03C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 85u, 0x08ABC454u>(ctx, &aot_mem) && ctx.pc == 0x08AF03C4u) goto L_08AF03C4;
    return;
L_08AF03C4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF03C8;
L_08AF03C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF03D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 110u, 0x08ABC5BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF03D4u) goto L_08AF03D4;
    return;
L_08AF03D4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8808)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8812)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8816)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08AF0410:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AF0418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AF0440;
    }
    goto L_08AF0434;
L_08AF0434:
    ctx.set_gpr(31, 0x08AF043Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 89u, 0x08ABC4ACu>(ctx, &aot_mem) && ctx.pc == 0x08AF043Cu) goto L_08AF043C;
    return;
L_08AF043C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF0440;
L_08AF0440:
    ctx.set_gpr(31, 0x08AF0448u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 719u, 0x08862D80u>(ctx, &aot_mem) && ctx.pc == 0x08AF0448u) goto L_08AF0448;
    return;
L_08AF0448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF0474u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 116u, 0x08ABC620u>(ctx, &aot_mem) && ctx.pc == 0x08AF0474u) goto L_08AF0474;
    return;
L_08AF0474:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0488;
      }
      goto L_08AF0480;
    }
L_08AF0480:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF057C;
      }
      goto L_08AF0488;
    }
L_08AF0488:
    ctx.set_gpr(31, 0x08AF0490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0490u) goto L_08AF0490;
    return;
L_08AF0490:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AF04C8u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08AF04C8u) goto L_08AF04C8;
    return;
L_08AF04C8:
    ctx.set_gpr(31, 0x08AF04D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF04D0u) goto L_08AF04D0;
    return;
L_08AF04D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AF04DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 831u, 0x08AFBFD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF04DCu) goto L_08AF04DC;
    return;
L_08AF04DC:
    ctx.set_gpr(31, 0x08AF04E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF04E4u) goto L_08AF04E4;
    return;
L_08AF04E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF04F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AF04F0u) goto L_08AF04F0;
    return;
L_08AF04F0:
    ctx.set_gpr(31, 0x08AF04F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF04F8u) goto L_08AF04F8;
    return;
L_08AF04F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF0504u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AF0504u) goto L_08AF0504;
    return;
L_08AF0504:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8832));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF0528u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_08AF2840;
L_08AF0528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF0534u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0534u) goto L_08AF0534;
    return;
L_08AF0534:
    ctx.set_gpr(31, 0x08AF053Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF053Cu) goto L_08AF053C;
    return;
L_08AF053C:
    ctx.set_gpr(31, 0x08AF0544u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 404u, 0x08A81290u>(ctx, &aot_mem) && ctx.pc == 0x08AF0544u) goto L_08AF0544;
    return;
L_08AF0544:
    ctx.set_gpr(31, 0x08AF054Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF054Cu) goto L_08AF054C;
    return;
L_08AF054C:
    ctx.set_gpr(31, 0x08AF0554u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AF0590;
L_08AF0554:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8820)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8824)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8828)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF057C;
L_08AF057C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0590:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 815u, 0x08AFBF1Cu>(ctx, &aot_mem); return;
L_08AF0598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF05B4u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF05B4u) goto L_08AF05B4;
    return;
L_08AF05B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF05C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF05C0u) goto L_08AF05C0;
    return;
L_08AF05C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF05D0;
      }
      goto L_08AF05C8;
    }
L_08AF05C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF05F0;
      }
      goto L_08AF05D0;
    }
L_08AF05D0:
    ctx.set_gpr(31, 0x08AF05D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF05D8u) goto L_08AF05D8;
    return;
L_08AF05D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF05E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF05E4u) goto L_08AF05E4;
    return;
L_08AF05E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF05F0;
      }
      goto L_08AF05EC;
    }
L_08AF05EC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF05F0;
L_08AF05F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0600;
      }
      goto L_08AF05F8;
    }
L_08AF05F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0658;
      }
      goto L_08AF0600;
    }
L_08AF0600:
    ctx.set_gpr(31, 0x08AF0608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0608u) goto L_08AF0608;
    return;
L_08AF0608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF061Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF061Cu) goto L_08AF061C;
    return;
L_08AF061C:
    ctx.set_gpr(31, 0x08AF0624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0624u) goto L_08AF0624;
    return;
L_08AF0624:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF0630u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AF0630u) goto L_08AF0630;
    return;
L_08AF0630:
    ctx.set_gpr(31, 0x08AF0638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0638u) goto L_08AF0638;
    return;
L_08AF0638:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AF0644u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0644u) goto L_08AF0644;
    return;
L_08AF0644:
    ctx.set_gpr(31, 0x08AF064Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF0418;
L_08AF064C:
    ctx.set_gpr(31, 0x08AF0654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AF0654u) goto L_08AF0654;
    return;
L_08AF0654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF0658;
L_08AF0658:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF066C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AF068C;
L_08AF068C:
    ctx.set_gpr(31, 0x08AF0694u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF06C0;
L_08AF0694:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AF068C;
      }
      goto L_08AF06A4;
    }
L_08AF06A4:
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
L_08AF06C0:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF06D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF0710;
      }
      goto L_08AF06F4;
    }
L_08AF06F4:
    ctx.set_gpr(31, 0x08AF06FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 359u, 0x08A7D728u>(ctx, &aot_mem) && ctx.pc == 0x08AF06FCu) goto L_08AF06FC;
    return;
L_08AF06FC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AF0714;
    }
    goto L_08AF0708;
L_08AF0708:
    ctx.set_gpr(31, 0x08AF0710u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0710u) goto L_08AF0710;
    return;
L_08AF0710:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AF0714;
L_08AF0714:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AF075C;
    }
    goto L_08AF0754;
L_08AF0754:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF07AC;
      }
      goto L_08AF075C;
    }
L_08AF075C:
    ctx.set_gpr(31, 0x08AF0764u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0764u) goto L_08AF0764;
    return;
L_08AF0764:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2820));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF0788u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0788u) goto L_08AF0788;
    return;
L_08AF0788:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF07A0;
    }
    goto L_08AF0790;
L_08AF0790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF07A0;
L_08AF07A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AF07AC;
    }
    goto L_08AF07A8;
L_08AF07A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AF07AC;
L_08AF07AC:
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
L_08AF07C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] << 4u);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF082C;
    }
    goto L_08AF07F8;
L_08AF07F8:
    ctx.set_gpr(31, 0x08AF0800u);
    // nop
    goto L_08AF0944;
L_08AF0800:
    ctx.set_gpr(31, 0x08AF0808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0808u) goto L_08AF0808;
    return;
L_08AF0808:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF0818u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0818u) goto L_08AF0818;
    return;
L_08AF0818:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF082C;
L_08AF082C:
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
L_08AF0844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF087C;
      }
      goto L_08AF0874;
    }
L_08AF0874:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0928;
      }
      goto L_08AF087C;
    }
L_08AF087C:
    ctx.set_gpr(31, 0x08AF0884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF0884u) goto L_08AF0884;
    return;
L_08AF0884:
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2792));
    goto L_08AF0898;
L_08AF0898:
    ctx.set_gpr(31, 0x08AF08A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF08A0u) goto L_08AF08A0;
    return;
L_08AF08A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AF08E4u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF08E4u) goto L_08AF08E4;
    return;
L_08AF08E4:
    ctx.set_gpr(31, 0x08AF08ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF08ECu) goto L_08AF08EC;
    return;
L_08AF08EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF0914u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0914u) goto L_08AF0914;
    return;
L_08AF0914:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF0898;
      }
      goto L_08AF0924;
    }
L_08AF0924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF0928;
L_08AF0928:
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
L_08AF0944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AF09C4;
    }
    goto L_08AF0968;
L_08AF0968:
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[5]);
    goto L_08AF0974;
L_08AF0974:
    ctx.set_gpr(31, 0x08AF097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF097Cu) goto L_08AF097C;
    return;
L_08AF097C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08AF098Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF098Cu) goto L_08AF098C;
    return;
L_08AF098C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AF09B4;
    }
    goto L_08AF0998;
L_08AF0998:
    ctx.set_gpr(31, 0x08AF09A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF09A0u) goto L_08AF09A0;
    return;
L_08AF09A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08AF09B0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF09B0u) goto L_08AF09B0;
    return;
L_08AF09B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF09B4;
L_08AF09B4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0974;
      }
      goto L_08AF09C0;
    }
L_08AF09C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF09C4;
L_08AF09C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF09D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AF09FC;
L_08AF09FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF0A34;
    }
    goto L_08AF0A0C;
L_08AF0A0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF0A20;
    }
    goto L_08AF0A18;
L_08AF0A18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0A44;
      }
      goto L_08AF0A20;
    }
L_08AF0A20:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF0A2Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF0A6C;
L_08AF0A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0A40;
      }
      goto L_08AF0A34;
    }
L_08AF0A34:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF0A40u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF0C20;
L_08AF0A40:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF0A44;
L_08AF0A44:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AF09FC;
      }
      goto L_08AF0A50;
    }
L_08AF0A50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08AF0AAC;
      }
      goto L_08AF0AA4;
    }
L_08AF0AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0BCC;
      }
      goto L_08AF0AAC;
    }
L_08AF0AAC:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08AF0B78;
    }
    goto L_08AF0AC8;
L_08AF0AC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF0AE4;
      }
      goto L_08AF0AD4;
    }
L_08AF0AD4:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF0AE4;
    }
    goto L_08AF0ADC;
L_08AF0ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0BCC;
      }
      goto L_08AF0AE4;
    }
L_08AF0AE4:
    ctx.set_gpr(31, 0x08AF0AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0AECu) goto L_08AF0AEC;
    return;
L_08AF0AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08AF0AFCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08AF0BF0;
L_08AF0AFC:
    ctx.set_gpr(2, 17056u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08AF0B28;
    }
    goto L_08AF0B20;
L_08AF0B20:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AF0B28;
L_08AF0B28:
    ctx.set_gpr(31, 0x08AF0B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B30u) goto L_08AF0B30;
    return;
L_08AF0B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08AF0B48u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B48u) goto L_08AF0B48;
    return;
L_08AF0B48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0B28;
      }
      goto L_08AF0B58;
    }
L_08AF0B58:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF0BC8;
      }
      goto L_08AF0B6C;
    }
L_08AF0B6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF0BC8;
      }
      goto L_08AF0B78;
    }
L_08AF0B78:
    ctx.set_gpr(31, 0x08AF0B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B80u) goto L_08AF0B80;
    return;
L_08AF0B80:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[20]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08AF0B98u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B98u) goto L_08AF0B98;
    return;
L_08AF0B98:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0B78;
      }
      goto L_08AF0BA8;
    }
L_08AF0BA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0BCC;
      }
      goto L_08AF0BC8;
    }
L_08AF0BC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AF0BCC;
L_08AF0BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0BF0:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 446u, 0x08846D6Cu>(ctx, &aot_mem); return;
L_08AF0C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(8));
        goto L_08AF0C5C;
    }
    goto L_08AF0C54;
L_08AF0C54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0CE0;
      }
      goto L_08AF0C5C;
    }
L_08AF0C5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
        goto L_08AF0C8C;
    }
    goto L_08AF0C6C;
L_08AF0C6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF0C88;
      }
      goto L_08AF0C78;
    }
L_08AF0C78:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF0C88;
    }
    goto L_08AF0C80;
L_08AF0C80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0CE0;
      }
      goto L_08AF0C88;
    }
L_08AF0C88:
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    goto L_08AF0C8C;
L_08AF0C8C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[2] - ctx.gpr[5]);
    goto L_08AF0C94;
L_08AF0C94:
    ctx.set_gpr(31, 0x08AF0C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C9Cu) goto L_08AF0C9C;
    return;
L_08AF0C9C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF0CB4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CB4u) goto L_08AF0CB4;
    return;
L_08AF0CB4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0C94;
      }
      goto L_08AF0CC4;
    }
L_08AF0CC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF0CE0;
L_08AF0CE0:
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
L_08AF0D00:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0D30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AF0D60;
    }
    goto L_08AF0D48;
L_08AF0D48:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AF0D5C;
      }
      goto L_08AF0D54;
    }
L_08AF0D54:
    ctx.set_gpr(31, 0x08AF0D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D5Cu) goto L_08AF0D5C;
    return;
L_08AF0D5C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AF0D60;
L_08AF0D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF0DB0;
      }
      goto L_08AF0D90;
    }
L_08AF0D90:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AF0DB4;
    }
    goto L_08AF0D98;
L_08AF0D98:
    ctx.set_gpr(31, 0x08AF0DA0u);
    // nop
    goto L_08AF19EC;
L_08AF0DA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AF0DB0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF0E1C;
L_08AF0DB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AF0DB4;
L_08AF0DB4:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08AF0DD4;
    }
    goto L_08AF0DBC;
L_08AF0DBC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0DD0;
      }
      goto L_08AF0DC4;
    }
L_08AF0DC4:
    ctx.set_gpr(31, 0x08AF0DCCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF1A94;
L_08AF0DCC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AF0DD0;
L_08AF0DD0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AF0DD4;
L_08AF0DD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0DE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(31, 0x08AF0E00u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AF1A94;
L_08AF0E00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF0E0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E0Cu) goto L_08AF0E0C;
    return;
L_08AF0E0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0E1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0E34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0E4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08AF0E8C;
    }
    goto L_08AF0E64;
L_08AF0E64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08AF0E78;
    }
    goto L_08AF0E70;
L_08AF0E70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF0E9C;
      }
      goto L_08AF0E78;
    }
L_08AF0E78:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF0E84u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AF0F30;
L_08AF0E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0E98;
      }
      goto L_08AF0E8C;
    }
L_08AF0E8C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF0E98u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AF1308;
L_08AF0E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF0E9C;
L_08AF0E9C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AF0ECC;
    }
    goto L_08AF0EB4;
L_08AF0EB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF0EC8;
      }
      goto L_08AF0EC0;
    }
L_08AF0EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF0ECC;
      }
      goto L_08AF0EC8;
    }
L_08AF0EC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF0ECC;
L_08AF0ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0ED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AF0F28;
    }
    goto L_08AF0EE8;
L_08AF0EE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF0F1C;
      }
      goto L_08AF0EF8;
    }
L_08AF0EF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF0F0C;
      }
      goto L_08AF0F04;
    }
L_08AF0F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0F24;
      }
      goto L_08AF0F0C;
    }
L_08AF0F0C:
    ctx.set_gpr(31, 0x08AF0F14u);
    // nop
    goto L_08AF0F30;
L_08AF0F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0F24;
      }
      goto L_08AF0F1C;
    }
L_08AF0F1C:
    ctx.set_gpr(31, 0x08AF0F24u);
    // nop
    goto L_08AF1308;
L_08AF0F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF0F28;
L_08AF0F28:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AF0F88;
      }
      goto L_08AF0F84;
    }
L_08AF0F84:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF0F88;
L_08AF0F88:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08AF0FB0;
    }
    goto L_08AF0FA0;
L_08AF0FA0:
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08AF0FB0;
L_08AF0FB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AF1200;
    }
    goto L_08AF0FBC;
L_08AF0FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF0FD8;
      }
      goto L_08AF0FC8;
    }
L_08AF0FC8:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
        goto L_08AF0FD8;
    }
    goto L_08AF0FD0;
L_08AF0FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08AF12D4;
      }
      goto L_08AF0FD8;
    }
L_08AF0FD8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1896)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF0FF0u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FF0u) goto L_08AF0FF0;
    return;
L_08AF0FF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF0FFCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FFCu) goto L_08AF0FFC;
    return;
L_08AF0FFC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AF1074;
    }
    goto L_08AF1004;
L_08AF1004:
    ctx.set_gpr(31, 0x08AF100Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF100Cu) goto L_08AF100C;
    return;
L_08AF100C:
    ctx.set_gpr(31, 0x08AF1014u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1014u) goto L_08AF1014;
    return;
L_08AF1014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1020u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1020u) goto L_08AF1020;
    return;
L_08AF1020:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1030u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1030u) goto L_08AF1030;
    return;
L_08AF1030:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF1070;
      }
      goto L_08AF103C;
    }
L_08AF103C:
    ctx.set_gpr(31, 0x08AF1044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1044u) goto L_08AF1044;
    return;
L_08AF1044:
    ctx.set_gpr(31, 0x08AF104Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF104Cu) goto L_08AF104C;
    return;
L_08AF104C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1058u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1058u) goto L_08AF1058;
    return;
L_08AF1058:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1068u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF1068u) goto L_08AF1068;
    return;
L_08AF1068:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF1070;
L_08AF1070:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF1074;
L_08AF1074:
    ctx.set_gpr(31, 0x08AF107Cu);
    // nop
    goto L_08AF1300;
L_08AF107C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF10A8u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF10A8u) goto L_08AF10A8;
    return;
L_08AF10A8:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF10BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF10BCu) goto L_08AF10BC;
    return;
L_08AF10BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16341u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 24576u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 7864u);
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(31, 0x08AF10DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF10DCu) goto L_08AF10DC;
    return;
L_08AF10DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF10F0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF10F0u) goto L_08AF10F0;
    return;
L_08AF10F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1104u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1104u) goto L_08AF1104;
    return;
L_08AF1104:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1118u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1118u) goto L_08AF1118;
    return;
L_08AF1118:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1884)));
    ctx.set_gpr(31, 0x08AF112Cu);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF112Cu) goto L_08AF112C;
    return;
L_08AF112C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1140u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08AF1140u) goto L_08AF1140;
    return;
L_08AF1140:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF114Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AF114Cu) goto L_08AF114C;
    return;
L_08AF114C:
    ctx.set_gpr(31, 0x08AF1154u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1154u) goto L_08AF1154;
    return;
L_08AF1154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1160u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF1160u) goto L_08AF1160;
    return;
L_08AF1160:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16040u << 16u);
        goto L_08AF11D8;
    }
    goto L_08AF1168;
L_08AF1168:
    ctx.set_gpr(31, 0x08AF1170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1170u) goto L_08AF1170;
    return;
L_08AF1170:
    ctx.set_gpr(31, 0x08AF1178u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1178u) goto L_08AF1178;
    return;
L_08AF1178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1184u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1184u) goto L_08AF1184;
    return;
L_08AF1184:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1194u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1194u) goto L_08AF1194;
    return;
L_08AF1194:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF11D4;
      }
      goto L_08AF11A0;
    }
L_08AF11A0:
    ctx.set_gpr(31, 0x08AF11A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF11A8u) goto L_08AF11A8;
    return;
L_08AF11A8:
    ctx.set_gpr(31, 0x08AF11B0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF11B0u) goto L_08AF11B0;
    return;
L_08AF11B0:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AF11BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF11BCu) goto L_08AF11BC;
    return;
L_08AF11BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF11D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF11D4u) goto L_08AF11D4;
    return;
L_08AF11D4:
    ctx.set_gpr(2, 16040u << 16u);
    goto L_08AF11D8;
L_08AF11D8:
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF12D0;
      }
      goto L_08AF11F4;
    }
L_08AF11F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF12D0;
      }
      goto L_08AF1200;
    }
L_08AF1200:
    ctx.set_gpr(31, 0x08AF1208u);
    // nop
    goto L_08AF1300;
L_08AF1208:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1884)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1896)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF1238u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1238u) goto L_08AF1238;
    return;
L_08AF1238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1244u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF1244u) goto L_08AF1244;
    return;
L_08AF1244:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AF12BC;
    }
    goto L_08AF124C;
L_08AF124C:
    ctx.set_gpr(31, 0x08AF1254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1254u) goto L_08AF1254;
    return;
L_08AF1254:
    ctx.set_gpr(31, 0x08AF125Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF125Cu) goto L_08AF125C;
    return;
L_08AF125C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1268u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1268u) goto L_08AF1268;
    return;
L_08AF1268:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1278u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1278u) goto L_08AF1278;
    return;
L_08AF1278:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF12B8;
      }
      goto L_08AF1284;
    }
L_08AF1284:
    ctx.set_gpr(31, 0x08AF128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF128Cu) goto L_08AF128C;
    return;
L_08AF128C:
    ctx.set_gpr(31, 0x08AF1294u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1294u) goto L_08AF1294;
    return;
L_08AF1294:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF12A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF12A0u) goto L_08AF12A0;
    return;
L_08AF12A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF12B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF12B8u) goto L_08AF12B8;
    return;
L_08AF12B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AF12BC;
L_08AF12BC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF12D0;
L_08AF12D0:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08AF12D4;
L_08AF12D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1300:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AF1360;
      }
      goto L_08AF135C;
    }
L_08AF135C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF1360;
L_08AF1360:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AF1388;
    }
    goto L_08AF1378;
L_08AF1378:
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08AF1388;
L_08AF1388:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AF15C8;
    }
    goto L_08AF1394;
L_08AF1394:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF13B0;
      }
      goto L_08AF13A0;
    }
L_08AF13A0:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
        goto L_08AF13B0;
    }
    goto L_08AF13A8;
L_08AF13A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_08AF1730;
      }
      goto L_08AF13B0;
    }
L_08AF13B0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1896)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF13C8u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF13C8u) goto L_08AF13C8;
    return;
L_08AF13C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF13D4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF13D4u) goto L_08AF13D4;
    return;
L_08AF13D4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AF144C;
    }
    goto L_08AF13DC;
L_08AF13DC:
    ctx.set_gpr(31, 0x08AF13E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF13E4u) goto L_08AF13E4;
    return;
L_08AF13E4:
    ctx.set_gpr(31, 0x08AF13ECu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF13ECu) goto L_08AF13EC;
    return;
L_08AF13EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF13F8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF13F8u) goto L_08AF13F8;
    return;
L_08AF13F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1408u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1408u) goto L_08AF1408;
    return;
L_08AF1408:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF1448;
      }
      goto L_08AF1414;
    }
L_08AF1414:
    ctx.set_gpr(31, 0x08AF141Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF141Cu) goto L_08AF141C;
    return;
L_08AF141C:
    ctx.set_gpr(31, 0x08AF1424u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1424u) goto L_08AF1424;
    return;
L_08AF1424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1430u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1430u) goto L_08AF1430;
    return;
L_08AF1430:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1440u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF1440u) goto L_08AF1440;
    return;
L_08AF1440:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF1448;
L_08AF1448:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF144C;
L_08AF144C:
    ctx.set_gpr(31, 0x08AF1454u);
    // nop
    goto L_08AF1300;
L_08AF1454:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AF1470u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1470u) goto L_08AF1470;
    return;
L_08AF1470:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF1484u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF1484u) goto L_08AF1484;
    return;
L_08AF1484:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16341u << 16u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 24576u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 7864u);
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(31, 0x08AF14A4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF14A4u) goto L_08AF14A4;
    return;
L_08AF14A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF14B8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF14B8u) goto L_08AF14B8;
    return;
L_08AF14B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF14CCu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF14CCu) goto L_08AF14CC;
    return;
L_08AF14CC:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF14E0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF14E0u) goto L_08AF14E0;
    return;
L_08AF14E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1884)));
    ctx.set_gpr(31, 0x08AF14F4u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF14F4u) goto L_08AF14F4;
    return;
L_08AF14F4:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1508u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08AF1508u) goto L_08AF1508;
    return;
L_08AF1508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1514u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AF1514u) goto L_08AF1514;
    return;
L_08AF1514:
    ctx.set_gpr(31, 0x08AF151Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF151Cu) goto L_08AF151C;
    return;
L_08AF151C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1528u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF1528u) goto L_08AF1528;
    return;
L_08AF1528:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16040u << 16u);
        goto L_08AF15A0;
    }
    goto L_08AF1530;
L_08AF1530:
    ctx.set_gpr(31, 0x08AF1538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1538u) goto L_08AF1538;
    return;
L_08AF1538:
    ctx.set_gpr(31, 0x08AF1540u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1540u) goto L_08AF1540;
    return;
L_08AF1540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF154Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF154Cu) goto L_08AF154C;
    return;
L_08AF154C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF155Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF155Cu) goto L_08AF155C;
    return;
L_08AF155C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF159C;
      }
      goto L_08AF1568;
    }
L_08AF1568:
    ctx.set_gpr(31, 0x08AF1570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1570u) goto L_08AF1570;
    return;
L_08AF1570:
    ctx.set_gpr(31, 0x08AF1578u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1578u) goto L_08AF1578;
    return;
L_08AF1578:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF1584u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1584u) goto L_08AF1584;
    return;
L_08AF1584:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF159Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF159Cu) goto L_08AF159C;
    return;
L_08AF159C:
    ctx.set_gpr(2, 16040u << 16u);
    goto L_08AF15A0;
L_08AF15A0:
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF172C;
      }
      goto L_08AF15BC;
    }
L_08AF15BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF172C;
      }
      goto L_08AF15C8;
    }
L_08AF15C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1896)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF15DCu);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF15DCu) goto L_08AF15DC;
    return;
L_08AF15DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF15E8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF15E8u) goto L_08AF15E8;
    return;
L_08AF15E8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AF1660;
    }
    goto L_08AF15F0;
L_08AF15F0:
    ctx.set_gpr(31, 0x08AF15F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF15F8u) goto L_08AF15F8;
    return;
L_08AF15F8:
    ctx.set_gpr(31, 0x08AF1600u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1600u) goto L_08AF1600;
    return;
L_08AF1600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF160Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF160Cu) goto L_08AF160C;
    return;
L_08AF160C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF161Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF161Cu) goto L_08AF161C;
    return;
L_08AF161C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF165C;
      }
      goto L_08AF1628;
    }
L_08AF1628:
    ctx.set_gpr(31, 0x08AF1630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1630u) goto L_08AF1630;
    return;
L_08AF1630:
    ctx.set_gpr(31, 0x08AF1638u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1638u) goto L_08AF1638;
    return;
L_08AF1638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1644u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1644u) goto L_08AF1644;
    return;
L_08AF1644:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1654u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF1654u) goto L_08AF1654;
    return;
L_08AF1654:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF165C;
L_08AF165C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF1660;
L_08AF1660:
    ctx.set_gpr(31, 0x08AF1668u);
    // nop
    goto L_08AF1300;
L_08AF1668:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1884)));
    ctx.set_gpr(31, 0x08AF1694u);
    ctx.fpr[20] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1694u) goto L_08AF1694;
    return;
L_08AF1694:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF16A0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF16A0u) goto L_08AF16A0;
    return;
L_08AF16A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AF1718;
    }
    goto L_08AF16A8;
L_08AF16A8:
    ctx.set_gpr(31, 0x08AF16B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF16B0u) goto L_08AF16B0;
    return;
L_08AF16B0:
    ctx.set_gpr(31, 0x08AF16B8u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF16B8u) goto L_08AF16B8;
    return;
L_08AF16B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF16C4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF16C4u) goto L_08AF16C4;
    return;
L_08AF16C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF16D4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF16D4u) goto L_08AF16D4;
    return;
L_08AF16D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF1714;
      }
      goto L_08AF16E0;
    }
L_08AF16E0:
    ctx.set_gpr(31, 0x08AF16E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF16E8u) goto L_08AF16E8;
    return;
L_08AF16E8:
    ctx.set_gpr(31, 0x08AF16F0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF16F0u) goto L_08AF16F0;
    return;
L_08AF16F0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF16FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF16FCu) goto L_08AF16FC;
    return;
L_08AF16FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF1714u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF1714u) goto L_08AF1714;
    return;
L_08AF1714:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AF1718;
L_08AF1718:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF172C;
L_08AF172C:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    goto L_08AF1730;
L_08AF1730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF175C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF1784u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AF0ED4;
L_08AF1784:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF199C;
    }
    goto L_08AF1790;
L_08AF1790:
    ctx.set_gpr(31, 0x08AF1798u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF1300;
L_08AF1798:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1884)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1896)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF17C8u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF17C8u) goto L_08AF17C8;
    return;
L_08AF17C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF17D4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF17D4u) goto L_08AF17D4;
    return;
L_08AF17D4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16608u << 16u);
        goto L_08AF1874;
    }
    goto L_08AF17DC;
L_08AF17DC:
    ctx.set_gpr(31, 0x08AF17E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF17E4u) goto L_08AF17E4;
    return;
L_08AF17E4:
    ctx.set_gpr(31, 0x08AF17ECu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF17ECu) goto L_08AF17EC;
    return;
L_08AF17EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF17F8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF17F8u) goto L_08AF17F8;
    return;
L_08AF17F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1808u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1808u) goto L_08AF1808;
    return;
L_08AF1808:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF1870;
      }
      goto L_08AF1814;
    }
L_08AF1814:
    ctx.set_gpr(31, 0x08AF181Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF181Cu) goto L_08AF181C;
    return;
L_08AF181C:
    ctx.set_gpr(31, 0x08AF1824u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1824u) goto L_08AF1824;
    return;
L_08AF1824:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1830u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1830u) goto L_08AF1830;
    return;
L_08AF1830:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1840u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    goto L_08AF19BC;
L_08AF1840:
    ctx.set_gpr(31, 0x08AF1848u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1848u) goto L_08AF1848;
    return;
L_08AF1848:
    ctx.set_gpr(31, 0x08AF1850u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1850u) goto L_08AF1850;
    return;
L_08AF1850:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF185Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF185Cu) goto L_08AF185C;
    return;
L_08AF185C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF186Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    goto L_08AF0BF0;
L_08AF186C:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08AF1870;
L_08AF1870:
    ctx.set_gpr(2, 16608u << 16u);
    goto L_08AF1874;
L_08AF1874:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF1894u);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AF1894u) goto L_08AF1894;
    return;
L_08AF1894:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.set_gpr(31, 0x08AF18A4u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF18A4u) goto L_08AF18A4;
    return;
L_08AF18A4:
    ctx.set_gpr(31, 0x08AF18ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF18ACu) goto L_08AF18AC;
    return;
L_08AF18AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF18C8;
    }
    goto L_08AF18B4;
L_08AF18B4:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF18C8;
L_08AF18C8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF18DCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF18DCu) goto L_08AF18DC;
    return;
L_08AF18DC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[22];
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[21];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF190Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF190Cu) goto L_08AF190C;
    return;
L_08AF190C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AF1918u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1918u) goto L_08AF1918;
    return;
L_08AF1918:
    ctx.set_gpr(31, 0x08AF1920u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1920u) goto L_08AF1920;
    return;
L_08AF1920:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF193C;
    }
    goto L_08AF1928;
L_08AF1928:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF193C;
L_08AF193C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF1950u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF1950u) goto L_08AF1950;
    return;
L_08AF1950:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[22], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(31, 0x08AF1970u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1970u) goto L_08AF1970;
    return;
L_08AF1970:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF1980u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AF1980u) goto L_08AF1980;
    return;
L_08AF1980:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF1998u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF1998u) goto L_08AF1998;
    return;
L_08AF1998:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF199C;
L_08AF199C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF19BC:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 445u, 0x08846D4Cu>(ctx, &aot_mem); return;
L_08AF19EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(31, 0x08AF1A08u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1896));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A08u) goto L_08AF1A08;
    return;
L_08AF1A08:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF1A1Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A1Cu) goto L_08AF1A1C;
    return;
L_08AF1A1C:
    ctx.set_gpr(31, 0x08AF1A24u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A24u) goto L_08AF1A24;
    return;
L_08AF1A24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1A34u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A34u) goto L_08AF1A34;
    return;
L_08AF1A34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AF1A84;
    }
    goto L_08AF1A40;
L_08AF1A40:
    ctx.set_gpr(31, 0x08AF1A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A48u) goto L_08AF1A48;
    return;
L_08AF1A48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AF1A80u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A80u) goto L_08AF1A80;
    return;
L_08AF1A80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF1A84;
L_08AF1A84:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1896));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF1ABCu);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1ABCu) goto L_08AF1ABC;
    return;
L_08AF1ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1AC8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AC8u) goto L_08AF1AC8;
    return;
L_08AF1AC8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AF1B38;
    }
    goto L_08AF1AD0;
L_08AF1AD0:
    ctx.set_gpr(31, 0x08AF1AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AD8u) goto L_08AF1AD8;
    return;
L_08AF1AD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1AE4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AE4u) goto L_08AF1AE4;
    return;
L_08AF1AE4:
    ctx.set_gpr(31, 0x08AF1AECu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AECu) goto L_08AF1AEC;
    return;
L_08AF1AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1AFCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AFCu) goto L_08AF1AFC;
    return;
L_08AF1AFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF1B20;
      }
      goto L_08AF1B08;
    }
L_08AF1B08:
    ctx.set_gpr(31, 0x08AF1B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B10u) goto L_08AF1B10;
    return;
L_08AF1B10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF1B20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B20u) goto L_08AF1B20;
    return;
L_08AF1B20:
    ctx.set_gpr(31, 0x08AF1B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B28u) goto L_08AF1B28;
    return;
L_08AF1B28:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF1B34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B34u) goto L_08AF1B34;
    return;
L_08AF1B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF1B38;
L_08AF1B38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1B48:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-30));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1B6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AF1B9C;
    }
    goto L_08AF1B84;
L_08AF1B84:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AF1B98;
      }
      goto L_08AF1B90;
    }
L_08AF1B90:
    ctx.set_gpr(31, 0x08AF1B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B98u) goto L_08AF1B98;
    return;
L_08AF1B98:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AF1B9C;
L_08AF1B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF1BDC;
      }
      goto L_08AF1BCC;
    }
L_08AF1BCC:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AF1BE0;
    }
    goto L_08AF1BD4;
L_08AF1BD4:
    ctx.set_gpr(31, 0x08AF1BDCu);
    // nop
    goto L_08AF2040;
L_08AF1BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AF1BE0;
L_08AF1BE0:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08AF1BFC;
    }
    goto L_08AF1BE8;
L_08AF1BE8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1BF8;
      }
      goto L_08AF1BF0;
    }
L_08AF1BF0:
    ctx.set_gpr(31, 0x08AF1BF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF21E4;
L_08AF1BF8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AF1BFC;
L_08AF1BFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-30));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-30));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF1C38u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08AF21E4;
L_08AF1C38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF1C44u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 236u, 0x08A9D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF1C44u) goto L_08AF1C44;
    return;
L_08AF1C44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1C54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF1F2C;
      }
      goto L_08AF1C9C;
    }
L_08AF1C9C:
    ctx.set_gpr(31, 0x08AF1CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CA4u) goto L_08AF1CA4;
    return;
L_08AF1CA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1CB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CB0u) goto L_08AF1CB0;
    return;
L_08AF1CB0:
    ctx.set_gpr(31, 0x08AF1CB8u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CB8u) goto L_08AF1CB8;
    return;
L_08AF1CB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1CC8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CC8u) goto L_08AF1CC8;
    return;
L_08AF1CC8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF1CD4u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CD4u) goto L_08AF1CD4;
    return;
L_08AF1CD4:
    ctx.set_gpr(31, 0x08AF1CDCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CDCu) goto L_08AF1CDC;
    return;
L_08AF1CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF1CECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    goto L_08AF0BF0;
L_08AF1CEC:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(31, 0x08AF1D0Cu);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D0Cu) goto L_08AF1D0C;
    return;
L_08AF1D0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
      if (branch_taken) {
          goto L_08AF1D1C;
      }
      goto L_08AF1D14;
    }
L_08AF1D14:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08AF1D1C;
L_08AF1D1C:
    ctx.set_gpr(31, 0x08AF1D24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D24u) goto L_08AF1D24;
    return;
L_08AF1D24:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(31, 0x08AF1D38u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D38u) goto L_08AF1D38;
    return;
L_08AF1D38:
    ctx.set_gpr(31, 0x08AF1D40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1D40u) goto L_08AF1D40;
    return;
L_08AF1D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1D54;
      }
      goto L_08AF1D48;
    }
L_08AF1D48:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08AF1D54;
L_08AF1D54:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2824)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF1EFC;
    }
    goto L_08AF1D68;
L_08AF1D68:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
        goto L_08AF1D8C;
    }
    goto L_08AF1D7C;
L_08AF1D7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08AF1D8C;
L_08AF1D8C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AF1D98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D98u) goto L_08AF1D98;
    return;
L_08AF1D98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 17194u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF1EDC;
      }
      goto L_08AF1DD4;
    }
L_08AF1DD4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2828)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2828)));
    ctx.set_gpr(22, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[2];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08AF1DF8;
L_08AF1DF8:
    ctx.set_gpr(2, 17194u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(19, ctx.gpr[23] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[20]);
        goto L_08AF1E40;
    }
    goto L_08AF1E20;
L_08AF1E20:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    goto L_08AF1E24;
L_08AF1E24:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
        goto L_08AF1E24;
    }
    goto L_08AF1E3C;
L_08AF1E3C:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[20]);
    goto L_08AF1E40;
L_08AF1E40:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AF1E4Cu);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 169u, 0x0883CF04u>(ctx, &aot_mem) && ctx.pc == 0x08AF1E4Cu) goto L_08AF1E4C;
    return;
L_08AF1E4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08AF1E5C;
    }
    goto L_08AF1E54;
L_08AF1E54:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08AF1E5C;
L_08AF1E5C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF1E6Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1E6Cu) goto L_08AF1E6C;
    return;
L_08AF1E6C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF1E9C;
      }
      goto L_08AF1E84;
    }
L_08AF1E84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17194u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[15] = ctx.fpr[0] / ctx.fpr[21];
    goto L_08AF1E9C;
L_08AF1E9C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF1EACu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF1EACu) goto L_08AF1EAC;
    return;
L_08AF1EAC:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(31, 0x08AF1EC4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1EC4u) goto L_08AF1EC4;
    return;
L_08AF1EC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[20]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] != 0u) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        goto L_08AF1DF8;
    }
    goto L_08AF1EDC;
L_08AF1EDC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF1EF4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF1EF4u) goto L_08AF1EF4;
    return;
L_08AF1EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AF1F30;
      }
      goto L_08AF1EFC;
    }
L_08AF1EFC:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF1F10u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F10u) goto L_08AF1F10;
    return;
L_08AF1F10:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(31, 0x08AF1F2Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F2Cu) goto L_08AF1F2C;
    return;
L_08AF1F2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AF1F30;
L_08AF1F30:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF1F84u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F84u) goto L_08AF1F84;
    return;
L_08AF1F84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1F90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F90u) goto L_08AF1F90;
    return;
L_08AF1F90:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF2024;
    }
    goto L_08AF1F98;
L_08AF1F98:
    ctx.set_gpr(31, 0x08AF1FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FA0u) goto L_08AF1FA0;
    return;
L_08AF1FA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF1FACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FACu) goto L_08AF1FAC;
    return;
L_08AF1FAC:
    ctx.set_gpr(31, 0x08AF1FB4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FB4u) goto L_08AF1FB4;
    return;
L_08AF1FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1FC4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FC4u) goto L_08AF1FC4;
    return;
L_08AF1FC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF2020;
      }
      goto L_08AF1FD0;
    }
L_08AF1FD0:
    ctx.set_gpr(31, 0x08AF1FD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF2038;
L_08AF1FD8:
    ctx.set_gpr(31, 0x08AF1FE0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FE0u) goto L_08AF1FE0;
    return;
L_08AF1FE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF1FF0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08AF19BC;
L_08AF1FF0:
    ctx.set_gpr(31, 0x08AF1FF8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FF8u) goto L_08AF1FF8;
    return;
L_08AF1FF8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF2020u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF2020u) goto L_08AF2020;
    return;
L_08AF2020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF2024;
L_08AF2024:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2038:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF2060u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF2060u) goto L_08AF2060;
    return;
L_08AF2060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF206Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF206Cu) goto L_08AF206C;
    return;
L_08AF206C:
    ctx.set_gpr(31, 0x08AF2074u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2074u) goto L_08AF2074;
    return;
L_08AF2074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF2084u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF2084u) goto L_08AF2084;
    return;
L_08AF2084:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF21CC;
    }
    goto L_08AF2090;
L_08AF2090:
    ctx.set_gpr(31, 0x08AF2098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2098u) goto L_08AF2098;
    return;
L_08AF2098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF20C8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF20C8u) goto L_08AF20C8;
    return;
L_08AF20C8:
    ctx.set_gpr(31, 0x08AF20D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF20D0u) goto L_08AF20D0;
    return;
L_08AF20D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF20E0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF20E0u) goto L_08AF20E0;
    return;
L_08AF20E0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF20ECu);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF20ECu) goto L_08AF20EC;
    return;
L_08AF20EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF20FCu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF20FCu) goto L_08AF20FC;
    return;
L_08AF20FC:
    ctx.set_gpr(31, 0x08AF2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2104u) goto L_08AF2104;
    return;
L_08AF2104:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AF2130u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2130u) goto L_08AF2130;
    return;
L_08AF2130:
    ctx.set_gpr(31, 0x08AF2138u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AF2038;
L_08AF2138:
    ctx.set_gpr(31, 0x08AF2140u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2140u) goto L_08AF2140;
    return;
L_08AF2140:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 16384u << 16u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2840));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF2180u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF2180u) goto L_08AF2180;
    return;
L_08AF2180:
    ctx.set_gpr(31, 0x08AF2188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2188u) goto L_08AF2188;
    return;
L_08AF2188:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF219Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF219Cu) goto L_08AF219C;
    return;
L_08AF219C:
    ctx.set_gpr(31, 0x08AF21A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF21A4u) goto L_08AF21A4;
    return;
L_08AF21A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16387u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF21C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF21C0u) goto L_08AF21C0;
    return;
L_08AF21C0:
    ctx.set_gpr(31, 0x08AF21C8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AF1F68;
L_08AF21C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF21CC;
L_08AF21CC:
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
L_08AF21E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AF21F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF21F4u) goto L_08AF21F4;
    return;
L_08AF21F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF2200u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF2200u) goto L_08AF2200;
    return;
L_08AF2200:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AF2270;
    }
    goto L_08AF2208;
L_08AF2208:
    ctx.set_gpr(31, 0x08AF2210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF2210u) goto L_08AF2210;
    return;
L_08AF2210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF221Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF221Cu) goto L_08AF221C;
    return;
L_08AF221C:
    ctx.set_gpr(31, 0x08AF2224u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2224u) goto L_08AF2224;
    return;
L_08AF2224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF2234u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF2234u) goto L_08AF2234;
    return;
L_08AF2234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF2258;
      }
      goto L_08AF2240;
    }
L_08AF2240:
    ctx.set_gpr(31, 0x08AF2248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2248u) goto L_08AF2248;
    return;
L_08AF2248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF2258u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2258u) goto L_08AF2258;
    return;
L_08AF2258:
    ctx.set_gpr(31, 0x08AF2260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF2260u) goto L_08AF2260;
    return;
L_08AF2260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF226Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AF226Cu) goto L_08AF226C;
    return;
L_08AF226C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF2270;
L_08AF2270:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF227C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF22EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF2324;
      }
      goto L_08AF2308;
    }
L_08AF2308:
    ctx.set_gpr(31, 0x08AF2310u);
    // nop
    goto L_08AF2408;
L_08AF2310:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AF2328;
    }
    goto L_08AF231C;
L_08AF231C:
    ctx.set_gpr(31, 0x08AF2324u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF233C;
L_08AF2324:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AF2328;
L_08AF2328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF233C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AF2344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF2370;
      }
      goto L_08AF2368;
    }
L_08AF2368:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF23F0;
      }
      goto L_08AF2370;
    }
L_08AF2370:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
        goto L_08AF23A0;
    }
    goto L_08AF237C;
L_08AF237C:
    ctx.set_gpr(31, 0x08AF2384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2384u) goto L_08AF2384;
    return;
L_08AF2384:
    ctx.set_gpr(31, 0x08AF238Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF238Cu) goto L_08AF238C;
    return;
L_08AF238C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF2398u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2398u) goto L_08AF2398;
    return;
L_08AF2398:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    goto L_08AF23A0;
L_08AF23A0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF23ACu);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF23ACu) goto L_08AF23AC;
    return;
L_08AF23AC:
    ctx.set_gpr(31, 0x08AF23B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF23B4u) goto L_08AF23B4;
    return;
L_08AF23B4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF23C8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF23C8u) goto L_08AF23C8;
    return;
L_08AF23C8:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF23DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF23DCu) goto L_08AF23DC;
    return;
L_08AF23DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF23E8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08AF2474;
L_08AF23E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF23F0;
L_08AF23F0:
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
L_08AF2408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF2460;
      }
      goto L_08AF2424;
    }
L_08AF2424:
    ctx.set_gpr(31, 0x08AF242Cu);
    // nop
    goto L_08AF2474;
L_08AF242C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[16] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
        goto L_08AF245C;
    }
    goto L_08AF2438;
L_08AF2438:
    ctx.set_gpr(31, 0x08AF2440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2440u) goto L_08AF2440;
    return;
L_08AF2440:
    ctx.set_gpr(31, 0x08AF2448u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF2448u) goto L_08AF2448;
    return;
L_08AF2448:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF2454u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2454u) goto L_08AF2454;
    return;
L_08AF2454:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF245C;
L_08AF245C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AF2460;
L_08AF2460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AF24C8;
      }
      goto L_08AF24A4;
    }
L_08AF24A4:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AF24A8;
L_08AF24A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AF24B4u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    goto L_08AF2530;
L_08AF24B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF24A8;
      }
      goto L_08AF24C8;
    }
L_08AF24C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
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
L_08AF2530:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AF259C;
      }
      goto L_08AF256C;
    }
L_08AF256C:
    ctx.set_gpr(6, ~(ctx.gpr[5] | 0u));
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AF2574;
L_08AF2574:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF2574;
      }
      goto L_08AF259C;
    }
L_08AF259C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF25A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF25C0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF2624;
L_08AF25C0:
    ctx.set_gpr(31, 0x08AF25C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF2608;
L_08AF25C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF25D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AF25F0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AF2618;
L_08AF25F0:
    ctx.set_gpr(31, 0x08AF25F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF2634;
L_08AF25F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2608:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2618:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2624:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2634:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF267C;
L_08AF267C:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF2688u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08AF281C;
L_08AF2688:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
        goto L_08AF26AC;
    }
    goto L_08AF2698;
L_08AF2698:
    ctx.set_gpr(16, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF267C;
    }
    goto L_08AF26A8;
L_08AF26A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    goto L_08AF26AC;
L_08AF26AC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF272C;
    }
    goto L_08AF26B4;
L_08AF26B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(173));
        goto L_08AF2714;
    }
    goto L_08AF26C0;
L_08AF26C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(182));
        goto L_08AF2704;
    }
    goto L_08AF26CC;
L_08AF26CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(164));
        goto L_08AF26F8;
    }
    goto L_08AF26D8;
L_08AF26D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(191));
        goto L_08AF26EC;
    }
    goto L_08AF26E4;
L_08AF26E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF2724;
      }
      goto L_08AF26EC;
    }
L_08AF26EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF2720;
      }
      goto L_08AF26F8;
    }
L_08AF26F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF2720;
      }
      goto L_08AF2704;
    }
L_08AF2704:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF2720;
      }
      goto L_08AF2714;
    }
L_08AF2714:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF2720;
L_08AF2720:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF2724;
L_08AF2724:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AF27E0;
      }
      goto L_08AF272C;
    }
L_08AF272C:
    ctx.set_gpr(31, 0x08AF2734u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08AF2800;
L_08AF2734:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AF27DC;
    }
    goto L_08AF273C;
L_08AF273C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AF27DC;
    }
    goto L_08AF2748;
L_08AF2748:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2764:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF27D8;
      }
      goto L_08AF2778;
    }
L_08AF2778:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(209));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF27D8;
      }
      goto L_08AF278C;
    }
L_08AF278C:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(218));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF27D8;
      }
      goto L_08AF27A0;
    }
L_08AF27A0:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(227));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF27D8;
      }
      goto L_08AF27B4;
    }
L_08AF27B4:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(236));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF27D8;
      }
      goto L_08AF27C8;
    }
L_08AF27C8:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(245));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF27D8;
L_08AF27D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AF27DC;
L_08AF27DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF27E0;
L_08AF27E0:
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
L_08AF2800:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF281C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
        goto L_08AF285C;
    }
    goto L_08AF2854;
L_08AF2854:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF289C;
      }
      goto L_08AF285C;
    }
L_08AF285C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08AF289C;
L_08AF289C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF28A4:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
        goto L_08AF28D0;
    }
    goto L_08AF28AC;
L_08AF28AC:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF28F0;
      }
      goto L_08AF28D0;
    }
L_08AF28D0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ~(ctx.gpr[6] | 0u));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF28F0;
L_08AF28F0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF28F8:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2918:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF2974u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF29B4;
L_08AF2974:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF2990u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AF29A4;
L_08AF2990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29A4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29AC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29B4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08AF29EC;
      }
      goto L_08AF29C8;
    }
L_08AF29C8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AF29CC;
L_08AF29CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF29CC;
      }
      goto L_08AF29EC;
    }
L_08AF29EC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF29F4:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2A14:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2A34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08AF2A64;
      }
      goto L_08AF2A40;
    }
L_08AF2A40:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AF2A44;
L_08AF2A44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF2A44;
      }
      goto L_08AF2A64;
    }
L_08AF2A64:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2A6C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2A8C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2AAC:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF2B00;
      }
      goto L_08AF2AE8;
    }
L_08AF2AE8:
    ctx.set_gpr(31, 0x08AF2AF0u);
    // nop
    goto L_08AF25D8;
L_08AF2AF0:
    ctx.set_gpr(31, 0x08AF2AF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF2608;
L_08AF2AF8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AF2B08;
      }
      goto L_08AF2B00;
    }
L_08AF2B00:
    ctx.set_gpr(31, 0x08AF2B08u);
    // nop
    goto L_08AF25A4;
L_08AF2B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF2B64;
      }
      goto L_08AF2B44;
    }
L_08AF2B44:
    ctx.set_gpr(31, 0x08AF2B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B4Cu) goto L_08AF2B4C;
    return;
L_08AF2B4C:
    ctx.set_gpr(31, 0x08AF2B54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B54u) goto L_08AF2B54;
    return;
L_08AF2B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF2B60u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B60u) goto L_08AF2B60;
    return;
L_08AF2B60:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AF2B64;
L_08AF2B64:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF2B74u);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B74u) goto L_08AF2B74;
    return;
L_08AF2B74:
    ctx.set_gpr(31, 0x08AF2B7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B7Cu) goto L_08AF2B7C;
    return;
L_08AF2B7C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF2B90u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF2B90u) goto L_08AF2B90;
    return;
L_08AF2B90:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF2BA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2BA4u) goto L_08AF2BA4;
    return;
L_08AF2BA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF2BCC;
      }
      goto L_08AF2BAC;
    }
L_08AF2BAC:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AF2BB0;
L_08AF2BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AF2BBCu);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    goto L_08AF2530;
L_08AF2BBC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF2BB0;
      }
      goto L_08AF2BCC;
    }
L_08AF2BCC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
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
L_08AF2BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08AF2C2C;
      }
      goto L_08AF2BFC;
    }
L_08AF2BFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08AF2C00;
L_08AF2C00:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08AF2C1C;
    }
    goto L_08AF2C14;
L_08AF2C14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF2C2C;
      }
      goto L_08AF2C1C;
    }
L_08AF2C1C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF2C00;
      }
      goto L_08AF2C2C;
    }
L_08AF2C2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2C34:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(18)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2C50:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2C6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(780), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1424), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1428), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AF2CA8;
L_08AF2CA8:
    ctx.set_gpr(31, 0x08AF2CB0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF2D44;
L_08AF2CB0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08AF2CA8;
      }
      goto L_08AF2CC0;
    }
L_08AF2CC0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AF2CC8;
L_08AF2CC8:
    ctx.set_gpr(31, 0x08AF2CD0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(732));
    goto L_08AF2D38;
L_08AF2CD0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AF2CC8;
      }
      goto L_08AF2CE0;
    }
L_08AF2CE0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AF2CEC;
L_08AF2CEC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(784), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(796), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(800), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(804), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(808), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(812), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF2CEC;
      }
      goto L_08AF2D1C;
    }
L_08AF2D1C:
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
L_08AF2D38:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2D44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), 0u);
    ctx.set_gpr(31, 0x08AF2D84u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    goto L_08AF2E10;
L_08AF2D84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF2DC8;
L_08AF2DC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AF2DC8;
      }
      goto L_08AF2DEC;
    }
L_08AF2DEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(284), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E10:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 16256u << 16u);
    goto L_08AF2E18;
L_08AF2E18:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AF2E18;
      }
      goto L_08AF2E40;
    }
L_08AF2E40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AF2E78;
    }
    goto L_08AF2E60;
L_08AF2E60:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AF2E74;
      }
      goto L_08AF2E6C;
    }
L_08AF2E6C:
    ctx.set_gpr(31, 0x08AF2E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E74u) goto L_08AF2E74;
    return;
L_08AF2E74:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AF2E78;
L_08AF2E78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF2EAC;
      }
      goto L_08AF2EA4;
    }
L_08AF2EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AF2FF0;
      }
      goto L_08AF2EAC;
    }
L_08AF2EAC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(728)));
    goto L_08AF2EB4;
L_08AF2EB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(728), 0u);
        goto L_08AF2F84;
    }
    goto L_08AF2EC0;
L_08AF2EC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF2F50;
      }
      goto L_08AF2ECC;
    }
L_08AF2ECC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF2F1C;
      }
      goto L_08AF2ED8;
    }
L_08AF2ED8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2EE8;
      }
      goto L_08AF2EE0;
    }
L_08AF2EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2EE8;
    }
L_08AF2EE8:
    ctx.set_gpr(31, 0x08AF2EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EF0u) goto L_08AF2EF0;
    return;
L_08AF2EF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF2F04u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F04u) goto L_08AF2F04;
    return;
L_08AF2F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F0C;
    }
L_08AF2F0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(728)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(728), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F1C;
    }
L_08AF2F1C:
    ctx.set_gpr(31, 0x08AF2F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F24u) goto L_08AF2F24;
    return;
L_08AF2F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AF2F38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F38u) goto L_08AF2F38;
    return;
L_08AF2F38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F40;
    }
L_08AF2F40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(728)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(728), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F50;
    }
L_08AF2F50:
    ctx.set_gpr(31, 0x08AF2F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F58u) goto L_08AF2F58;
    return;
L_08AF2F58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AF2F6Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F6Cu) goto L_08AF2F6C;
    return;
L_08AF2F6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F74;
    }
L_08AF2F74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(728)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(728), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF2FC4;
      }
      goto L_08AF2F84;
    }
L_08AF2F84:
    ctx.set_gpr(31, 0x08AF2F8Cu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 27u, 0x0884819Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F8Cu) goto L_08AF2F8C;
    return;
L_08AF2F8C:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23040), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF2FA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF2FA4u) goto L_08AF2FA4;
    return;
L_08AF2FA4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23040)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF2FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF2FBCu) goto L_08AF2FBC;
    return;
L_08AF2FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF2FC4;
L_08AF2FC4:
    ctx.set_gpr(31, 0x08AF2FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FCCu) goto L_08AF2FCC;
    return;
L_08AF2FCC:
    ctx.set_gpr(31, 0x08AF2FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FD4u) goto L_08AF2FD4;
    return;
L_08AF2FD4:
    ctx.set_gpr(31, 0x08AF2FDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FDCu) goto L_08AF2FDC;
    return;
L_08AF2FDC:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(728)));
        goto L_08AF2EB4;
    }
    goto L_08AF2FEC;
L_08AF2FEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF2FF0;
L_08AF2FF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08AF30A4;
      }
      goto L_08AF304C;
    }
L_08AF304C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AF30A4;
      }
      goto L_08AF3058;
    }
L_08AF3058:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AF3060;
L_08AF3060:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF3094;
    }
    goto L_08AF3074;
L_08AF3074:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3090;
      }
      goto L_08AF307C;
    }
L_08AF307C:
    ctx.set_gpr(31, 0x08AF3084u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF22EC;
L_08AF3084:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF3090;
L_08AF3090:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF3094;
L_08AF3094:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF3060;
      }
      goto L_08AF30A4;
    }
L_08AF30A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF30D8;
    }
    goto L_08AF30B0;
L_08AF30B0:
    ctx.set_gpr(31, 0x08AF30B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AF30B8u) goto L_08AF30B8;
    return;
L_08AF30B8:
    ctx.set_gpr(31, 0x08AF30C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AF30C0u) goto L_08AF30C0;
    return;
L_08AF30C0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF30CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF30CCu) goto L_08AF30CC;
    return;
L_08AF30CC:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(284), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF30D8;
L_08AF30D8:
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
L_08AF30F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23040)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF312Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF312Cu) goto L_08AF312C;
    return;
L_08AF312C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3138u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08AF3138u) goto L_08AF3138;
    return;
L_08AF3138:
    ctx.set_gpr(2, 20078u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 27432u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23040)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AF3164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF3164u) goto L_08AF3164;
    return;
L_08AF3164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF31EC;
    }
    goto L_08AF3174;
L_08AF3174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF3180u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 898u, 0x08AF7B80u>(ctx, &aot_mem) && ctx.pc == 0x08AF3180u) goto L_08AF3180;
    return;
L_08AF3180:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AF3188;
L_08AF3188:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AF31DC;
    }
    goto L_08AF3194;
L_08AF3194:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF31D8;
      }
      goto L_08AF31A0;
    }
L_08AF31A0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF31B0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 58u, 0x08B004C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF31B0u) goto L_08AF31B0;
    return;
L_08AF31B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF31BCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 555u, 0x08AFEFE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF31BCu) goto L_08AF31BC;
    return;
L_08AF31BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF31CCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF3268;
L_08AF31CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF31D8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 501u, 0x08AF5FDCu>(ctx, &aot_mem) && ctx.pc == 0x08AF31D8u) goto L_08AF31D8;
    return;
L_08AF31D8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF31DC;
L_08AF31DC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08AF3188;
      }
      goto L_08AF31E8;
    }
L_08AF31E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF31EC;
L_08AF31EC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3204:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, 16816u << 16u);
    ctx.set_gpr(3, 49884u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3250;
      }
      goto L_08AF323C;
    }
L_08AF323C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF323C;
      }
      goto L_08AF3250;
    }
L_08AF3250:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3260;
      }
      goto L_08AF325C;
    }
L_08AF325C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AF3260;
L_08AF3260:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AF328Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    goto L_08AF3344;
L_08AF328C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF3298u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 373u, 0x08B01DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3298u) goto L_08AF3298;
    return;
L_08AF3298:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF3320;
    }
    goto L_08AF32C0;
L_08AF32C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF3330;
    }
    goto L_08AF32CC;
L_08AF32CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF332C;
      }
      goto L_08AF32D8;
    }
L_08AF32D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF330C;
    }
    goto L_08AF32E4;
L_08AF32E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF32F8;
    }
    goto L_08AF32F0;
L_08AF32F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF332C;
      }
      goto L_08AF32F8;
    }
L_08AF32F8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF3304u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF346C;
L_08AF3304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF332C;
      }
      goto L_08AF330C;
    }
L_08AF330C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF3318u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 94u, 0x08AF4598u>(ctx, &aot_mem) && ctx.pc == 0x08AF3318u) goto L_08AF3318;
    return;
L_08AF3318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF332C;
      }
      goto L_08AF3320;
    }
L_08AF3320:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF332Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 378u, 0x08AF5830u>(ctx, &aot_mem) && ctx.pc == 0x08AF332Cu) goto L_08AF332C;
    return;
L_08AF332C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF3330;
L_08AF3330:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF3384u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3384u) goto L_08AF3384;
    return;
L_08AF3384:
    ctx.set_gpr(31, 0x08AF338Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AF3464;
L_08AF338C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF3444;
    }
    goto L_08AF3394;
L_08AF3394:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF33A0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 143u, 0x08AFC960u>(ctx, &aot_mem) && ctx.pc == 0x08AF33A0u) goto L_08AF33A0;
    return;
L_08AF33A0:
    ctx.set_gpr(31, 0x08AF33A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF33A8u) goto L_08AF33A8;
    return;
L_08AF33A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF33B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(263));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF33B4u) goto L_08AF33B4;
    return;
L_08AF33B4:
    ctx.set_gpr(31, 0x08AF33BCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF33BCu) goto L_08AF33BC;
    return;
L_08AF33BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2696)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF33DCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF33DCu) goto L_08AF33DC;
    return;
L_08AF33DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF33E8u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF33E8u) goto L_08AF33E8;
    return;
L_08AF33E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF33F4;
      }
      goto L_08AF33F0;
    }
L_08AF33F0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AF33F4;
L_08AF33F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3420;
      }
      goto L_08AF33FC;
    }
L_08AF33FC:
    ctx.set_gpr(31, 0x08AF3404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3404u) goto L_08AF3404;
    return;
L_08AF3404:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3418u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3418u) goto L_08AF3418;
    return;
L_08AF3418:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF3450;
      }
      goto L_08AF3420;
    }
L_08AF3420:
    ctx.set_gpr(31, 0x08AF3428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3428u) goto L_08AF3428;
    return;
L_08AF3428:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF343Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF343Cu) goto L_08AF343C;
    return;
L_08AF343C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF344C;
      }
      goto L_08AF3444;
    }
L_08AF3444:
    ctx.set_gpr(31, 0x08AF344Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 387u, 0x08AFE56Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF344Cu) goto L_08AF344C;
    return;
L_08AF344C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF3450;
L_08AF3450:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3464:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF346C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
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
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(21, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08AF34ECu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF34ECu) goto L_08AF34EC;
    return;
L_08AF34EC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF34F8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF34F8u) goto L_08AF34F8;
    return;
L_08AF34F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(30, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AF3524u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF3524u) goto L_08AF3524;
    return;
L_08AF3524:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF3534u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 539u, 0x08AFEEF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3534u) goto L_08AF3534;
    return;
L_08AF3534:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3590;
      }
      goto L_08AF3540;
    }
L_08AF3540:
    ctx.set_gpr(31, 0x08AF3548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3548u) goto L_08AF3548;
    return;
L_08AF3548:
    ctx.set_gpr(31, 0x08AF3550u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3550u) goto L_08AF3550;
    return;
L_08AF3550:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-2568)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3574u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3574u) goto L_08AF3574;
    return;
L_08AF3574:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3588u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3588u) goto L_08AF3588;
    return;
L_08AF3588:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08AF35DC;
      }
      goto L_08AF3590;
    }
L_08AF3590:
    ctx.set_gpr(31, 0x08AF3598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3598u) goto L_08AF3598;
    return;
L_08AF3598:
    ctx.set_gpr(31, 0x08AF35A0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF35A0u) goto L_08AF35A0;
    return;
L_08AF35A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-2568)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF35C4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF35C4u) goto L_08AF35C4;
    return;
L_08AF35C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF35D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF35D8u) goto L_08AF35D8;
    return;
L_08AF35D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF35DC;
L_08AF35DC:
    ctx.set_gpr(31, 0x08AF35E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 93u, 0x08AF4590u>(ctx, &aot_mem) && ctx.pc == 0x08AF35E4u) goto L_08AF35E4;
    return;
L_08AF35E4:
    ctx.set_gpr(2, 16816u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_fpr_bits(26, ctx.fpr_bits(0));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16672u << 16u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF3640;
      }
      goto L_08AF3628;
    }
L_08AF3628:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 49824u << 16u);
        goto L_08AF3658;
    }
    goto L_08AF3638;
L_08AF3638:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(1, ctx.fpr_bits(2));
      if (branch_taken) {
          goto L_08AF3654;
      }
      goto L_08AF3640;
    }
L_08AF3640:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF3654;
      }
      goto L_08AF3650;
    }
L_08AF3650:
    ctx.set_fpr_bits(1, ctx.fpr_bits(2));
    goto L_08AF3654;
L_08AF3654:
    ctx.set_gpr(2, 49824u << 16u);
    goto L_08AF3658;
L_08AF3658:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17056u << 16u);
        goto L_08AF3674;
    }
    goto L_08AF366C;
L_08AF366C:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    ctx.set_gpr(2, 17056u << 16u);
    goto L_08AF3674;
L_08AF3674:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AF3690;
    }
    goto L_08AF3688;
L_08AF3688:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AF3690;
L_08AF3690:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AF36C4;
    }
    goto L_08AF36A0;
L_08AF36A0:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF36C0;
      }
      goto L_08AF36BC;
    }
L_08AF36BC:
    ctx.set_fpr_bits(1, ctx.fpr_bits(2));
    goto L_08AF36C0;
L_08AF36C0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AF36C4;
L_08AF36C4:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF36F4;
      }
      goto L_08AF36D4;
    }
L_08AF36D4:
    ctx.set_gpr(2, 48588u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF36F4;
      }
      goto L_08AF36F0;
    }
L_08AF36F0:
    ctx.set_fpr_bits(1, ctx.fpr_bits(2));
    goto L_08AF36F4;
L_08AF36F4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2040)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2064)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2088)));
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[3];
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2112)));
    ctx.fpr[2] = ctx.fpr[4] + ctx.fpr[2];
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.fpr[1] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF3770u);
    ctx.fpr[25] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 92u, 0x08AF4588u>(ctx, &aot_mem) && ctx.pc == 0x08AF3770u) goto L_08AF3770;
    return;
L_08AF3770:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF380C;
    }
    goto L_08AF3778;
L_08AF3778:
    ctx.set_gpr(31, 0x08AF3780u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x08AF4580u>(ctx, &aot_mem) && ctx.pc == 0x08AF3780u) goto L_08AF3780;
    return;
L_08AF3780:
    ctx.set_gpr(31, 0x08AF3788u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3788u) goto L_08AF3788;
    return;
L_08AF3788:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF379Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF379Cu) goto L_08AF379C;
    return;
L_08AF379C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16345u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 40960u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 39321u);
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(31, 0x08AF37BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF37BCu) goto L_08AF37BC;
    return;
L_08AF37BC:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF37D0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08AF37D0u) goto L_08AF37D0;
    return;
L_08AF37D0:
    ctx.set_gpr(5, 16376u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF37E4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF37E4u) goto L_08AF37E4;
    return;
L_08AF37E4:
    ctx.set_gpr(5, 16368u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF37F8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF37F8u) goto L_08AF37F8;
    return;
L_08AF37F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3804u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AF3804u) goto L_08AF3804;
    return;
L_08AF3804:
    ctx.set_fpr_bits(25, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF380C;
L_08AF380C:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF3818u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 90u, 0x08AF4578u>(ctx, &aot_mem) && ctx.pc == 0x08AF3818u) goto L_08AF3818;
    return;
L_08AF3818:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF3840;
    }
    goto L_08AF3820;
L_08AF3820:
    ctx.set_gpr(31, 0x08AF3828u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 89u, 0x08AF4570u>(ctx, &aot_mem) && ctx.pc == 0x08AF3828u) goto L_08AF3828;
    return;
L_08AF3828:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[24] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF3840;
L_08AF3840:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[0])) || ctx.fpr[24] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AF385C;
    }
    goto L_08AF3854;
L_08AF3854:
    ctx.set_fpr_bits(24, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AF385C;
L_08AF385C:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AF3874;
    }
    goto L_08AF386C;
L_08AF386C:
    ctx.set_fpr_bits(24, ctx.fpr_bits(0));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AF3874;
L_08AF3874:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF3BB4;
      }
      goto L_08AF3888;
    }
L_08AF3888:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF38A4;
      }
      goto L_08AF3894;
    }
L_08AF3894:
    ctx.set_gpr(31, 0x08AF389Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF389Cu) goto L_08AF389C;
    return;
L_08AF389C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF393C;
      }
      goto L_08AF38A4;
    }
L_08AF38A4:
    ctx.set_gpr(31, 0x08AF38ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF38ACu) goto L_08AF38AC;
    return;
L_08AF38AC:
    ctx.set_gpr(31, 0x08AF38B4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF38B4u) goto L_08AF38B4;
    return;
L_08AF38B4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF38D8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF38D8u) goto L_08AF38D8;
    return;
L_08AF38D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF38ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF38ECu) goto L_08AF38EC;
    return;
L_08AF38EC:
    ctx.set_gpr(31, 0x08AF38F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF38F4u) goto L_08AF38F4;
    return;
L_08AF38F4:
    ctx.set_gpr(31, 0x08AF38FCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF38FCu) goto L_08AF38FC;
    return;
L_08AF38FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3920u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3920u) goto L_08AF3920;
    return;
L_08AF3920:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3934u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3934u) goto L_08AF3934;
    return;
L_08AF3934:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AF3A1C;
      }
      goto L_08AF393C;
    }
L_08AF393C:
    ctx.set_gpr(31, 0x08AF3944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3944u) goto L_08AF3944;
    return;
L_08AF3944:
    ctx.set_gpr(31, 0x08AF394Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF394Cu) goto L_08AF394C;
    return;
L_08AF394C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3970u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3970u) goto L_08AF3970;
    return;
L_08AF3970:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3984u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3984u) goto L_08AF3984;
    return;
L_08AF3984:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF39A4u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF39A4u) goto L_08AF39A4;
    return;
L_08AF39A4:
    ctx.set_gpr(31, 0x08AF39ACu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF39ACu) goto L_08AF39AC;
    return;
L_08AF39AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF39B8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF39B8u) goto L_08AF39B8;
    return;
L_08AF39B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF39CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF39CCu) goto L_08AF39CC;
    return;
L_08AF39CC:
    ctx.set_gpr(31, 0x08AF39D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF39D4u) goto L_08AF39D4;
    return;
L_08AF39D4:
    ctx.set_gpr(31, 0x08AF39DCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF39DCu) goto L_08AF39DC;
    return;
L_08AF39DC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF39E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF39E8u) goto L_08AF39E8;
    return;
L_08AF39E8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF3A18u);
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3A18u) goto L_08AF3A18;
    return;
L_08AF3A18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08AF3A1C;
L_08AF3A1C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3A40;
      }
      goto L_08AF3A30;
    }
L_08AF3A30:
    ctx.set_gpr(31, 0x08AF3A38u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A38u) goto L_08AF3A38;
    return;
L_08AF3A38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3AD8;
      }
      goto L_08AF3A40;
    }
L_08AF3A40:
    ctx.set_gpr(31, 0x08AF3A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A48u) goto L_08AF3A48;
    return;
L_08AF3A48:
    ctx.set_gpr(31, 0x08AF3A50u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A50u) goto L_08AF3A50;
    return;
L_08AF3A50:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3A74u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A74u) goto L_08AF3A74;
    return;
L_08AF3A74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3A88u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3A88u) goto L_08AF3A88;
    return;
L_08AF3A88:
    ctx.set_gpr(31, 0x08AF3A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A90u) goto L_08AF3A90;
    return;
L_08AF3A90:
    ctx.set_gpr(31, 0x08AF3A98u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A98u) goto L_08AF3A98;
    return;
L_08AF3A98:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3ABCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3ABCu) goto L_08AF3ABC;
    return;
L_08AF3ABC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3AD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3AD0u) goto L_08AF3AD0;
    return;
L_08AF3AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3BB4;
      }
      goto L_08AF3AD8;
    }
L_08AF3AD8:
    ctx.set_gpr(31, 0x08AF3AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AE0u) goto L_08AF3AE0;
    return;
L_08AF3AE0:
    ctx.set_gpr(31, 0x08AF3AE8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AE8u) goto L_08AF3AE8;
    return;
L_08AF3AE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3B0Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B0Cu) goto L_08AF3B0C;
    return;
L_08AF3B0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3B20u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B20u) goto L_08AF3B20;
    return;
L_08AF3B20:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3B40u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B40u) goto L_08AF3B40;
    return;
L_08AF3B40:
    ctx.set_gpr(31, 0x08AF3B48u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B48u) goto L_08AF3B48;
    return;
L_08AF3B48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3B54u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B54u) goto L_08AF3B54;
    return;
L_08AF3B54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3B68u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B68u) goto L_08AF3B68;
    return;
L_08AF3B68:
    ctx.set_gpr(31, 0x08AF3B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B70u) goto L_08AF3B70;
    return;
L_08AF3B70:
    ctx.set_gpr(31, 0x08AF3B78u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B78u) goto L_08AF3B78;
    return;
L_08AF3B78:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF3B84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B84u) goto L_08AF3B84;
    return;
L_08AF3B84:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF3BB4u);
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3BB4u) goto L_08AF3BB4;
    return;
L_08AF3BB4:
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-2568));
    goto L_08AF3BC0;
L_08AF3BC0:
    ctx.set_gpr(31, 0x08AF3BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BC8u) goto L_08AF3BC8;
    return;
L_08AF3BC8:
    ctx.set_gpr(31, 0x08AF3BD0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BD0u) goto L_08AF3BD0;
    return;
L_08AF3BD0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3BE4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BE4u) goto L_08AF3BE4;
    return;
L_08AF3BE4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3BF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3BF8u) goto L_08AF3BF8;
    return;
L_08AF3BF8:
    ctx.set_gpr(31, 0x08AF3C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C00u) goto L_08AF3C00;
    return;
L_08AF3C00:
    ctx.set_gpr(31, 0x08AF3C08u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C08u) goto L_08AF3C08;
    return;
L_08AF3C08:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF3C1Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C1Cu) goto L_08AF3C1C;
    return;
L_08AF3C1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3C30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3C30u) goto L_08AF3C30;
    return;
L_08AF3C30:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF3BC0;
      }
      goto L_08AF3C40;
    }
L_08AF3C40:
    ctx.set_gpr(31, 0x08AF3C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C48u) goto L_08AF3C48;
    return;
L_08AF3C48:
    ctx.set_gpr(31, 0x08AF3C50u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C50u) goto L_08AF3C50;
    return;
L_08AF3C50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08AF3C5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C5Cu) goto L_08AF3C5C;
    return;
L_08AF3C5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3C70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3C70u) goto L_08AF3C70;
    return;
L_08AF3C70:
    ctx.set_gpr(31, 0x08AF3C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C78u) goto L_08AF3C78;
    return;
L_08AF3C78:
    ctx.set_gpr(31, 0x08AF3C80u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C80u) goto L_08AF3C80;
    return;
L_08AF3C80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AF3C8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C8Cu) goto L_08AF3C8C;
    return;
L_08AF3C8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3CA0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3CA0u) goto L_08AF3CA0;
    return;
L_08AF3CA0:
    ctx.set_gpr(31, 0x08AF3CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CA8u) goto L_08AF3CA8;
    return;
L_08AF3CA8:
    ctx.set_gpr(31, 0x08AF3CB0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CB0u) goto L_08AF3CB0;
    return;
L_08AF3CB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08AF3CBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CBCu) goto L_08AF3CBC;
    return;
L_08AF3CBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3CD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3CD0u) goto L_08AF3CD0;
    return;
L_08AF3CD0:
    ctx.set_gpr(31, 0x08AF3CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CD8u) goto L_08AF3CD8;
    return;
L_08AF3CD8:
    ctx.set_gpr(31, 0x08AF3CE0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CE0u) goto L_08AF3CE0;
    return;
L_08AF3CE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AF3CECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CECu) goto L_08AF3CEC;
    return;
L_08AF3CEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3D00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3D00u) goto L_08AF3D00;
    return;
L_08AF3D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AF3D0Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 453u, 0x08AFE944u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D0Cu) goto L_08AF3D0C;
    return;
L_08AF3D0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 85u, 0x08AF44F4u>(ctx, &aot_mem); return;
      }
      goto L_08AF3D18;
    }
L_08AF3D18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[26], 1u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AF3D44;
L_08AF3D44:
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(31, 0x08AF3D50u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AF3204;
L_08AF3D50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF44E4u>(ctx, &aot_mem); return;
    }
    goto L_08AF3D60;
L_08AF3D60:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AF3D80u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D80u) goto L_08AF3D80;
    return;
L_08AF3D80:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3D90u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D90u) goto L_08AF3D90;
    return;
L_08AF3D90:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[21];
    ctx.set_gpr(31, 0x08AF3DB4u);
    ctx.fpr[23] = ctx.fpr[0] / ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DB4u) goto L_08AF3DB4;
    return;
L_08AF3DB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3DC4u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    goto L_08AF19BC;
L_08AF3DC4:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2688));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08AF3E04u);
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[21];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E04u) goto L_08AF3E04;
    return;
L_08AF3E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF3E14u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E14u) goto L_08AF3E14;
    return;
L_08AF3E14:
    ctx.set_gpr(31, 0x08AF3E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E1Cu) goto L_08AF3E1C;
    return;
L_08AF3E1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF3E2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E2Cu) goto L_08AF3E2C;
    return;
L_08AF3E2C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, 17408u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = ctx.fpr[5] + ctx.fpr[20];
    ctx.set_gpr(2, 16281u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 39322u);
    ctx.set_gpr(2, 17280u << 16u);
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = ctx.fpr[5] + ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(4, ctx.fpu_float_to_word(ctx.fpr[4], 1u));
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_gpr(22, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(31, 0x08AF3EA0u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EA0u) goto L_08AF3EA0;
    return;
L_08AF3EA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08AF3F0C;
      }
      goto L_08AF3EB0;
    }
L_08AF3EB0:
    ctx.set_gpr(2, 16972u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3EC8;
    }
L_08AF3EC8:
    ctx.set_gpr(31, 0x08AF3ED0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 90u, 0x08AF4578u>(ctx, &aot_mem) && ctx.pc == 0x08AF3ED0u) goto L_08AF3ED0;
    return;
L_08AF3ED0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF3EF0;
    }
    goto L_08AF3ED8;
L_08AF3ED8:
    ctx.set_gpr(2, 16972u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[1];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3EF0;
    }
L_08AF3EF0:
    ctx.set_gpr(31, 0x08AF3EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EF8u) goto L_08AF3EF8;
    return;
L_08AF3EF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3F00;
    }
L_08AF3F00:
    ctx.set_gpr(2, 16972u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3F0C;
    }
L_08AF3F0C:
    ctx.set_gpr(31, 0x08AF3F14u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 90u, 0x08AF4578u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F14u) goto L_08AF3F14;
    return;
L_08AF3F14:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF3F80;
    }
    goto L_08AF3F1C;
L_08AF3F1C:
    ctx.set_gpr(31, 0x08AF3F24u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 89u, 0x08AF4570u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F24u) goto L_08AF3F24;
    return;
L_08AF3F24:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
        goto L_08AF3F58;
    }
    goto L_08AF3F50;
L_08AF3F50:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    goto L_08AF3F58;
L_08AF3F58:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3F80;
    }
L_08AF3F80:
    ctx.set_gpr(31, 0x08AF3F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F88u) goto L_08AF3F88;
    return;
L_08AF3F88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3F94;
      }
      goto L_08AF3F90;
    }
L_08AF3F90:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AF3F94;
L_08AF3F94:
    ctx.set_gpr(31, 0x08AF3F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F9Cu) goto L_08AF3F9C;
    return;
L_08AF3F9C:
    ctx.set_gpr(31, 0x08AF3FA4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FA4u) goto L_08AF3FA4;
    return;
L_08AF3FA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3FB0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FB0u) goto L_08AF3FB0;
    return;
L_08AF3FB0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF3FC8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FC8u) goto L_08AF3FC8;
    return;
L_08AF3FC8:
    ctx.set_gpr(31, 0x08AF3FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FD0u) goto L_08AF3FD0;
    return;
L_08AF3FD0:
    ctx.set_gpr(31, 0x08AF3FD8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FD8u) goto L_08AF3FD8;
    return;
L_08AF3FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF3FE4u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FE4u) goto L_08AF3FE4;
    return;
L_08AF3FE4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF3FFCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FFCu) goto L_08AF3FFC;
    return;
L_08AF3FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.pc = 0x08AF4000u; return;
}

void recomp_unit_0187(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0187_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_187(Runtime &runtime) {
    runtime.register_generated_unit(187u, 0x08AF0000u, 16384u, &recomp_unit_0187, &recomp_unit_0187_entry);
    runtime.register_function(0x08AF0000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF000Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0018u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0024u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0030u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF005Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0098u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0158u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0170u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0188u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0210u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF021Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF022Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF023Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0248u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0254u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF027Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF029Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0310u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0314u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF032Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0344u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF034Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF037Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0410u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0434u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF043Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0440u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0458u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0480u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0488u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0490u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0534u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF053Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF054Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0554u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF057Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0590u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0598u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0608u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF061Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0624u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0644u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF064Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0654u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF066Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF068Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0694u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0708u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0710u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0728u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0754u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF075Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0790u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0800u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0808u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF082Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0844u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0874u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF087Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0898u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0914u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0924u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0928u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0968u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0974u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF097Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF098Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0998u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ADCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ED4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1004u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF100Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1014u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1020u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1030u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF103Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1044u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF104Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1058u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1068u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1070u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF107Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1104u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1118u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF112Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF114Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1154u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1160u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1168u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1170u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1178u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1184u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1194u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1200u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1208u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1238u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF124Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1254u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF125Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1278u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1284u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF128Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1294u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1300u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1308u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF135Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1360u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1378u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1394u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1408u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1414u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF141Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1424u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1430u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1440u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF144Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1470u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1484u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1508u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF151Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1530u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1540u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF154Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF155Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1568u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1570u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1578u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1584u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF159Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF160Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF161Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1644u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1654u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF165Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1660u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1668u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1694u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1718u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF172Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1730u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF175Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1790u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1798u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1808u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1814u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF181Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1824u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1830u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1848u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF185Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF186Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1870u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1874u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF190Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1918u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1920u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1928u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF193Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1950u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1970u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1980u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1998u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF199Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1ABCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2020u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2024u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2038u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2060u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF206Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2084u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2098u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2104u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2188u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF219Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2200u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2208u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2210u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF221Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2224u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2234u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2240u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2248u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF226Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2270u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF227Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2308u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2310u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF231Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2328u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF233Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2344u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2368u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF237Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2384u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF238Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2408u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2424u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF242Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2438u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2440u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF245Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2460u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2530u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2560u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF256Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF259Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2608u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2618u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2624u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2634u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2640u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF267Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2688u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2698u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2720u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2724u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF272Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2734u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF273Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2748u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2778u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF278Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2800u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF281Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF285Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF289Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2918u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2938u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2974u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2990u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2ACCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2ED8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3004u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF304Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3058u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3060u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF307Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3084u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3094u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF312Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3164u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3174u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3188u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3194u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3204u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF323Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3250u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF325Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF328Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3298u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF330Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3318u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3320u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF332Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3344u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3384u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF338Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3394u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3404u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3428u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF343Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF344Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3450u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3464u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF346Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3524u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3534u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3540u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3548u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3550u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3588u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3590u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3598u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3640u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3650u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3654u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF366Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3674u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3688u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3690u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3778u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3780u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF379Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3804u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF380Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3820u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3828u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF385Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF386Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3874u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3888u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF389Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3920u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3934u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF393Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF394Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3970u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3984u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3ABCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3ED0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3ED8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FFCu, &recomp_unit_0187, "recomp_unit_0187");
}
} // namespace psprecomp
