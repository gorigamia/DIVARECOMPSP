#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0147[4077] = {
    1, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 8, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0,
    15, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    33, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57,
    0, 58, 0, 0, 59, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0,
    0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 72, 0, 0, 73, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135,
    0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0,
    0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0,
    0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0,
    0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198,
    0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0,
    209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0,
    219, 0, 220, 0, 0, 221, 0, 222, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226,
    0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0,
    0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0,
    0, 252, 0, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    281, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 291,
    0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0,
    302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312,
    0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325,
    0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 360, 0, 0, 361,
    0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 380,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0,
    388, 0, 0, 389, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410,
    0, 411, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 419,
    0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 425, 426, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 0,
    435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442,
    0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451,
    0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 455, 0, 456, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0,
    0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 475, 476, 0, 0, 477, 0, 478, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0,
    0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 489, 0,
    0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 495, 0, 496, 497, 0, 0, 498, 0, 499, 500, 0, 0, 501, 0, 502, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0,
    0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520,
    0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0,
    0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0,
    0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 542, 543, 0, 0, 0, 0, 544, 0, 0, 545,
    0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 556, 0, 0, 0, 0, 0, 557, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569,
    0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0,
    0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0,
    0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0,
    0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612,
    613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0,
    0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0,
    0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629,
    0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0,
    0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 636, 0, 637, 0, 0, 0, 0, 0, 638, 639,
    0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 652, 0, 653, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 659, 0, 0, 0, 0, 0, 660, 661, 0, 0, 0, 0, 0,
    662, 0, 0, 0, 0, 0, 663, 0, 664, 665, 0, 666, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673,
    0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 0, 682, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 688, 0, 0,
    0, 0, 0, 689, 0, 690, 691, 0, 692, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 697, 0, 0, 698, 0, 0, 0, 0,
    0, 699, 700, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0,
    708, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0,
    0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743,
    0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0,
    0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0,
    0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761,
    0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767,
    0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0,
    0, 773, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0,
    0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 785, 786, 0,
    0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0,
    792, 0, 0, 0, 793, 0, 0, 794, 795, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802,
    0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0,
    0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0,
    0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0,
    0, 834, 0, 835, 0, 836, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842,
    0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0,
    0, 855, 0, 0, 0, 0, 0, 856, 0, 857, 858, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0,
    0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0,
    0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0,
    0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888,
};
void recomp_unit_0147_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A50000u;
        entry_id = (entry_delta < 16308u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0147[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A50000;
    case 2u: goto L_08A50004;
    case 3u: goto L_08A5000C;
    case 4u: goto L_08A50018;
    case 5u: goto L_08A50020;
    case 6u: goto L_08A5002C;
    case 7u: goto L_08A50034;
    case 8u: goto L_08A50038;
    case 9u: goto L_08A50044;
    case 10u: goto L_08A50050;
    case 11u: goto L_08A50058;
    case 12u: goto L_08A50064;
    case 13u: goto L_08A5006C;
    case 14u: goto L_08A50078;
    case 15u: goto L_08A50080;
    case 16u: goto L_08A5008C;
    case 17u: goto L_08A50094;
    case 18u: goto L_08A500A4;
    case 19u: goto L_08A500BC;
    case 20u: goto L_08A500C0;
    case 21u: goto L_08A500C8;
    case 22u: goto L_08A500E0;
    case 23u: goto L_08A500EC;
    case 24u: goto L_08A500F8;
    case 25u: goto L_08A50100;
    case 26u: goto L_08A50110;
    case 27u: goto L_08A50128;
    case 28u: goto L_08A5012C;
    case 29u: goto L_08A50134;
    case 30u: goto L_08A5014C;
    case 31u: goto L_08A50158;
    case 32u: goto L_08A50168;
    case 33u: goto L_08A50180;
    case 34u: goto L_08A50184;
    case 35u: goto L_08A5018C;
    case 36u: goto L_08A501A4;
    case 37u: goto L_08A501B0;
    case 38u: goto L_08A501B4;
    case 39u: goto L_08A501E8;
    case 40u: goto L_08A50224;
    case 41u: goto L_08A5022C;
    case 42u: goto L_08A5023C;
    case 43u: goto L_08A50248;
    case 44u: goto L_08A50258;
    case 45u: goto L_08A5026C;
    case 46u: goto L_08A50278;
    case 47u: goto L_08A50280;
    case 48u: goto L_08A50298;
    case 49u: goto L_08A502A8;
    case 50u: goto L_08A502B8;
    case 51u: goto L_08A502E4;
    case 52u: goto L_08A502F8;
    case 53u: goto L_08A50308;
    case 54u: goto L_08A50340;
    case 55u: goto L_08A50350;
    case 56u: goto L_08A50368;
    case 57u: goto L_08A5037C;
    case 58u: goto L_08A50384;
    case 59u: goto L_08A50390;
    case 60u: goto L_08A50394;
    case 61u: goto L_08A5039C;
    case 62u: goto L_08A503AC;
    case 63u: goto L_08A503B4;
    case 64u: goto L_08A503C8;
    case 65u: goto L_08A503EC;
    case 66u: goto L_08A503F4;
    case 67u: goto L_08A50404;
    case 68u: goto L_08A5040C;
    case 69u: goto L_08A5041C;
    case 70u: goto L_08A50428;
    case 71u: goto L_08A50430;
    case 72u: goto L_08A50434;
    case 73u: goto L_08A50440;
    case 74u: goto L_08A50444;
    case 75u: goto L_08A50450;
    case 76u: goto L_08A50480;
    case 77u: goto L_08A504A4;
    case 78u: goto L_08A504B0;
    case 79u: goto L_08A504C0;
    case 80u: goto L_08A504D0;
    case 81u: goto L_08A504E4;
    case 82u: goto L_08A504F4;
    case 83u: goto L_08A50500;
    case 84u: goto L_08A5051C;
    case 85u: goto L_08A5052C;
    case 86u: goto L_08A50538;
    case 87u: goto L_08A50540;
    case 88u: goto L_08A5054C;
    case 89u: goto L_08A50558;
    case 90u: goto L_08A50564;
    case 91u: goto L_08A50570;
    case 92u: goto L_08A50580;
    case 93u: goto L_08A5058C;
    case 94u: goto L_08A50594;
    case 95u: goto L_08A505A0;
    case 96u: goto L_08A505B0;
    case 97u: goto L_08A505BC;
    case 98u: goto L_08A505C8;
    case 99u: goto L_08A505D4;
    case 100u: goto L_08A505E4;
    case 101u: goto L_08A505EC;
    case 102u: goto L_08A505FC;
    case 103u: goto L_08A50604;
    case 104u: goto L_08A50614;
    case 105u: goto L_08A50620;
    case 106u: goto L_08A50628;
    case 107u: goto L_08A5062C;
    case 108u: goto L_08A50638;
    case 109u: goto L_08A50644;
    case 110u: goto L_08A50654;
    case 111u: goto L_08A5066C;
    case 112u: goto L_08A50670;
    case 113u: goto L_08A50678;
    case 114u: goto L_08A50690;
    case 115u: goto L_08A5069C;
    case 116u: goto L_08A506B8;
    case 117u: goto L_08A506D0;
    case 118u: goto L_08A506E0;
    case 119u: goto L_08A506F4;
    case 120u: goto L_08A50708;
    case 121u: goto L_08A50720;
    case 122u: goto L_08A50730;
    case 123u: goto L_08A50740;
    case 124u: goto L_08A50774;
    case 125u: goto L_08A50780;
    case 126u: goto L_08A50790;
    case 127u: goto L_08A5079C;
    case 128u: goto L_08A507AC;
    case 129u: goto L_08A507B8;
    case 130u: goto L_08A507C0;
    case 131u: goto L_08A507D0;
    case 132u: goto L_08A507DC;
    case 133u: goto L_08A507E8;
    case 134u: goto L_08A507F0;
    case 135u: goto L_08A507FC;
    case 136u: goto L_08A50804;
    case 137u: goto L_08A50810;
    case 138u: goto L_08A50818;
    case 139u: goto L_08A50824;
    case 140u: goto L_08A50830;
    case 141u: goto L_08A5083C;
    case 142u: goto L_08A50844;
    case 143u: goto L_08A50864;
    case 144u: goto L_08A50870;
    case 145u: goto L_08A50884;
    case 146u: goto L_08A5088C;
    case 147u: goto L_08A5089C;
    case 148u: goto L_08A508A8;
    case 149u: goto L_08A508B4;
    case 150u: goto L_08A508BC;
    case 151u: goto L_08A508C8;
    case 152u: goto L_08A508D0;
    case 153u: goto L_08A508DC;
    case 154u: goto L_08A508E4;
    case 155u: goto L_08A508F0;
    case 156u: goto L_08A50908;
    case 157u: goto L_08A50910;
    case 158u: goto L_08A50920;
    case 159u: goto L_08A50928;
    case 160u: goto L_08A50938;
    case 161u: goto L_08A50940;
    case 162u: goto L_08A50950;
    case 163u: goto L_08A50960;
    case 164u: goto L_08A5096C;
    case 165u: goto L_08A50978;
    case 166u: goto L_08A50984;
    case 167u: goto L_08A50994;
    case 168u: goto L_08A5099C;
    case 169u: goto L_08A509AC;
    case 170u: goto L_08A509B8;
    case 171u: goto L_08A509C0;
    case 172u: goto L_08A509CC;
    case 173u: goto L_08A509DC;
    case 174u: goto L_08A509E8;
    case 175u: goto L_08A509F8;
    case 176u: goto L_08A50A04;
    case 177u: goto L_08A50A10;
    case 178u: goto L_08A50A18;
    case 179u: goto L_08A50A24;
    case 180u: goto L_08A50A2C;
    case 181u: goto L_08A50A38;
    case 182u: goto L_08A50A40;
    case 183u: goto L_08A50A4C;
    case 184u: goto L_08A50A54;
    case 185u: goto L_08A50A60;
    case 186u: goto L_08A50A6C;
    case 187u: goto L_08A50A78;
    case 188u: goto L_08A50A88;
    case 189u: goto L_08A50A9C;
    case 190u: goto L_08A50AA4;
    case 191u: goto L_08A50AB0;
    case 192u: goto L_08A50AB8;
    case 193u: goto L_08A50AC8;
    case 194u: goto L_08A50AD4;
    case 195u: goto L_08A50AE0;
    case 196u: goto L_08A50AE8;
    case 197u: goto L_08A50AF4;
    case 198u: goto L_08A50AFC;
    case 199u: goto L_08A50B08;
    case 200u: goto L_08A50B10;
    case 201u: goto L_08A50B1C;
    case 202u: goto L_08A50B24;
    case 203u: goto L_08A50B30;
    case 204u: goto L_08A50B3C;
    case 205u: goto L_08A50B50;
    case 206u: goto L_08A50B5C;
    case 207u: goto L_08A50B64;
    case 208u: goto L_08A50B70;
    case 209u: goto L_08A50B80;
    case 210u: goto L_08A50B88;
    case 211u: goto L_08A50B94;
    case 212u: goto L_08A50BA0;
    case 213u: goto L_08A50BB0;
    case 214u: goto L_08A50BC4;
    case 215u: goto L_08A50BD4;
    case 216u: goto L_08A50BE0;
    case 217u: goto L_08A50BEC;
    case 218u: goto L_08A50BF4;
    case 219u: goto L_08A50C00;
    case 220u: goto L_08A50C08;
    case 221u: goto L_08A50C14;
    case 222u: goto L_08A50C1C;
    case 223u: goto L_08A50C20;
    case 224u: goto L_08A50C40;
    case 225u: goto L_08A50C70;
    case 226u: goto L_08A50C7C;
    case 227u: goto L_08A50C90;
    case 228u: goto L_08A50C9C;
    case 229u: goto L_08A50CA8;
    case 230u: goto L_08A50CB4;
    case 231u: goto L_08A50CC4;
    case 232u: goto L_08A50CCC;
    case 233u: goto L_08A50CDC;
    case 234u: goto L_08A50CF0;
    case 235u: goto L_08A50CF8;
    case 236u: goto L_08A50D04;
    case 237u: goto L_08A50D0C;
    case 238u: goto L_08A50D1C;
    case 239u: goto L_08A50D2C;
    case 240u: goto L_08A50D38;
    case 241u: goto L_08A50D44;
    case 242u: goto L_08A50D4C;
    case 243u: goto L_08A50D58;
    case 244u: goto L_08A50D60;
    case 245u: goto L_08A50D80;
    case 246u: goto L_08A50DB8;
    case 247u: goto L_08A50DC4;
    case 248u: goto L_08A50DD4;
    case 249u: goto L_08A50DE0;
    case 250u: goto L_08A50DE8;
    case 251u: goto L_08A50DF8;
    case 252u: goto L_08A50E04;
    case 253u: goto L_08A50E10;
    case 254u: goto L_08A50E18;
    case 255u: goto L_08A50E24;
    case 256u: goto L_08A50E2C;
    case 257u: goto L_08A50E38;
    case 258u: goto L_08A50E44;
    case 259u: goto L_08A50E50;
    case 260u: goto L_08A50E58;
    case 261u: goto L_08A50E78;
    case 262u: goto L_08A50E84;
    case 263u: goto L_08A50E98;
    case 264u: goto L_08A50EA0;
    case 265u: goto L_08A50EB0;
    case 266u: goto L_08A50EBC;
    case 267u: goto L_08A50EC8;
    case 268u: goto L_08A50ED0;
    case 269u: goto L_08A50EDC;
    case 270u: goto L_08A50EE4;
    case 271u: goto L_08A50EF0;
    case 272u: goto L_08A50F08;
    case 273u: goto L_08A50F10;
    case 274u: goto L_08A50F20;
    case 275u: goto L_08A50F28;
    case 276u: goto L_08A50F38;
    case 277u: goto L_08A50F40;
    case 278u: goto L_08A50F50;
    case 279u: goto L_08A50F60;
    case 280u: goto L_08A50F6C;
    case 281u: goto L_08A50F80;
    case 282u: goto L_08A50F88;
    case 283u: goto L_08A50F98;
    case 284u: goto L_08A50FA4;
    case 285u: goto L_08A50FB4;
    case 286u: goto L_08A50FC0;
    case 287u: goto L_08A50FD0;
    case 288u: goto L_08A50FDC;
    case 289u: goto L_08A50FE8;
    case 290u: goto L_08A50FF0;
    case 291u: goto L_08A50FFC;
    case 292u: goto L_08A51004;
    case 293u: goto L_08A51010;
    case 294u: goto L_08A51018;
    case 295u: goto L_08A51024;
    case 296u: goto L_08A51030;
    case 297u: goto L_08A5103C;
    case 298u: goto L_08A5104C;
    case 299u: goto L_08A51058;
    case 300u: goto L_08A51064;
    case 301u: goto L_08A51078;
    case 302u: goto L_08A51080;
    case 303u: goto L_08A5109C;
    case 304u: goto L_08A510A4;
    case 305u: goto L_08A510B4;
    case 306u: goto L_08A510C0;
    case 307u: goto L_08A510CC;
    case 308u: goto L_08A510D4;
    case 309u: goto L_08A510E0;
    case 310u: goto L_08A510E8;
    case 311u: goto L_08A510F4;
    case 312u: goto L_08A510FC;
    case 313u: goto L_08A51108;
    case 314u: goto L_08A51110;
    case 315u: goto L_08A5111C;
    case 316u: goto L_08A51138;
    case 317u: goto L_08A5114C;
    case 318u: goto L_08A5116C;
    case 319u: goto L_08A5117C;
    case 320u: goto L_08A511A0;
    case 321u: goto L_08A511B4;
    case 322u: goto L_08A511CC;
    case 323u: goto L_08A511DC;
    case 324u: goto L_08A511E8;
    case 325u: goto L_08A511FC;
    case 326u: goto L_08A51208;
    case 327u: goto L_08A51210;
    case 328u: goto L_08A5121C;
    case 329u: goto L_08A51224;
    case 330u: goto L_08A51234;
    case 331u: goto L_08A51240;
    case 332u: goto L_08A5124C;
    case 333u: goto L_08A51254;
    case 334u: goto L_08A51260;
    case 335u: goto L_08A51268;
    case 336u: goto L_08A5126C;
    case 337u: goto L_08A51290;
    case 338u: goto L_08A512A0;
    case 339u: goto L_08A512B0;
    case 340u: goto L_08A512D8;
    case 341u: goto L_08A512E0;
    case 342u: goto L_08A512E8;
    case 343u: goto L_08A512F0;
    case 344u: goto L_08A51310;
    case 345u: goto L_08A5131C;
    case 346u: goto L_08A51330;
    case 347u: goto L_08A51338;
    case 348u: goto L_08A51340;
    case 349u: goto L_08A51348;
    case 350u: goto L_08A51364;
    case 351u: goto L_08A51370;
    case 352u: goto L_08A5137C;
    case 353u: goto L_08A51388;
    case 354u: goto L_08A51394;
    case 355u: goto L_08A513B8;
    case 356u: goto L_08A513C0;
    case 357u: goto L_08A513D0;
    case 358u: goto L_08A513DC;
    case 359u: goto L_08A513E4;
    case 360u: goto L_08A513F0;
    case 361u: goto L_08A513FC;
    case 362u: goto L_08A51410;
    case 363u: goto L_08A51420;
    case 364u: goto L_08A51428;
    case 365u: goto L_08A51440;
    case 366u: goto L_08A5144C;
    case 367u: goto L_08A51454;
    case 368u: goto L_08A51460;
    case 369u: goto L_08A51468;
    case 370u: goto L_08A5147C;
    case 371u: goto L_08A51490;
    case 372u: goto L_08A5149C;
    case 373u: goto L_08A514A4;
    case 374u: goto L_08A514AC;
    case 375u: goto L_08A514BC;
    case 376u: goto L_08A514C8;
    case 377u: goto L_08A514DC;
    case 378u: goto L_08A514E4;
    case 379u: goto L_08A514F0;
    case 380u: goto L_08A514FC;
    case 381u: goto L_08A51508;
    case 382u: goto L_08A51528;
    case 383u: goto L_08A51530;
    case 384u: goto L_08A51544;
    case 385u: goto L_08A51558;
    case 386u: goto L_08A51568;
    case 387u: goto L_08A51578;
    case 388u: goto L_08A51580;
    case 389u: goto L_08A5158C;
    case 390u: goto L_08A51590;
    case 391u: goto L_08A515A0;
    case 392u: goto L_08A515AC;
    case 393u: goto L_08A515BC;
    case 394u: goto L_08A515C8;
    case 395u: goto L_08A515D0;
    case 396u: goto L_08A515DC;
    case 397u: goto L_08A515E4;
    case 398u: goto L_08A515F0;
    case 399u: goto L_08A515F8;
    case 400u: goto L_08A51620;
    case 401u: goto L_08A5163C;
    case 402u: goto L_08A5164C;
    case 403u: goto L_08A51688;
    case 404u: goto L_08A51690;
    case 405u: goto L_08A5169C;
    case 406u: goto L_08A516A8;
    case 407u: goto L_08A516D4;
    case 408u: goto L_08A516DC;
    case 409u: goto L_08A516F4;
    case 410u: goto L_08A516FC;
    case 411u: goto L_08A51704;
    case 412u: goto L_08A51718;
    case 413u: goto L_08A51724;
    case 414u: goto L_08A51738;
    case 415u: goto L_08A51744;
    case 416u: goto L_08A51758;
    case 417u: goto L_08A51760;
    case 418u: goto L_08A51774;
    case 419u: goto L_08A5177C;
    case 420u: goto L_08A51790;
    case 421u: goto L_08A517A0;
    case 422u: goto L_08A517B4;
    case 423u: goto L_08A517C4;
    case 424u: goto L_08A517D0;
    case 425u: goto L_08A517D8;
    case 426u: goto L_08A517DC;
    case 427u: goto L_08A517E8;
    case 428u: goto L_08A51810;
    case 429u: goto L_08A5183C;
    case 430u: goto L_08A5184C;
    case 431u: goto L_08A51858;
    case 432u: goto L_08A51860;
    case 433u: goto L_08A51868;
    case 434u: goto L_08A51874;
    case 435u: goto L_08A51880;
    case 436u: goto L_08A51894;
    case 437u: goto L_08A518A0;
    case 438u: goto L_08A518BC;
    case 439u: goto L_08A518D0;
    case 440u: goto L_08A518D8;
    case 441u: goto L_08A518EC;
    case 442u: goto L_08A518FC;
    case 443u: goto L_08A51904;
    case 444u: goto L_08A5190C;
    case 445u: goto L_08A51914;
    case 446u: goto L_08A51920;
    case 447u: goto L_08A5192C;
    case 448u: goto L_08A5193C;
    case 449u: goto L_08A51958;
    case 450u: goto L_08A5196C;
    case 451u: goto L_08A5197C;
    case 452u: goto L_08A51988;
    case 453u: goto L_08A51994;
    case 454u: goto L_08A5199C;
    case 455u: goto L_08A519A8;
    case 456u: goto L_08A519B0;
    case 457u: goto L_08A519B4;
    case 458u: goto L_08A519D0;
    case 459u: goto L_08A519E8;
    case 460u: goto L_08A519F4;
    case 461u: goto L_08A51A04;
    case 462u: goto L_08A51A10;
    case 463u: goto L_08A51A24;
    case 464u: goto L_08A51A38;
    case 465u: goto L_08A51A60;
    case 466u: goto L_08A51A6C;
    case 467u: goto L_08A51A8C;
    case 468u: goto L_08A51A98;
    case 469u: goto L_08A51AB4;
    case 470u: goto L_08A51AB8;
    case 471u: goto L_08A51AC4;
    case 472u: goto L_08A51ACC;
    case 473u: goto L_08A51AEC;
    case 474u: goto L_08A51B10;
    case 475u: goto L_08A51B18;
    case 476u: goto L_08A51B1C;
    case 477u: goto L_08A51B28;
    case 478u: goto L_08A51B30;
    case 479u: goto L_08A51B34;
    case 480u: goto L_08A51B48;
    case 481u: goto L_08A51B58;
    case 482u: goto L_08A51B74;
    case 483u: goto L_08A51B88;
    case 484u: goto L_08A51B98;
    case 485u: goto L_08A51BB4;
    case 486u: goto L_08A51BC0;
    case 487u: goto L_08A51BDC;
    case 488u: goto L_08A51BF4;
    case 489u: goto L_08A51BF8;
    case 490u: goto L_08A51C0C;
    case 491u: goto L_08A51C18;
    case 492u: goto L_08A51C34;
    case 493u: goto L_08A51C40;
    case 494u: goto L_08A51C80;
    case 495u: goto L_08A51C8C;
    case 496u: goto L_08A51C94;
    case 497u: goto L_08A51C98;
    case 498u: goto L_08A51CA4;
    case 499u: goto L_08A51CAC;
    case 500u: goto L_08A51CB0;
    case 501u: goto L_08A51CBC;
    case 502u: goto L_08A51CC4;
    case 503u: goto L_08A51CC8;
    case 504u: goto L_08A51CDC;
    case 505u: goto L_08A51CEC;
    case 506u: goto L_08A51D08;
    case 507u: goto L_08A51D1C;
    case 508u: goto L_08A51D2C;
    case 509u: goto L_08A51D48;
    case 510u: goto L_08A51D5C;
    case 511u: goto L_08A51D6C;
    case 512u: goto L_08A51D88;
    case 513u: goto L_08A51D9C;
    case 514u: goto L_08A51DB4;
    case 515u: goto L_08A51DBC;
    case 516u: goto L_08A51DC0;
    case 517u: goto L_08A51DCC;
    case 518u: goto L_08A51DDC;
    case 519u: goto L_08A51DF0;
    case 520u: goto L_08A51DFC;
    case 521u: goto L_08A51E20;
    case 522u: goto L_08A51E38;
    case 523u: goto L_08A51E80;
    case 524u: goto L_08A51E94;
    case 525u: goto L_08A51EA4;
    case 526u: goto L_08A51EB4;
    case 527u: goto L_08A51EC8;
    case 528u: goto L_08A51ED4;
    case 529u: goto L_08A51EE0;
    case 530u: goto L_08A51EF0;
    case 531u: goto L_08A51F0C;
    case 532u: goto L_08A51F18;
    case 533u: goto L_08A51F28;
    case 534u: goto L_08A51F44;
    case 535u: goto L_08A51F54;
    case 536u: goto L_08A51F68;
    case 537u: goto L_08A51F78;
    case 538u: goto L_08A51F8C;
    case 539u: goto L_08A51F9C;
    case 540u: goto L_08A51FB8;
    case 541u: goto L_08A51FD4;
    case 542u: goto L_08A51FD8;
    case 543u: goto L_08A51FDC;
    case 544u: goto L_08A51FF0;
    case 545u: goto L_08A51FFC;
    case 546u: goto L_08A52008;
    case 547u: goto L_08A52010;
    case 548u: goto L_08A5201C;
    case 549u: goto L_08A52024;
    case 550u: goto L_08A52054;
    case 551u: goto L_08A52074;
    case 552u: goto L_08A520A8;
    case 553u: goto L_08A520B4;
    case 554u: goto L_08A520C0;
    case 555u: goto L_08A520DC;
    case 556u: goto L_08A520E0;
    case 557u: goto L_08A520F8;
    case 558u: goto L_08A52120;
    case 559u: goto L_08A5212C;
    case 560u: goto L_08A52140;
    case 561u: goto L_08A52144;
    case 562u: goto L_08A52160;
    case 563u: goto L_08A5217C;
    case 564u: goto L_08A52198;
    case 565u: goto L_08A521A4;
    case 566u: goto L_08A521C0;
    case 567u: goto L_08A521D4;
    case 568u: goto L_08A521E4;
    case 569u: goto L_08A521FC;
    case 570u: goto L_08A52204;
    case 571u: goto L_08A52214;
    case 572u: goto L_08A52228;
    case 573u: goto L_08A52230;
    case 574u: goto L_08A52240;
    case 575u: goto L_08A5225C;
    case 576u: goto L_08A52270;
    case 577u: goto L_08A52284;
    case 578u: goto L_08A52298;
    case 579u: goto L_08A522AC;
    case 580u: goto L_08A522E0;
    case 581u: goto L_08A522F0;
    case 582u: goto L_08A5230C;
    case 583u: goto L_08A5231C;
    case 584u: goto L_08A5232C;
    case 585u: goto L_08A5233C;
    case 586u: goto L_08A52350;
    case 587u: goto L_08A52368;
    case 588u: goto L_08A52378;
    case 589u: goto L_08A5238C;
    case 590u: goto L_08A523A0;
    case 591u: goto L_08A523AC;
    case 592u: goto L_08A523B8;
    case 593u: goto L_08A523D0;
    case 594u: goto L_08A523E4;
    case 595u: goto L_08A52418;
    case 596u: goto L_08A52430;
    case 597u: goto L_08A52440;
    case 598u: goto L_08A52454;
    case 599u: goto L_08A52458;
    case 600u: goto L_08A5246C;
    case 601u: goto L_08A52478;
    case 602u: goto L_08A52494;
    case 603u: goto L_08A524C0;
    case 604u: goto L_08A524D0;
    case 605u: goto L_08A524F8;
    case 606u: goto L_08A52504;
    case 607u: goto L_08A52524;
    case 608u: goto L_08A5253C;
    case 609u: goto L_08A52554;
    case 610u: goto L_08A5256C;
    case 611u: goto L_08A52574;
    case 612u: goto L_08A5257C;
    case 613u: goto L_08A52580;
    case 614u: goto L_08A5258C;
    case 615u: goto L_08A52594;
    case 616u: goto L_08A525B4;
    case 617u: goto L_08A525CC;
    case 618u: goto L_08A525F0;
    case 619u: goto L_08A5260C;
    case 620u: goto L_08A52630;
    case 621u: goto L_08A52640;
    case 622u: goto L_08A52658;
    case 623u: goto L_08A52674;
    case 624u: goto L_08A52684;
    case 625u: goto L_08A52694;
    case 626u: goto L_08A526C8;
    case 627u: goto L_08A526DC;
    case 628u: goto L_08A526EC;
    case 629u: goto L_08A526FC;
    case 630u: goto L_08A52710;
    case 631u: goto L_08A5276C;
    case 632u: goto L_08A52788;
    case 633u: goto L_08A527A0;
    case 634u: goto L_08A527BC;
    case 635u: goto L_08A527D4;
    case 636u: goto L_08A527D8;
    case 637u: goto L_08A527E0;
    case 638u: goto L_08A527F8;
    case 639u: goto L_08A527FC;
    case 640u: goto L_08A52804;
    case 641u: goto L_08A5280C;
    case 642u: goto L_08A52818;
    case 643u: goto L_08A52840;
    case 644u: goto L_08A52864;
    case 645u: goto L_08A52884;
    case 646u: goto L_08A5289C;
    case 647u: goto L_08A528A8;
    case 648u: goto L_08A528AC;
    case 649u: goto L_08A528B4;
    case 650u: goto L_08A528CC;
    case 651u: goto L_08A528D8;
    case 652u: goto L_08A528DC;
    case 653u: goto L_08A528E4;
    case 654u: goto L_08A52970;
    case 655u: goto L_08A529A0;
    case 656u: goto L_08A529A8;
    case 657u: goto L_08A529C0;
    case 658u: goto L_08A529C8;
    case 659u: goto L_08A529CC;
    case 660u: goto L_08A529E4;
    case 661u: goto L_08A529E8;
    case 662u: goto L_08A52A00;
    case 663u: goto L_08A52A18;
    case 664u: goto L_08A52A20;
    case 665u: goto L_08A52A24;
    case 666u: goto L_08A52A2C;
    case 667u: goto L_08A52A30;
    case 668u: goto L_08A52A38;
    case 669u: goto L_08A52A50;
    case 670u: goto L_08A52A64;
    case 671u: goto L_08A52A9C;
    case 672u: goto L_08A52AA8;
    case 673u: goto L_08A52AFC;
    case 674u: goto L_08A52B10;
    case 675u: goto L_08A52B18;
    case 676u: goto L_08A52B2C;
    case 677u: goto L_08A52B50;
    case 678u: goto L_08A52C18;
    case 679u: goto L_08A52C30;
    case 680u: goto L_08A52C34;
    case 681u: goto L_08A52C3C;
    case 682u: goto L_08A52C54;
    case 683u: goto L_08A52C58;
    case 684u: goto L_08A52C60;
    case 685u: goto L_08A52DB8;
    case 686u: goto L_08A52E58;
    case 687u: goto L_08A52E5C;
    case 688u: goto L_08A52E74;
    case 689u: goto L_08A52E8C;
    case 690u: goto L_08A52E94;
    case 691u: goto L_08A52E98;
    case 692u: goto L_08A52EA0;
    case 693u: goto L_08A52EA4;
    case 694u: goto L_08A52EAC;
    case 695u: goto L_08A52EC4;
    case 696u: goto L_08A52EDC;
    case 697u: goto L_08A52EE0;
    case 698u: goto L_08A52EEC;
    case 699u: goto L_08A52F04;
    case 700u: goto L_08A52F08;
    case 701u: goto L_08A52F0C;
    case 702u: goto L_08A52F14;
    case 703u: goto L_08A52F34;
    case 704u: goto L_08A52F48;
    case 705u: goto L_08A52F9C;
    case 706u: goto L_08A52FDC;
    case 707u: goto L_08A52FE8;
    case 708u: goto L_08A53000;
    case 709u: goto L_08A53004;
    case 710u: goto L_08A5300C;
    case 711u: goto L_08A5301C;
    case 712u: goto L_08A53030;
    case 713u: goto L_08A53040;
    case 714u: goto L_08A53054;
    case 715u: goto L_08A53084;
    case 716u: goto L_08A530B0;
    case 717u: goto L_08A530BC;
    case 718u: goto L_08A530CC;
    case 719u: goto L_08A530E0;
    case 720u: goto L_08A530F4;
    case 721u: goto L_08A53134;
    case 722u: goto L_08A5313C;
    case 723u: goto L_08A53150;
    case 724u: goto L_08A53190;
    case 725u: goto L_08A53198;
    case 726u: goto L_08A531AC;
    case 727u: goto L_08A531F4;
    case 728u: goto L_08A5326C;
    case 729u: goto L_08A53314;
    case 730u: goto L_08A53328;
    case 731u: goto L_08A53350;
    case 732u: goto L_08A53364;
    case 733u: goto L_08A53384;
    case 734u: goto L_08A53398;
    case 735u: goto L_08A533CC;
    case 736u: goto L_08A533E0;
    case 737u: goto L_08A53414;
    case 738u: goto L_08A5344C;
    case 739u: goto L_08A53460;
    case 740u: goto L_08A53470;
    case 741u: goto L_08A534A4;
    case 742u: goto L_08A534E0;
    case 743u: goto L_08A534FC;
    case 744u: goto L_08A53508;
    case 745u: goto L_08A5351C;
    case 746u: goto L_08A53530;
    case 747u: goto L_08A53544;
    case 748u: goto L_08A53558;
    case 749u: goto L_08A53568;
    case 750u: goto L_08A53578;
    case 751u: goto L_08A53594;
    case 752u: goto L_08A535A0;
    case 753u: goto L_08A535BC;
    case 754u: goto L_08A535D0;
    case 755u: goto L_08A535E4;
    case 756u: goto L_08A535F8;
    case 757u: goto L_08A5360C;
    case 758u: goto L_08A53644;
    case 759u: goto L_08A53654;
    case 760u: goto L_08A53670;
    case 761u: goto L_08A5367C;
    case 762u: goto L_08A5368C;
    case 763u: goto L_08A536A8;
    case 764u: goto L_08A536B8;
    case 765u: goto L_08A536CC;
    case 766u: goto L_08A536EC;
    case 767u: goto L_08A536FC;
    case 768u: goto L_08A53710;
    case 769u: goto L_08A53724;
    case 770u: goto L_08A53728;
    case 771u: goto L_08A53734;
    case 772u: goto L_08A53760;
    case 773u: goto L_08A53784;
    case 774u: goto L_08A53790;
    case 775u: goto L_08A537A4;
    case 776u: goto L_08A537C0;
    case 777u: goto L_08A537DC;
    case 778u: goto L_08A537E8;
    case 779u: goto L_08A53804;
    case 780u: goto L_08A5381C;
    case 781u: goto L_08A5382C;
    case 782u: goto L_08A53850;
    case 783u: goto L_08A53858;
    case 784u: goto L_08A53868;
    case 785u: goto L_08A53874;
    case 786u: goto L_08A53878;
    case 787u: goto L_08A5388C;
    case 788u: goto L_08A538A4;
    case 789u: goto L_08A538B4;
    case 790u: goto L_08A538E8;
    case 791u: goto L_08A538F0;
    case 792u: goto L_08A53900;
    case 793u: goto L_08A53910;
    case 794u: goto L_08A5391C;
    case 795u: goto L_08A53920;
    case 796u: goto L_08A53938;
    case 797u: goto L_08A53944;
    case 798u: goto L_08A53950;
    case 799u: goto L_08A5395C;
    case 800u: goto L_08A53964;
    case 801u: goto L_08A53970;
    case 802u: goto L_08A5397C;
    case 803u: goto L_08A53984;
    case 804u: goto L_08A53994;
    case 805u: goto L_08A539A4;
    case 806u: goto L_08A539B4;
    case 807u: goto L_08A539D0;
    case 808u: goto L_08A539E0;
    case 809u: goto L_08A539F8;
    case 810u: goto L_08A53A0C;
    case 811u: goto L_08A53A20;
    case 812u: goto L_08A53A30;
    case 813u: goto L_08A53A40;
    case 814u: goto L_08A53A50;
    case 815u: goto L_08A53A5C;
    case 816u: goto L_08A53A68;
    case 817u: goto L_08A53A80;
    case 818u: goto L_08A53A98;
    case 819u: goto L_08A53AB4;
    case 820u: goto L_08A53ABC;
    case 821u: goto L_08A53ACC;
    case 822u: goto L_08A53AEC;
    case 823u: goto L_08A53AF4;
    case 824u: goto L_08A53B04;
    case 825u: goto L_08A53B0C;
    case 826u: goto L_08A53B14;
    case 827u: goto L_08A53B24;
    case 828u: goto L_08A53B2C;
    case 829u: goto L_08A53B44;
    case 830u: goto L_08A53B4C;
    case 831u: goto L_08A53B54;
    case 832u: goto L_08A53B64;
    case 833u: goto L_08A53B6C;
    case 834u: goto L_08A53B84;
    case 835u: goto L_08A53B8C;
    case 836u: goto L_08A53B94;
    case 837u: goto L_08A53BA4;
    case 838u: goto L_08A53BAC;
    case 839u: goto L_08A53BC4;
    case 840u: goto L_08A53BCC;
    case 841u: goto L_08A53BE4;
    case 842u: goto L_08A53BFC;
    case 843u: goto L_08A53C14;
    case 844u: goto L_08A53C20;
    case 845u: goto L_08A53C30;
    case 846u: goto L_08A53C40;
    case 847u: goto L_08A53C4C;
    case 848u: goto L_08A53C54;
    case 849u: goto L_08A53C60;
    case 850u: goto L_08A53C74;
    case 851u: goto L_08A53CAC;
    case 852u: goto L_08A53CC0;
    case 853u: goto L_08A53CD4;
    case 854u: goto L_08A53CF0;
    case 855u: goto L_08A53D04;
    case 856u: goto L_08A53D1C;
    case 857u: goto L_08A53D24;
    case 858u: goto L_08A53D28;
    case 859u: goto L_08A53D34;
    case 860u: goto L_08A53D44;
    case 861u: goto L_08A53D58;
    case 862u: goto L_08A53D64;
    case 863u: goto L_08A53D84;
    case 864u: goto L_08A53D94;
    case 865u: goto L_08A53DA4;
    case 866u: goto L_08A53DB4;
    case 867u: goto L_08A53DC4;
    case 868u: goto L_08A53E08;
    case 869u: goto L_08A53E14;
    case 870u: goto L_08A53E28;
    case 871u: goto L_08A53E3C;
    case 872u: goto L_08A53E68;
    case 873u: goto L_08A53E8C;
    case 874u: goto L_08A53E9C;
    case 875u: goto L_08A53EB0;
    case 876u: goto L_08A53EB8;
    case 877u: goto L_08A53F08;
    case 878u: goto L_08A53F10;
    case 879u: goto L_08A53F18;
    case 880u: goto L_08A53F24;
    case 881u: goto L_08A53F34;
    case 882u: goto L_08A53F48;
    case 883u: goto L_08A53F50;
    case 884u: goto L_08A53F64;
    case 885u: goto L_08A53F6C;
    case 886u: goto L_08A53F88;
    case 887u: goto L_08A53FA8;
    case 888u: goto L_08A53FB0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A50000:
    // nop
    goto L_08A50004;
L_08A50004:
    ctx.set_gpr(31, 0x08A5000Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5000Cu) goto L_08A5000C;
    return;
L_08A5000C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50020;
      }
      goto L_08A50018;
    }
