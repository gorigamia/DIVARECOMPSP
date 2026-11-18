#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0015[4095] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 7, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0,
    13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27,
    0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 49, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0,
    74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 86, 0, 87, 0, 0, 0, 88, 0, 0,
    0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0,
    108, 0, 109, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 116, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 128,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 137, 0, 0, 138, 0, 139, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146,
    147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171,
    0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191,
    0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0,
    229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0,
    0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0,
    0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0,
    266, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288,
    0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308,
    0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    326, 0, 327, 0, 0, 328, 0, 329, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 336, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0,
    0, 346, 0, 347, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 354, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0,
    0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 380,
    0, 381, 0, 0, 0, 0, 382, 383, 0, 384, 0, 0, 385, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 390, 0, 391, 392, 0, 393, 394,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 396, 0, 397, 398,
    0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0,
    427, 0, 0, 428, 0, 429, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442,
    0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475,
    0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0,
    0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515,
    0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0,
    0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537,
    0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 544, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0,
    550, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 558, 0, 559, 0,
    0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568,
    0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0,
    577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 586, 0,
    0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0,
    597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0,
    0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 0,
    613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 621, 622, 0, 0, 0, 0, 623,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 627, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629,
    0, 0, 0, 630, 0, 0, 631, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 640, 0, 0, 0,
    0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 0, 645, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0,
    0, 652, 0, 0, 0, 0, 0, 653, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 673, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 677, 0,
    0, 678, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 682, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 686, 0, 687, 688, 0, 0, 0, 0, 689, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 696, 697, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700,
    0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 703, 0, 0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 706, 707, 0, 0, 708, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0,
    0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720, 0,
    0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 728, 0,
    0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738,
    0, 0, 0, 739, 0, 0, 0, 740, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 0,
    0, 0, 0, 746, 747, 0, 748, 0, 0, 0, 0, 0, 749, 750, 0, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755,
    0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 761, 762, 0, 0, 0, 0, 0, 0, 0, 763,
    0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0,
    771, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0,
    0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0,
    789, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0,
    0, 797, 0, 798, 0, 0, 0, 0, 0, 799, 800, 0, 801, 0, 0, 0, 0, 0, 802, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 806, 0, 807,
    0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 815, 0, 0,
    0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 0, 822,
    0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 828, 0, 829, 0, 0, 0, 830,
    0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0, 0,
    0, 0, 842, 843, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 852,
    0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 857, 858, 0, 0, 0, 859, 0, 860, 0, 861, 0, 862, 0, 0,
    0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 868, 869, 0, 870, 0, 0, 0, 0, 871, 0, 0,
    0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 878, 0, 0, 879, 0,
    0, 0, 0, 0, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 886, 0, 0, 0, 887, 0, 888, 0, 889, 0, 890, 0, 891, 0, 0,
    0, 892, 893, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 901, 0, 902, 0, 903, 0, 0, 904, 905, 0, 906,
    0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 0, 910, 0, 911, 0, 0, 912, 0, 913, 0, 914, 0, 0, 0, 0, 915, 0, 916, 0, 0, 917, 0,
    0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 921, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 0, 0,
    0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 929, 0, 0, 930, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 932, 0, 0,
    0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 937, 0, 0, 0, 938, 0,
    0, 0, 0, 0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 946, 0, 947, 0,
    0, 948, 0, 949, 0, 0, 950, 0, 951, 0, 0, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 954, 0, 0, 955, 0, 0, 0, 956, 0, 0, 957, 0, 0, 958, 0, 959, 0, 960, 0, 0, 961, 0, 962, 0, 0, 0, 963, 0, 964, 0, 0,
    965, 0, 0, 966, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 969, 0, 970,
};
void recomp_unit_0015_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08840000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0015[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08840000;
    case 2u: goto L_08840008;
    case 3u: goto L_08840010;
    case 4u: goto L_08840024;
    case 5u: goto L_0884002C;
    case 6u: goto L_08840034;
    case 7u: goto L_08840048;
    case 8u: goto L_0884004C;
    case 9u: goto L_08840054;
    case 10u: goto L_0884005C;
    case 11u: goto L_08840064;
    case 12u: goto L_08840074;
    case 13u: goto L_08840080;
    case 14u: goto L_08840088;
    case 15u: goto L_08840094;
    case 16u: goto L_0884009C;
    case 17u: goto L_088400A4;
    case 18u: goto L_088400AC;
    case 19u: goto L_088400B4;
    case 20u: goto L_088400BC;
    case 21u: goto L_088400C4;
    case 22u: goto L_088400CC;
    case 23u: goto L_088400DC;
    case 24u: goto L_088400E4;
    case 25u: goto L_088400EC;
    case 26u: goto L_088400F4;
    case 27u: goto L_088400FC;
    case 28u: goto L_08840114;
    case 29u: goto L_0884011C;
    case 30u: goto L_08840124;
    case 31u: goto L_0884013C;
    case 32u: goto L_08840140;
    case 33u: goto L_08840148;
    case 34u: goto L_08840150;
    case 35u: goto L_08840158;
    case 36u: goto L_08840168;
    case 37u: goto L_08840180;
    case 38u: goto L_0884019C;
    case 39u: goto L_088401F4;
    case 40u: goto L_08840204;
    case 41u: goto L_08840218;
    case 42u: goto L_08840224;
    case 43u: goto L_08840234;
    case 44u: goto L_08840244;
    case 45u: goto L_08840254;
    case 46u: goto L_0884025C;
    case 47u: goto L_08840270;
    case 48u: goto L_08840278;
    case 49u: goto L_08840284;
    case 50u: goto L_08840298;
    case 51u: goto L_0884029C;
    case 52u: goto L_088402A4;
    case 53u: goto L_088402B8;
    case 54u: goto L_088402C8;
    case 55u: goto L_088402D8;
    case 56u: goto L_088402DC;
    case 57u: goto L_088402E4;
    case 58u: goto L_08840318;
    case 59u: goto L_08840324;
    case 60u: goto L_08840334;
    case 61u: goto L_08840344;
    case 62u: goto L_08840354;
    case 63u: goto L_0884035C;
    case 64u: goto L_08840390;
    case 65u: goto L_08840394;
    case 66u: goto L_0884039C;
    case 67u: goto L_088403A4;
    case 68u: goto L_088403B8;
    case 69u: goto L_088403BC;
    case 70u: goto L_088403DC;
    case 71u: goto L_088403E8;
    case 72u: goto L_088403F0;
    case 73u: goto L_088403F8;
    case 74u: goto L_08840400;
    case 75u: goto L_08840408;
    case 76u: goto L_08840410;
    case 77u: goto L_08840418;
    case 78u: goto L_08840420;
    case 79u: goto L_08840428;
    case 80u: goto L_08840430;
    case 81u: goto L_08840438;
    case 82u: goto L_08840440;
    case 83u: goto L_08840448;
    case 84u: goto L_08840450;
    case 85u: goto L_08840458;
    case 86u: goto L_0884045C;
    case 87u: goto L_08840464;
    case 88u: goto L_08840474;
    case 89u: goto L_08840488;
    case 90u: goto L_08840490;
    case 91u: goto L_08840498;
    case 92u: goto L_088404A0;
    case 93u: goto L_088404A8;
    case 94u: goto L_088404B0;
    case 95u: goto L_088404B8;
    case 96u: goto L_088404C0;
    case 97u: goto L_088404E0;
    case 98u: goto L_0884050C;
    case 99u: goto L_0884051C;
    case 100u: goto L_08840580;
    case 101u: goto L_088405CC;
    case 102u: goto L_088405DC;
    case 103u: goto L_0884060C;
    case 104u: goto L_0884063C;
    case 105u: goto L_08840650;
    case 106u: goto L_0884066C;
    case 107u: goto L_08840674;
    case 108u: goto L_08840680;
    case 109u: goto L_08840688;
    case 110u: goto L_0884068C;
    case 111u: goto L_088406A0;
    case 112u: goto L_088406BC;
    case 113u: goto L_088406C4;
    case 114u: goto L_088406D0;
    case 115u: goto L_088406D8;
    case 116u: goto L_088406DC;
    case 117u: goto L_088406F0;
    case 118u: goto L_0884070C;
    case 119u: goto L_08840714;
    case 120u: goto L_08840720;
    case 121u: goto L_08840728;
    case 122u: goto L_0884072C;
    case 123u: goto L_08840740;
    case 124u: goto L_0884075C;
    case 125u: goto L_08840764;
    case 126u: goto L_08840770;
    case 127u: goto L_08840778;
    case 128u: goto L_0884077C;
    case 129u: goto L_08840790;
    case 130u: goto L_088407AC;
    case 131u: goto L_088407B4;
    case 132u: goto L_088407C0;
    case 133u: goto L_088407C8;
    case 134u: goto L_088407CC;
    case 135u: goto L_088407E0;
    case 136u: goto L_088407FC;
    case 137u: goto L_08840808;
    case 138u: goto L_08840814;
    case 139u: goto L_0884081C;
    case 140u: goto L_08840820;
    case 141u: goto L_08840834;
    case 142u: goto L_08840850;
    case 143u: goto L_0884085C;
    case 144u: goto L_08840868;
    case 145u: goto L_08840874;
    case 146u: goto L_0884087C;
    case 147u: goto L_08840880;
    case 148u: goto L_08840894;
    case 149u: goto L_088408B0;
    case 150u: goto L_088408B8;
    case 151u: goto L_088408C4;
    case 152u: goto L_088408CC;
    case 153u: goto L_088408D0;
    case 154u: goto L_088408E4;
    case 155u: goto L_088408FC;
    case 156u: goto L_08840910;
    case 157u: goto L_08840924;
    case 158u: goto L_0884092C;
    case 159u: goto L_08840940;
    case 160u: goto L_0884094C;
    case 161u: goto L_08840958;
    case 162u: goto L_0884096C;
    case 163u: goto L_08840980;
    case 164u: goto L_0884098C;
    case 165u: goto L_08840998;
    case 166u: goto L_088409A4;
    case 167u: goto L_088409B0;
    case 168u: goto L_088409BC;
    case 169u: goto L_088409D8;
    case 170u: goto L_088409F0;
    case 171u: goto L_088409FC;
    case 172u: goto L_08840A08;
    case 173u: goto L_08840A14;
    case 174u: goto L_08840A20;
    case 175u: goto L_08840A2C;
    case 176u: goto L_08840A38;
    case 177u: goto L_08840A44;
    case 178u: goto L_08840A4C;
    case 179u: goto L_08840A50;
    case 180u: goto L_08840A64;
    case 181u: goto L_08840A90;
    case 182u: goto L_08840A9C;
    case 183u: goto L_08840AA4;
    case 184u: goto L_08840AB0;
    case 185u: goto L_08840AB8;
    case 186u: goto L_08840AC4;
    case 187u: goto L_08840AD8;
    case 188u: goto L_08840AE0;
    case 189u: goto L_08840AEC;
    case 190u: goto L_08840AF4;
    case 191u: goto L_08840AFC;
    case 192u: goto L_08840B04;
    case 193u: goto L_08840B10;
    case 194u: goto L_08840B18;
    case 195u: goto L_08840B24;
    case 196u: goto L_08840B2C;
    case 197u: goto L_08840B38;
    case 198u: goto L_08840B40;
    case 199u: goto L_08840B4C;
    case 200u: goto L_08840B54;
    case 201u: goto L_08840B60;
    case 202u: goto L_08840B68;
    case 203u: goto L_08840B84;
    case 204u: goto L_08840B90;
    case 205u: goto L_08840B98;
    case 206u: goto L_08840BB8;
    case 207u: goto L_08840BC4;
    case 208u: goto L_08840BCC;
    case 209u: goto L_08840BEC;
    case 210u: goto L_08840BF8;
    case 211u: goto L_08840C00;
    case 212u: goto L_08840C24;
    case 213u: goto L_08840C30;
    case 214u: goto L_08840C38;
    case 215u: goto L_08840C58;
    case 216u: goto L_08840C64;
    case 217u: goto L_08840C6C;
    case 218u: goto L_08840C90;
    case 219u: goto L_08840C9C;
    case 220u: goto L_08840CA4;
    case 221u: goto L_08840CB0;
    case 222u: goto L_08840CBC;
    case 223u: goto L_08840CC4;
    case 224u: goto L_08840CCC;
    case 225u: goto L_08840CD8;
    case 226u: goto L_08840CE4;
    case 227u: goto L_08840CEC;
    case 228u: goto L_08840CF8;
    case 229u: goto L_08840D00;
    case 230u: goto L_08840D0C;
    case 231u: goto L_08840D14;
    case 232u: goto L_08840D20;
    case 233u: goto L_08840D28;
    case 234u: goto L_08840D34;
    case 235u: goto L_08840D3C;
    case 236u: goto L_08840D48;
    case 237u: goto L_08840D50;
    case 238u: goto L_08840D6C;
    case 239u: goto L_08840D78;
    case 240u: goto L_08840D84;
    case 241u: goto L_08840D90;
    case 242u: goto L_08840DAC;
    case 243u: goto L_08840DB8;
    case 244u: goto L_08840DC4;
    case 245u: goto L_08840DD0;
    case 246u: goto L_08840DEC;
    case 247u: goto L_08840DF8;
    case 248u: goto L_08840E04;
    case 249u: goto L_08840E10;
    case 250u: goto L_08840E2C;
    case 251u: goto L_08840E38;
    case 252u: goto L_08840E44;
    case 253u: goto L_08840E50;
    case 254u: goto L_08840E6C;
    case 255u: goto L_08840E78;
    case 256u: goto L_08840E84;
    case 257u: goto L_08840E90;
    case 258u: goto L_08840EAC;
    case 259u: goto L_08840EB8;
    case 260u: goto L_08840EC4;
    case 261u: goto L_08840ED0;
    case 262u: goto L_08840ED8;
    case 263u: goto L_08840EE4;
    case 264u: goto L_08840EF0;
    case 265u: goto L_08840EF8;
    case 266u: goto L_08840F00;
    case 267u: goto L_08840F0C;
    case 268u: goto L_08840F18;
    case 269u: goto L_08840F20;
    case 270u: goto L_08840F2C;
    case 271u: goto L_08840F34;
    case 272u: goto L_08840F40;
    case 273u: goto L_08840F48;
    case 274u: goto L_08840F54;
    case 275u: goto L_08840F60;
    case 276u: goto L_08840F6C;
    case 277u: goto L_08840F74;
    case 278u: goto L_08840F88;
    case 279u: goto L_08840F94;
    case 280u: goto L_08840F9C;
    case 281u: goto L_08840FA8;
    case 282u: goto L_08840FB0;
    case 283u: goto L_08840FBC;
    case 284u: goto L_08840FC4;
    case 285u: goto L_08840FD0;
    case 286u: goto L_08840FD8;
    case 287u: goto L_08840FF4;
    case 288u: goto L_08840FFC;
    case 289u: goto L_08841014;
    case 290u: goto L_08841020;
    case 291u: goto L_08841028;
    case 292u: goto L_0884103C;
    case 293u: goto L_08841048;
    case 294u: goto L_08841050;
    case 295u: goto L_0884105C;
    case 296u: goto L_0884107C;
    case 297u: goto L_08841084;
    case 298u: goto L_0884108C;
    case 299u: goto L_08841094;
    case 300u: goto L_0884109C;
    case 301u: goto L_088410A8;
    case 302u: goto L_088410B0;
    case 303u: goto L_088410BC;
    case 304u: goto L_088410D0;
    case 305u: goto L_088410D8;
    case 306u: goto L_088410E4;
    case 307u: goto L_088410F0;
    case 308u: goto L_088410FC;
    case 309u: goto L_08841108;
    case 310u: goto L_08841114;
    case 311u: goto L_08841120;
    case 312u: goto L_0884112C;
    case 313u: goto L_08841138;
    case 314u: goto L_08841144;
    case 315u: goto L_08841150;
    case 316u: goto L_0884115C;
    case 317u: goto L_08841168;
    case 318u: goto L_08841174;
    case 319u: goto L_08841194;
    case 320u: goto L_088411B0;
    case 321u: goto L_088411B8;
    case 322u: goto L_088411C4;
    case 323u: goto L_088411CC;
    case 324u: goto L_088411D0;
    case 325u: goto L_088411E4;
    case 326u: goto L_08841200;
    case 327u: goto L_08841208;
    case 328u: goto L_08841214;
    case 329u: goto L_0884121C;
    case 330u: goto L_08841220;
    case 331u: goto L_08841234;
    case 332u: goto L_08841250;
    case 333u: goto L_08841258;
    case 334u: goto L_08841264;
    case 335u: goto L_0884126C;
    case 336u: goto L_08841270;
    case 337u: goto L_08841284;
    case 338u: goto L_088412A0;
    case 339u: goto L_088412A8;
    case 340u: goto L_088412B4;
    case 341u: goto L_088412BC;
    case 342u: goto L_088412C0;
    case 343u: goto L_088412D4;
    case 344u: goto L_088412F0;
    case 345u: goto L_088412F8;
    case 346u: goto L_08841304;
    case 347u: goto L_0884130C;
    case 348u: goto L_08841310;
    case 349u: goto L_08841324;
    case 350u: goto L_08841340;
    case 351u: goto L_08841348;
    case 352u: goto L_08841354;
    case 353u: goto L_0884135C;
    case 354u: goto L_08841360;
    case 355u: goto L_08841374;
    case 356u: goto L_08841394;
    case 357u: goto L_088413A8;
    case 358u: goto L_088413B0;
    case 359u: goto L_088413B8;
    case 360u: goto L_088413D8;
    case 361u: goto L_088413E4;
    case 362u: goto L_088413F0;
    case 363u: goto L_08841404;
    case 364u: goto L_0884140C;
    case 365u: goto L_08841414;
    case 366u: goto L_0884141C;
    case 367u: goto L_08841424;
    case 368u: goto L_0884142C;
    case 369u: goto L_08841440;
    case 370u: goto L_08841458;
    case 371u: goto L_08841460;
    case 372u: goto L_0884146C;
    case 373u: goto L_08841488;
    case 374u: goto L_08841498;
    case 375u: goto L_088414AC;
    case 376u: goto L_088414BC;
    case 377u: goto L_088414CC;
    case 378u: goto L_088414E4;
    case 379u: goto L_088414F8;
    case 380u: goto L_088414FC;
    case 381u: goto L_08841504;
    case 382u: goto L_08841518;
    case 383u: goto L_0884151C;
    case 384u: goto L_08841524;
    case 385u: goto L_08841530;
    case 386u: goto L_08841534;
    case 387u: goto L_0884153C;
    case 388u: goto L_08841554;
    case 389u: goto L_08841560;
    case 390u: goto L_08841564;
    case 391u: goto L_0884156C;
    case 392u: goto L_08841570;
    case 393u: goto L_08841578;
    case 394u: goto L_0884157C;
    case 395u: goto L_088415EC;
    case 396u: goto L_088415F0;
    case 397u: goto L_088415F8;
    case 398u: goto L_088415FC;
    case 399u: goto L_08841618;
    case 400u: goto L_08841620;
    case 401u: goto L_0884164C;
    case 402u: goto L_08841650;
    case 403u: goto L_08841660;
    case 404u: goto L_08841670;
    case 405u: goto L_0884168C;
    case 406u: goto L_08841694;
    case 407u: goto L_088416B0;
    case 408u: goto L_088416B8;
    case 409u: goto L_088416C4;
    case 410u: goto L_088416CC;
    case 411u: goto L_088416D0;
    case 412u: goto L_088416E4;
    case 413u: goto L_088416FC;
    case 414u: goto L_08841714;
    case 415u: goto L_0884172C;
    case 416u: goto L_08841740;
    case 417u: goto L_08841760;
    case 418u: goto L_08841774;
    case 419u: goto L_0884177C;
    case 420u: goto L_08841790;
    case 421u: goto L_088417A8;
    case 422u: goto L_088417B0;
    case 423u: goto L_088417BC;
    case 424u: goto L_088417CC;
    case 425u: goto L_088417DC;
    case 426u: goto L_088417F8;
    case 427u: goto L_08841800;
    case 428u: goto L_0884180C;
    case 429u: goto L_08841814;
    case 430u: goto L_08841818;
    case 431u: goto L_0884182C;
    case 432u: goto L_08841844;
    case 433u: goto L_0884185C;
    case 434u: goto L_08841874;
    case 435u: goto L_08841888;
    case 436u: goto L_08841890;
    case 437u: goto L_088418B0;
    case 438u: goto L_088418C4;
    case 439u: goto L_088418CC;
    case 440u: goto L_088418E0;
    case 441u: goto L_088418F4;
    case 442u: goto L_088418FC;
    case 443u: goto L_08841904;
    case 444u: goto L_0884190C;
    case 445u: goto L_08841920;
    case 446u: goto L_08841938;
    case 447u: goto L_08841940;
    case 448u: goto L_0884194C;
    case 449u: goto L_08841954;
    case 450u: goto L_08841980;
    case 451u: goto L_08841990;
    case 452u: goto L_0884199C;
    case 453u: goto L_088419A8;
    case 454u: goto L_088419CC;
    case 455u: goto L_088419D4;
    case 456u: goto L_088419DC;
    case 457u: goto L_088419E4;
    case 458u: goto L_088419F8;
    case 459u: goto L_08841A10;
    case 460u: goto L_08841A18;
    case 461u: goto L_08841A24;
    case 462u: goto L_08841A2C;
    case 463u: goto L_08841A34;
    case 464u: goto L_08841A3C;
    case 465u: goto L_08841A44;
    case 466u: goto L_08841A4C;
    case 467u: goto L_08841A60;
    case 468u: goto L_08841A74;
    case 469u: goto L_08841A7C;
    case 470u: goto L_08841AA8;
    case 471u: goto L_08841AB8;
    case 472u: goto L_08841AC4;
    case 473u: goto L_08841ACC;
    case 474u: goto L_08841AE4;
    case 475u: goto L_08841AFC;
    case 476u: goto L_08841B04;
    case 477u: goto L_08841B0C;
    case 478u: goto L_08841B20;
    case 479u: goto L_08841B38;
    case 480u: goto L_08841B40;
    case 481u: goto L_08841B4C;
    case 482u: goto L_08841B54;
    case 483u: goto L_08841B5C;
    case 484u: goto L_08841B64;
    case 485u: goto L_08841B6C;
    case 486u: goto L_08841B80;
    case 487u: goto L_08841B98;
    case 488u: goto L_08841BA0;
    case 489u: goto L_08841BAC;
    case 490u: goto L_08841BB4;
    case 491u: goto L_08841BC8;
    case 492u: goto L_08841BE0;
    case 493u: goto L_08841BE8;
    case 494u: goto L_08841BF4;
    case 495u: goto L_08841C08;
    case 496u: goto L_08841C20;
    case 497u: goto L_08841C28;
    case 498u: goto L_08841C34;
    case 499u: goto L_08841C48;
    case 500u: goto L_08841C60;
    case 501u: goto L_08841C68;
    case 502u: goto L_08841C74;
    case 503u: goto L_08841CA8;
    case 504u: goto L_08841CB4;
    case 505u: goto L_08841CC8;
    case 506u: goto L_08841CE4;
    case 507u: goto L_08841CF0;
    case 508u: goto L_08841D00;
    case 509u: goto L_08841D1C;
    case 510u: goto L_08841D28;
    case 511u: goto L_08841D38;
    case 512u: goto L_08841D54;
    case 513u: goto L_08841D60;
    case 514u: goto L_08841D70;
    case 515u: goto L_08841D7C;
    case 516u: goto L_08841D88;
    case 517u: goto L_08841DAC;
    case 518u: goto L_08841DDC;
    case 519u: goto L_08841DEC;
    case 520u: goto L_08841E10;
    case 521u: goto L_08841E18;
    case 522u: goto L_08841E20;
    case 523u: goto L_08841E38;
    case 524u: goto L_08841E40;
    case 525u: goto L_08841E6C;
    case 526u: goto L_08841E74;
    case 527u: goto L_08841E7C;
    case 528u: goto L_08841EA4;
    case 529u: goto L_08841ED0;
    case 530u: goto L_08841F68;
    case 531u: goto L_08841FAC;
    case 532u: goto L_08841FB8;
    case 533u: goto L_08841FC0;
    case 534u: goto L_08841FD0;
    case 535u: goto L_08841FDC;
    case 536u: goto L_08841FE4;
    case 537u: goto L_08841FFC;
    case 538u: goto L_08842008;
    case 539u: goto L_08842010;
    case 540u: goto L_08842018;
    case 541u: goto L_08842020;
    case 542u: goto L_08842030;
    case 543u: goto L_08842038;
    case 544u: goto L_0884203C;
    case 545u: goto L_08842044;
    case 546u: goto L_08842050;
    case 547u: goto L_0884205C;
    case 548u: goto L_08842068;
    case 549u: goto L_08842074;
    case 550u: goto L_08842080;
    case 551u: goto L_0884208C;
    case 552u: goto L_08842098;
    case 553u: goto L_088420A0;
    case 554u: goto L_088420B4;
    case 555u: goto L_088420BC;
    case 556u: goto L_088420D0;
    case 557u: goto L_088420D8;
    case 558u: goto L_088420F0;
    case 559u: goto L_088420F8;
    case 560u: goto L_08842104;
    case 561u: goto L_08842128;
    case 562u: goto L_08842130;
    case 563u: goto L_08842138;
    case 564u: goto L_0884214C;
    case 565u: goto L_08842154;
    case 566u: goto L_08842160;
    case 567u: goto L_08842174;
    case 568u: goto L_0884217C;
    case 569u: goto L_08842194;
    case 570u: goto L_088421EC;
    case 571u: goto L_088422A8;
    case 572u: goto L_088422C0;
    case 573u: goto L_088422CC;
    case 574u: goto L_088422D8;
    case 575u: goto L_088422E0;
    case 576u: goto L_088422F4;
    case 577u: goto L_08842300;
    case 578u: goto L_0884230C;
    case 579u: goto L_08842314;
    case 580u: goto L_08842320;
    case 581u: goto L_08842328;
    case 582u: goto L_08842330;
    case 583u: goto L_08842344;
    case 584u: goto L_0884235C;
    case 585u: goto L_08842364;
    case 586u: goto L_08842378;
    case 587u: goto L_08842384;
    case 588u: goto L_08842398;
    case 589u: goto L_088423A0;
    case 590u: goto L_088423AC;
    case 591u: goto L_088423C4;
    case 592u: goto L_088423D8;
    case 593u: goto L_088423E0;
    case 594u: goto L_088423E8;
    case 595u: goto L_088423F0;
    case 596u: goto L_088423F8;
    case 597u: goto L_08842400;
    case 598u: goto L_08842414;
    case 599u: goto L_08842424;
    case 600u: goto L_0884242C;
    case 601u: goto L_08842434;
    case 602u: goto L_0884245C;
    case 603u: goto L_0884246C;
    case 604u: goto L_08842474;
    case 605u: goto L_08842488;
    case 606u: goto L_08842494;
    case 607u: goto L_088424A8;
    case 608u: goto L_088424B0;
    case 609u: goto L_088424C4;
    case 610u: goto L_088424D8;
    case 611u: goto L_088424E0;
    case 612u: goto L_088424F4;
    case 613u: goto L_08842500;
    case 614u: goto L_08842514;
    case 615u: goto L_0884251C;
    case 616u: goto L_08842528;
    case 617u: goto L_0884257C;
    case 618u: goto L_08842590;
    case 619u: goto L_088426F4;
    case 620u: goto L_08842760;
    case 621u: goto L_08842764;
    case 622u: goto L_08842768;
    case 623u: goto L_0884277C;
    case 624u: goto L_088427B0;
    case 625u: goto L_088427C0;
    case 626u: goto L_088427C8;
    case 627u: goto L_088427D4;
    case 628u: goto L_088427D8;
    case 629u: goto L_088427FC;
    case 630u: goto L_0884280C;
    case 631u: goto L_08842818;
    case 632u: goto L_0884281C;
    case 633u: goto L_0884282C;
    case 634u: goto L_08842840;
    case 635u: goto L_08842844;
    case 636u: goto L_08842860;
    case 637u: goto L_0884289C;
    case 638u: goto L_088428C8;
    case 639u: goto L_088428EC;
    case 640u: goto L_088428F0;
    case 641u: goto L_0884290C;
    case 642u: goto L_08842928;
    case 643u: goto L_08842960;
    case 644u: goto L_0884297C;
    case 645u: goto L_08842990;
    case 646u: goto L_08842994;
    case 647u: goto L_088429B0;
    case 648u: goto L_08842A20;
    case 649u: goto L_08842A28;
    case 650u: goto L_08842A48;
    case 651u: goto L_08842A64;
    case 652u: goto L_08842A84;
    case 653u: goto L_08842A9C;
    case 654u: goto L_08842AA0;
    case 655u: goto L_08842ABC;
    case 656u: goto L_08842AD8;
    case 657u: goto L_08842AEC;
    case 658u: goto L_08842B78;
    case 659u: goto L_08842BB0;
    case 660u: goto L_08842BB8;
    case 661u: goto L_08842BC8;
    case 662u: goto L_08842C3C;
    case 663u: goto L_08842C58;
    case 664u: goto L_08842C68;
    case 665u: goto L_08842C70;
    case 666u: goto L_08842CC8;
    case 667u: goto L_08842D60;
    case 668u: goto L_08842D70;
    case 669u: goto L_08842D78;
    case 670u: goto L_08842E44;
    case 671u: goto L_08842E64;
    case 672u: goto L_08842E74;
    case 673u: goto L_08842E78;
    case 674u: goto L_08842ED4;
    case 675u: goto L_08842EE0;
    case 676u: goto L_08842EF0;
    case 677u: goto L_08842EF8;
    case 678u: goto L_08842F04;
    case 679u: goto L_08842F0C;
    case 680u: goto L_08842F18;
    case 681u: goto L_08842F28;
    case 682u: goto L_08842F30;
    case 683u: goto L_08842F34;
    case 684u: goto L_08842F44;
    case 685u: goto L_08842F5C;
    case 686u: goto L_08842F84;
    case 687u: goto L_08842F8C;
    case 688u: goto L_08842F90;
    case 689u: goto L_08842FA4;
    case 690u: goto L_08842FA8;
    case 691u: goto L_08842FB4;
    case 692u: goto L_08842FE8;
    case 693u: goto L_08842FFC;
    case 694u: goto L_08843038;
    case 695u: goto L_08843040;
    case 696u: goto L_0884304C;
    case 697u: goto L_08843050;
    case 698u: goto L_08843054;
    case 699u: goto L_08843064;
    case 700u: goto L_0884307C;
    case 701u: goto L_0884309C;
    case 702u: goto L_088430A4;
    case 703u: goto L_088430A8;
    case 704u: goto L_088430BC;
    case 705u: goto L_088430C0;
    case 706u: goto L_088430D8;
    case 707u: goto L_088430DC;
    case 708u: goto L_088430E8;
    case 709u: goto L_0884312C;
    case 710u: goto L_08843158;
    case 711u: goto L_08843160;
    case 712u: goto L_0884316C;
    case 713u: goto L_08843174;
    case 714u: goto L_08843184;
    case 715u: goto L_088431A8;
    case 716u: goto L_088431BC;
    case 717u: goto L_088431D8;
    case 718u: goto L_088431E0;
    case 719u: goto L_088431F0;
    case 720u: goto L_088431F8;
    case 721u: goto L_08843210;
    case 722u: goto L_08843218;
    case 723u: goto L_08843230;
    case 724u: goto L_08843238;
    case 725u: goto L_08843250;
    case 726u: goto L_08843258;
    case 727u: goto L_08843270;
    case 728u: goto L_08843278;
    case 729u: goto L_0884328C;
    case 730u: goto L_08843294;
    case 731u: goto L_088432AC;
    case 732u: goto L_088432B4;
    case 733u: goto L_088432C0;
    case 734u: goto L_088432D4;
    case 735u: goto L_088432DC;
    case 736u: goto L_088432E8;
    case 737u: goto L_088432F4;
    case 738u: goto L_088432FC;
    case 739u: goto L_0884330C;
    case 740u: goto L_0884331C;
    case 741u: goto L_08843320;
    case 742u: goto L_0884334C;
    case 743u: goto L_08843358;
    case 744u: goto L_0884336C;
    case 745u: goto L_08843374;
    case 746u: goto L_0884338C;
    case 747u: goto L_08843390;
    case 748u: goto L_08843398;
    case 749u: goto L_088433B0;
    case 750u: goto L_088433B4;
    case 751u: goto L_088433C4;
    case 752u: goto L_088433CC;
    case 753u: goto L_088433DC;
    case 754u: goto L_088433E4;
    case 755u: goto L_088433FC;
    case 756u: goto L_08843404;
    case 757u: goto L_0884341C;
    case 758u: goto L_08843424;
    case 759u: goto L_0884343C;
    case 760u: goto L_08843444;
    case 761u: goto L_08843458;
    case 762u: goto L_0884345C;
    case 763u: goto L_0884347C;
    case 764u: goto L_08843484;
    case 765u: goto L_08843498;
    case 766u: goto L_088434AC;
    case 767u: goto L_088434D8;
    case 768u: goto L_088434E0;
    case 769u: goto L_088434E8;
    case 770u: goto L_088434F4;
    case 771u: goto L_08843500;
    case 772u: goto L_08843508;
    case 773u: goto L_08843510;
    case 774u: goto L_08843528;
    case 775u: goto L_08843530;
    case 776u: goto L_08843548;
    case 777u: goto L_08843550;
    case 778u: goto L_08843568;
    case 779u: goto L_08843570;
    case 780u: goto L_08843588;
    case 781u: goto L_08843590;
    case 782u: goto L_088435A4;
    case 783u: goto L_088435AC;
    case 784u: goto L_088435C4;
    case 785u: goto L_088435CC;
    case 786u: goto L_088435D8;
    case 787u: goto L_088435EC;
    case 788u: goto L_088435F4;
    case 789u: goto L_08843600;
    case 790u: goto L_0884360C;
    case 791u: goto L_08843614;
    case 792u: goto L_08843624;
    case 793u: goto L_08843634;
    case 794u: goto L_08843638;
    case 795u: goto L_08843664;
    case 796u: goto L_08843670;
    case 797u: goto L_08843684;
    case 798u: goto L_0884368C;
    case 799u: goto L_088436A4;
    case 800u: goto L_088436A8;
    case 801u: goto L_088436B0;
    case 802u: goto L_088436C8;
    case 803u: goto L_088436CC;
    case 804u: goto L_088436DC;
    case 805u: goto L_088436E4;
    case 806u: goto L_088436F4;
    case 807u: goto L_088436FC;
    case 808u: goto L_08843714;
    case 809u: goto L_0884371C;
    case 810u: goto L_08843734;
    case 811u: goto L_0884373C;
    case 812u: goto L_08843754;
    case 813u: goto L_0884375C;
    case 814u: goto L_08843770;
    case 815u: goto L_08843774;
    case 816u: goto L_08843794;
    case 817u: goto L_088437B4;
    case 818u: goto L_088437D4;
    case 819u: goto L_088437DC;
    case 820u: goto L_088437E4;
    case 821u: goto L_088437EC;
    case 822u: goto L_088437FC;
    case 823u: goto L_08843808;
    case 824u: goto L_08843810;
    case 825u: goto L_08843824;
    case 826u: goto L_0884382C;
    case 827u: goto L_08843860;
    case 828u: goto L_08843864;
    case 829u: goto L_0884386C;
    case 830u: goto L_0884387C;
    case 831u: goto L_08843884;
    case 832u: goto L_08843894;
    case 833u: goto L_0884389C;
    case 834u: goto L_088438A8;
    case 835u: goto L_088438B0;
    case 836u: goto L_088438B8;
    case 837u: goto L_088438C4;
    case 838u: goto L_088438D8;
    case 839u: goto L_088438E0;
    case 840u: goto L_088438E8;
    case 841u: goto L_088438F4;
    case 842u: goto L_08843908;
    case 843u: goto L_0884390C;
    case 844u: goto L_08843914;
    case 845u: goto L_08843924;
    case 846u: goto L_0884392C;
    case 847u: goto L_0884393C;
    case 848u: goto L_08843944;
    case 849u: goto L_08843958;
    case 850u: goto L_08843960;
    case 851u: goto L_08843974;
    case 852u: goto L_0884397C;
    case 853u: goto L_08843990;
    case 854u: goto L_08843998;
    case 855u: goto L_088439AC;
    case 856u: goto L_088439B4;
    case 857u: goto L_088439C8;
    case 858u: goto L_088439CC;
    case 859u: goto L_088439DC;
    case 860u: goto L_088439E4;
    case 861u: goto L_088439EC;
    case 862u: goto L_088439F4;
    case 863u: goto L_08843A08;
    case 864u: goto L_08843A1C;
    case 865u: goto L_08843A28;
    case 866u: goto L_08843A3C;
    case 867u: goto L_08843A44;
    case 868u: goto L_08843A54;
    case 869u: goto L_08843A58;
    case 870u: goto L_08843A60;
    case 871u: goto L_08843A74;
    case 872u: goto L_08843A88;
    case 873u: goto L_08843A90;
    case 874u: goto L_08843AC0;
    case 875u: goto L_08843AC8;
    case 876u: goto L_08843AD0;
    case 877u: goto L_08843AD8;
    case 878u: goto L_08843AEC;
    case 879u: goto L_08843AF8;
    case 880u: goto L_08843B14;
    case 881u: goto L_08843B1C;
    case 882u: goto L_08843B24;
    case 883u: goto L_08843B2C;
    case 884u: goto L_08843B34;
    case 885u: goto L_08843B3C;
    case 886u: goto L_08843B44;
    case 887u: goto L_08843B54;
    case 888u: goto L_08843B5C;
    case 889u: goto L_08843B64;
    case 890u: goto L_08843B6C;
    case 891u: goto L_08843B74;
    case 892u: goto L_08843B84;
    case 893u: goto L_08843B88;
    case 894u: goto L_08843B90;
    case 895u: goto L_08843BA4;
    case 896u: goto L_08843BAC;
    case 897u: goto L_08843BB4;
    case 898u: goto L_08843BBC;
    case 899u: goto L_08843BC4;
    case 900u: goto L_08843BCC;
    case 901u: goto L_08843BD4;
    case 902u: goto L_08843BDC;
    case 903u: goto L_08843BE4;
    case 904u: goto L_08843BF0;
    case 905u: goto L_08843BF4;
    case 906u: goto L_08843BFC;
    case 907u: goto L_08843C08;
    case 908u: goto L_08843C10;
    case 909u: goto L_08843C1C;
    case 910u: goto L_08843C2C;
    case 911u: goto L_08843C34;
    case 912u: goto L_08843C40;
    case 913u: goto L_08843C48;
    case 914u: goto L_08843C50;
    case 915u: goto L_08843C64;
    case 916u: goto L_08843C6C;
    case 917u: goto L_08843C78;
    case 918u: goto L_08843C8C;
    case 919u: goto L_08843C94;
    case 920u: goto L_08843C9C;
    case 921u: goto L_08843CA8;
    case 922u: goto L_08843CB4;
    case 923u: goto L_08843CC0;
    case 924u: goto L_08843CCC;
    case 925u: goto L_08843CD8;
    case 926u: goto L_08843CE4;
    case 927u: goto L_08843CF0;
    case 928u: goto L_08843D14;
    case 929u: goto L_08843D30;
    case 930u: goto L_08843D3C;
    case 931u: goto L_08843D54;
    case 932u: goto L_08843D74;
    case 933u: goto L_08843D88;
    case 934u: goto L_08843DA8;
    case 935u: goto L_08843DBC;
    case 936u: goto L_08843DD4;
    case 937u: goto L_08843DE8;
    case 938u: goto L_08843DF8;
    case 939u: goto L_08843E10;
    case 940u: goto L_08843E1C;
    case 941u: goto L_08843E2C;
    case 942u: goto L_08843E34;
    case 943u: goto L_08843E3C;
    case 944u: goto L_08843E44;
    case 945u: goto L_08843E58;
    case 946u: goto L_08843E70;
    case 947u: goto L_08843E78;
    case 948u: goto L_08843E84;
    case 949u: goto L_08843E8C;
    case 950u: goto L_08843E98;
    case 951u: goto L_08843EA0;
    case 952u: goto L_08843EAC;
    case 953u: goto L_08843EB4;
    case 954u: goto L_08843F04;
    case 955u: goto L_08843F10;
    case 956u: goto L_08843F20;
    case 957u: goto L_08843F2C;
    case 958u: goto L_08843F38;
    case 959u: goto L_08843F40;
    case 960u: goto L_08843F48;
    case 961u: goto L_08843F54;
    case 962u: goto L_08843F5C;
    case 963u: goto L_08843F6C;
    case 964u: goto L_08843F74;
    case 965u: goto L_08843F80;
    case 966u: goto L_08843F8C;
    case 967u: goto L_08843F94;
    case 968u: goto L_08843FD8;
    case 969u: goto L_08843FF0;
    case 970u: goto L_08843FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08840000:
    ctx.set_gpr(31, 0x08840008u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1u, 0x08AB0000u>(ctx, &aot_mem) && ctx.pc == 0x08840008u) goto L_08840008;
    return;
L_08840008:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884004C;
      }
      goto L_08840010;
    }