L_08A50018:
    ctx.set_gpr(31, 0x08A50020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50020u) goto L_08A50020;
    return;
L_08A50020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50034;
      }
      goto L_08A5002C;
    }
L_08A5002C:
    ctx.set_gpr(31, 0x08A50034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50034u) goto L_08A50034;
    return;
L_08A50034:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A50038;
L_08A50038:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 924u, 0x08A4F6E4u>(ctx, &aot_mem); return;
      }
      goto L_08A50044;
    }
L_08A50044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50058;
      }
      goto L_08A50050;
    }
L_08A50050:
    ctx.set_gpr(31, 0x08A50058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50058u) goto L_08A50058;
    return;
L_08A50058:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5006C;
      }
      goto L_08A50064;
    }
L_08A50064:
    ctx.set_gpr(31, 0x08A5006Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5006Cu) goto L_08A5006C;
    return;
L_08A5006C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50080;
      }
      goto L_08A50078;
    }
L_08A50078:
    ctx.set_gpr(31, 0x08A50080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50080u) goto L_08A50080;
    return;
L_08A50080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50094;
      }
      goto L_08A5008C;
    }
L_08A5008C:
    ctx.set_gpr(31, 0x08A50094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50094u) goto L_08A50094;
    return;
L_08A50094:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A500C0;
      }
      goto L_08A500A4;
    }
L_08A500A4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A500C0;
      }
      goto L_08A500BC;
    }
L_08A500BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A500C0;
L_08A500C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A500EC;
      }
      goto L_08A500C8;
    }
L_08A500C8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A500EC;
      }
      goto L_08A500E0;
    }
L_08A500E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A500ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500ECu) goto L_08A500EC;
    return;
L_08A500EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50100;
      }
      goto L_08A500F8;
    }
L_08A500F8:
    ctx.set_gpr(31, 0x08A50100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50100u) goto L_08A50100;
    return;
L_08A50100:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5012C;
      }
      goto L_08A50110;
    }
L_08A50110:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5012C;
      }
      goto L_08A50128;
    }
L_08A50128:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A5012C;
L_08A5012C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50158;
      }
      goto L_08A50134;
    }
L_08A50134:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50158;
      }
      goto L_08A5014C;
    }
L_08A5014C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A50158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50158u) goto L_08A50158;
    return;
L_08A50158:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50184;
      }
      goto L_08A50168;
    }
L_08A50168:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50184;
      }
      goto L_08A50180;
    }
L_08A50180:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A50184;
L_08A50184:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A501B0;
      }
      goto L_08A5018C;
    }
L_08A5018C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A501B0;
      }
      goto L_08A501A4;
    }
L_08A501A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A501B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A501B0u) goto L_08A501B0;
    return;
L_08A501B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A501B4;
L_08A501B4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A501E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A50224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 442u, 0x08A4A0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A50224u) goto L_08A50224;
    return;
L_08A50224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50278;
      }
      goto L_08A5022C;
    }
L_08A5022C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5023Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5023Cu) goto L_08A5023C;
    return;
L_08A5023C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A50248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50248u) goto L_08A50248;
    return;
L_08A50248:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50258u) goto L_08A50258;
    return;
L_08A50258:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5026Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 759u, 0x08A4EC60u>(ctx, &aot_mem) && ctx.pc == 0x08A5026Cu) goto L_08A5026C;
    return;
L_08A5026C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    goto L_08A50278;
L_08A50278:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50298;
      }
      goto L_08A50280;
    }
L_08A50280:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 684u, 0x08A5EEC0u>(ctx, &aot_mem) && ctx.pc == 0x08A50298u) goto L_08A50298;
    return;
L_08A50298:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A502A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A502A8u) goto L_08A502A8;
    return;
L_08A502A8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A502B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A502B8u) goto L_08A502B8;
    return;
L_08A502B8:
    ctx.set_gpr(2, 0u < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
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
L_08A502E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A502F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 813u, 0x0894BAE4u>(ctx, &aot_mem) && ctx.pc == 0x08A502F8u) goto L_08A502F8;
    return;