L_08840010:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8616));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08840024u);
    ctx.set_gpr(6, 2u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08840024u) goto L_08840024;
    return;
L_08840024:
    ctx.set_gpr(31, 0x0884002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884002Cu) goto L_0884002C;
    return;
L_0884002C:
    ctx.set_gpr(31, 0x08840034u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08840034u) goto L_08840034;
    return;
L_08840034:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8616));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08840048u);
    ctx.set_gpr(6, 2u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08840048u) goto L_08840048;
    return;
L_08840048:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0884004C;
L_0884004C:
    ctx.set_gpr(31, 0x08840054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08840054u) goto L_08840054;
    return;
L_08840054:
    ctx.set_gpr(31, 0x0884005Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884005Cu) goto L_0884005C;
    return;
L_0884005C:
    ctx.set_gpr(31, 0x08840064u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08840064u) goto L_08840064;
    return;
L_08840064:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 862u, 0x0883FF94u>(ctx, &aot_mem); return;
    }
    goto L_08840074;
L_08840074:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08840080;
L_08840080:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088400E4;
      }
      goto L_08840088;
    }
L_08840088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088400C4;
      }
      goto L_08840094;
    }
L_08840094:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088400A4;
      }
      goto L_0884009C;
    }
L_0884009C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840140;
      }
      goto L_088400A4;
    }