L_08A502F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50308:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50450;
      }
      goto L_08A50340;
    }
L_08A50340:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50444;
      }
      goto L_08A50350;
    }
L_08A50350:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50390;
      }
      goto L_08A50368;
    }
L_08A50368:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    ctx.set_gpr(31, 0x08A5037Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5037Cu) goto L_08A5037C;
    return;
L_08A5037C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50390;
      }
      goto L_08A50384;
    }
L_08A50384:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50394;
      }
      goto L_08A50390;
    }
L_08A50390:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A50394;
L_08A50394:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A503B4;
      }
      goto L_08A5039C;
    }
L_08A5039C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A503ACu);
    // nop
    goto L_08A50308;
L_08A503AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50440;
      }
      goto L_08A503B4;
    }
L_08A503B4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50434;
      }
      goto L_08A503C8;
    }
L_08A503C8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(31, 0x08A503ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 677u, 0x0895ADB8u>(ctx, &aot_mem) && ctx.pc == 0x08A503ECu) goto L_08A503EC;
    return;
L_08A503EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50430;
      }
      goto L_08A503F4;
    }
L_08A503F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5040C;
      }
      goto L_08A50404;
    }
L_08A50404:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A5040C;
L_08A5040C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A5041Cu);
    // nop
    goto L_08A50D80;
L_08A5041C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50430;
      }
      goto L_08A50428;
    }
L_08A50428:
    ctx.set_gpr(31, 0x08A50430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50430u) goto L_08A50430;
    return;
L_08A50430:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A50434;
L_08A50434:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A503C8;
      }
      goto L_08A50440;
    }
L_08A50440:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A50444;
L_08A50444:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50350;
      }
      goto L_08A50450;
    }
L_08A50450:
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
L_08A50480:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5069C;
      }
      goto L_08A504A4;
    }
L_08A504A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A504B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 442u, 0x08A4A0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A504B0u) goto L_08A504B0;
    return;
L_08A504B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A504C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 465u, 0x08A4A20Cu>(ctx, &aot_mem) && ctx.pc == 0x08A504C0u) goto L_08A504C0;
    return;
L_08A504C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A504D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 629u, 0x08A4AB18u>(ctx, &aot_mem) && ctx.pc == 0x08A504D0u) goto L_08A504D0;
    return;
L_08A504D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50594;
      }
      goto L_08A504E4;
    }
L_08A504E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50500;
      }
      goto L_08A504F4;
    }
L_08A504F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50500;
L_08A50500:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5051Cu);
    // nop
    goto L_08A50C40;
L_08A5051C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A5052Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5052Cu) goto L_08A5052C;
    return;
L_08A5052C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50540;
      }
      goto L_08A50538;
    }
L_08A50538:
    ctx.set_gpr(31, 0x08A50540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50540u) goto L_08A50540;
    return;
L_08A50540:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50580;
      }
      goto L_08A5054C;
    }
L_08A5054C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A50558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 925u, 0x08913A24u>(ctx, &aot_mem) && ctx.pc == 0x08A50558u) goto L_08A50558;
    return;
L_08A50558:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50570;
      }
      goto L_08A50564;
    }
L_08A50564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50570u) goto L_08A50570;
    return;
L_08A50570:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50580u);
    // nop
    goto L_08A50308;
L_08A50580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50594;
      }
      goto L_08A5058C;
    }
L_08A5058C:
    ctx.set_gpr(31, 0x08A50594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50594u) goto L_08A50594;
    return;
L_08A50594:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5062C;
      }
      goto L_08A505A0;
    }
L_08A505A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A505B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 10u, 0x0895409Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505B0u) goto L_08A505B0;
    return;
L_08A505B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A505BC;
    }
L_08A505BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A505C8;
    }
L_08A505C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A505D4;
    }
L_08A505D4:
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(31, 0x08A505E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 677u, 0x0895ADB8u>(ctx, &aot_mem) && ctx.pc == 0x08A505E4u) goto L_08A505E4;
    return;
L_08A505E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A505EC;
    }
L_08A505EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50604;
      }
      goto L_08A505FC;
    }
L_08A505FC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A50604;
L_08A50604:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A50614u);
    // nop
    goto L_08A50D80;
L_08A50614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A50620;
    }
L_08A50620:
    ctx.set_gpr(31, 0x08A50628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50628u) goto L_08A50628;
    return;
L_08A50628:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A5062C;
L_08A5062C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A50638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 14u, 0x089540F4u>(ctx, &aot_mem) && ctx.pc == 0x08A50638u) goto L_08A50638;
    return;
L_08A50638:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A505A0;
      }
      goto L_08A50644;
    }
L_08A50644:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50670;
      }
      goto L_08A50654;
    }
L_08A50654:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50670;
      }
      goto L_08A5066C;
    }
L_08A5066C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A50670;
L_08A50670:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5069C;
      }
      goto L_08A50678;
    }
L_08A50678:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5069C;
      }
      goto L_08A50690;
    }
L_08A50690:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5069Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5069Cu) goto L_08A5069C;
    return;
L_08A5069C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A506B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A506D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A506D0u) goto L_08A506D0;
    return;
L_08A506D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A506F4;
      }
      goto L_08A506E0;
    }
L_08A506E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A506F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A506F4u) goto L_08A506F4;
    return;
L_08A506F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A50730;
      }
      goto L_08A50720;
    }
L_08A50720:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A50730u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50730u) goto L_08A50730;
    return;
L_08A50730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50780;
      }
      goto L_08A50774;
    }
L_08A50774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50780;
L_08A50780:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5079C;
      }
      goto L_08A50790;
    }
L_08A50790:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A5079C;
L_08A5079C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A507B8;
      }
      goto L_08A507AC;
    }
L_08A507AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A507B8;
L_08A507B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50824;
      }
      goto L_08A507C0;
    }
L_08A507C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A507DC;
      }
      goto L_08A507D0;
    }
L_08A507D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A507DC;
L_08A507DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A507F0;
      }
      goto L_08A507E8;
    }
L_08A507E8:
    ctx.set_gpr(31, 0x08A507F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A507F0u) goto L_08A507F0;
    return;
L_08A507F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50804;
      }
      goto L_08A507FC;
    }
L_08A507FC:
    ctx.set_gpr(31, 0x08A50804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50804u) goto L_08A50804;
    return;
L_08A50804:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50818;
      }
      goto L_08A50810;
    }
L_08A50810:
    ctx.set_gpr(31, 0x08A50818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50818u) goto L_08A50818;
    return;
L_08A50818:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C20;
      }
      goto L_08A50824;
    }
L_08A50824:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A509C0;
      }
      goto L_08A50830;
    }
L_08A50830:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A50940;
      }
      goto L_08A5083C;
    }
L_08A5083C:
    ctx.set_gpr(31, 0x08A50844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A50844u) goto L_08A50844;
    return;
L_08A50844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4652));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A50864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50864u) goto L_08A50864;
    return;
L_08A50864:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5088C;
      }
      goto L_08A50870;
    }
L_08A50870:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(31, 0x08A50884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50884u) goto L_08A50884;
    return;
L_08A50884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A508F0;
      }
      goto L_08A5088C;
    }
L_08A5088C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A508A8;
      }
      goto L_08A5089C;
    }
L_08A5089C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A508A8;
L_08A508A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A508BC;
      }
      goto L_08A508B4;
    }
L_08A508B4:
    ctx.set_gpr(31, 0x08A508BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A508BCu) goto L_08A508BC;
    return;
L_08A508BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A508D0;
      }
      goto L_08A508C8;
    }
L_08A508C8:
    ctx.set_gpr(31, 0x08A508D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A508D0u) goto L_08A508D0;
    return;
L_08A508D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A508E4;
      }
      goto L_08A508DC;
    }
L_08A508DC:
    ctx.set_gpr(31, 0x08A508E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A508E4u) goto L_08A508E4;
    return;
L_08A508E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C20;
      }
      goto L_08A508F0;
    }
L_08A508F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24356)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50908u) goto L_08A50908;
    return;
L_08A50908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50928;
      }
      goto L_08A50910;
    }
L_08A50910:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A50920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50920u) goto L_08A50920;
    return;
L_08A50920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50950;
      }
      goto L_08A50928;
    }
L_08A50928:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50938u) goto L_08A50938;
    return;
L_08A50938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50950;
      }
      goto L_08A50940;
    }
L_08A50940:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50950u) goto L_08A50950;
    return;
L_08A50950:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50960u) goto L_08A50960;
    return;
L_08A50960:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50978;
      }
      goto L_08A5096C;
    }
L_08A5096C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A50978;
L_08A50978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A509AC;
      }
      goto L_08A50984;
    }
L_08A50984:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    ctx.set_gpr(31, 0x08A50994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50994u) goto L_08A50994;
    return;
L_08A50994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A509AC;
      }
      goto L_08A5099C;
    }
L_08A5099C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A509ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A509ACu) goto L_08A509AC;
    return;
L_08A509AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A509C0;
      }
      goto L_08A509B8;
    }
L_08A509B8:
    ctx.set_gpr(31, 0x08A509C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A509C0u) goto L_08A509C0;
    return;
L_08A509C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B64;
      }
      goto L_08A509CC;
    }
L_08A509CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A509DCu);
    // nop
    goto L_08A51810;
L_08A509DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A60;
      }
      goto L_08A509E8;
    }
L_08A509E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A04;
      }
      goto L_08A509F8;
    }
L_08A509F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50A04;
L_08A50A04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A18;
      }
      goto L_08A50A10;
    }
L_08A50A10:
    ctx.set_gpr(31, 0x08A50A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50A18u) goto L_08A50A18;
    return;
L_08A50A18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A2C;
      }
      goto L_08A50A24;
    }
L_08A50A24:
    ctx.set_gpr(31, 0x08A50A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50A2Cu) goto L_08A50A2C;
    return;
L_08A50A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A40;
      }
      goto L_08A50A38;
    }
L_08A50A38:
    ctx.set_gpr(31, 0x08A50A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50A40u) goto L_08A50A40;
    return;
L_08A50A40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50A54;
      }
      goto L_08A50A4C;
    }
L_08A50A4C:
    ctx.set_gpr(31, 0x08A50A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50A54u) goto L_08A50A54;
    return;
L_08A50A54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C20;
      }
      goto L_08A50A60;
    }
L_08A50A60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A50A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A6Cu) goto L_08A50A6C;
    return;
L_08A50A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 727u, 0x088EB704u>(ctx, &aot_mem) && ctx.pc == 0x08A50A78u) goto L_08A50A78;
    return;
L_08A50A78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A88u) goto L_08A50A88;
    return;
L_08A50A88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50AA4;
      }
      goto L_08A50A9C;
    }
L_08A50A9C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A50AA4;
L_08A50AA4:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(31, 0x08A50AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 468u, 0x089521C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50AB0u) goto L_08A50AB0;
    return;
L_08A50AB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B30;
      }
      goto L_08A50AB8;
    }
L_08A50AB8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50AD4;
      }
      goto L_08A50AC8;
    }
L_08A50AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50AD4;
L_08A50AD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50AE8;
      }
      goto L_08A50AE0;
    }
L_08A50AE0:
    ctx.set_gpr(31, 0x08A50AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50AE8u) goto L_08A50AE8;
    return;
L_08A50AE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50AFC;
      }
      goto L_08A50AF4;
    }
L_08A50AF4:
    ctx.set_gpr(31, 0x08A50AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50AFCu) goto L_08A50AFC;
    return;
L_08A50AFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B10;
      }
      goto L_08A50B08;
    }
L_08A50B08:
    ctx.set_gpr(31, 0x08A50B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50B10u) goto L_08A50B10;
    return;
L_08A50B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B24;
      }
      goto L_08A50B1C;
    }
L_08A50B1C:
    ctx.set_gpr(31, 0x08A50B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50B24u) goto L_08A50B24;
    return;
L_08A50B24:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C20;
      }
      goto L_08A50B30;
    }
L_08A50B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B50;
      }
      goto L_08A50B3C;
    }
L_08A50B3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 774u, 0x0894B850u>(ctx, &aot_mem) && ctx.pc == 0x08A50B50u) goto L_08A50B50;
    return;
L_08A50B50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B64;
      }
      goto L_08A50B5C;
    }
L_08A50B5C:
    ctx.set_gpr(31, 0x08A50B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50B64u) goto L_08A50B64;
    return;
L_08A50B64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B88;
      }
      goto L_08A50B70;
    }
L_08A50B70:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50B80u) goto L_08A50B80;
    return;
L_08A50B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50BC4;
      }
      goto L_08A50B88;
    }
L_08A50B88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A50B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B94u) goto L_08A50B94;
    return;
L_08A50B94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 727u, 0x088EB704u>(ctx, &aot_mem) && ctx.pc == 0x08A50BA0u) goto L_08A50BA0;
    return;
L_08A50BA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BB0u) goto L_08A50BB0;
    return;
L_08A50BB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A50BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 579u, 0x089527FCu>(ctx, &aot_mem) && ctx.pc == 0x08A50BC4u) goto L_08A50BC4;
    return;
L_08A50BC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50BE0;
      }
      goto L_08A50BD4;
    }
L_08A50BD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50BE0;
L_08A50BE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50BF4;
      }
      goto L_08A50BEC;
    }
L_08A50BEC:
    ctx.set_gpr(31, 0x08A50BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50BF4u) goto L_08A50BF4;
    return;
L_08A50BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C08;
      }
      goto L_08A50C00;
    }
L_08A50C00:
    ctx.set_gpr(31, 0x08A50C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50C08u) goto L_08A50C08;
    return;
L_08A50C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C1C;
      }
      goto L_08A50C14;
    }
L_08A50C14:
    ctx.set_gpr(31, 0x08A50C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50C1Cu) goto L_08A50C1C;
    return;
L_08A50C1C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A50C20;
L_08A50C20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A50C40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50C7C;
      }
      goto L_08A50C70;
    }
L_08A50C70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50C7C;
L_08A50C7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50C90u);
    // nop
    goto L_08A50D80;
L_08A50C90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D1C;
      }
      goto L_08A50C9C;
    }
L_08A50C9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A50CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CA8u) goto L_08A50CA8;
    return;
L_08A50CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 608u, 0x088F32F8u>(ctx, &aot_mem) && ctx.pc == 0x08A50CB4u) goto L_08A50CB4;
    return;
L_08A50CB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A50CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CC4u) goto L_08A50CC4;
    return;