L_088400A4:
    ctx.set_gpr(31, 0x088400ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088400ACu) goto L_088400AC;
    return;
L_088400AC:
    ctx.set_gpr(31, 0x088400B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x088400B4u) goto L_088400B4;
    return;
L_088400B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840140;
      }
      goto L_088400BC;
    }
L_088400BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08840140;
      }
      goto L_088400C4;
    }
L_088400C4:
    ctx.set_gpr(31, 0x088400CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088400CCu) goto L_088400CC;
    return;
L_088400CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088400DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1050u, 0x08AAFFF0u>(ctx, &aot_mem) && ctx.pc == 0x088400DCu) goto L_088400DC;
    return;
L_088400DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08840140;
      }
      goto L_088400E4;
    }
L_088400E4:
    ctx.set_gpr(31, 0x088400ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088400ECu) goto L_088400EC;
    return;
L_088400EC:
    ctx.set_gpr(31, 0x088400F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1u, 0x08AB0000u>(ctx, &aot_mem) && ctx.pc == 0x088400F4u) goto L_088400F4;
    return;
L_088400F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840140;
      }
      goto L_088400FC;
    }
L_088400FC:
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 41376u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08840114u);
    ctx.set_gpr(6, 2u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08840114u) goto L_08840114;
    return;
L_08840114:
    ctx.set_gpr(31, 0x0884011Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884011Cu) goto L_0884011C;
    return;