L_08A50CC4:
    ctx.set_gpr(31, 0x08A50CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A50CCCu) goto L_08A50CCC;
    return;
L_08A50CCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A50CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x08A50CDCu) goto L_08A50CDC;
    return;
L_08A50CDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50CF8;
      }
      goto L_08A50CF0;
    }
L_08A50CF0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A50CF8;
L_08A50CF8:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 917u, 0x08913998u>(ctx, &aot_mem) && ctx.pc == 0x08A50D04u) goto L_08A50D04;
    return;
L_08A50D04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D1C;
      }
      goto L_08A50D0C;
    }
L_08A50D0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A50D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50D1Cu) goto L_08A50D1C;
    return;
L_08A50D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D38;
      }
      goto L_08A50D2C;
    }
L_08A50D2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50D38;
L_08A50D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D4C;
      }
      goto L_08A50D44;
    }
L_08A50D44:
    ctx.set_gpr(31, 0x08A50D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50D4Cu) goto L_08A50D4C;
    return;
L_08A50D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D60;
      }
      goto L_08A50D58;
    }
L_08A50D58:
    ctx.set_gpr(31, 0x08A50D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50D60u) goto L_08A50D60;
    return;
L_08A50D60:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A50D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50DC4;
      }
      goto L_08A50DB8;
    }
L_08A50DB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50DC4;
L_08A50DC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50DE0;
      }
      goto L_08A50DD4;
    }
L_08A50DD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50DE0;
L_08A50DE0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50E38;
      }
      goto L_08A50DE8;
    }
L_08A50DE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50E04;
      }
      goto L_08A50DF8;
    }
L_08A50DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50E04;
L_08A50E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50E18;
      }
      goto L_08A50E10;
    }
L_08A50E10:
    ctx.set_gpr(31, 0x08A50E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50E18u) goto L_08A50E18;
    return;
L_08A50E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50E2C;
      }
      goto L_08A50E24;
    }
L_08A50E24:
    ctx.set_gpr(31, 0x08A50E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50E2Cu) goto L_08A50E2C;
    return;
L_08A50E2C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5126C;
      }
      goto L_08A50E38;
    }
L_08A50E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F98;
      }
      goto L_08A50E44;
    }
L_08A50E44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A50F40;
      }
      goto L_08A50E50;
    }
L_08A50E50:
    ctx.set_gpr(31, 0x08A50E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A50E58u) goto L_08A50E58;
    return;
L_08A50E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4652));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A50E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50E78u) goto L_08A50E78;
    return;
L_08A50E78:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EA0;
      }
      goto L_08A50E84;
    }
L_08A50E84:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(31, 0x08A50E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E98u) goto L_08A50E98;
    return;
L_08A50E98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EF0;
      }
      goto L_08A50EA0;
    }
L_08A50EA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EBC;
      }
      goto L_08A50EB0;
    }
L_08A50EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50EBC;
L_08A50EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50ED0;
      }
      goto L_08A50EC8;
    }
L_08A50EC8:
    ctx.set_gpr(31, 0x08A50ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50ED0u) goto L_08A50ED0;
    return;
L_08A50ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EE4;
      }
      goto L_08A50EDC;
    }
L_08A50EDC:
    ctx.set_gpr(31, 0x08A50EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50EE4u) goto L_08A50EE4;
    return;
L_08A50EE4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5126C;
      }
      goto L_08A50EF0;
    }
L_08A50EF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24356)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50F08u) goto L_08A50F08;
    return;
L_08A50F08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F28;
      }
      goto L_08A50F10;
    }
L_08A50F10:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A50F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50F20u) goto L_08A50F20;
    return;
L_08A50F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F50;
      }
      goto L_08A50F28;
    }
L_08A50F28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50F38u) goto L_08A50F38;
    return;
L_08A50F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F50;
      }
      goto L_08A50F40;
    }
L_08A50F40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A50F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50F50u) goto L_08A50F50;
    return;
L_08A50F50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50F60u) goto L_08A50F60;
    return;
L_08A50F60:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F98;
      }
      goto L_08A50F6C;
    }
L_08A50F6C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    ctx.set_gpr(31, 0x08A50F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F80u) goto L_08A50F80;
    return;
L_08A50F80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50F98;
      }
      goto L_08A50F88;
    }
L_08A50F88:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A50F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A50F98u) goto L_08A50F98;
    return;
L_08A50F98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51224;
      }
      goto L_08A50FA4;
    }
L_08A50FA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A50FB4u);
    // nop
    goto L_08A51810;
L_08A50FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51024;
      }
      goto L_08A50FC0;
    }
L_08A50FC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50FDC;
      }
      goto L_08A50FD0;
    }
L_08A50FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A50FDC;
L_08A50FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50FF0;
      }
      goto L_08A50FE8;
    }
L_08A50FE8:
    ctx.set_gpr(31, 0x08A50FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A50FF0u) goto L_08A50FF0;
    return;
L_08A50FF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51004;
      }
      goto L_08A50FFC;
    }
L_08A50FFC:
    ctx.set_gpr(31, 0x08A51004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51004u) goto L_08A51004;
    return;
L_08A51004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51018;
      }
      goto L_08A51010;
    }
L_08A51010:
    ctx.set_gpr(31, 0x08A51018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51018u) goto L_08A51018;
    return;
L_08A51018:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5126C;
      }
      goto L_08A51024;
    }
L_08A51024:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A51030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51030u) goto L_08A51030;
    return;
L_08A51030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5103Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5103Cu) goto L_08A5103C;
    return;
L_08A5103C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5104Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5104Cu) goto L_08A5104C;
    return;
L_08A5104C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A51058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51058u) goto L_08A51058;
    return;
L_08A51058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x08A51064u) goto L_08A51064;
    return;
L_08A51064:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51080;
      }
      goto L_08A51078;
    }
L_08A51078:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1368)));
    goto L_08A51080;
L_08A51080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22640));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5109Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5109Cu) goto L_08A5109C;
    return;
L_08A5109C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5111C;
      }
      goto L_08A510A4;
    }
L_08A510A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A510C0;
      }
      goto L_08A510B4;
    }
L_08A510B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A510C0;
L_08A510C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A510D4;
      }
      goto L_08A510CC;
    }
L_08A510CC:
    ctx.set_gpr(31, 0x08A510D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A510D4u) goto L_08A510D4;
    return;
L_08A510D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A510E8;
      }
      goto L_08A510E0;
    }
L_08A510E0:
    ctx.set_gpr(31, 0x08A510E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A510E8u) goto L_08A510E8;
    return;
L_08A510E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A510FC;
      }
      goto L_08A510F4;
    }
L_08A510F4:
    ctx.set_gpr(31, 0x08A510FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A510FCu) goto L_08A510FC;
    return;
L_08A510FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51110;
      }
      goto L_08A51108;
    }
L_08A51108:
    ctx.set_gpr(31, 0x08A51110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51110u) goto L_08A51110;
    return;
L_08A51110:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5126C;
      }
      goto L_08A5111C;
    }
L_08A5111C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51138u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51138u) goto L_08A51138;
    return;
L_08A51138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5114Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5114Cu) goto L_08A5114C;
    return;
L_08A5114C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5116Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5116Cu) goto L_08A5116C;
    return;
L_08A5116C:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5117Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08A5117Cu) goto L_08A5117C;
    return;
L_08A5117C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A511A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A511A0u) goto L_08A511A0;
    return;
L_08A511A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A511B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A511B4u) goto L_08A511B4;
    return;
L_08A511B4:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A511CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A511CCu) goto L_08A511CC;
    return;
L_08A511CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A511DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A511DCu) goto L_08A511DC;
    return;
L_08A511DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A511FC;
      }
      goto L_08A511E8;
    }
L_08A511E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A511FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 774u, 0x0894B850u>(ctx, &aot_mem) && ctx.pc == 0x08A511FCu) goto L_08A511FC;
    return;
L_08A511FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51210;
      }
      goto L_08A51208;
    }
L_08A51208:
    ctx.set_gpr(31, 0x08A51210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51210u) goto L_08A51210;
    return;
L_08A51210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51224;
      }
      goto L_08A5121C;
    }
L_08A5121C:
    ctx.set_gpr(31, 0x08A51224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51224u) goto L_08A51224;
    return;
L_08A51224:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51240;
      }
      goto L_08A51234;
    }
L_08A51234:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A51240;
L_08A51240:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51254;
      }
      goto L_08A5124C;
    }
L_08A5124C:
    ctx.set_gpr(31, 0x08A51254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51254u) goto L_08A51254;
    return;
L_08A51254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51268;
      }
      goto L_08A51260;
    }
L_08A51260:
    ctx.set_gpr(31, 0x08A51268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51268u) goto L_08A51268;
    return;
L_08A51268:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A5126C;
L_08A5126C:
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
L_08A51290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A512A0u);
    // nop
    goto L_08A512B0;
L_08A512A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A512B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A512D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 151u, 0x08A0CCB8u>(ctx, &aot_mem) && ctx.pc == 0x08A512D8u) goto L_08A512D8;
    return;
L_08A512D8:
    ctx.set_gpr(31, 0x08A512E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 282u, 0x088F17B4u>(ctx, &aot_mem) && ctx.pc == 0x08A512E0u) goto L_08A512E0;
    return;
L_08A512E0:
    ctx.set_gpr(31, 0x08A512E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 37u, 0x088E8310u>(ctx, &aot_mem) && ctx.pc == 0x08A512E8u) goto L_08A512E8;
    return;
L_08A512E8:
    ctx.set_gpr(31, 0x08A512F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A512F0u) goto L_08A512F0;
    return;
L_08A512F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4652));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A51310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51310u) goto L_08A51310;
    return;
L_08A51310:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51338;
      }
      goto L_08A5131C;
    }
L_08A5131C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(31, 0x08A51330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51330u) goto L_08A51330;
    return;
L_08A51330:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51340;
      }
      goto L_08A51338;
    }
L_08A51338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A515F8;
      }
      goto L_08A51340;
    }
L_08A51340:
    ctx.set_gpr(31, 0x08A51348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A51348u) goto L_08A51348;
    return;
L_08A51348:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22644));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A51364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A51364u) goto L_08A51364;
    return;
L_08A51364:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A51370u) goto L_08A51370;
    return;
L_08A51370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5137Cu) goto L_08A5137C;
    return;
L_08A5137C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51388u) goto L_08A51388;
    return;
L_08A51388:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A513C0;
      }
      goto L_08A51394;
    }
L_08A51394:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22652));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A513B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08A513B8u) goto L_08A513B8;
    return;
L_08A513B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A513D0;
      }
      goto L_08A513C0;
    }
L_08A513C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A513D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A513D0u) goto L_08A513D0;
    return;
L_08A513D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A514C8;
      }
      goto L_08A513DC;
    }
L_08A513DC:
    ctx.set_gpr(31, 0x08A513E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A513E4u) goto L_08A513E4;
    return;
L_08A513E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A513F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A513F0u) goto L_08A513F0;
    return;
L_08A513F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A513FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 267u, 0x088F168Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513FCu) goto L_08A513FC;
    return;
L_08A513FC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21756));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51410u) goto L_08A51410;
    return;
L_08A51410:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51428;
      }
      goto L_08A51420;
    }
L_08A51420:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A51428;
L_08A51428:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21756)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51468;
      }
      goto L_08A51440;
    }
L_08A51440:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A5144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A5144Cu) goto L_08A5144C;
    return;
L_08A5144C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51460;
      }
      goto L_08A51454;
    }
L_08A51454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51460u) goto L_08A51460;
    return;
L_08A51460:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A51468;
L_08A51468:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A5147Cu) goto L_08A5147C;
    return;
L_08A5147C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A514A4;
      }
      goto L_08A51490;
    }
L_08A51490:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A5149Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5149Cu) goto L_08A5149C;
    return;
L_08A5149C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A514A4;
L_08A514A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A514BC;
      }
      goto L_08A514AC;
    }
L_08A514AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A514BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A514BCu) goto L_08A514BC;
    return;
L_08A514BC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A514DC;
      }
      goto L_08A514C8;
    }
L_08A514C8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21756));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A514DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A514DCu) goto L_08A514DC;
    return;
L_08A514DC:
    ctx.set_gpr(31, 0x08A514E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A514E4u) goto L_08A514E4;
    return;
L_08A514E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A514F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A514F0u) goto L_08A514F0;
    return;
L_08A514F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A514FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A514FCu) goto L_08A514FC;
    return;
L_08A514FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A51530;
      }
      goto L_08A51508;
    }
L_08A51508:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22668));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A51528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A51528u) goto L_08A51528;
    return;
L_08A51528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51590;
      }
      goto L_08A51530;
    }
L_08A51530:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51580;
      }
      goto L_08A51544;
    }
L_08A51544:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A51558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x08A51558u) goto L_08A51558;
    return;
L_08A51558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A51568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A51568u) goto L_08A51568;
    return;
L_08A51568:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A51578u) goto L_08A51578;
    return;
L_08A51578:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A51580;
L_08A51580:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51544;
      }
      goto L_08A5158C;
    }
L_08A5158C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A51590;
L_08A51590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A515AC;
      }
      goto L_08A515A0;
    }
L_08A515A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A515AC;
L_08A515AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A515BCu);
    // nop
    goto L_08A5164C;
L_08A515BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A515D0;
      }
      goto L_08A515C8;
    }
L_08A515C8:
    ctx.set_gpr(31, 0x08A515D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A515D0u) goto L_08A515D0;
    return;
L_08A515D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A515E4;
      }
      goto L_08A515DC;
    }
L_08A515DC:
    ctx.set_gpr(31, 0x08A515E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A515E4u) goto L_08A515E4;
    return;
L_08A515E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A515F8;
      }
      goto L_08A515F0;
    }
L_08A515F0:
    ctx.set_gpr(31, 0x08A515F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A515F8u) goto L_08A515F8;
    return;
L_08A515F8:
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
L_08A51620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21756));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5163Cu) goto L_08A5163C;
    return;
L_08A5163C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5164C:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517DC;
      }
      goto L_08A51688;
    }
L_08A51688:
    ctx.set_gpr(31, 0x08A51690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A51690u) goto L_08A51690;
    return;
L_08A51690:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5169Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5169Cu) goto L_08A5169C;
    return;
L_08A5169C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A516A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 191u, 0x08A190CCu>(ctx, &aot_mem) && ctx.pc == 0x08A516A8u) goto L_08A516A8;
    return;
L_08A516A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A516D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 356u, 0x08A49B54u>(ctx, &aot_mem) && ctx.pc == 0x08A516D4u) goto L_08A516D4;
    return;
L_08A516D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517C4;
      }
      goto L_08A516DC;
    }
L_08A516DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A516FC;
      }
      goto L_08A516F4;
    }
L_08A516F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51704;
      }
      goto L_08A516FC;
    }
L_08A516FC:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_08A51704;
L_08A51704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08A51718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51718u) goto L_08A51718;
    return;
L_08A51718:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517B4;
      }
      goto L_08A51724;
    }
L_08A51724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A517A0;
      }
      goto L_08A51738;
    }
L_08A51738:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A517A0;
      }
      goto L_08A51744;
    }
L_08A51744:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    ctx.set_gpr(31, 0x08A51758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51758u) goto L_08A51758;
    return;
L_08A51758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517A0;
      }
      goto L_08A51760;
    }
L_08A51760:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    ctx.set_gpr(31, 0x08A51774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51774u) goto L_08A51774;
    return;
L_08A51774:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517A0;
      }
      goto L_08A5177C;
    }
L_08A5177C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 813u, 0x0894BAE4u>(ctx, &aot_mem) && ctx.pc == 0x08A51790u) goto L_08A51790;
    return;
L_08A51790:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A517A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 866u, 0x0894BEC0u>(ctx, &aot_mem) && ctx.pc == 0x08A517A0u) goto L_08A517A0;
    return;
L_08A517A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A517B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem) && ctx.pc == 0x08A517B4u) goto L_08A517B4;
    return;
L_08A517B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A517C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A517C4u) goto L_08A517C4;
    return;
L_08A517C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A517D8;
      }
      goto L_08A517D0;
    }
L_08A517D0:
    ctx.set_gpr(31, 0x08A517D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A517D8u) goto L_08A517D8;
    return;
L_08A517D8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A517DC;
L_08A517DC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51688;
      }
      goto L_08A517E8;
    }
L_08A517E8:
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
L_08A51810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21756)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51860;
      }
      goto L_08A5183C;
    }
L_08A5183C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51858;
      }
      goto L_08A5184C;
    }
L_08A5184C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A51858;
L_08A51858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A519B4;
      }
      goto L_08A51860;
    }
L_08A51860:
    ctx.set_gpr(31, 0x08A51868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51868u) goto L_08A51868;
    return;
L_08A51868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A51874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A51874u) goto L_08A51874;
    return;
L_08A51874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x08A51880u) goto L_08A51880;
    return;
L_08A51880:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A518A0;
      }
      goto L_08A51894;
    }
L_08A51894:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A518A0;
L_08A518A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A518BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A518BCu) goto L_08A518BC;
    return;
L_08A518BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A518D8;
      }
      goto L_08A518D0;
    }
L_08A518D0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A518D8;
L_08A518D8:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32592));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A518ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A518ECu) goto L_08A518EC;
    return;
L_08A518EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51904;
      }
      goto L_08A518FC;
    }
L_08A518FC:
    ctx.set_gpr(31, 0x08A51904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51904u) goto L_08A51904;
    return;
L_08A51904:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5196C;
      }
      goto L_08A5190C;
    }
L_08A5190C:
    ctx.set_gpr(31, 0x08A51914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x08A51914u) goto L_08A51914;
    return;
L_08A51914:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A51920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A51920u) goto L_08A51920;
    return;
L_08A51920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5192Cu) goto L_08A5192C;
    return;
L_08A5192C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5193Cu) goto L_08A5193C;
    return;
L_08A5193C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A51958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51958u) goto L_08A51958;
    return;
L_08A51958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5196Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5196Cu) goto L_08A5196C;
    return;
L_08A5196C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51988;
      }
      goto L_08A5197C;
    }
L_08A5197C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A51988;
L_08A51988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5199C;
      }
      goto L_08A51994;
    }
L_08A51994:
    ctx.set_gpr(31, 0x08A5199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5199Cu) goto L_08A5199C;
    return;
L_08A5199C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A519B0;
      }
      goto L_08A519A8;
    }
L_08A519A8:
    ctx.set_gpr(31, 0x08A519B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A519B0u) goto L_08A519B0;
    return;
L_08A519B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A519B4;
L_08A519B4:
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
L_08A519D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A519E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A519E8u) goto L_08A519E8;
    return;
L_08A519E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A519F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 95u, 0x08A18804u>(ctx, &aot_mem) && ctx.pc == 0x08A519F4u) goto L_08A519F4;
    return;
L_08A519F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51A04u) goto L_08A51A04;
    return;
L_08A51A04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A51A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 619u, 0x08A5E9F4u>(ctx, &aot_mem) && ctx.pc == 0x08A51A10u) goto L_08A51A10;
    return;
L_08A51A10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A51A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 693u, 0x0890B034u>(ctx, &aot_mem) && ctx.pc == 0x08A51A24u) goto L_08A51A24;
    return;
L_08A51A24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51A6C;
      }
      goto L_08A51A60;
    }
L_08A51A60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A51A6C;
L_08A51A6C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51A8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51A8Cu) goto L_08A51A8C;
    return;
L_08A51A8C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51AB8;
      }
      goto L_08A51A98;
    }
L_08A51A98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51AB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51AB4u) goto L_08A51AB4;
    return;
L_08A51AB4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08A51AB8;
L_08A51AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51ACC;
      }
      goto L_08A51AC4;
    }
L_08A51AC4:
    ctx.set_gpr(31, 0x08A51ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51ACCu) goto L_08A51ACC;
    return;
L_08A51ACC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A51AEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51B1C;
      }
      goto L_08A51B10;
    }
L_08A51B10:
    ctx.set_gpr(31, 0x08A51B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A51B18u) goto L_08A51B18;
    return;
L_08A51B18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    goto L_08A51B1C;
L_08A51B1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51B34;
      }
      goto L_08A51B28;
    }
L_08A51B28:
    ctx.set_gpr(31, 0x08A51B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A51B30u) goto L_08A51B30;
    return;
L_08A51B30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    goto L_08A51B34;
L_08A51B34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51B48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51B48u) goto L_08A51B48;
    return;
L_08A51B48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A51B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51B58u) goto L_08A51B58;
    return;
L_08A51B58:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24476)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A51B74u) goto L_08A51B74;
    return;
L_08A51B74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51B88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51B88u) goto L_08A51B88;
    return;
L_08A51B88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A51B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51B98u) goto L_08A51B98;
    return;
L_08A51B98:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24472)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A51BB4u) goto L_08A51BB4;
    return;
L_08A51BB4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51BF8;
      }
      goto L_08A51BC0;
    }
L_08A51BC0:
    ctx.set_gpr(17, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x08A51BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51BDCu) goto L_08A51BDC;
    return;
L_08A51BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x08A51BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51BF4u) goto L_08A51BF4;
    return;
L_08A51BF4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A51BF8;
L_08A51BF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51C0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51C0Cu) goto L_08A51C0C;
    return;
L_08A51C0C:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51BC0;
      }
      goto L_08A51C18;
    }
L_08A51C18:
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
L_08A51C34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51C40:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    ctx.set_gpr(31, 0x08A51C80u);
    // nop
    goto L_08A51AEC;
L_08A51C80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51C98;
      }
      goto L_08A51C8C;
    }
L_08A51C8C:
    ctx.set_gpr(31, 0x08A51C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A51C94u) goto L_08A51C94;
    return;
L_08A51C94:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(132), 0u);
    goto L_08A51C98;
L_08A51C98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CB0;
      }
      goto L_08A51CA4;
    }
L_08A51CA4:
    ctx.set_gpr(31, 0x08A51CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A51CACu) goto L_08A51CAC;
    return;
L_08A51CAC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(144), 0u);
    goto L_08A51CB0;
L_08A51CB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CC8;
      }
      goto L_08A51CBC;
    }
L_08A51CBC:
    ctx.set_gpr(31, 0x08A51CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A51CC4u) goto L_08A51CC4;
    return;
L_08A51CC4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), 0u);
    goto L_08A51CC8;
L_08A51CC8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51CDCu) goto L_08A51CDC;
    return;
L_08A51CDC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51CECu) goto L_08A51CEC;
    return;
L_08A51CEC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24480)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A51D08u) goto L_08A51D08;
    return;
L_08A51D08:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51D1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51D1Cu) goto L_08A51D1C;
    return;
L_08A51D1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51D2Cu) goto L_08A51D2C;
    return;
L_08A51D2C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24468)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A51D48u) goto L_08A51D48;
    return;
L_08A51D48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51D5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51D5Cu) goto L_08A51D5C;
    return;
L_08A51D5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51D6Cu) goto L_08A51D6C;
    return;
L_08A51D6C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24464)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A51D88u) goto L_08A51D88;
    return;
L_08A51D88:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DC0;
      }
      goto L_08A51D9C;
    }
L_08A51D9C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DBC;
      }
      goto L_08A51DB4;
    }
L_08A51DB4:
    ctx.set_gpr(31, 0x08A51DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A51DBCu) goto L_08A51DBC;
    return;
L_08A51DBC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A51DC0;
L_08A51DC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51D9C;
      }
      goto L_08A51DCC;
    }
L_08A51DCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DF0;
      }
      goto L_08A51DDC;
    }
L_08A51DDC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A51DF0;
L_08A51DF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DDC;
      }
      goto L_08A51DFC;
    }
L_08A51DFC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51E20u) goto L_08A51E20;
    return;
L_08A51E20:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51FDC;
      }
      goto L_08A51E38;
    }
L_08A51E38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[17] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A51E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A51E80u) goto L_08A51E80;
    return;
L_08A51E80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A51E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51E94u) goto L_08A51E94;
    return;
L_08A51E94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A51EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A51EA4u) goto L_08A51EA4;
    return;
L_08A51EA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A51EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A51EB4u) goto L_08A51EB4;
    return;
L_08A51EB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A51EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51EC8u) goto L_08A51EC8;
    return;
L_08A51EC8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51ED4u) goto L_08A51ED4;
    return;
L_08A51ED4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 521u, 0x08A16C50u>(ctx, &aot_mem) && ctx.pc == 0x08A51EE0u) goto L_08A51EE0;
    return;
L_08A51EE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51EF0u) goto L_08A51EF0;
    return;
L_08A51EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A51F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51F0Cu) goto L_08A51F0C;
    return;
L_08A51F0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 303u, 0x08A25A58u>(ctx, &aot_mem) && ctx.pc == 0x08A51F18u) goto L_08A51F18;
    return;
L_08A51F18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51F28u) goto L_08A51F28;
    return;
L_08A51F28:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51F44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51F44u) goto L_08A51F44;
    return;
L_08A51F44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A51F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A51F54u) goto L_08A51F54;
    return;
L_08A51F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A51F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51F68u) goto L_08A51F68;
    return;
L_08A51F68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A51F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A51F78u) goto L_08A51F78;
    return;
L_08A51F78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51F8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51F8Cu) goto L_08A51F8C;
    return;
L_08A51F8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51FD8;
      }
      goto L_08A51F9C;
    }
L_08A51F9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51FB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51FB8u) goto L_08A51FB8;
    return;
L_08A51FB8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51FD4u) goto L_08A51FD4;
    return;
L_08A51FD4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08A51FD8;
L_08A51FD8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A51FDC;
L_08A51FDC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A51FF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51FF0u) goto L_08A51FF0;
    return;
L_08A51FF0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51E38;
      }
      goto L_08A51FFC;
    }
L_08A51FFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52010;
      }
      goto L_08A52008;
    }
L_08A52008:
    ctx.set_gpr(31, 0x08A52010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A52010u) goto L_08A52010;
    return;
L_08A52010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52024;
      }
      goto L_08A5201C;
    }
L_08A5201C:
    ctx.set_gpr(31, 0x08A52024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A52024u) goto L_08A52024;
    return;
L_08A52024:
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
L_08A52054:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A520A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A520A8u) goto L_08A520A8;
    return;
L_08A520A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A520C0;
      }
      goto L_08A520B4;
    }
L_08A520B4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A520E0;
      }
      goto L_08A520C0;
    }
L_08A520C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A520DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A520DCu) goto L_08A520DC;
    return;
L_08A520DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A520E0;
L_08A520E0:
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
L_08A520F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5212C;
      }
      goto L_08A52120;
    }
L_08A52120:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52144;
      }
      goto L_08A5212C;
    }
L_08A5212C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A52140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52140u) goto L_08A52140;
    return;
L_08A52140:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A52144;
L_08A52144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(31, 0x08A52160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52160u) goto L_08A52160;
    return;
L_08A52160:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    ctx.set_gpr(31, 0x08A5217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5217Cu) goto L_08A5217C;
    return;
L_08A5217C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.set_gpr(31, 0x08A52198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52198u) goto L_08A52198;
    return;
L_08A52198:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52204;
      }
      goto L_08A521A4;
    }
L_08A521A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26432)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(31, 0x08A521C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A521C0u) goto L_08A521C0;
    return;
L_08A521C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08A521D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A521D4u) goto L_08A521D4;
    return;
L_08A521D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x08A521E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 100u, 0x08A01514u>(ctx, &aot_mem) && ctx.pc == 0x08A521E4u) goto L_08A521E4;
    return;
L_08A521E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A521FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x08A521FCu) goto L_08A521FC;
    return;
L_08A521FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52240;
      }
      goto L_08A52204;
    }
L_08A52204:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A52230;
      }
      goto L_08A52214;
    }
L_08A52214:
    ctx.set_gpr(2, ctx.gpr[3] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(31, 0x08A52228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52228u) goto L_08A52228;
    return;
L_08A52228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52240;
      }
      goto L_08A52230;
    }
L_08A52230:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(31, 0x08A52240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52240u) goto L_08A52240;
    return;
L_08A52240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A5225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A5225Cu) goto L_08A5225C;
    return;
L_08A5225C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A52270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A52270u) goto L_08A52270;
    return;
L_08A52270:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A52284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A52284u) goto L_08A52284;
    return;
L_08A52284:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A52298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A52298u) goto L_08A52298;
    return;
L_08A52298:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A522ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A522ACu) goto L_08A522AC;
    return;
L_08A522AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(9, ctx.gpr[18] + static_cast<std::uint32_t>(164));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A522E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A522E0u) goto L_08A522E0;
    return;
L_08A522E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08A522F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A522F0u) goto L_08A522F0;
    return;
L_08A522F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A5230Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5230Cu) goto L_08A5230C;
    return;