L_0884011C:
    ctx.set_gpr(31, 0x08840124u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08840124u) goto L_08840124;
    return;
L_08840124:
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 41376u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x0884013Cu);
    ctx.set_gpr(6, 2u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0884013Cu) goto L_0884013C;
    return;
L_0884013C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08840140;
L_08840140:
    ctx.set_gpr(31, 0x08840148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08840148u) goto L_08840148;
    return;
L_08840148:
    ctx.set_gpr(31, 0x08840150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08840150u) goto L_08840150;
    return;
L_08840150:
    ctx.set_gpr(31, 0x08840158u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08840158u) goto L_08840158;
    return;
L_08840158:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08840080;
    }
    goto L_08840168;
L_08840168:
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8616));
    ctx.set_gpr(1, ctx.gpr[1] | 41376u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08840180u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 818u, 0x08AAF41Cu>(ctx, &aot_mem) && ctx.pc == 0x08840180u) goto L_08840180;
    return;
L_08840180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884019C:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x088401F4u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088401F4u) goto L_088401F4;
    return;
L_088401F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08840204u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08840204u) goto L_08840204;
    return;
L_08840204:
    ctx.set_gpr(21, ctx.gpr[30] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08840218u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0884035C;
L_08840218:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_088402DC;
    }
    goto L_08840224;
L_08840224:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08840234u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08840234u) goto L_08840234;
    return;
L_08840234:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08840244u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08840244u) goto L_08840244;
    return;
L_08840244:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08840254u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 776u, 0x08AAF164u>(ctx, &aot_mem) && ctx.pc == 0x08840254u) goto L_08840254;
    return;
L_08840254:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
        goto L_0884029C;
    }
    goto L_0884025C;
L_0884025C:
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08840270u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_08840318;
L_08840270:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840298;
      }
      goto L_08840278;
    }
L_08840278:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(31, 0x08840284u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15924));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08840284u) goto L_08840284;
    return;
L_08840284:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08840298u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15924));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08840298u) goto L_08840298;
    return;
L_08840298:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0884029C;
L_0884029C:
    ctx.set_gpr(31, 0x088402A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x088402A4u) goto L_088402A4;
    return;
L_088402A4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088402D8;
      }
      goto L_088402B8;
    }
L_088402B8:
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088402C8u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x088402C8u) goto L_088402C8;
    return;
L_088402C8:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08840204;
      }
      goto L_088402D8;
    }
L_088402D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_088402DC;
L_088402DC:
    ctx.set_gpr(31, 0x088402E4u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 343u, 0x0883DA60u>(ctx, &aot_mem) && ctx.pc == 0x088402E4u) goto L_088402E4;
    return;
L_088402E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840318:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08840354;
      }
      goto L_08840324;
    }
L_08840324:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(194));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08840354;
      }
      goto L_08840334;
    }
L_08840334:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(165));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08840354;
      }
      goto L_08840344;
    }
L_08840344:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08840354;
L_08840354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884035C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088403B8;
      }
      goto L_08840390;
    }
L_08840390:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08840394;
L_08840394:
    ctx.set_gpr(31, 0x0884039Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_088403DC;
L_0884039C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088403BC;
    }
    goto L_088403A4;
L_088403A4:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08840394;
    }
    goto L_088403B8;
L_088403B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088403BC;
L_088403BC:
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
L_088403DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
        goto L_088403F0;
    }
    goto L_088403E8;
L_088403E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_088403F0;
    }
L_088403F0:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 192 ? 1u : 0u);
        goto L_08840400;
    }
    goto L_088403F8;
L_088403F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840400;
    }
L_08840400:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 224 ? 1u : 0u);
        goto L_08840410;
    }
    goto L_08840408;
L_08840408:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840410;
    }
L_08840410:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 240 ? 1u : 0u);
        goto L_08840420;
    }
    goto L_08840418;
L_08840418:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840420;
    }
L_08840420:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 248 ? 1u : 0u);
        goto L_08840430;
    }
    goto L_08840428;
L_08840428:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840430;
    }
L_08840430:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 252 ? 1u : 0u);
        goto L_08840440;
    }
    goto L_08840438;
L_08840438:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840440;
    }
L_08840440:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 254 ? 1u : 0u);
        goto L_08840450;
    }
    goto L_08840448;
L_08840448:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0884045C;
      }
      goto L_08840450;
    }
L_08840450:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884045C;
    }
    goto L_08840458;
L_08840458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_0884045C;
L_0884045C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840464:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 793u, 0x08AAF274u>(ctx, &aot_mem); return;
L_08840474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08840488u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088409B0;
L_08840488:
    ctx.set_gpr(31, 0x08840490u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088409A4;
L_08840490:
    ctx.set_gpr(31, 0x08840498u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08840998;
L_08840498:
    ctx.set_gpr(31, 0x088404A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_0884098C;
L_088404A0:
    ctx.set_gpr(31, 0x088404A8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0884098C;
L_088404A8:
    ctx.set_gpr(31, 0x088404B0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08840980;
L_088404B0:
    ctx.set_gpr(31, 0x088404B8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1908));
    goto L_08840958;
L_088404B8:
    ctx.set_gpr(31, 0x088404C0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1972));
    goto L_08840958;
L_088404C0:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2276));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2016));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(31, 0x088404E0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x088404E0u) goto L_088404E0;
    return;
L_088404E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2038), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2048), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884050Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0884050Cu) goto L_0884050C;
    return;
L_0884050C:
    ctx.set_gpr(15, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[16] + 0u);
    ctx.set_gpr(12, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884051C;
L_0884051C:
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50132u);
    ctx.set_gpr(11, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50133u);
    ctx.set_gpr(10, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50134u);
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50135u);
    ctx.set_gpr(8, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50136u);
    ctx.set_gpr(7, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50137u);
    ctx.set_gpr(6, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50138u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 50139u);
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[1]);
    goto L_08840580;
L_08840580:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < 128 ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08840580;
      }
      goto L_088405CC;
    }
L_088405CC:
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 52436u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[1]);
    goto L_088405DC;
L_088405DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 162 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088405DC;
      }
      goto L_0884060C;
    }
L_0884060C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 52436u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[15]) < 18 ? 1u : 0u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(680));
      if (branch_taken) {
          goto L_0884051C;
      }
      goto L_0884063C;
    }
L_0884063C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08840688;
      }
      goto L_0884066C;
    }
L_0884066C:
    ctx.set_gpr(31, 0x08840674u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08840674u) goto L_08840674;
    return;
L_08840674:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884068C;
    }
    goto L_08840680;
L_08840680:
    ctx.set_gpr(31, 0x08840688u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08840688u) goto L_08840688;
    return;
L_08840688:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884068C;
L_0884068C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088406A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088406D8;
      }
      goto L_088406BC;
    }
L_088406BC:
    ctx.set_gpr(31, 0x088406C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088406C4u) goto L_088406C4;
    return;
L_088406C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088406DC;
    }
    goto L_088406D0;
L_088406D0:
    ctx.set_gpr(31, 0x088406D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088406D8u) goto L_088406D8;
    return;
L_088406D8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088406DC;
L_088406DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088406F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08840728;
      }
      goto L_0884070C;
    }
L_0884070C:
    ctx.set_gpr(31, 0x08840714u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08840714u) goto L_08840714;
    return;
L_08840714:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884072C;
    }
    goto L_08840720;
L_08840720:
    ctx.set_gpr(31, 0x08840728u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08840728u) goto L_08840728;
    return;
L_08840728:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884072C;
L_0884072C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08840778;
      }
      goto L_0884075C;
    }
L_0884075C:
    ctx.set_gpr(31, 0x08840764u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08840764u) goto L_08840764;
    return;
L_08840764:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884077C;
    }
    goto L_08840770;
L_08840770:
    ctx.set_gpr(31, 0x08840778u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08840778u) goto L_08840778;
    return;
L_08840778:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884077C;
L_0884077C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088407C8;
      }
      goto L_088407AC;
    }
L_088407AC:
    ctx.set_gpr(31, 0x088407B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088407B4u) goto L_088407B4;
    return;
L_088407B4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088407CC;
    }
    goto L_088407C0;
L_088407C0:
    ctx.set_gpr(31, 0x088407C8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088407C8u) goto L_088407C8;
    return;
L_088407C8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088407CC;
L_088407CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088407E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884081C;
      }
      goto L_088407FC;
    }
L_088407FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x08840808u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840834;
L_08840808:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08840820;
    }
    goto L_08840814;
L_08840814:
    ctx.set_gpr(31, 0x0884081Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884081Cu) goto L_0884081C;
    return;
L_0884081C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08840820;
L_08840820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884087C;
      }
      goto L_08840850;
    }
L_08840850:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884085Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x0884085Cu) goto L_0884085C;
    return;
L_0884085C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08840868u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840894;
L_08840868:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08840880;
    }
    goto L_08840874;
L_08840874:
    ctx.set_gpr(31, 0x0884087Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884087Cu) goto L_0884087C;
    return;
L_0884087C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08840880;
L_08840880:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088408CC;
      }
      goto L_088408B0;
    }
L_088408B0:
    ctx.set_gpr(31, 0x088408B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088408B8u) goto L_088408B8;
    return;
L_088408B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088408D0;
    }
    goto L_088408C4;
L_088408C4:
    ctx.set_gpr(31, 0x088408CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088408CCu) goto L_088408CC;
    return;
L_088408CC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088408D0;
L_088408D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088408E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088408FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1104));
    goto L_08840910;
L_088408FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08840924u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884094C;
L_08840924:
    ctx.set_gpr(31, 0x0884092Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08840940;
L_0884092C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840940:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884094C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884096Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0884096Cu) goto L_0884096C;
    return;
L_0884096C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840980:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884098C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840998:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088409A4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088409B0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088409BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08840A4C;
      }
      goto L_088409D8;
    }
L_088409D8:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2016));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(31, 0x088409F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088409F0u) goto L_088409F0;
    return;
L_088409F0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088409FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840650;
L_088409FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08840A08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406A0;
L_08840A08:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08840A14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406A0;
L_08840A14:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08840A20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406F0;
L_08840A20:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08840A2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840740;
L_08840A2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08840A38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840790;
L_08840A38:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08840A50;
    }
    goto L_08840A44;
L_08840A44:
    ctx.set_gpr(31, 0x08840A4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08840A4Cu) goto L_08840A4C;
    return;
L_08840A4C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08840A50;
L_08840A50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840A64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840A90u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_08841C68;
L_08840A90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08840A9Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_08841C34;
L_08840A9C:
    ctx.set_gpr(31, 0x08840AA4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    goto L_08841C28;
L_08840AA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x08840AB0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    goto L_08841BF4;
L_08840AB0:
    ctx.set_gpr(31, 0x08840AB8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    goto L_08841BE8;
L_08840AB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08840AC4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    goto L_08841BB4;
L_08840AC4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
        goto L_08840AEC;
    }
    goto L_08840AD8;
L_08840AD8:
    ctx.set_gpr(31, 0x08840AE0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841BAC;
L_08840AE0:
    ctx.set_gpr(3, 2233u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9032), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08840AFC;
      }
      goto L_08840AEC;
    }
L_08840AEC:
    ctx.set_gpr(31, 0x08840AF4u);
    // nop
    goto L_08841BAC;
L_08840AF4:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9028), ctx.gpr[2]);
    goto L_08840AFC;
L_08840AFC:
    ctx.set_gpr(31, 0x08840B04u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    goto L_08841BA0;
L_08840B04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08840B10u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    goto L_08841B6C;
L_08840B10:
    ctx.set_gpr(31, 0x08840B18u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08841B64;
L_08840B18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840B24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08841B5C;
L_08840B24:
    ctx.set_gpr(31, 0x08840B2Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08841B64;
L_08840B2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840B38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08841B54;
L_08840B38:
    ctx.set_gpr(31, 0x08840B40u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08841B64;
L_08840B40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840B4Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08841B4C;
L_08840B4C:
    ctx.set_gpr(31, 0x08840B54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    goto L_08841B40;
L_08840B54:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08840B60u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    goto L_08841B0C;
L_08840B60:
    ctx.set_gpr(31, 0x08840B68u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840B68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08840B84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840B84u) goto L_08840B84;
    return;
L_08840B84:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840B90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    goto L_08841A7C;
L_08840B90:
    ctx.set_gpr(31, 0x08840B98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840B98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08840BB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840BB8u) goto L_08840BB8;
    return;
L_08840BB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840BC4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_08841A7C;
L_08840BC4:
    ctx.set_gpr(31, 0x08840BCCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840BCC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08840BECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840BECu) goto L_08840BEC;
    return;
L_08840BEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840BF8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    goto L_08841A7C;
L_08840BF8:
    ctx.set_gpr(31, 0x08840C00u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840C00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08840C24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840C24u) goto L_08840C24;
    return;
L_08840C24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840C30u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_08841A7C;
L_08840C30:
    ctx.set_gpr(31, 0x08840C38u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840C38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08840C58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840C58u) goto L_08840C58;
    return;
L_08840C58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840C64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_08841A7C;
L_08840C64:
    ctx.set_gpr(31, 0x08840C6Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841B04;
L_08840C6C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08840C90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 513u, 0x088472B0u>(ctx, &aot_mem) && ctx.pc == 0x08840C90u) goto L_08840C90;
    return;
L_08840C90:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840C9Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_08841A7C;
L_08840C9C:
    ctx.set_gpr(31, 0x08840CA4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08841B64;
L_08840CA4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840CB0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    goto L_08841A74;
L_08840CB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840CBCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08841A44;
L_08840CBC:
    ctx.set_gpr(31, 0x08840CC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841A3C;
L_08840CC4:
    ctx.set_gpr(31, 0x08840CCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08841A2C;
L_08840CCC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840CD8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08841A24;
L_08840CD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840CE4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08840CE4u) goto L_08840CE4;
    return;
L_08840CE4:
    ctx.set_gpr(31, 0x08840CECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_08841BA0;
L_08840CEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08840CF8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_08841B6C;
L_08840CF8:
    ctx.set_gpr(31, 0x08840D00u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08841B64;
L_08840D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840D0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08841B5C;
L_08840D0C:
    ctx.set_gpr(31, 0x08840D14u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08841B64;
L_08840D14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840D20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08841B54;
L_08840D20:
    ctx.set_gpr(31, 0x08840D28u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08841B64;
L_08840D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840D34u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08841B4C;
L_08840D34:
    ctx.set_gpr(31, 0x08840D3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_08841A18;
L_08840D3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08840D48u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_088419E4;
L_08840D48:
    ctx.set_gpr(31, 0x08840D50u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    goto L_088419DC;
L_08840D50:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840D6Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840D6Cu) goto L_08840D6C;
    return;
L_08840D6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840D78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840D78u) goto L_08840D78;
    return;
L_08840D78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840D84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840D84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840D90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08841954;
L_08840D90:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840DACu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840DACu) goto L_08840DAC;
    return;
L_08840DAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840DB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840DB8u) goto L_08840DB8;
    return;
L_08840DB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840DC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840DD0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08841954;
L_08840DD0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840DECu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840DECu) goto L_08840DEC;
    return;
L_08840DEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840DF8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840DF8u) goto L_08840DF8;
    return;
L_08840DF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840E04u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840E10u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_08841954;
L_08840E10:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840E2Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840E2Cu) goto L_08840E2C;
    return;
L_08840E2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840E38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840E38u) goto L_08840E38;
    return;
L_08840E38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840E44u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840E44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840E50u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08841954;
L_08840E50:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840E6Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840E6Cu) goto L_08840E6C;
    return;
L_08840E6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840E78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840E78u) goto L_08840E78;
    return;
L_08840E78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840E84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840E84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840E90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08841954;
L_08840E90:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08840EACu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08840EACu) goto L_08840EAC;
    return;
L_08840EAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x08840EB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08840EB8u) goto L_08840EB8;
    return;
L_08840EB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08840EC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_088419D4;
L_08840EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840ED0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08841954;
L_08840ED0:
    ctx.set_gpr(31, 0x08840ED8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08841B64;
L_08840ED8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840EE4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_0884194C;
L_08840EE4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840EF0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08841A44;
L_08840EF0:
    ctx.set_gpr(31, 0x08840EF8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841A3C;
L_08840EF8:
    ctx.set_gpr(31, 0x08840F00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08841A2C;
L_08840F00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840F0Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_08841A24;
L_08840F0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840F18u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08840F18u) goto L_08840F18;
    return;
L_08840F18:
    ctx.set_gpr(31, 0x08840F20u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08841940;
L_08840F20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08840F2Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884190C;
L_08840F2C:
    ctx.set_gpr(31, 0x08840F34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_08841904;
L_08840F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840F40u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088418FC;
L_08840F40:
    ctx.set_gpr(31, 0x08840F48u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841A3C;
L_08840F48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840F54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_088418F4;
L_08840F54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08840F60u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088418C4;
L_08840F60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08840F6Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841890;
L_08840F6C:
    ctx.set_gpr(31, 0x08840F74u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08841888;
L_08840F74:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08840F88u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08840F88u) goto L_08840F88;
    return;
L_08840F88:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08840F94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088417DC;
L_08840F94:
    ctx.set_gpr(31, 0x08840F9Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08841888;
L_08840F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840FA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088417CC;
L_08840FA8:
    ctx.set_gpr(31, 0x08840FB0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08841888;
L_08840FB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08840FBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_088417BC;
L_08840FBC:
    ctx.set_gpr(31, 0x08840FC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_088417B0;
L_08840FC4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08840FD0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884177C;
L_08840FD0:
    ctx.set_gpr(31, 0x08840FD8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    goto L_08841774;
L_08840FD8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08840FF4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08840FF4u) goto L_08840FF4;
    return;
L_08840FF4:
    ctx.set_gpr(31, 0x08840FFCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    goto L_08841774;
L_08840FFC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08841014u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08841014u) goto L_08841014;
    return;
L_08841014:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08841020u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    goto L_08841740;
L_08841020:
    ctx.set_gpr(31, 0x08841028u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08841888;
L_08841028:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884103Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884103Cu) goto L_0884103C;
    return;
L_0884103C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08841048u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841694;
L_08841048:
    ctx.set_gpr(31, 0x08841050u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841A3C;
L_08841050:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884105Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    goto L_0884168C;
L_0884105C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884107Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884107Cu) goto L_0884107C;
    return;
L_0884107C:
    ctx.set_gpr(31, 0x08841084u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    goto L_08841A3C;
L_08841084:
    ctx.set_gpr(31, 0x0884108Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08841A2C;
L_0884108C:
    ctx.set_gpr(31, 0x08841094u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884146C;
L_08841094:
    ctx.set_gpr(31, 0x0884109Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08841460;
L_0884109C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x088410A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0884142C;
L_088410A8:
    ctx.set_gpr(31, 0x088410B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    goto L_08841424;
L_088410B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088410BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_0884141C;
L_088410BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088410D0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088410D0u) goto L_088410D0;
    return;
L_088410D0:
    ctx.set_gpr(31, 0x088410D8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    goto L_088413B0;
L_088410D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088410E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    goto L_088413A8;
L_088410E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088410F0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x088410F0u) goto L_088410F0;
    return;
L_088410F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088410FCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    goto L_08841374;
L_088410FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x08841108u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841324;
L_08841108:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08841114u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841694;
L_08841114:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08841120u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088412D4;
L_08841120:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x0884112Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841284;
L_0884112C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08841138u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841234;
L_08841138:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08841144u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088411E4;
L_08841144:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08841150u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841234;
L_08841150:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x0884115Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088417DC;
L_0884115C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x08841168u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08841194;
L_08841168:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08841174u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406A0;
L_08841174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088411CC;
      }
      goto L_088411B0;
    }
L_088411B0:
    ctx.set_gpr(31, 0x088411B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088411B8u) goto L_088411B8;
    return;
L_088411B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088411D0;
    }
    goto L_088411C4;
L_088411C4:
    ctx.set_gpr(31, 0x088411CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088411CCu) goto L_088411CC;
    return;
L_088411CC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088411D0;
L_088411D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088411E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884121C;
      }
      goto L_08841200;
    }
L_08841200:
    ctx.set_gpr(31, 0x08841208u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08841208u) goto L_08841208;
    return;
L_08841208:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08841220;
    }
    goto L_08841214;
L_08841214:
    ctx.set_gpr(31, 0x0884121Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884121Cu) goto L_0884121C;
    return;
L_0884121C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08841220;
L_08841220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884126C;
      }
      goto L_08841250;
    }
L_08841250:
    ctx.set_gpr(31, 0x08841258u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08841258u) goto L_08841258;
    return;
L_08841258:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08841270;
    }
    goto L_08841264;
L_08841264:
    ctx.set_gpr(31, 0x0884126Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884126Cu) goto L_0884126C;
    return;
L_0884126C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08841270;
L_08841270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841284:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088412BC;
      }
      goto L_088412A0;
    }
L_088412A0:
    ctx.set_gpr(31, 0x088412A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088412A8u) goto L_088412A8;
    return;
L_088412A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088412C0;
    }
    goto L_088412B4;
L_088412B4:
    ctx.set_gpr(31, 0x088412BCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088412BCu) goto L_088412BC;
    return;
L_088412BC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088412C0;
L_088412C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088412D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884130C;
      }
      goto L_088412F0;
    }
L_088412F0:
    ctx.set_gpr(31, 0x088412F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088412F8u) goto L_088412F8;
    return;
L_088412F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08841310;
    }
    goto L_08841304;
L_08841304:
    ctx.set_gpr(31, 0x0884130Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884130Cu) goto L_0884130C;
    return;
L_0884130C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08841310;
L_08841310:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884135C;
      }
      goto L_08841340;
    }
L_08841340:
    ctx.set_gpr(31, 0x08841348u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08841348u) goto L_08841348;
    return;
L_08841348:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08841360;
    }
    goto L_08841354;
L_08841354:
    ctx.set_gpr(31, 0x0884135Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884135Cu) goto L_0884135C;
    return;
L_0884135C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08841360;
L_08841360:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08841394u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08841394u) goto L_08841394;
    return;
L_08841394:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088413A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088413B0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088413B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088413D8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    goto L_08841414;
L_088413D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088413E4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0884140C;
L_088413E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088413F0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08841404;
L_088413F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884140C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem); return;
L_08841414:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884141C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841424:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884142C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841440u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841458;
L_08841440:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841458:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 418u, 0x08A1A500u>(ctx, &aot_mem); return;
L_08841460:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884146C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08841488u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08841620;
L_08841488:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08841498u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088414AC;
L_08841498:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088414AC:
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841618;
      }
      goto L_088414BC;
    }
L_088414BC:
    ctx.set_gpr(10, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_088415EC;
      }
      goto L_088414CC;
    }
L_088414CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_088414FC;
      }
      goto L_088414E4;
    }
L_088414E4:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088414FC;
      }
      goto L_088414F8;
    }
L_088414F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_088414FC;
L_088414FC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884151C;
      }
      goto L_08841504;
    }
L_08841504:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884151C;
      }
      goto L_08841518;
    }
L_08841518:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_0884151C;
L_0884151C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841534;
      }
      goto L_08841524;
    }
L_08841524:
    ctx.set_gpr(7, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08841534;
      }
      goto L_08841530;
    }
L_08841530:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08841534;
L_08841534:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841570;
      }
      goto L_0884153C;
    }
L_0884153C:
    ctx.set_gpr(9, 32768u << 16u);
    ctx.set_gpr(7, 0u - ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[6] & ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08841564;
      }
      goto L_08841554;
    }
L_08841554:
    ctx.set_gpr(7, ctx.gpr[10] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08841564;
      }
      goto L_08841560;
    }
L_08841560:
    ctx.set_gpr(11, 0u + 0u);
    goto L_08841564;
L_08841564:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841570;
      }
      goto L_0884156C;
    }
L_0884156C:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    goto L_08841570;
L_08841570:
    if (ctx.gpr[12] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
        goto L_088415F0;
    }
    goto L_08841578;
L_08841578:
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    goto L_0884157C;
L_0884157C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0884157C;
      }
      goto L_088415EC;
    }
L_088415EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_088415F0;
L_088415F0:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841618;
      }
      goto L_088415F8;
    }
L_088415F8:
    ctx.set_gpr(8, ctx.gpr[5] << 2u);
    goto L_088415FC;
L_088415FC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088415FC;
      }
      goto L_08841618;
    }
L_08841618:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08841670;
      }
      goto L_0884164C;
    }
L_0884164C:
    ctx.set_gpr(17, ctx.gpr[5] << 2u);
    goto L_08841650;
L_08841650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08841660u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08841660u) goto L_08841660;
    return;
L_08841660:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841650;
      }
      goto L_08841670;
    }
L_08841670:
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
L_0884168C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088416CC;
      }
      goto L_088416B0;
    }
L_088416B0:
    ctx.set_gpr(31, 0x088416B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088416B8u) goto L_088416B8;
    return;
L_088416B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088416D0;
    }
    goto L_088416C4;
L_088416C4:
    ctx.set_gpr(31, 0x088416CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088416CCu) goto L_088416CC;
    return;
L_088416CC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088416D0;
L_088416D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088416E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088416FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08841714;
L_088416FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0884172Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884172Cu) goto L_0884172C;
    return;
L_0884172C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08841760u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08841760u) goto L_08841760;
    return;
L_08841760:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841774:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884177C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841790u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_088417A8;
L_08841790:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088417A8:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 705u, 0x0898FEA0u>(ctx, &aot_mem); return;
L_088417B0:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088417BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088417CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088417DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08841814;
      }
      goto L_088417F8;
    }
L_088417F8:
    ctx.set_gpr(31, 0x08841800u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08841800u) goto L_08841800;
    return;
L_08841800:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08841818;
    }
    goto L_0884180C;
L_0884180C:
    ctx.set_gpr(31, 0x08841814u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08841814u) goto L_08841814;
    return;
L_08841814:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08841818;
L_08841818:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884182C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08841844u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_0884185C;
L_08841844:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884185C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08841874u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08841874u) goto L_08841874;
    return;
L_08841874:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841888:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841890:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088418B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x088418B0u) goto L_088418B0;
    return;
L_088418B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088418C4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_088418CC;
L_088418CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088418E0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088418E0u) goto L_088418E0;
    return;
L_088418E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088418F4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088418FC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841904:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884190C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841920u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841938;
L_08841920:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841938:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 281u, 0x0898D880u>(ctx, &aot_mem); return;
L_08841940:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884194C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08841990;
      }
      goto L_08841980;
    }
L_08841980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884199C;
      }
      goto L_08841990;
    }
L_08841990:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0884199Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0884199Cu) goto L_0884199C;
    return;
L_0884199C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088419A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088419CC;
L_088419A8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
L_088419CC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088419D4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088419DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088419E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088419F8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841A10;
L_088419F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A10:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem); return;
L_08841A18:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A2C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08841A34;
L_08841A34:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A44:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_08841A4C;
L_08841A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841A60u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08841A60u) goto L_08841A60;
    return;
L_08841A60:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A74:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841A7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08841AB8;
      }
      goto L_08841AA8;
    }
L_08841AA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08841AC4;
      }
      goto L_08841AB8;
    }
L_08841AB8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08841AC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08841AC4u) goto L_08841AC4;
    return;
L_08841AC4:
    ctx.set_gpr(31, 0x08841ACCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08841AFC;
L_08841ACC:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08841AE4u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08841AE4u) goto L_08841AE4;
    return;
L_08841AE4:
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
L_08841AFC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B04:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841B20u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841B38;
L_08841B20:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B38:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem); return;
L_08841B40:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B4C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B54:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B5C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B64:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841B80u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841B98;
L_08841B80:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841B98:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem); return;
L_08841BA0:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841BAC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841BB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841BC8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841BE0;
L_08841BC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841BE0:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 331u, 0x0898DD10u>(ctx, &aot_mem); return;
L_08841BE8:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841BF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841C08u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841C20;
L_08841C08:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841C20:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 174u, 0x088BD050u>(ctx, &aot_mem); return;
L_08841C28:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08841C48u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08841C60;
L_08841C48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841C60:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 338u, 0x08A19DA4u>(ctx, &aot_mem); return;
L_08841C68:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841C74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(2, 20224u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08841CB4;
      }
      goto L_08841CA8;
    }