L_08A5230C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08A5231Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 100u, 0x08A01514u>(ctx, &aot_mem) && ctx.pc == 0x08A5231Cu) goto L_08A5231C;
    return;
L_08A5231C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A5232Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5232Cu) goto L_08A5232C;
    return;
L_08A5232C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A5233Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5233Cu) goto L_08A5233C;
    return;
L_08A5233C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A52350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A52350u) goto L_08A52350;
    return;
L_08A52350:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A52368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A52368u) goto L_08A52368;
    return;
L_08A52368:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08A52378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A52378u) goto L_08A52378;
    return;
L_08A52378:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08A5238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5238Cu) goto L_08A5238C;
    return;
L_08A5238C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A523A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A523A0u) goto L_08A523A0;
    return;
L_08A523A0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52458;
      }
      goto L_08A523AC;
    }
L_08A523AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A523B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A523B8u) goto L_08A523B8;
    return;
L_08A523B8:
    ctx.set_gpr(17, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A523D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A523D0u) goto L_08A523D0;
    return;
L_08A523D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A523E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A523E4u) goto L_08A523E4;
    return;
L_08A523E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A52418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52418u) goto L_08A52418;
    return;
L_08A52418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A52430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A52430u) goto L_08A52430;
    return;
L_08A52430:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A52440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52440u) goto L_08A52440;
    return;
L_08A52440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A52454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52454u) goto L_08A52454;
    return;
L_08A52454:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A52458;
L_08A52458:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5246Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5246Cu) goto L_08A5246C;
    return;
L_08A5246C:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A523AC;
      }
      goto L_08A52478;
    }
L_08A52478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x08A524C0u);
    // nop
    goto L_08A52C60;
L_08A524C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A524D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A525CC;
      }
      goto L_08A524F8;
    }
L_08A524F8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52580;
      }
      goto L_08A52504;
    }
L_08A52504:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A52524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A52524u) goto L_08A52524;
    return;
L_08A52524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A5253Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A5253Cu) goto L_08A5253C;
    return;
L_08A5253C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A52554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52554u) goto L_08A52554;
    return;
L_08A52554:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    ctx.set_gpr(31, 0x08A5256Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5256Cu) goto L_08A5256C;
    return;
L_08A5256C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5257C;
      }
      goto L_08A52574;
    }
L_08A52574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52580;
      }
      goto L_08A5257C;
    }
L_08A5257C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A52580;
L_08A52580:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A52594;
      }
      goto L_08A5258C;
    }
L_08A5258C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A52504;
      }
      goto L_08A52594;
    }
L_08A52594:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A525B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A525B4u) goto L_08A525B4;
    return;
L_08A525B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A525CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A525CCu) goto L_08A525CC;
    return;
L_08A525CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
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
L_08A525F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
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
L_08A5260C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08A52630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52630u) goto L_08A52630;
    return;
L_08A52630:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A52640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52640u) goto L_08A52640;
    return;
L_08A52640:
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
L_08A52658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A52674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A52674u) goto L_08A52674;
    return;
L_08A52674:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08A52684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52684u) goto L_08A52684;
    return;
L_08A52684:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A52694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52694u) goto L_08A52694;
    return;
L_08A52694:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A526C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A526C8u) goto L_08A526C8;
    return;
L_08A526C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08A526DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A526DCu) goto L_08A526DC;
    return;
L_08A526DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A526ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A526ECu) goto L_08A526EC;
    return;
L_08A526EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A526FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A526FCu) goto L_08A526FC;
    return;
L_08A526FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52788;
      }
      goto L_08A5276C;
    }
L_08A5276C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52840;
      }
      goto L_08A52788;
    }
L_08A52788:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(21) ^ 0x80000000u);
    ctx.set_gpr(31, 0x08A527A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem) && ctx.pc == 0x08A527A0u) goto L_08A527A0;
    return;
L_08A527A0:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A527E0;
      }
      goto L_08A527BC;
    }
L_08A527BC:
    ctx.fpr[1] = ctx.fpr[22] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A527D8;
      }
      goto L_08A527D4;
    }
L_08A527D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A527D8;
L_08A527D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A527FC;
      }
      goto L_08A527E0;
    }
L_08A527E0:
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[22];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A527FC;
      }
      goto L_08A527F8;
    }
L_08A527F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A527FC;
L_08A527FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5280C;
      }
      goto L_08A52804;
    }
L_08A52804:
    ctx.fpr[0] = std::sqrt(ctx.fpr[22]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[0];
    goto L_08A5280C;
L_08A5280C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08A52818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x08A52818u) goto L_08A52818;
    return;
L_08A52818:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A52840;
L_08A52840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52864:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) & 0x7FFFFFFFu);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[1])) || ctx.fpr[2] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528B4;
      }
      goto L_08A52884;
    }
L_08A52884:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528A8;
      }
      goto L_08A5289C;
    }
L_08A5289C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A528AC;
      }
      goto L_08A528A8;
    }
L_08A528A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08A528AC;
L_08A528AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A528DC;
      }
      goto L_08A528B4;
    }
L_08A528B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528D8;
      }
      goto L_08A528CC;
    }
L_08A528CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A528DC;
      }
      goto L_08A528D8;
    }
L_08A528D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08A528DC;
L_08A528DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A528E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52B18;
      }
      goto L_08A52970;
    }
L_08A52970:
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[2];
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529A8;
      }
      goto L_08A529A0;
    }
L_08A529A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A529CC;
      }
      goto L_08A529A8;
    }
L_08A529A8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[12])) || ctx.fpr[21] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529C8;
      }
      goto L_08A529C0;
    }
L_08A529C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A529CC;
      }
      goto L_08A529C8;
    }
L_08A529C8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_08A529CC;
L_08A529CC:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[1])) || ctx.fpr[12] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A529E8;
      }
      goto L_08A529E4;
    }
L_08A529E4:
    ctx.set_fpr_bits(1, ctx.fpr_bits(12));
    goto L_08A529E8;
L_08A529E8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52A2C;
      }
      goto L_08A52A00;
    }
L_08A52A00:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52A20;
      }
      goto L_08A52A18;
    }
L_08A52A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52A24;
      }
      goto L_08A52A20;
    }
L_08A52A20:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08A52A24;
L_08A52A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52A30;
      }
      goto L_08A52A2C;
    }
L_08A52A2C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08A52A30;
L_08A52A30:
    ctx.set_gpr(31, 0x08A52A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 581u, 0x0880EC58u>(ctx, &aot_mem) && ctx.pc == 0x08A52A38u) goto L_08A52A38;
    return;
L_08A52A38:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A52A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52A50u) goto L_08A52A50;
    return;
L_08A52A50:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52AFC;
      }
      goto L_08A52A64;
    }
L_08A52A64:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52AFC;
      }
      goto L_08A52A9C;
    }
L_08A52A9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A52AA8u);
    // nop
    goto L_08A52864;
L_08A52AA8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A52AFC;
L_08A52AFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A52B10u);
    // nop
    goto L_08A52710;
L_08A52B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52B2C;
      }
      goto L_08A52B18;
    }
L_08A52B18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08A52B2C;
L_08A52B2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52B50:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[7] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = ctx.fpr[7] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[7])) || ctx.fpr[0] <= ctx.fpr[7]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52C3C;
      }
      goto L_08A52C18;
    }
L_08A52C18:
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[7];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52C34;
      }
      goto L_08A52C30;
    }
L_08A52C30:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A52C34;
L_08A52C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52C58;
      }
      goto L_08A52C3C;
    }
L_08A52C3C:
    ctx.fpr[1] = ctx.fpr[7] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52C58;
      }
      goto L_08A52C54;
    }
L_08A52C54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A52C58;
L_08A52C58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52C60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = ctx.fpr[1] - ctx.fpr[15];
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = ctx.fpr[6] - ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[6];
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[11] = ctx.fpr[6] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[10] = ctx.fpr[0] - ctx.fpr[15];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[9] = ctx.fpr[0] - ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[8] = ctx.fpr[0] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[15];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[14];
    ctx.fpr[0] = ctx.fpr[6] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[6];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[7];
    ctx.fpr[25] = std::sqrt(ctx.fpr[6]);
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[6];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[7];
    ctx.fpr[24] = std::sqrt(ctx.fpr[6]);
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[6];
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[7];
    ctx.fpr[23] = std::sqrt(ctx.fpr[6]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[3];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[3];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[3] = ctx.fpr[5] / ctx.fpr[3];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A52DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A52DB8u) goto L_08A52DB8;
    return;
L_08A52DB8:
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[0] = ctx.fpr[9] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = ctx.fpr[8] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[0] = ctx.fpr[7] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[3] = std::sqrt(ctx.fpr[0]);
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::sqrt(ctx.fpr[0]);
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[1])) || ctx.fpr[12] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52E5C;
      }
      goto L_08A52E58;
    }
L_08A52E58:
    ctx.set_fpr_bits(1, ctx.fpr_bits(12));
    goto L_08A52E5C;
L_08A52E5C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52EA0;
      }
      goto L_08A52E74;
    }
L_08A52E74:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52E94;
      }
      goto L_08A52E8C;
    }
L_08A52E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52E98;
      }
      goto L_08A52E94;
    }
L_08A52E94:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08A52E98;
L_08A52E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52EA4;
      }
      goto L_08A52EA0;
    }
L_08A52EA0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08A52EA4;
L_08A52EA4:
    ctx.set_gpr(31, 0x08A52EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 581u, 0x0880EC58u>(ctx, &aot_mem) && ctx.pc == 0x08A52EACu) goto L_08A52EAC;
    return;
L_08A52EAC:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52EEC;
      }
      goto L_08A52EC4;
    }
L_08A52EC4:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[21]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52EE0;
      }
      goto L_08A52EDC;
    }
L_08A52EDC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A52EE0;
L_08A52EE0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52F0C;
      }
      goto L_08A52EEC;
    }
L_08A52EEC:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[21]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52F08;
      }
      goto L_08A52F04;
    }
L_08A52F04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A52F08;
L_08A52F08:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A52F0C;
L_08A52F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52F34;
      }
      goto L_08A52F14;
    }
L_08A52F14:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52F9C;
      }
      goto L_08A52F34;
    }
L_08A52F34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.set_gpr(31, 0x08A52F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52F48u) goto L_08A52F48;
    return;
L_08A52F48:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A52F9C;
L_08A52F9C:
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[23] - ctx.fpr[0];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52FE8;
      }
      goto L_08A52FDC;
    }
L_08A52FDC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53004;
      }
      goto L_08A52FE8;
    }
L_08A52FE8:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A53004;
      }
      goto L_08A53000;
    }
L_08A53000:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08A53004;
L_08A53004:
    ctx.set_gpr(31, 0x08A5300Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 581u, 0x0880EC58u>(ctx, &aot_mem) && ctx.pc == 0x08A5300Cu) goto L_08A5300C;
    return;
L_08A5300C:
    ctx.set_fpr_bits(24, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08A5301Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5301Cu) goto L_08A5301C;
    return;
L_08A5301C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(31, 0x08A53030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 21u, 0x08A003B4u>(ctx, &aot_mem) && ctx.pc == 0x08A53030u) goto L_08A53030;
    return;
L_08A53030:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08A53040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53040u) goto L_08A53040;
    return;
L_08A53040:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08A53054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A53054u) goto L_08A53054;
    return;
L_08A53054:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08A53084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A53084u) goto L_08A53084;
    return;
L_08A53084:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x08A530B0u);
    // nop
    goto L_08A528E4;
L_08A530B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x08A530BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A530BCu) goto L_08A530BC;
    return;
L_08A530BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x08A530CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A530CCu) goto L_08A530CC;
    return;
L_08A530CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x08A530E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A530E0u) goto L_08A530E0;
    return;
L_08A530E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x08A530F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A530F4u) goto L_08A530F4;
    return;
L_08A530F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A53134u);
    // nop
    goto L_08A52B50;
L_08A53134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53150;
      }
      goto L_08A5313C;
    }
L_08A5313C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x08A53150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A53150u) goto L_08A53150;
    return;
L_08A53150:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A53190u);
    // nop
    goto L_08A52B50;
L_08A53190:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53384;
      }
      goto L_08A53198;
    }
L_08A53198:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[23])) && ctx.fpr[0] == ctx.fpr[23]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A53384;
      }
      goto L_08A531AC;
    }
L_08A531AC:
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[23];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A531F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A531F4u) goto L_08A531F4;
    return;
L_08A531F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[23];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A5326Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5326Cu) goto L_08A5326C;
    return;
L_08A5326C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[9] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[8] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[7] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[6] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::sqrt(ctx.fpr[0]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A53350;
      }
      goto L_08A53314;
    }
L_08A53314:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32244)));
    ctx.set_gpr(31, 0x08A53328u);
    // nop
    goto L_08A52710;
L_08A53328:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53384;
      }
      goto L_08A53350;
    }
L_08A53350:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08A53364u);
    // nop
    goto L_08A528E4;
L_08A53364:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A53384;
L_08A53384:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A53398u);
    // nop
    goto L_08A52710;
L_08A53398:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08A533CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 205u, 0x08A02B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A533CCu) goto L_08A533CC;
    return;
L_08A533CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08A533E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 205u, 0x08A02B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A533E0u) goto L_08A533E0;
    return;
L_08A533E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24512)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A5344Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5344Cu) goto L_08A5344C;
    return;
L_08A5344C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A53460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A53460u) goto L_08A53460;
    return;
L_08A53460:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A53470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53470u) goto L_08A53470;
    return;
L_08A53470:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A534A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53728;
      }
      goto L_08A534E0;
    }
L_08A534E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53724;
      }
      goto L_08A534FC;
    }
L_08A534FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A53508u);
    // nop
    goto L_08A524D0;
L_08A53508:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5351Cu);
    // nop
    goto L_08A525F0;
L_08A5351C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A53530u);
    // nop
    goto L_08A525F0;
L_08A53530:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A53544u);
    // nop
    goto L_08A525F0;
L_08A53544:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A53558u);
    // nop
    goto L_08A53414;
L_08A53558:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A53568u);
    // nop
    goto L_08A53414;
L_08A53568:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A53578u);
    // nop
    goto L_08A53414;
L_08A53578:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24488)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x08A53594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53594u) goto L_08A53594;
    return;
L_08A53594:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A535A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A535A0u) goto L_08A535A0;
    return;
L_08A535A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24512)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A535BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A535BCu) goto L_08A535BC;
    return;
L_08A535BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A535D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A535D0u) goto L_08A535D0;
    return;
L_08A535D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A535E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A535E4u) goto L_08A535E4;
    return;
L_08A535E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A535F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A535F8u) goto L_08A535F8;
    return;
L_08A535F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A5360Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A5360Cu) goto L_08A5360C;
    return;
L_08A5360C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x08A53644u);
    // nop
    goto L_08A52C60;
L_08A53644:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08A53654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53654u) goto L_08A53654;
    return;
L_08A53654:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A53670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53670u) goto L_08A53670;
    return;
L_08A53670:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A5367Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5367Cu) goto L_08A5367C;
    return;
L_08A5367C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08A5368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 100u, 0x08A01514u>(ctx, &aot_mem) && ctx.pc == 0x08A5368Cu) goto L_08A5368C;
    return;
L_08A5368C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24516)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A536A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A536A8u) goto L_08A536A8;
    return;
L_08A536A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A536B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A536B8u) goto L_08A536B8;
    return;
L_08A536B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A536CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A536CCu) goto L_08A536CC;
    return;
L_08A536CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24516)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A536ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A536ECu) goto L_08A536EC;
    return;
L_08A536EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08A536FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A536FCu) goto L_08A536FC;
    return;
L_08A536FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A53710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A53710u) goto L_08A53710;
    return;
L_08A53710:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A53724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A53724u) goto L_08A53724;
    return;
L_08A53724:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A53728;
L_08A53728:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A534E0;
      }
      goto L_08A53734;
    }
L_08A53734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A537C0;
      }
      goto L_08A53784;
    }
L_08A53784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A537A4;
      }
      goto L_08A53790;
    }
L_08A53790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A537A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A537A4u) goto L_08A537A4;
    return;
L_08A537A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A537DC;
      }
      goto L_08A537C0;
    }
L_08A537C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A537DC;
L_08A537DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A537E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A537E8u) goto L_08A537E8;
    return;
L_08A537E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A53804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5381Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5381Cu) goto L_08A5381C;
    return;
L_08A5381C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5382C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A53850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53850u) goto L_08A53850;
    return;
L_08A53850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53874;
      }
      goto L_08A53858;
    }
L_08A53858:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A53868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53868u) goto L_08A53868;
    return;
L_08A53868:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53878;
      }
      goto L_08A53874;
    }
L_08A53874:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A53878;
L_08A53878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5388C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A538A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A538A4u) goto L_08A538A4;
    return;
L_08A538A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A538B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A538E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A538E8u) goto L_08A538E8;
    return;
L_08A538E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5391C;
      }
      goto L_08A538F0;
    }
L_08A538F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A53900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53900u) goto L_08A53900;
    return;
L_08A53900:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A53910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53910u) goto L_08A53910;
    return;
L_08A53910:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53920;
      }
      goto L_08A5391C;
    }
L_08A5391C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A53920;
L_08A53920:
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
L_08A53938:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53944:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53950:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5395C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53964:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53970:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5397C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53984:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53994:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A539A4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A539B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21752)));
    ctx.set_gpr(31, 0x08A539D0u);
    // nop
    goto L_08A53ACC;
L_08A539D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A539E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A539F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 280u, 0x08A699C4u>(ctx, &aot_mem) && ctx.pc == 0x08A539F8u) goto L_08A539F8;
    return;
L_08A539F8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21752)));
    ctx.set_gpr(31, 0x08A53A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A53A0Cu) goto L_08A53A0C;
    return;
L_08A53A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A53A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A53A30u) goto L_08A53A30;
    return;
L_08A53A30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A53A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A53A50u) goto L_08A53A50;
    return;
L_08A53A50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A53A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A53A5Cu) goto L_08A53A5C;
    return;
L_08A53A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A53A68u) goto L_08A53A68;
    return;
L_08A53A68:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21752), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53ABC;
      }
      goto L_08A53A98;
    }
L_08A53A98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53ABC;
      }
      goto L_08A53AB4;
    }
L_08A53AB4:
    ctx.set_gpr(31, 0x08A53ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A53ABCu) goto L_08A53ABC;
    return;
L_08A53ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A53AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 270u, 0x08A6991Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53AECu) goto L_08A53AEC;
    return;
L_08A53AEC:
    ctx.set_gpr(31, 0x08A53AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 474u, 0x08A125B4u>(ctx, &aot_mem) && ctx.pc == 0x08A53AF4u) goto L_08A53AF4;
    return;
L_08A53AF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53B04u) goto L_08A53B04;
    return;
L_08A53B04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BE4;
      }
      goto L_08A53B0C;
    }
L_08A53B0C:
    ctx.set_gpr(31, 0x08A53B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 427u, 0x08A1A598u>(ctx, &aot_mem) && ctx.pc == 0x08A53B14u) goto L_08A53B14;
    return;
L_08A53B14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53B24u) goto L_08A53B24;
    return;
L_08A53B24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53B4C;
      }
      goto L_08A53B2C;
    }
L_08A53B2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20180));
    ctx.set_gpr(31, 0x08A53B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53B44u) goto L_08A53B44;
    return;
L_08A53B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BE4;
      }
      goto L_08A53B4C;
    }
L_08A53B4C:
    ctx.set_gpr(31, 0x08A53B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 750u, 0x08A07454u>(ctx, &aot_mem) && ctx.pc == 0x08A53B54u) goto L_08A53B54;
    return;
L_08A53B54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53B64u) goto L_08A53B64;
    return;
L_08A53B64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53B8C;
      }
      goto L_08A53B6C;
    }
L_08A53B6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19864));
    ctx.set_gpr(31, 0x08A53B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53B84u) goto L_08A53B84;
    return;
L_08A53B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BE4;
      }
      goto L_08A53B8C;
    }
L_08A53B8C:
    ctx.set_gpr(31, 0x08A53B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 347u, 0x08A19E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53B94u) goto L_08A53B94;
    return;
L_08A53B94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53BA4u) goto L_08A53BA4;
    return;
L_08A53BA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BCC;
      }
      goto L_08A53BAC;
    }
L_08A53BAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19600));
    ctx.set_gpr(31, 0x08A53BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53BC4u) goto L_08A53BC4;
    return;
L_08A53BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53BE4;
      }
      goto L_08A53BCC;
    }
L_08A53BCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19588));
    ctx.set_gpr(31, 0x08A53BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A53BE4u) goto L_08A53BE4;
    return;
L_08A53BE4:
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
L_08A53BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A53C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A53C14u) goto L_08A53C14;
    return;
L_08A53C14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A53C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53C20u) goto L_08A53C20;
    return;
L_08A53C20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A53C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 564u, 0x089FEC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53C30u) goto L_08A53C30;
    return;
L_08A53C30:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A53C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A53C40u) goto L_08A53C40;
    return;
L_08A53C40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53C54;
      }
      goto L_08A53C4C;
    }
L_08A53C4C:
    ctx.set_gpr(31, 0x08A53C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A53C54u) goto L_08A53C54;
    return;
L_08A53C54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A53C60u);
    // nop
    goto L_08A53C74;
L_08A53C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53C74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53CC0;
      }
      goto L_08A53CAC;
    }
L_08A53CAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53CD4;
      }
      goto L_08A53CC0;
    }
L_08A53CC0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A53CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53CD4u) goto L_08A53CD4;
    return;
L_08A53CD4:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x08A53CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53CF0u) goto L_08A53CF0;
    return;
L_08A53CF0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D28;
      }
      goto L_08A53D04;
    }
L_08A53D04:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D24;
      }
      goto L_08A53D1C;
    }
L_08A53D1C:
    ctx.set_gpr(31, 0x08A53D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A53D24u) goto L_08A53D24;
    return;
L_08A53D24:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A53D28;
L_08A53D28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D04;
      }
      goto L_08A53D34;
    }
L_08A53D34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D58;
      }
      goto L_08A53D44;
    }
L_08A53D44:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A53D58;
L_08A53D58:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D44;
      }
      goto L_08A53D64;
    }
L_08A53D64:
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
L_08A53D84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A53D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 331u, 0x08A69DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A53D94u) goto L_08A53D94;
    return;
L_08A53D94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A53DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 333u, 0x08A69E08u>(ctx, &aot_mem) && ctx.pc == 0x08A53DB4u) goto L_08A53DB4;
    return;
L_08A53DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53DC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E14;
      }
      goto L_08A53E08;
    }
L_08A53E08:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 34u, 0x08A542B4u>(ctx, &aot_mem); return;
      }
      goto L_08A53E14;
    }
L_08A53E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E8C;
      }
      goto L_08A53E28;
    }
L_08A53E28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A53E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53E3Cu) goto L_08A53E3C;
    return;
L_08A53E3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A53E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x08A53E68u) goto L_08A53E68;
    return;
L_08A53E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A53E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 709u, 0x089FF6D0u>(ctx, &aot_mem) && ctx.pc == 0x08A53E8Cu) goto L_08A53E8C;
    return;
L_08A53E8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53F24;
      }
      goto L_08A53E9C;
    }
L_08A53E9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A53EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 684u, 0x089FF474u>(ctx, &aot_mem) && ctx.pc == 0x08A53EB0u) goto L_08A53EB0;
    return;
L_08A53EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53F18;
      }
      goto L_08A53EB8;
    }
L_08A53EB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A53F08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53F08u) goto L_08A53F08;
    return;
L_08A53F08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53F24;
      }
      goto L_08A53F10;
    }
L_08A53F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 34u, 0x08A542B4u>(ctx, &aot_mem); return;
      }
      goto L_08A53F18;
    }
L_08A53F18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 34u, 0x08A542B4u>(ctx, &aot_mem); return;
      }
      goto L_08A53F24;
    }
L_08A53F24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 7u, 0x08A54038u>(ctx, &aot_mem); return;
      }
      goto L_08A53F34;
    }
L_08A53F34:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(31, 0x08A53F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53F48u) goto L_08A53F48;
    return;
L_08A53F48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53F6C;
      }
      goto L_08A53F50;
    }
L_08A53F50:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    ctx.set_gpr(31, 0x08A53F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53F64u) goto L_08A53F64;
    return;
L_08A53F64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 7u, 0x08A54038u>(ctx, &aot_mem); return;
      }
      goto L_08A53F6C;
    }
L_08A53F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 4u, 0x08A54018u>(ctx, &aot_mem); return;
      }
      goto L_08A53F88;
    }
L_08A53F88:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A53FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 689u, 0x089FF4F4u>(ctx, &aot_mem) && ctx.pc == 0x08A53FA8u) goto L_08A53FA8;
    return;
L_08A53FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 3u, 0x08A54014u>(ctx, &aot_mem); return;
      }
      goto L_08A53FB0;
    }
L_08A53FB0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A54004u);
    // nop
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0147(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0147_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_147(Runtime &runtime) {
    runtime.register_generated_unit(147u, 0x08A50000u, 16384u, &recomp_unit_0147, &recomp_unit_0147_entry);
    runtime.register_function(0x08A50000u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50004u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5000Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50018u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50020u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5002Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50034u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50038u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50044u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50050u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50058u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50064u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5006Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50078u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50080u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5008Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50094u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50100u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50110u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50128u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5012Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5014Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50158u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50168u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50180u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50184u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5018Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50224u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5022Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5023Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50248u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50258u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5026Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50278u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50280u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50298u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50308u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50340u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50350u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50368u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5037Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50384u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50390u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50394u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5039Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50404u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5040Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5041Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50428u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50430u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50434u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50440u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50444u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50450u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50480u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50500u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5051Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5052Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50538u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50540u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5054Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50558u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50564u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50570u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50580u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5058Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50594u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50604u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50614u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50620u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50628u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5062Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50638u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50644u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50654u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5066Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50670u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50678u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50690u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5069Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50708u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50720u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50730u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50740u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50774u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50780u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50790u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5079Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50804u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50810u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50818u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50824u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50830u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5083Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50844u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50864u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50870u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50884u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5088Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5089Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50908u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50910u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50920u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50928u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50938u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50940u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50950u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50960u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5096Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50978u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50984u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50994u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5099Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C90u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50ED0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51004u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51010u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51018u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51024u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51030u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5103Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5104Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51058u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51064u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51078u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51080u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5109Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51108u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51110u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5111Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51138u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5114Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5116Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5117Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51208u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51210u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5121Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51224u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51234u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51240u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5124Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51254u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51260u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51268u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5126Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51290u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51310u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5131Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51330u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51338u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51340u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51348u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51364u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51370u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5137Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51388u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51394u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51410u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51420u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51428u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51440u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5144Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51454u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51460u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51468u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5147Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51490u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5149Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51528u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51530u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51544u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51558u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51568u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51578u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51580u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5158Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51590u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51620u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5163Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5164Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51688u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51690u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5169Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51704u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51718u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51724u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51738u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51744u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51758u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51760u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51774u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5177Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51790u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51810u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5183Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5184Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51858u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51860u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51868u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51874u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51880u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51894u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51904u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5190Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51914u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51920u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5192Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5193Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51958u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5196Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5197Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51988u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51994u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5199Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ACCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51ED4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52008u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52010u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5201Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52024u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52054u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52074u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52120u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5212Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52140u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52144u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52160u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5217Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52198u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52204u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52214u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52228u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52230u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52240u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5225Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52270u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52284u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52298u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5230Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5231Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5232Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5233Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52350u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52368u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52378u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5238Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52418u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52430u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52440u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52454u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52458u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5246Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52478u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52494u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52504u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52524u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5253Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52554u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5256Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52574u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5257Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52580u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5258Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52594u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5260Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52630u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52640u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52658u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52674u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52684u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52694u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52710u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5276Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52788u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52804u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5280Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52818u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52840u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52864u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52884u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5289Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52970u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52EECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52FDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52FE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53000u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53004u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5300Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5301Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53030u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53040u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53054u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53084u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5313Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53150u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53190u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53198u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A531ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A531F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5326Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53314u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53328u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53350u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53364u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53384u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53398u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A533CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A533E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53414u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5344Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53460u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53470u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A534A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A534E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A534FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5351Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53530u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53544u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53558u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53568u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53578u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53594u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A535A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A535BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A535D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A535E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A535F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5360Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53644u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53654u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53670u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5367Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5368Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A536A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A536B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A536CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A536ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A536FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53710u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53724u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53728u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53734u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53760u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53784u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53790u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A537A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A537C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A537DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A537E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53804u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5381Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5382Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53850u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53858u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53868u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53874u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53878u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5388Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53900u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53910u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5391Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53920u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53938u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53944u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53950u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5395Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53964u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53970u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5397Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53984u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53994u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53ABCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53ACCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53C74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53F88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53FA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53FB0u, &recomp_unit_0147, "recomp_unit_0147");
}
} // namespace psprecomp