L_08841CA8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[15], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08841CC8;
      }
      goto L_08841CB4;
    }
L_08841CB4:
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[0];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08841CC8;
L_08841CC8:
    ctx.set_gpr(19, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[14] - ctx.fpr[0];
        goto L_08841CF0;
    }
    goto L_08841CE4;
L_08841CE4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[14], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08841D00;
      }
      goto L_08841CF0;
    }
L_08841CF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08841D00;
L_08841D00:
    ctx.set_gpr(18, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[13] - ctx.fpr[0];
        goto L_08841D28;
    }
    goto L_08841D1C;
L_08841D1C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[13], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08841D38;
      }
      goto L_08841D28;
    }
L_08841D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08841D38;
L_08841D38:
    ctx.set_gpr(17, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
        goto L_08841D60;
    }
    goto L_08841D54;
L_08841D54:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[12], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08841D70;
      }
      goto L_08841D60;
    }
L_08841D60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08841D70;
L_08841D70:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(31, 0x08841D7Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9028)));
    goto L_08841E6C;
L_08841D7C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08841D88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08841E20;
L_08841D88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08841DACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08841DACu) goto L_08841DAC;
    return;
L_08841DAC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08841DDCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08841DDCu) goto L_08841DDC;
    return;
L_08841DDC:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841D70;
      }
      goto L_08841DEC;
    }
L_08841DEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08841E38u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    goto L_088419DC;
L_08841E38:
    ctx.set_gpr(31, 0x08841E40u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_088419DC;
L_08841E40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E6C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_088418F4;
L_08841E74:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-16600), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08841EA4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 630u, 0x0883EC28u>(ctx, &aot_mem) && ctx.pc == 0x08841EA4u) goto L_08841EA4;
    return;
L_08841EA4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2040), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2038), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2048), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08841ED0;
L_08841ED0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(888), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(892), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1570), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(896), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1572), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(900), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1574), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1576), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1578), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(912), 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1580), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1582), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 162 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08841ED0;
      }
      goto L_08841F68;
    }
L_08841F68:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(892), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1570), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(31, 0x08841FACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0884251C;
L_08841FAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08841FB8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088424E0;
L_08841FB8:
    ctx.set_gpr(31, 0x08841FC0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088424D8;
L_08841FC0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08841FD0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15940));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08841FD0u) goto L_08841FD0;
    return;
L_08841FD0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08841FDCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088424B0;
L_08841FDC:
    ctx.set_gpr(31, 0x08841FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08841FE4u) goto L_08841FE4;
    return;
L_08841FE4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08841FFCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15948));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08841FFCu) goto L_08841FFC;
    return;
L_08841FFC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842008u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088424B0;
L_08842008:
    ctx.set_gpr(31, 0x08842010u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088424A8;
L_08842010:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_0884203C;
    }
    goto L_08842018;
L_08842018:
    ctx.set_gpr(31, 0x08842020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08842020u) goto L_08842020;
    return;
L_08842020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(31, 0x08842030u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15968));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08842030u) goto L_08842030;
    return;
L_08842030:
    ctx.set_gpr(31, 0x08842038u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 215u, 0x08810BD8u>(ctx, &aot_mem) && ctx.pc == 0x08842038u) goto L_08842038;
    return;
L_08842038:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0884203C;
L_0884203C:
    ctx.set_gpr(31, 0x08842044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 629u, 0x0883EC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08842044u) goto L_08842044;
    return;
L_08842044:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08842050u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08842474;
L_08842050:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0884205Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 621u, 0x0883EBB4u>(ctx, &aot_mem) && ctx.pc == 0x0884205Cu) goto L_0884205C;
    return;
L_0884205C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08842068u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 613u, 0x0883EB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08842068u) goto L_08842068;
    return;
L_08842068:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08842074u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 612u, 0x0883EB34u>(ctx, &aot_mem) && ctx.pc == 0x08842074u) goto L_08842074;
    return;
L_08842074:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08842080u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_0884242C;
L_08842080:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0884208Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088423F8;
L_0884208C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08842098u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 617u, 0x0883EB88u>(ctx, &aot_mem) && ctx.pc == 0x08842098u) goto L_08842098;
    return;
L_08842098:
    ctx.set_gpr(31, 0x088420A0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088420A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088420B4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088420B4u) goto L_088420B4;
    return;
L_088420B4:
    ctx.set_gpr(31, 0x088420BCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088420BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088420D0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088420D0u) goto L_088420D0;
    return;
L_088420D0:
    ctx.set_gpr(31, 0x088420D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088420D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088420F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088420F0u) goto L_088420F0;
    return;
L_088420F0:
    ctx.set_gpr(31, 0x088420F8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088420F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842104u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08842104u) goto L_08842104;
    return;
L_08842104:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08842128u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842128u) goto L_08842128;
    return;
L_08842128:
    ctx.set_gpr(31, 0x08842130u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_08842130:
    ctx.set_gpr(31, 0x08842138u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08842138u) goto L_08842138;
    return;
L_08842138:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884214Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884214Cu) goto L_0884214C;
    return;
L_0884214C:
    ctx.set_gpr(31, 0x08842154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08842154u) goto L_08842154;
    return;
L_08842154:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842160u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08842160u) goto L_08842160;
    return;
L_08842160:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08842174u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842174u) goto L_08842174;
    return;
L_08842174:
    ctx.set_gpr(31, 0x0884217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 174u, 0x08848BB8u>(ctx, &aot_mem) && ctx.pc == 0x0884217Cu) goto L_0884217C;
    return;
L_0884217C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08842194u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842194u) goto L_08842194;
    return;
L_08842194:
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16608), ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(3, 17402u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16604), ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16608)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1908));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16604)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x088421ECu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem) && ctx.pc == 0x088421ECu) goto L_088421EC;
    return;
L_088421EC:
    ctx.set_gpr(2, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2052), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16684), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16668), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16652), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16680), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16664), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16648), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16676), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16660), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16644), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16672), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16656), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16640), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16620), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16616), 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x088422A8u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-16612), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088422A8u) goto L_088422A8;
    return;
L_088422A8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15949u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 54002u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088422C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08840A64;
L_088422C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088422CCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088423AC;
L_088422CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088422D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406A0;
L_088422D8:
    ctx.set_gpr(31, 0x088422E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088422E0u) goto L_088422E0;
    return;
L_088422E0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088422F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08840A64;
L_088422F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08842300u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_088423AC;
L_08842300:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884230Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088406A0;
L_0884230C:
    ctx.set_gpr(31, 0x08842314u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088423A0;
L_08842314:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08842320u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08842364;
L_08842320:
    ctx.set_gpr(31, 0x08842328u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_0884235C;
L_08842328:
    ctx.set_gpr(31, 0x08842330u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08842330u) goto L_08842330;
    return;
L_08842330:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08842344u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842344u) goto L_08842344;
    return;
L_08842344:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884235C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08842378u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08842398;
L_08842378:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842384u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08842384u) goto L_08842384;
    return;
L_08842384:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842398:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 483u, 0x08A1E8F4u>(ctx, &aot_mem); return;
L_088423A0:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088423C4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088423C4u) goto L_088423C4;
    return;
L_088423C4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423D8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423E0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423E8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423F0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088423F8:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08842414;
    }
    goto L_08842400;
L_08842400:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_08842414;
    }
L_08842414:
    ctx.set_gpr(3, 65279u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08842424;
L_08842424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884242C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0884245C;
    }
    goto L_08842434;
L_08842434:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, 65487u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 20u);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884246C;
      }
      goto L_0884245C;
    }
L_0884245C:
    ctx.set_gpr(3, 65487u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0884246C;
L_0884246C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08842488u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 628u, 0x0883EC14u>(ctx, &aot_mem) && ctx.pc == 0x08842488u) goto L_08842488;
    return;
L_08842488:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842494u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08842494u) goto L_08842494;
    return;
L_08842494:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088424A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088424B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088424C4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088424C4u) goto L_088424C4;
    return;
L_088424C4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088424D8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088424E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088424F4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08842514;
L_088424F4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08842500u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08842500u) goto L_08842500;
    return;
L_08842500:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842514:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 454u, 0x08A225FCu>(ctx, &aot_mem); return;
L_0884251C:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[24])) && ctx.fpr[0] == ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088430E8;
      }
      goto L_0884257C;
    }
L_0884257C:
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-16612)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08842764;
    }
    goto L_08842590;
L_08842590:
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16620)));
    ctx.set_gpr(20, 5u << 16u);
    ctx.set_gpr(19, 5u << 16u);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16616)));
    ctx.set_gpr(18, 5u << 16u);
    ctx.set_gpr(17, 5u << 16u);
    ctx.fpr[2] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 48888u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(16, 5u << 16u);
    ctx.set_gpr(15, 5u << 16u);
    ctx.set_gpr(14, 5u << 16u);
    ctx.set_gpr(13, 5u << 16u);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 48892u);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(12, 5u << 16u);
    ctx.set_gpr(11, 5u << 16u);
    ctx.set_gpr(10, 5u << 16u);
    ctx.set_gpr(9, 5u << 16u);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(8, 5u << 16u);
    ctx.set_gpr(7, 5u << 16u);
    ctx.set_gpr(20, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(19, ctx.gpr[21] + ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(15, ctx.gpr[21] + ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[21] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[21] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[21] + ctx.gpr[12]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16636)));
    ctx.set_gpr(11, ctx.gpr[21] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[21] + ctx.gpr[10]);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16684)));
    ctx.set_gpr(1, ctx.gpr[1] | 48896u);
    ctx.set_gpr(9, ctx.gpr[21] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[1]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(8, ctx.gpr[21] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[21] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16652), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-16620)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-16616)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16680)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16632)));
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[2];
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-16620)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-16616)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-16628)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-16676)));
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-16620)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-16616)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-16624)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16672)));
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-16620)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[24];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-16620), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16616)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842760;
      }
      goto L_088426F4;
    }
L_088426F4:
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-16612), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16616)));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16620), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16668)));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16652), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16664)));
    ctx.set_gpr(6, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16660)));
    ctx.set_gpr(5, 5u << 16u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16656)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08842760;
L_08842760:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08842764;
L_08842764:
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_08842768;
L_08842768:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14292)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_0884281C;
    }
    goto L_0884277C;
L_0884277C:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14296)));
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14300)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_088427C8;
    }
    goto L_088427B0;
L_088427B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088427C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088427C0u) goto L_088427C0;
    return;
L_088427C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 2u << 16u);
      if (branch_taken) {
          goto L_088427D8;
      }
      goto L_088427C8;
    }
L_088427C8:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088427D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x088427D4u) goto L_088427D4;
    return;
L_088427D4:
    ctx.set_gpr(3, 2u << 16u);
    goto L_088427D8;
L_088427D8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14300)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14296)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[24];
        goto L_0884280C;
    }
    goto L_088427FC;
L_088427FC:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14300), 0u);
      if (branch_taken) {
          goto L_08842818;
      }
      goto L_0884280C;
    }
L_0884280C:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08842818;
L_08842818:
    ctx.set_gpr(3, 2u << 16u);
    goto L_0884281C;
L_0884281C:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13458)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08842844;
    }
    goto L_0884282C;
L_0884282C:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13520)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_088430DC;
    }
    goto L_08842840;
L_08842840:
    ctx.set_gpr(3, 2u << 16u);
    goto L_08842844;
L_08842844:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13464)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_088428F0;
    }
    goto L_08842860;
L_08842860:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13468)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.fpr[2] = ctx.fpr[24] / ctx.fpr[0];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13472)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13476)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x0884289Cu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x088462B0u>(ctx, &aot_mem) && ctx.pc == 0x0884289Cu) goto L_0884289C;
    return;
L_0884289C:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13464)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[24];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13464), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_088428EC;
      }
      goto L_088428C8;
    }
L_088428C8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13480)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13484)));
    ctx.set_gpr(31, 0x088428ECu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 380u, 0x08845F94u>(ctx, &aot_mem) && ctx.pc == 0x088428ECu) goto L_088428EC;
    return;
L_088428EC:
    ctx.set_gpr(3, 2u << 16u);
    goto L_088428F0;
L_088428F0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13488)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08842994;
    }
    goto L_0884290C;
L_0884290C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[24];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13488), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08842960;
      }
      goto L_08842928;
    }
L_08842928:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 13436u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13492)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13500)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0884297C;
      }
      goto L_08842960;
    }
L_08842960:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 13436u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13500)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13496)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0884297C;
L_0884297C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08842990u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x08842990u) goto L_08842990;
    return;
L_08842990:
    ctx.set_gpr(3, 2u << 16u);
    goto L_08842994;
L_08842994:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13504)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08842A28;
    }
    goto L_088429B0;
L_088429B0:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[24];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13504), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13508)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[3] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13512)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13516)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13460)));
    ctx.set_gpr(31, 0x08842A20u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 145u, 0x08844918u>(ctx, &aot_mem) && ctx.pc == 0x08842A20u) goto L_08842A20;
    return;
L_08842A20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 2u << 16u);
      if (branch_taken) {
          goto L_08842AA0;
      }
      goto L_08842A28;
    }
L_08842A28:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13460)));
    ctx.set_gpr(3, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08842A64;
    }
    goto L_08842A48;
L_08842A48:
    ctx.set_gpr(3, 17332u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2u << 16u);
    goto L_08842A64;
L_08842A64:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13460)));
    ctx.set_gpr(3, 50160u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842A9C;
      }
      goto L_08842A84;
    }
L_08842A84:
    ctx.set_gpr(3, 17332u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08842A9C;
L_08842A9C:
    ctx.set_gpr(3, 2u << 16u);
    goto L_08842AA0;
L_08842AA0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13560)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(1, 2u << 16u);
        goto L_08842E78;
    }
    goto L_08842ABC;
L_08842ABC:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[24];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13560), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08842D78;
      }
      goto L_08842AD8;
    }
L_08842AD8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14291)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08842BB8;
    }
    goto L_08842AEC;
L_08842AEC:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13524)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13528)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13532)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13536)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13540)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13544)));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13548)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13552)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08842B78u);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x08842B78u) goto L_08842B78;
    return;
L_08842B78:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[23], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13564)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[22], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(31, 0x08842BB0u);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem) && ctx.pc == 0x08842BB0u) goto L_08842BB0;
    return;
L_08842BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842BB8;
    }
L_08842BB8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14290)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08842C70;
    }
    goto L_08842BC8;
L_08842BC8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13564)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13560), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13524)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13528)));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13532)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13536)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08842C3Cu);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 155u, 0x088449C8u>(ctx, &aot_mem) && ctx.pc == 0x08842C3Cu) goto L_08842C3C;
    return;
L_08842C3C:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13536)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842C58;
    }
L_08842C58:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08842C68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x08842C68u) goto L_08842C68;
    return;
L_08842C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842C70;
    }
L_08842C70:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13540)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13544)));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13548)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13552)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08842CC8u);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 155u, 0x088449C8u>(ctx, &aot_mem) && ctx.pc == 0x08842CC8u) goto L_08842CC8;
    return;
L_08842CC8:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13540)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13544)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13528), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13548)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13532), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13552)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13536), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13560), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13564), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13552)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842D60;
    }
L_08842D60:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08842D70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x08842D70u) goto L_08842D70;
    return;
L_08842D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842D78;
    }
L_08842D78:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13564)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13552)));
    ctx.fpr[8] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13536)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13548)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13544)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13540)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13524)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13528)));
    ctx.fpr[6] = ctx.fpr[6] - ctx.fpr[7];
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13532)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[5];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[5];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[4];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[4];
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[7];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08842E44u);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 155u, 0x088449C8u>(ctx, &aot_mem) && ctx.pc == 0x08842E44u) goto L_08842E44;
    return;
L_08842E44:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13552)));
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842E74;
      }
      goto L_08842E64;
    }
L_08842E64:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08842E74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x08842E74u) goto L_08842E74;
    return;
L_08842E74:
    ctx.set_gpr(1, 2u << 16u);
    goto L_08842E78;
L_08842E78:
    ctx.set_gpr(1, ctx.gpr[1] | 13988u);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13993u);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13968u);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13998u);
    ctx.set_gpr(23, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13572u);
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13569u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] | 13568u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    goto L_08842ED4;
L_08842ED4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08842FB4;
    }
    goto L_08842EE0;
L_08842EE0:
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    goto L_08842EF0;
L_08842EF0:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08842F34;
    }
    goto L_08842EF8;
L_08842EF8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08842F0C;
    }
    goto L_08842F04;
L_08842F04:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08842F30;
      }
      goto L_08842F0C;
    }
L_08842F0C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08842FA8;
    }
    goto L_08842F18;
L_08842F18:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08842F28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x08842F28u) goto L_08842F28;
    return;
L_08842F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842FA4;
      }
      goto L_08842F30;
    }
L_08842F30:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08842F34;
L_08842F34:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08842F90;
    }
    goto L_08842F44;
L_08842F44:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842F5C;
    }
L_08842F5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08842F84u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 359u, 0x08845C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08842F84u) goto L_08842F84;
    return;
L_08842F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842FA4;
      }
      goto L_08842F8C;
    }
L_08842F8C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08842F90;
L_08842F90:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 11 ? 1u : 0u);
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08842EF0;
      }
      goto L_08842FA4;
    }
L_08842FA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08842FA8;
L_08842FA8:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[24];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08842FB4;
L_08842FB4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 5 ? 1u : 0u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842FE8;
    }
L_08842FE8:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14004)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088430D8;
      }
      goto L_08842FFC;
    }
L_08842FFC:
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14268u);
    ctx.set_gpr(8, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14005u);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14264u);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14004u);
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    goto L_08843038;
L_08843038:
    if (ctx.gpr[9] != ctx.gpr[4]) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08843054;
    }
    goto L_08843040;
L_08843040:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08843050;
    }
    goto L_0884304C;
L_0884304C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08843050;
L_08843050:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08843054;
L_08843054:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_088430A8;
    }
    goto L_08843064;
L_08843064:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088430A4;
      }
      goto L_0884307C;
    }
L_0884307C:
    ctx.set_gpr(2, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14008)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884309Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 402u, 0x088463E4u>(ctx, &aot_mem) && ctx.pc == 0x0884309Cu) goto L_0884309C;
    return;
L_0884309C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 2u << 16u);
      if (branch_taken) {
          goto L_088430C0;
      }
      goto L_088430A4;
    }
L_088430A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_088430A8;
L_088430A8:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 6 ? 1u : 0u);
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08843038;
      }
      goto L_088430BC;
    }
L_088430BC:
    ctx.set_gpr(3, 2u << 16u);
    goto L_088430C0;
L_088430C0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14264)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[24];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088430D8;
L_088430D8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088430DC;
L_088430DC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 170 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(980));
      if (branch_taken) {
          goto L_08842768;
      }
      goto L_088430E8;
    }
L_088430E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884312C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08843158u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08840958;
L_08843158:
    ctx.set_gpr(31, 0x08843160u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08840958;
L_08843160:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0884345C;
    }
    goto L_0884316C;
L_0884316C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_088431F0;
      }
      goto L_08843174;
    }
L_08843174:
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(980));
    goto L_08843184;
L_08843184:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(1568))))));
    ctx.set_gpr(3, 2u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14003)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088431D8;
      }
      goto L_088431A8;
    }
L_088431A8:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13458)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088431D8;
      }
      goto L_088431BC;
    }
L_088431BC:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13536)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088431F0;
      }
      goto L_088431D8;
    }
L_088431D8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843458;
      }
      goto L_088431E0;
    }
L_088431E0:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08843184;
      }
      goto L_088431F0;
    }
L_088431F0:
    ctx.set_gpr(31, 0x088431F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088431F8u) goto L_088431F8;
    return;
L_088431F8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843210u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843210u) goto L_08843210;
    return;
L_08843210:
    ctx.set_gpr(31, 0x08843218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843218u) goto L_08843218;
    return;
L_08843218:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843230u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843230u) goto L_08843230;
    return;
L_08843230:
    ctx.set_gpr(31, 0x08843238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843238u) goto L_08843238;
    return;
L_08843238:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843250u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1972));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843250u) goto L_08843250;
    return;
L_08843250:
    ctx.set_gpr(31, 0x08843258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843258u) goto L_08843258;
    return;
L_08843258:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843270u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1908));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843270u) goto L_08843270;
    return;
L_08843270:
    ctx.set_gpr(31, 0x08843278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843278u) goto L_08843278;
    return;
L_08843278:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884328Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884328Cu) goto L_0884328C;
    return;
L_0884328C:
    ctx.set_gpr(31, 0x08843294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843294u) goto L_08843294;
    return;
L_08843294:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088432ACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088432ACu) goto L_088432AC;
    return;
L_088432AC:
    ctx.set_gpr(31, 0x088432B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088432B4u) goto L_088432B4;
    return;
L_088432B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088432C0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x088432C0u) goto L_088432C0;
    return;
L_088432C0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088432D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088432D4u) goto L_088432D4;
    return;
L_088432D4:
    ctx.set_gpr(31, 0x088432DCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088432DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088432E8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x088432E8u) goto L_088432E8;
    return;
L_088432E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088432F4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884347C;
L_088432F4:
    ctx.set_gpr(31, 0x088432FCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088432FC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884330Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884330Cu) goto L_0884330C;
    return;
L_0884330C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_088433C4;
      }
      goto L_0884331C;
    }
L_0884331C:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    goto L_08843320;
L_08843320:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1568))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    ctx.set_gpr(1, 2u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, ctx.gpr[1] | 13324u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(134)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
        goto L_088433B4;
    }
    goto L_0884334C;
L_0884334C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088433B0;
      }
      goto L_08843358;
    }
L_08843358:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    if (ctx.gpr[18] == ctx.gpr[21]) {
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
        goto L_08843390;
    }
    goto L_0884336C;
L_0884336C:
    ctx.set_gpr(31, 0x08843374u);
    ctx.set_gpr(18, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843374u) goto L_08843374;
    return;
L_08843374:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884338Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884338Cu) goto L_0884338C;
    return;
L_0884338C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08843390;
L_08843390:
    ctx.set_gpr(31, 0x08843398u);
    // nop
    goto L_088423F0;
L_08843398:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088433B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088433B0u) goto L_088433B0;
    return;
L_088433B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    goto L_088433B4;
L_088433B4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08843320;
      }
      goto L_088433C4;
    }
L_088433C4:
    ctx.set_gpr(31, 0x088433CCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088433CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088433DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088433DCu) goto L_088433DC;
    return;
L_088433DC:
    ctx.set_gpr(31, 0x088433E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088433E4u) goto L_088433E4;
    return;
L_088433E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088433FCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088433FCu) goto L_088433FC;
    return;
L_088433FC:
    ctx.set_gpr(31, 0x08843404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843404u) goto L_08843404;
    return;
L_08843404:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884341Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884341Cu) goto L_0884341C;
    return;
L_0884341C:
    ctx.set_gpr(31, 0x08843424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843424u) goto L_08843424;
    return;
L_08843424:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884343Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884343Cu) goto L_0884343C;
    return;
L_0884343C:
    ctx.set_gpr(31, 0x08843444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843444u) goto L_08843444;
    return;
L_08843444:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843458u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843458u) goto L_08843458;
    return;
L_08843458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0884345C;
L_0884345C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884347C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    goto L_08843484;
L_08843484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08843498u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08843498u) goto L_08843498;
    return;
L_08843498:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088434AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088434D8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08840958;
L_088434D8:
    ctx.set_gpr(31, 0x088434E0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08840958;
L_088434E0:
    ctx.set_gpr(31, 0x088434E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08840958;
L_088434E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843508;
      }
      goto L_088434F4;
    }
L_088434F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08843500u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08843794;
L_08843500:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08843774;
      }
      goto L_08843508;
    }
L_08843508:
    ctx.set_gpr(31, 0x08843510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843510u) goto L_08843510;
    return;
L_08843510:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843528u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843528u) goto L_08843528;
    return;
L_08843528:
    ctx.set_gpr(31, 0x08843530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843530u) goto L_08843530;
    return;
L_08843530:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843548u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843548u) goto L_08843548;
    return;
L_08843548:
    ctx.set_gpr(31, 0x08843550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843550u) goto L_08843550;
    return;
L_08843550:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843568u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1972));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843568u) goto L_08843568;
    return;
L_08843568:
    ctx.set_gpr(31, 0x08843570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843570u) goto L_08843570;
    return;
L_08843570:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843588u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1908));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843588u) goto L_08843588;
    return;
L_08843588:
    ctx.set_gpr(31, 0x08843590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843590u) goto L_08843590;
    return;
L_08843590:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088435A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088435A4u) goto L_088435A4;
    return;
L_088435A4:
    ctx.set_gpr(31, 0x088435ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088435ACu) goto L_088435AC;
    return;
L_088435AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088435C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088435C4u) goto L_088435C4;
    return;
L_088435C4:
    ctx.set_gpr(31, 0x088435CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088435CCu) goto L_088435CC;
    return;
L_088435CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088435D8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x088435D8u) goto L_088435D8;
    return;
L_088435D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088435ECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088435ECu) goto L_088435EC;
    return;
L_088435EC:
    ctx.set_gpr(31, 0x088435F4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088435F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843600u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08843600u) goto L_08843600;
    return;
L_08843600:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884360Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884347C;
L_0884360C:
    ctx.set_gpr(31, 0x08843614u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_08843614:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843624u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843624u) goto L_08843624;
    return;
L_08843624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_088436DC;
      }
      goto L_08843634;
    }
L_08843634:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    goto L_08843638;
L_08843638:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1568))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    ctx.set_gpr(1, 2u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, ctx.gpr[1] | 13324u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(134)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
        goto L_088436CC;
    }
    goto L_08843664;
L_08843664:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088436C8;
      }
      goto L_08843670;
    }
L_08843670:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    if (ctx.gpr[17] == ctx.gpr[21]) {
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
        goto L_088436A8;
    }
    goto L_08843684;
L_08843684:
    ctx.set_gpr(31, 0x0884368Cu);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884368Cu) goto L_0884368C;
    return;
L_0884368C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088436A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088436A4u) goto L_088436A4;
    return;
L_088436A4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088436A8;
L_088436A8:
    ctx.set_gpr(31, 0x088436B0u);
    // nop
    goto L_088423F0;
L_088436B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088436C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088436C8u) goto L_088436C8;
    return;
L_088436C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    goto L_088436CC;
L_088436CC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08843638;
      }
      goto L_088436DC;
    }
L_088436DC:
    ctx.set_gpr(31, 0x088436E4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_088436E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088436F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088436F4u) goto L_088436F4;
    return;
L_088436F4:
    ctx.set_gpr(31, 0x088436FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088436FCu) goto L_088436FC;
    return;
L_088436FC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843714u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843714u) goto L_08843714;
    return;
L_08843714:
    ctx.set_gpr(31, 0x0884371Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884371Cu) goto L_0884371C;
    return;
L_0884371C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843734u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843734u) goto L_08843734;
    return;
L_08843734:
    ctx.set_gpr(31, 0x0884373Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884373Cu) goto L_0884373C;
    return;
L_0884373C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843754u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843754u) goto L_08843754;
    return;
L_08843754:
    ctx.set_gpr(31, 0x0884375Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884375Cu) goto L_0884375C;
    return;
L_0884375C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843770u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843770u) goto L_08843770;
    return;
L_08843770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08843774;
L_08843774:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088437B4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    goto L_08840958;
L_088437B4:
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16640)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088439CC;
    }
    goto L_088437D4;
L_088437D4:
    ctx.set_gpr(31, 0x088437DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_08840958;
L_088437DC:
    ctx.set_gpr(31, 0x088437E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08840958;
L_088437E4:
    ctx.set_gpr(31, 0x088437ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088437ECu) goto L_088437EC;
    return;
L_088437EC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088437FCu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08843A1C;
L_088437FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08843808u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088439F4;
L_08843808:
    ctx.set_gpr(31, 0x08843810u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_0884235C;
L_08843810:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843824u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843824u) goto L_08843824;
    return;
L_08843824:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
        goto L_08843864;
    }
    goto L_0884382C;
L_0884382C:
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16652)));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16648)));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16644)));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843860u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16640)));
    goto L_08841C74;
L_08843860:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_08843864;
L_08843864:
    ctx.set_gpr(31, 0x0884386Cu);
    // nop
    goto L_0884235C;
L_0884386C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884387Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884387Cu) goto L_0884387C;
    return;
L_0884387C:
    ctx.set_gpr(31, 0x08843884u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_0884235C;
L_08843884:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843894u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7796));
    goto L_088439EC;
L_08843894:
    ctx.set_gpr(31, 0x0884389Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_0884235C;
L_0884389C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088438A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088439E4;
L_088438A8:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
        goto L_088438E0;
    }
    goto L_088438B0;
L_088438B0:
    ctx.set_gpr(31, 0x088438B8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_0884235C;
L_088438B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088438C4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_088439DC;
L_088438C4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088438D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088438D8u) goto L_088438D8;
    return;
L_088438D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0884390C;
      }
      goto L_088438E0;
    }
L_088438E0:
    ctx.set_gpr(31, 0x088438E8u);
    // nop
    goto L_0884235C;
L_088438E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088438F4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_088439DC;
L_088438F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843908u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843908u) goto L_08843908;
    return;
L_08843908:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_0884390C;
L_0884390C:
    ctx.set_gpr(31, 0x08843914u);
    // nop
    goto L_0884235C;
L_08843914:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843924u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843924u) goto L_08843924;
    return;
L_08843924:
    ctx.set_gpr(31, 0x0884392Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884392Cu) goto L_0884392C;
    return;
L_0884392C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(944)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884393Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884393Cu) goto L_0884393C;
    return;
L_0884393C:
    ctx.set_gpr(31, 0x08843944u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843944u) goto L_08843944;
    return;
L_08843944:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843958u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843958u) goto L_08843958;
    return;
L_08843958:
    ctx.set_gpr(31, 0x08843960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843960u) goto L_08843960;
    return;
L_08843960:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843974u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843974u) goto L_08843974;
    return;
L_08843974:
    ctx.set_gpr(31, 0x0884397Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884397Cu) goto L_0884397C;
    return;
L_0884397C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843990u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843990u) goto L_08843990;
    return;
L_08843990:
    ctx.set_gpr(31, 0x08843998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843998u) goto L_08843998;
    return;
L_08843998:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088439ACu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088439ACu) goto L_088439AC;
    return;
L_088439AC:
    ctx.set_gpr(31, 0x088439B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x088439B4u) goto L_088439B4;
    return;
L_088439B4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088439C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088439C8u) goto L_088439C8;
    return;
L_088439C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088439CC;
L_088439CC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088439DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088439E4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088439EC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088439F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08843A08u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08843A08u) goto L_08843A08;
    return;
L_08843A08:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08843A44;
      }
      goto L_08843A28;
    }
L_08843A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843A3Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    goto L_08843A60;
L_08843A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08843A58;
      }
      goto L_08843A44;
    }
L_08843A44:
    ctx.set_gpr(2, ctx.gpr[6] << 6u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843A54u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    goto L_08843A60;
L_08843A54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08843A58;
L_08843A58:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08843A74u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08843A88;
L_08843A74:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843A88:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem); return;
L_08843A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08843AC0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x08843AC0u) goto L_08843AC0;
    return;
L_08843AC0:
    ctx.set_gpr(31, 0x08843AC8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08840910;
L_08843AC8:
    ctx.set_gpr(31, 0x08843AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08843AD0u) goto L_08843AD0;
    return;
L_08843AD0:
    ctx.set_gpr(31, 0x08843AD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08843EAC;
L_08843AD8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843AECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(260));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843AECu) goto L_08843AEC;
    return;
L_08843AEC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843AF8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 551u, 0x08B062CCu>(ctx, &aot_mem) && ctx.pc == 0x08843AF8u) goto L_08843AF8;
    return;
L_08843AF8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15936)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08843B14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16004));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08843B14u) goto L_08843B14;
    return;
L_08843B14:
    ctx.set_gpr(31, 0x08843B1Cu);
    ctx.set_gpr(20, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08843B1Cu) goto L_08843B1C;
    return;
L_08843B1C:
    ctx.set_gpr(31, 0x08843B24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08843B24u) goto L_08843B24;
    return;
L_08843B24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
        goto L_08843B88;
    }
    goto L_08843B2C;
L_08843B2C:
    ctx.set_gpr(31, 0x08843B34u);
    // nop
    goto L_08843EA0;
L_08843B34:
    ctx.set_gpr(31, 0x08843B3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08843E98;
L_08843B3C:
    ctx.set_gpr(31, 0x08843B44u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08843EA0;
L_08843B44:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843B54u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16012));
    goto L_08843E84;
L_08843B54:
    ctx.set_gpr(31, 0x08843B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08843B5Cu) goto L_08843B5C;
    return;
L_08843B5C:
    ctx.set_gpr(31, 0x08843B64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08843B64u) goto L_08843B64;
    return;
L_08843B64:
    ctx.set_gpr(31, 0x08843B6Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08843B6Cu) goto L_08843B6C;
    return;
L_08843B6C:
    ctx.set_gpr(31, 0x08843B74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08843B74u) goto L_08843B74;
    return;
L_08843B74:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843B84u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 118u, 0x0892C874u>(ctx, &aot_mem) && ctx.pc == 0x08843B84u) goto L_08843B84;
    return;
L_08843B84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08843B88;
L_08843B88:
    ctx.set_gpr(31, 0x08843B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08843B90u) goto L_08843B90;
    return;
L_08843B90:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843BA4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843BA4u) goto L_08843BA4;
    return;
L_08843BA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843BB4;
      }
      goto L_08843BAC;
    }
L_08843BAC:
    ctx.set_gpr(31, 0x08843BB4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 215u, 0x08810BD8u>(ctx, &aot_mem) && ctx.pc == 0x08843BB4u) goto L_08843BB4;
    return;
L_08843BB4:
    ctx.set_gpr(31, 0x08843BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08843BBCu) goto L_08843BBC;
    return;
L_08843BBC:
    ctx.set_gpr(31, 0x08843BC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08843BC4u) goto L_08843BC4;
    return;
L_08843BC4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
        goto L_08843BF4;
    }
    goto L_08843BCC;
L_08843BCC:
    ctx.set_gpr(31, 0x08843BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08843BD4u) goto L_08843BD4;
    return;
L_08843BD4:
    ctx.set_gpr(31, 0x08843BDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08843BDCu) goto L_08843BDC;
    return;
L_08843BDC:
    ctx.set_gpr(31, 0x08843BE4u);
    // nop
    goto L_08843EA0;
L_08843BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843BF0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08843E84;
L_08843BF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08843BF4;
L_08843BF4:
    ctx.set_gpr(31, 0x08843BFCu);
    // nop
    goto L_08843E78;
L_08843BFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08843C08u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08843E44;
L_08843C08:
    ctx.set_gpr(31, 0x08843C10u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08843E3C;
L_08843C10:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843C1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 246u, 0x0883D3D4u>(ctx, &aot_mem) && ctx.pc == 0x08843C1Cu) goto L_08843C1C;
    return;
L_08843C1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843C2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 12u, 0x088D00D4u>(ctx, &aot_mem) && ctx.pc == 0x08843C2Cu) goto L_08843C2C;
    return;
L_08843C2C:
    ctx.set_gpr(31, 0x08843C34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08843E3C;
L_08843C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843C40u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08843E34;
L_08843C40:
    ctx.set_gpr(31, 0x08843C48u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08843E3C;
L_08843C48:
    ctx.set_gpr(31, 0x08843C50u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08843C50u) goto L_08843C50;
    return;
L_08843C50:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843C64u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843C64u) goto L_08843C64;
    return;
L_08843C64:
    ctx.set_gpr(31, 0x08843C6Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088424D8;
L_08843C6C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843C78u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08843E2C;
L_08843C78:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843C8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843C8Cu) goto L_08843C8C;
    return;
L_08843C8C:
    ctx.set_gpr(31, 0x08843C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08843C94u) goto L_08843C94;
    return;
L_08843C94:
    ctx.set_gpr(31, 0x08843C9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08843EAC;
L_08843C9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843CA8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08843DE8;
L_08843CA8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08843CB4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08843DBC;
L_08843CB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08843CC0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 261u, 0x0883D48Cu>(ctx, &aot_mem) && ctx.pc == 0x08843CC0u) goto L_08843CC0;
    return;
L_08843CC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08843CCCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08843D14;
L_08843CCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08843CD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840894;
L_08843CD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08843CE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08843CE4u) goto L_08843CE4;
    return;
L_08843CE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08843CF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08840834;
L_08843CF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843D14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08843D30u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08843D88;
L_08843D30:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08843D3Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08843D54;
L_08843D3C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843D74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08843D74u) goto L_08843D74;
    return;
L_08843D74:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843DA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08843DA8u) goto L_08843DA8;
    return;
L_08843DA8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843DBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08843DD4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08843DD4u) goto L_08843DD4;
    return;
L_08843DD4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843DE8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843DF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08843E10u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08841414;
L_08843E10:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08843E1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884140C;
L_08843E1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E34:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08843E58u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08843E70;
L_08843E58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E70:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 409u, 0x088B2600u>(ctx, &aot_mem); return;
L_08843E78:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E84:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E8C:
    ctx.set_gpr(2, 2245u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843E98:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843EA0:
    ctx.set_gpr(2, 2245u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843EAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem); return;
L_08843EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08843F04u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x08843F04u) goto L_08843F04;
    return;
L_08843F04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08843F10u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 111u, 0x088445F4u>(ctx, &aot_mem) && ctx.pc == 0x08843F10u) goto L_08843F10;
    return;
L_08843F10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08843F20u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 25u, 0x088441CCu>(ctx, &aot_mem) && ctx.pc == 0x08843F20u) goto L_08843F20;
    return;
L_08843F20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08843F2Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 261u, 0x0883D48Cu>(ctx, &aot_mem) && ctx.pc == 0x08843F2Cu) goto L_08843F2C;
    return;
L_08843F2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08843F38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08843F38u) goto L_08843F38;
    return;
L_08843F38:
    ctx.set_gpr(31, 0x08843F40u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08843F40u) goto L_08843F40;
    return;
L_08843F40:
    ctx.set_gpr(31, 0x08843F48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08843F48u) goto L_08843F48;
    return;
L_08843F48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843F54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08843F54u) goto L_08843F54;
    return;
L_08843F54:
    ctx.set_gpr(31, 0x08843F5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 243u, 0x0883D3BCu>(ctx, &aot_mem) && ctx.pc == 0x08843F5Cu) goto L_08843F5C;
    return;
L_08843F5C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08843F6Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x08843F6Cu) goto L_08843F6C;
    return;
L_08843F6C:
    ctx.set_gpr(31, 0x08843F74u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_08843F74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08843F80u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08843F80u) goto L_08843F80;
    return;
L_08843F80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08843F8Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884347C;
L_08843F8C:
    ctx.set_gpr(31, 0x08843F94u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_08843F94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16608)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08843FD8u);
    ctx.fpr[14] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08843FD8u) goto L_08843FD8;
    return;
L_08843FD8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08843FF0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843FF0u) goto L_08843FF0;
    return;
L_08843FF0:
    ctx.set_gpr(31, 0x08843FF8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_088423F0;
L_08843FF8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.pc = 0x08844000u; return;
}

void recomp_unit_0015(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0015_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_15(Runtime &runtime) {
    runtime.register_generated_unit(15u, 0x08840000u, 16384u, &recomp_unit_0015, &recomp_unit_0015_entry);
    runtime.register_function(0x08840000u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840008u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840010u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840024u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884002Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840034u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840048u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884004Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840054u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884005Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840064u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840074u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840080u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840088u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840094u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884009Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840114u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884011Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840124u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884013Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840140u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840148u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840150u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840158u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840168u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840180u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884019Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840204u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840224u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840234u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840244u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840254u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884025Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840270u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840278u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840284u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840298u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884029Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840318u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840324u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840334u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840344u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840354u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884035Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840390u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840394u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884039Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840400u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840408u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840410u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840418u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840420u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840428u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840430u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840438u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840440u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840448u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840450u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840458u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884045Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840464u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840474u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840488u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840490u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840498u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884050Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884051Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840580u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884060Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884063Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840650u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884066Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840674u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840680u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840688u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884068Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884070Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840714u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840720u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840728u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884072Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840740u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884075Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840764u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840770u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840778u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884077Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840790u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840808u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840814u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884081Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840820u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840834u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840850u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884085Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840868u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884087Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840880u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840894u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840910u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884092Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840940u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884094Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840958u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884096Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840980u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884098Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840998u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840ED0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840ED8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841014u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841020u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841028u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884103Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841048u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841050u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884105Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884107Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841084u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884108Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841094u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884109Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841108u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841114u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841120u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884112Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841138u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841144u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841150u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884115Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841168u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841174u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841194u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841200u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841208u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841214u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884121Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841220u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841234u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841250u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841258u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841264u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884126Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841270u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841284u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841304u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884130Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841310u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841324u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841340u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841348u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841354u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884135Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841360u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841374u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841394u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841404u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884140Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841414u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884141Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841424u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884142Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841440u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841458u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841460u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884146Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841488u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841498u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841504u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841518u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884151Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841524u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841530u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841534u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884153Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841554u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841560u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841564u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884156Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841570u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841578u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884157Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841618u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841620u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884164Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841650u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841660u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841670u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884168Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841694u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841714u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884172Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841740u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841760u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841774u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884177Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841790u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841800u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884180Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841814u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841818u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884182Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841844u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884185Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841888u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841890u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841904u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884190Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841920u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841938u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841940u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884194Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841954u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841980u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841990u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884199Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841ACCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841ED0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842008u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842010u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842018u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842020u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842030u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842038u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884203Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842044u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842050u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884205Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842068u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842074u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842080u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884208Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842098u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842104u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842128u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842130u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842138u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884214Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842154u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842160u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842174u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884217Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842194u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842300u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884230Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842314u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842320u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842328u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842330u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842344u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884235Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842364u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842378u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842384u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842398u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842400u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842414u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842424u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884242Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842434u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884245Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884246Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842474u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842488u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842494u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842500u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842514u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884251Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842528u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884257Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842590u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842760u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842764u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842768u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884277Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884280Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842818u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884281Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884282Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842840u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842844u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842860u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884289Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884290Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842928u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842960u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884297Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842990u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842994u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ABCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ED4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843038u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843040u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884304Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843050u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843054u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843064u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884307Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884309Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884312Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843158u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843160u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884316Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843174u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843184u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843210u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843230u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843238u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843250u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843258u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843270u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843278u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884328Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843294u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884330Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884331Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843320u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884334Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843358u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884336Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843374u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884338Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843390u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843398u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843404u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884341Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843424u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884343Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843444u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843458u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884345Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884347Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843484u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843498u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843500u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843508u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843510u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843528u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843530u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843548u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843550u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843568u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843570u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843588u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843590u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843600u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884360Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843614u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843624u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843634u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843638u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843664u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843670u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843684u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884368Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843714u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884371Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843734u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884373Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843754u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884375Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843770u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843774u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843794u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843808u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843810u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843824u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884382Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843860u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843864u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884386Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884387Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843884u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843894u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884389Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843908u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884390Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843914u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884392Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884393Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843944u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843958u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843960u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843974u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884397Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843990u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843998u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BD4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DD4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FF8u, &recomp_unit_0015, "recomp_unit_0015");
}
} // namespace psprecomp
