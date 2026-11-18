#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0096[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47,
    0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 56, 57, 0, 58,
    0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0,
    74, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 89, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123,
    124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 139, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0,
    0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192,
    0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0,
    217, 0, 0, 218, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0,
    0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 259, 0, 260, 0, 0, 261, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 286, 0, 0, 287, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304,
    0, 305, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0,
    315, 0, 0, 0, 316, 0, 317, 0, 0, 318, 319, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0,
    0, 326, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330,
    0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0,
    0, 0, 0, 0, 0, 368, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 375, 0, 0, 376,
    0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385,
    0, 0, 386, 0, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394,
    0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 402, 0, 403, 0, 0, 0, 404, 405, 0,
    0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 411,
    0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 423,
    0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 434, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0,
    441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0,
    0, 448, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0,
    457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 497, 498, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 503, 0, 504, 0, 0, 0, 0, 0, 505,
    0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0,
    520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0,
    528, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0,
    536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0,
    543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0,
    559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0,
    567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0,
    575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0,
    584, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0,
    0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0,
    0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0,
    0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0,
    617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0,
    625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0,
    633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0,
    641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0,
    649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0,
    657, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0,
    666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0,
    674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0,
    682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0,
    690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0,
    698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706,
    0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714,
    0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724,
    0, 0, 0, 725, 726, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 732, 0, 0, 733, 734, 735,
    0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741,
    0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0,
    0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 758, 759, 0, 760, 761, 762,
    0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0,
    0, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0,
    0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0,
    0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0,
    0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0,
    0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0,
    0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0,
    0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0,
    0, 0, 0, 0, 0, 0, 826, 827, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836,
    0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0,
    0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 850, 0,
    851, 0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0,
    0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867, 868,
    0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0,
    0, 0, 875, 876, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 882, 883, 0, 884, 0,
    0, 0, 0, 0, 885, 0, 0, 886, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 890, 0, 0, 0, 891, 0,
    0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 899, 0,
    0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 907, 0,
    0, 0, 908, 0, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 911, 0, 0, 0, 912, 0, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 915, 0,
    0, 0, 916, 0, 0, 0, 917, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0, 0, 920, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 923, 0,
    0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 931, 0,
    0, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0, 0,
    0, 938, 0, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 941, 0, 0, 942, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 944, 0, 0,
    945, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 947, 0, 0, 948, 0, 0, 0, 949, 0, 0, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 0,
    952, 0, 0, 0, 0, 0, 0, 953, 0, 0, 954, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0, 956, 0, 0, 957, 0, 0, 0, 958, 0, 0, 0,
    0, 0, 0, 959, 0, 0, 960, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 962, 0, 0, 963, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0, 965,
    0, 0, 966, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 968, 0, 0, 969, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 971, 0, 0, 972, 0,
    0, 0, 973, 0, 0, 0, 0, 0, 0, 974, 0, 0, 975, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 977, 0, 0, 978, 0, 0, 0, 979, 0,
    0, 0, 0, 0, 0, 0, 980, 0, 0, 981, 0, 0, 0, 0, 0, 0, 982, 0, 983, 0, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 0, 986,
    0, 0, 987, 0, 988, 0, 989, 0, 0, 0, 0, 0, 990, 0, 0, 0, 0, 991, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 993, 0, 994,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08984000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0096[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08984000;
    case 2u: goto L_08984008;
    case 3u: goto L_08984024;
    case 4u: goto L_08984034;
    case 5u: goto L_08984048;
    case 6u: goto L_08984058;
    case 7u: goto L_08984074;
    case 8u: goto L_0898408C;
    case 9u: goto L_089840A4;
    case 10u: goto L_089840BC;
    case 11u: goto L_089840D8;
    case 12u: goto L_08984100;
    case 13u: goto L_08984108;
    case 14u: goto L_08984134;
    case 15u: goto L_08984140;
    case 16u: goto L_08984148;
    case 17u: goto L_08984154;
    case 18u: goto L_0898415C;
    case 19u: goto L_08984168;
    case 20u: goto L_08984184;
    case 21u: goto L_0898419C;
    case 22u: goto L_089841A4;
    case 23u: goto L_089841B4;
    case 24u: goto L_089841C4;
    case 25u: goto L_089841EC;
    case 26u: goto L_089841FC;
    case 27u: goto L_08984208;
    case 28u: goto L_0898423C;
    case 29u: goto L_0898424C;
    case 30u: goto L_08984254;
    case 31u: goto L_08984260;
    case 32u: goto L_08984274;
    case 33u: goto L_08984284;
    case 34u: goto L_08984290;
    case 35u: goto L_089842A8;
    case 36u: goto L_089842B4;
    case 37u: goto L_089842C4;
    case 38u: goto L_089842D0;
    case 39u: goto L_089842FC;
    case 40u: goto L_0898430C;
    case 41u: goto L_08984314;
    case 42u: goto L_08984320;
    case 43u: goto L_08984340;
    case 44u: goto L_0898434C;
    case 45u: goto L_08984360;
    case 46u: goto L_08984370;
    case 47u: goto L_0898437C;
    case 48u: goto L_08984388;
    case 49u: goto L_08984398;
    case 50u: goto L_089843A8;
    case 51u: goto L_089843B8;
    case 52u: goto L_089843C4;
    case 53u: goto L_089843D0;
    case 54u: goto L_089843E0;
    case 55u: goto L_089843E4;
    case 56u: goto L_089843F0;
    case 57u: goto L_089843F4;
    case 58u: goto L_089843FC;
    case 59u: goto L_08984404;
    case 60u: goto L_08984408;
    case 61u: goto L_08984428;
    case 62u: goto L_08984460;
    case 63u: goto L_08984474;
    case 64u: goto L_08984484;
    case 65u: goto L_08984490;
    case 66u: goto L_089844AC;
    case 67u: goto L_089844B8;
    case 68u: goto L_089844BC;
    case 69u: goto L_089844C8;
    case 70u: goto L_089844D4;
    case 71u: goto L_089844E0;
    case 72u: goto L_089844E8;
    case 73u: goto L_089844F8;
    case 74u: goto L_08984500;
    case 75u: goto L_08984504;
    case 76u: goto L_08984514;
    case 77u: goto L_08984524;
    case 78u: goto L_08984540;
    case 79u: goto L_08984560;
    case 80u: goto L_0898456C;
    case 81u: goto L_08984578;
    case 82u: goto L_08984588;
    case 83u: goto L_08984598;
    case 84u: goto L_089845A8;
    case 85u: goto L_089845BC;
    case 86u: goto L_089845D4;
    case 87u: goto L_089845DC;
    case 88u: goto L_089845E8;
    case 89u: goto L_089845EC;
    case 90u: goto L_089845F8;
    case 91u: goto L_0898460C;
    case 92u: goto L_08984618;
    case 93u: goto L_08984628;
    case 94u: goto L_08984634;
    case 95u: goto L_08984638;
    case 96u: goto L_08984640;
    case 97u: goto L_08984648;
    case 98u: goto L_0898466C;
    case 99u: goto L_0898467C;
    case 100u: goto L_08984688;
    case 101u: goto L_08984690;
    case 102u: goto L_089846A4;
    case 103u: goto L_089846B0;
    case 104u: goto L_089846C0;
    case 105u: goto L_089846CC;
    case 106u: goto L_089846DC;
    case 107u: goto L_089846E8;
    case 108u: goto L_089846EC;
    case 109u: goto L_08984710;
    case 110u: goto L_0898473C;
    case 111u: goto L_0898474C;
    case 112u: goto L_08984758;
    case 113u: goto L_08984764;
    case 114u: goto L_08984770;
    case 115u: goto L_0898478C;
    case 116u: goto L_089847A8;
    case 117u: goto L_089847B8;
    case 118u: goto L_089847BC;
    case 119u: goto L_089847D0;
    case 120u: goto L_089847DC;
    case 121u: goto L_089847E8;
    case 122u: goto L_089847F0;
    case 123u: goto L_089847FC;
    case 124u: goto L_08984800;
    case 125u: goto L_08984820;
    case 126u: goto L_08984840;
    case 127u: goto L_0898484C;
    case 128u: goto L_08984858;
    case 129u: goto L_08984870;
    case 130u: goto L_0898487C;
    case 131u: goto L_08984888;
    case 132u: goto L_08984898;
    case 133u: goto L_089848A8;
    case 134u: goto L_089848B4;
    case 135u: goto L_089848C4;
    case 136u: goto L_089848D0;
    case 137u: goto L_089848DC;
    case 138u: goto L_089848E8;
    case 139u: goto L_089848EC;
    case 140u: goto L_089848FC;
    case 141u: goto L_0898490C;
    case 142u: goto L_0898491C;
    case 143u: goto L_08984924;
    case 144u: goto L_08984930;
    case 145u: goto L_08984940;
    case 146u: goto L_0898494C;
    case 147u: goto L_0898495C;
    case 148u: goto L_0898496C;
    case 149u: goto L_08984978;
    case 150u: goto L_08984988;
    case 151u: goto L_08984994;
    case 152u: goto L_089849A4;
    case 153u: goto L_089849AC;
    case 154u: goto L_089849B8;
    case 155u: goto L_089849C8;
    case 156u: goto L_089849D8;
    case 157u: goto L_089849E0;
    case 158u: goto L_089849EC;
    case 159u: goto L_089849F8;
    case 160u: goto L_08984A0C;
    case 161u: goto L_08984A18;
    case 162u: goto L_08984A28;
    case 163u: goto L_08984A34;
    case 164u: goto L_08984A44;
    case 165u: goto L_08984A50;
    case 166u: goto L_08984A60;
    case 167u: goto L_08984A68;
    case 168u: goto L_08984A74;
    case 169u: goto L_08984A84;
    case 170u: goto L_08984A90;
    case 171u: goto L_08984AA0;
    case 172u: goto L_08984AAC;
    case 173u: goto L_08984AC0;
    case 174u: goto L_08984AD0;
    case 175u: goto L_08984AF4;
    case 176u: goto L_08984B00;
    case 177u: goto L_08984B0C;
    case 178u: goto L_08984B1C;
    case 179u: goto L_08984B28;
    case 180u: goto L_08984B2C;
    case 181u: goto L_08984B44;
    case 182u: goto L_08984B88;
    case 183u: goto L_08984B94;
    case 184u: goto L_08984BA0;
    case 185u: goto L_08984BAC;
    case 186u: goto L_08984BB8;
    case 187u: goto L_08984BC4;
    case 188u: goto L_08984BCC;
    case 189u: goto L_08984BD8;
    case 190u: goto L_08984BE4;
    case 191u: goto L_08984BF0;
    case 192u: goto L_08984BFC;
    case 193u: goto L_08984C08;
    case 194u: goto L_08984C10;
    case 195u: goto L_08984C1C;
    case 196u: goto L_08984C28;
    case 197u: goto L_08984C34;
    case 198u: goto L_08984C40;
    case 199u: goto L_08984C4C;
    case 200u: goto L_08984C64;
    case 201u: goto L_08984C74;
    case 202u: goto L_08984C80;
    case 203u: goto L_08984CA0;
    case 204u: goto L_08984CAC;
    case 205u: goto L_08984CB0;
    case 206u: goto L_08984CC8;
    case 207u: goto L_08984CD4;
    case 208u: goto L_08984CF4;
    case 209u: goto L_08984CFC;
    case 210u: goto L_08984D08;
    case 211u: goto L_08984D2C;
    case 212u: goto L_08984D34;
    case 213u: goto L_08984D40;
    case 214u: goto L_08984D48;
    case 215u: goto L_08984D64;
    case 216u: goto L_08984D74;
    case 217u: goto L_08984D80;
    case 218u: goto L_08984D8C;
    case 219u: goto L_08984D90;
    case 220u: goto L_08984D9C;
    case 221u: goto L_08984DB8;
    case 222u: goto L_08984DD8;
    case 223u: goto L_08984DEC;
    case 224u: goto L_08984DF8;
    case 225u: goto L_08984E04;
    case 226u: goto L_08984E1C;
    case 227u: goto L_08984E2C;
    case 228u: goto L_08984E38;
    case 229u: goto L_08984E58;
    case 230u: goto L_08984E68;
    case 231u: goto L_08984E74;
    case 232u: goto L_08984E80;
    case 233u: goto L_08984E9C;
    case 234u: goto L_08984EAC;
    case 235u: goto L_08984EB8;
    case 236u: goto L_08984EC8;
    case 237u: goto L_08984ED4;
    case 238u: goto L_08984EE0;
    case 239u: goto L_08984EF0;
    case 240u: goto L_08984EFC;
    case 241u: goto L_08984F08;
    case 242u: goto L_08984F2C;
    case 243u: goto L_08984F38;
    case 244u: goto L_08984F4C;
    case 245u: goto L_08984F68;
    case 246u: goto L_08984F74;
    case 247u: goto L_08984F84;
    case 248u: goto L_08984F90;
    case 249u: goto L_08984FAC;
    case 250u: goto L_08984FBC;
    case 251u: goto L_08984FC8;
    case 252u: goto L_08984FD4;
    case 253u: goto L_08984FD8;
    case 254u: goto L_08984FF0;
    case 255u: goto L_08984FFC;
    case 256u: goto L_08985008;
    case 257u: goto L_08985014;
    case 258u: goto L_08985034;
    case 259u: goto L_08985038;
    case 260u: goto L_08985040;
    case 261u: goto L_0898504C;
    case 262u: goto L_08985050;
    case 263u: goto L_08985070;
    case 264u: goto L_08985084;
    case 265u: goto L_089850A0;
    case 266u: goto L_089850B8;
    case 267u: goto L_089850C0;
    case 268u: goto L_089850D4;
    case 269u: goto L_089850F4;
    case 270u: goto L_08985108;
    case 271u: goto L_08985110;
    case 272u: goto L_08985124;
    case 273u: goto L_08985140;
    case 274u: goto L_08985154;
    case 275u: goto L_08985164;
    case 276u: goto L_08985170;
    case 277u: goto L_0898517C;
    case 278u: goto L_08985184;
    case 279u: goto L_089851A4;
    case 280u: goto L_089851A8;
    case 281u: goto L_089851B4;
    case 282u: goto L_089851BC;
    case 283u: goto L_089851C8;
    case 284u: goto L_089851D8;
    case 285u: goto L_089851E4;
    case 286u: goto L_089851E8;
    case 287u: goto L_089851F4;
    case 288u: goto L_0898520C;
    case 289u: goto L_0898521C;
    case 290u: goto L_08985228;
    case 291u: goto L_08985238;
    case 292u: goto L_08985240;
    case 293u: goto L_0898524C;
    case 294u: goto L_0898525C;
    case 295u: goto L_08985280;
    case 296u: goto L_08985288;
    case 297u: goto L_08985298;
    case 298u: goto L_089852A4;
    case 299u: goto L_089852B4;
    case 300u: goto L_089852C4;
    case 301u: goto L_089852D0;
    case 302u: goto L_089852DC;
    case 303u: goto L_089852E8;
    case 304u: goto L_089852FC;
    case 305u: goto L_08985304;
    case 306u: goto L_08985308;
    case 307u: goto L_0898531C;
    case 308u: goto L_08985328;
    case 309u: goto L_08985330;
    case 310u: goto L_0898533C;
    case 311u: goto L_08985350;
    case 312u: goto L_08985360;
    case 313u: goto L_08985368;
    case 314u: goto L_08985378;
    case 315u: goto L_08985380;
    case 316u: goto L_08985390;
    case 317u: goto L_08985398;
    case 318u: goto L_089853A4;
    case 319u: goto L_089853A8;
    case 320u: goto L_089853B8;
    case 321u: goto L_089853C4;
    case 322u: goto L_089853CC;
    case 323u: goto L_089853DC;
    case 324u: goto L_089853E4;
    case 325u: goto L_089853F0;
    case 326u: goto L_08985404;
    case 327u: goto L_08985408;
    case 328u: goto L_08985424;
    case 329u: goto L_08985468;
    case 330u: goto L_0898547C;
    case 331u: goto L_08985484;
    case 332u: goto L_08985490;
    case 333u: goto L_08985498;
    case 334u: goto L_089854B4;
    case 335u: goto L_089854B8;
    case 336u: goto L_089854D0;
    case 337u: goto L_089854F8;
    case 338u: goto L_08985504;
    case 339u: goto L_08985518;
    case 340u: goto L_08985534;
    case 341u: goto L_0898554C;
    case 342u: goto L_08985558;
    case 343u: goto L_0898556C;
    case 344u: goto L_08985578;
    case 345u: goto L_0898558C;
    case 346u: goto L_08985598;
    case 347u: goto L_089855AC;
    case 348u: goto L_089855C8;
    case 349u: goto L_089855D4;
    case 350u: goto L_089855E0;
    case 351u: goto L_089855F0;
    case 352u: goto L_08985608;
    case 353u: goto L_08985610;
    case 354u: goto L_0898561C;
    case 355u: goto L_08985638;
    case 356u: goto L_0898564C;
    case 357u: goto L_08985658;
    case 358u: goto L_08985660;
    case 359u: goto L_0898566C;
    case 360u: goto L_08985688;
    case 361u: goto L_0898569C;
    case 362u: goto L_089856A8;
    case 363u: goto L_089856B0;
    case 364u: goto L_089856BC;
    case 365u: goto L_089856D8;
    case 366u: goto L_089856F0;
    case 367u: goto L_089856F8;
    case 368u: goto L_08985714;
    case 369u: goto L_08985718;
    case 370u: goto L_08985724;
    case 371u: goto L_08985730;
    case 372u: goto L_08985748;
    case 373u: goto L_08985750;
    case 374u: goto L_0898576C;
    case 375u: goto L_08985770;
    case 376u: goto L_0898577C;
    case 377u: goto L_08985788;
    case 378u: goto L_08985798;
    case 379u: goto L_089857A4;
    case 380u: goto L_089857B8;
    case 381u: goto L_089857C0;
    case 382u: goto L_089857CC;
    case 383u: goto L_089857E0;
    case 384u: goto L_089857EC;
    case 385u: goto L_089857FC;
    case 386u: goto L_08985808;
    case 387u: goto L_0898581C;
    case 388u: goto L_08985820;
    case 389u: goto L_0898583C;
    case 390u: goto L_08985848;
    case 391u: goto L_08985854;
    case 392u: goto L_08985868;
    case 393u: goto L_08985874;
    case 394u: goto L_0898587C;
    case 395u: goto L_08985888;
    case 396u: goto L_08985898;
    case 397u: goto L_089858A4;
    case 398u: goto L_089858B0;
    case 399u: goto L_089858BC;
    case 400u: goto L_089858CC;
    case 401u: goto L_089858D8;
    case 402u: goto L_089858DC;
    case 403u: goto L_089858E4;
    case 404u: goto L_089858F4;
    case 405u: goto L_089858F8;
    case 406u: goto L_0898591C;
    case 407u: goto L_08985950;
    case 408u: goto L_0898595C;
    case 409u: goto L_08985968;
    case 410u: goto L_08985974;
    case 411u: goto L_0898597C;
    case 412u: goto L_08985988;
    case 413u: goto L_08985998;
    case 414u: goto L_089859A0;
    case 415u: goto L_089859B0;
    case 416u: goto L_089859B8;
    case 417u: goto L_089859C0;
    case 418u: goto L_089859CC;
    case 419u: goto L_089859D8;
    case 420u: goto L_089859E0;
    case 421u: goto L_089859E8;
    case 422u: goto L_089859F0;
    case 423u: goto L_089859FC;
    case 424u: goto L_08985A08;
    case 425u: goto L_08985A10;
    case 426u: goto L_08985A18;
    case 427u: goto L_08985A28;
    case 428u: goto L_08985A50;
    case 429u: goto L_08985A5C;
    case 430u: goto L_08985A68;
    case 431u: goto L_08985A88;
    case 432u: goto L_08985A94;
    case 433u: goto L_08985AA4;
    case 434u: goto L_08985AB0;
    case 435u: goto L_08985AB4;
    case 436u: goto L_08985ABC;
    case 437u: goto L_08985ACC;
    case 438u: goto L_08985ADC;
    case 439u: goto L_08985AE8;
    case 440u: goto L_08985AF4;
    case 441u: goto L_08985B00;
    case 442u: goto L_08985B0C;
    case 443u: goto L_08985B3C;
    case 444u: goto L_08985B44;
    case 445u: goto L_08985B50;
    case 446u: goto L_08985B5C;
    case 447u: goto L_08985B68;
    case 448u: goto L_08985B84;
    case 449u: goto L_08985B88;
    case 450u: goto L_08985BA4;
    case 451u: goto L_08985BB0;
    case 452u: goto L_08985BBC;
    case 453u: goto L_08985BC8;
    case 454u: goto L_08985BD4;
    case 455u: goto L_08985BE0;
    case 456u: goto L_08985BF0;
    case 457u: goto L_08985C00;
    case 458u: goto L_08985C10;
    case 459u: goto L_08985C38;
    case 460u: goto L_08985C5C;
    case 461u: goto L_08985C6C;
    case 462u: goto L_08985C84;
    case 463u: goto L_08985C9C;
    case 464u: goto L_08985CC0;
    case 465u: goto L_08985CD0;
    case 466u: goto L_08985CE8;
    case 467u: goto L_08985D08;
    case 468u: goto L_08985D30;
    case 469u: goto L_08985D54;
    case 470u: goto L_08985D64;
    case 471u: goto L_08985D7C;
    case 472u: goto L_08985D94;
    case 473u: goto L_08985DB8;
    case 474u: goto L_08985DC8;
    case 475u: goto L_08985DE0;
    case 476u: goto L_08985E00;
    case 477u: goto L_08985E30;
    case 478u: goto L_08985E48;
    case 479u: goto L_08985E58;
    case 480u: goto L_08985E74;
    case 481u: goto L_08985E90;
    case 482u: goto L_08985EA0;
    case 483u: goto L_08985EB0;
    case 484u: goto L_08985ED8;
    case 485u: goto L_08985EFC;
    case 486u: goto L_08985F0C;
    case 487u: goto L_08985F24;
    case 488u: goto L_08985F3C;
    case 489u: goto L_08985F60;
    case 490u: goto L_08985F70;
    case 491u: goto L_08985F88;
    case 492u: goto L_08985FA8;
    case 493u: goto L_08985FB8;
    case 494u: goto L_08985FC8;
    case 495u: goto L_08985FD8;
    case 496u: goto L_08986000;
    case 497u: goto L_08986018;
    case 498u: goto L_0898601C;
    case 499u: goto L_08986024;
    case 500u: goto L_08986030;
    case 501u: goto L_08986040;
    case 502u: goto L_08986058;
    case 503u: goto L_0898605C;
    case 504u: goto L_08986064;
    case 505u: goto L_0898607C;
    case 506u: goto L_08986088;
    case 507u: goto L_089860A8;
    case 508u: goto L_089860B8;
    case 509u: goto L_089860C8;
    case 510u: goto L_089860D8;
    case 511u: goto L_089860F4;
    case 512u: goto L_08986104;
    case 513u: goto L_08986114;
    case 514u: goto L_08986124;
    case 515u: goto L_08986134;
    case 516u: goto L_08986140;
    case 517u: goto L_08986150;
    case 518u: goto L_08986160;
    case 519u: goto L_08986170;
    case 520u: goto L_08986180;
    case 521u: goto L_08986190;
    case 522u: goto L_089861A0;
    case 523u: goto L_089861B0;
    case 524u: goto L_089861C0;
    case 525u: goto L_089861D0;
    case 526u: goto L_089861E0;
    case 527u: goto L_089861F0;
    case 528u: goto L_08986200;
    case 529u: goto L_08986210;
    case 530u: goto L_08986220;
    case 531u: goto L_08986230;
    case 532u: goto L_08986240;
    case 533u: goto L_08986250;
    case 534u: goto L_08986260;
    case 535u: goto L_08986270;
    case 536u: goto L_08986280;
    case 537u: goto L_08986290;
    case 538u: goto L_089862A8;
    case 539u: goto L_089862B8;
    case 540u: goto L_089862D4;
    case 541u: goto L_089862E0;
    case 542u: goto L_089862F0;
    case 543u: goto L_08986300;
    case 544u: goto L_08986310;
    case 545u: goto L_08986320;
    case 546u: goto L_08986330;
    case 547u: goto L_08986340;
    case 548u: goto L_08986350;
    case 549u: goto L_08986360;
    case 550u: goto L_08986370;
    case 551u: goto L_08986380;
    case 552u: goto L_08986390;
    case 553u: goto L_089863A0;
    case 554u: goto L_089863B0;
    case 555u: goto L_089863C0;
    case 556u: goto L_089863D0;
    case 557u: goto L_089863E0;
    case 558u: goto L_089863F0;
    case 559u: goto L_08986400;
    case 560u: goto L_08986410;
    case 561u: goto L_08986420;
    case 562u: goto L_08986430;
    case 563u: goto L_08986440;
    case 564u: goto L_08986450;
    case 565u: goto L_08986460;
    case 566u: goto L_08986470;
    case 567u: goto L_08986480;
    case 568u: goto L_08986490;
    case 569u: goto L_089864A0;
    case 570u: goto L_089864B0;
    case 571u: goto L_089864C0;
    case 572u: goto L_089864D0;
    case 573u: goto L_089864E0;
    case 574u: goto L_089864F0;
    case 575u: goto L_08986500;
    case 576u: goto L_08986510;
    case 577u: goto L_08986520;
    case 578u: goto L_08986530;
    case 579u: goto L_08986540;
    case 580u: goto L_08986550;
    case 581u: goto L_0898655C;
    case 582u: goto L_08986564;
    case 583u: goto L_08986574;
    case 584u: goto L_08986580;
    case 585u: goto L_08986588;
    case 586u: goto L_08986598;
    case 587u: goto L_089865A8;
    case 588u: goto L_089865B8;
    case 589u: goto L_089865C8;
    case 590u: goto L_089865D8;
    case 591u: goto L_089865E8;
    case 592u: goto L_089865F8;
    case 593u: goto L_08986608;
    case 594u: goto L_08986618;
    case 595u: goto L_08986628;
    case 596u: goto L_08986638;
    case 597u: goto L_08986648;
    case 598u: goto L_08986658;
    case 599u: goto L_08986668;
    case 600u: goto L_08986678;
    case 601u: goto L_08986688;
    case 602u: goto L_08986698;
    case 603u: goto L_089866A8;
    case 604u: goto L_089866B8;
    case 605u: goto L_089866C8;
    case 606u: goto L_089866D8;
    case 607u: goto L_089866E8;
    case 608u: goto L_089866F8;
    case 609u: goto L_08986708;
    case 610u: goto L_08986710;
    case 611u: goto L_08986720;
    case 612u: goto L_08986730;
    case 613u: goto L_08986740;
    case 614u: goto L_08986750;
    case 615u: goto L_08986760;
    case 616u: goto L_08986770;
    case 617u: goto L_08986780;
    case 618u: goto L_08986790;
    case 619u: goto L_089867A0;
    case 620u: goto L_089867B0;
    case 621u: goto L_089867C0;
    case 622u: goto L_089867D0;
    case 623u: goto L_089867E0;
    case 624u: goto L_089867F0;
    case 625u: goto L_08986800;
    case 626u: goto L_08986810;
    case 627u: goto L_08986820;
    case 628u: goto L_08986830;
    case 629u: goto L_08986840;
    case 630u: goto L_08986850;
    case 631u: goto L_08986860;
    case 632u: goto L_08986870;
    case 633u: goto L_08986880;
    case 634u: goto L_08986890;
    case 635u: goto L_089868A0;
    case 636u: goto L_089868B0;
    case 637u: goto L_089868C0;
    case 638u: goto L_089868D0;
    case 639u: goto L_089868E0;
    case 640u: goto L_089868F0;
    case 641u: goto L_08986900;
    case 642u: goto L_08986910;
    case 643u: goto L_08986920;
    case 644u: goto L_08986930;
    case 645u: goto L_08986940;
    case 646u: goto L_08986950;
    case 647u: goto L_08986960;
    case 648u: goto L_08986970;
    case 649u: goto L_08986980;
    case 650u: goto L_08986990;
    case 651u: goto L_089869A0;
    case 652u: goto L_089869B0;
    case 653u: goto L_089869C0;
    case 654u: goto L_089869D0;
    case 655u: goto L_089869E0;
    case 656u: goto L_089869F0;
    case 657u: goto L_08986A00;
    case 658u: goto L_08986A08;
    case 659u: goto L_08986A18;
    case 660u: goto L_08986A28;
    case 661u: goto L_08986A30;
    case 662u: goto L_08986A40;
    case 663u: goto L_08986A50;
    case 664u: goto L_08986A60;
    case 665u: goto L_08986A70;
    case 666u: goto L_08986A80;
    case 667u: goto L_08986A90;
    case 668u: goto L_08986AA0;
    case 669u: goto L_08986AB0;
    case 670u: goto L_08986AC0;
    case 671u: goto L_08986AD0;
    case 672u: goto L_08986AE0;
    case 673u: goto L_08986AF0;
    case 674u: goto L_08986B00;
    case 675u: goto L_08986B10;
    case 676u: goto L_08986B20;
    case 677u: goto L_08986B30;
    case 678u: goto L_08986B40;
    case 679u: goto L_08986B50;
    case 680u: goto L_08986B60;
    case 681u: goto L_08986B70;
    case 682u: goto L_08986B80;
    case 683u: goto L_08986B90;
    case 684u: goto L_08986BA0;
    case 685u: goto L_08986BB0;
    case 686u: goto L_08986BC0;
    case 687u: goto L_08986BD0;
    case 688u: goto L_08986BE0;
    case 689u: goto L_08986BF0;
    case 690u: goto L_08986C00;
    case 691u: goto L_08986C10;
    case 692u: goto L_08986C20;
    case 693u: goto L_08986C30;
    case 694u: goto L_08986C40;
    case 695u: goto L_08986C50;
    case 696u: goto L_08986C60;
    case 697u: goto L_08986C70;
    case 698u: goto L_08986C80;
    case 699u: goto L_08986C90;
    case 700u: goto L_08986CA0;
    case 701u: goto L_08986CB0;
    case 702u: goto L_08986CC0;
    case 703u: goto L_08986CD0;
    case 704u: goto L_08986CE0;
    case 705u: goto L_08986CF0;
    case 706u: goto L_08986CFC;
    case 707u: goto L_08986D0C;
    case 708u: goto L_08986D1C;
    case 709u: goto L_08986D2C;
    case 710u: goto L_08986D3C;
    case 711u: goto L_08986D4C;
    case 712u: goto L_08986D5C;
    case 713u: goto L_08986D6C;
    case 714u: goto L_08986D7C;
    case 715u: goto L_08986D94;
    case 716u: goto L_08986DA8;
    case 717u: goto L_08986DBC;
    case 718u: goto L_08986DD0;
    case 719u: goto L_08986DE4;
    case 720u: goto L_08986E20;
    case 721u: goto L_08986E38;
    case 722u: goto L_08986E48;
    case 723u: goto L_08986E74;
    case 724u: goto L_08986E7C;
    case 725u: goto L_08986E8C;
    case 726u: goto L_08986E90;
    case 727u: goto L_08986E98;
    case 728u: goto L_08986EAC;
    case 729u: goto L_08986EC0;
    case 730u: goto L_08986ED0;
    case 731u: goto L_08986EE0;
    case 732u: goto L_08986EE8;
    case 733u: goto L_08986EF4;
    case 734u: goto L_08986EF8;
    case 735u: goto L_08986EFC;
    case 736u: goto L_08986F08;
    case 737u: goto L_08986F3C;
    case 738u: goto L_08986F4C;
    case 739u: goto L_08986F5C;
    case 740u: goto L_08986F6C;
    case 741u: goto L_08986F7C;
    case 742u: goto L_08986F8C;
    case 743u: goto L_08986F9C;
    case 744u: goto L_08986FAC;
    case 745u: goto L_08986FBC;
    case 746u: goto L_08986FCC;
    case 747u: goto L_08986FDC;
    case 748u: goto L_08986FF4;
    case 749u: goto L_08987008;
    case 750u: goto L_0898701C;
    case 751u: goto L_08987030;
    case 752u: goto L_08987044;
    case 753u: goto L_08987078;
    case 754u: goto L_08987090;
    case 755u: goto L_089870A4;
    case 756u: goto L_089870D0;
    case 757u: goto L_089870D8;
    case 758u: goto L_089870E8;
    case 759u: goto L_089870EC;
    case 760u: goto L_089870F4;
    case 761u: goto L_089870F8;
    case 762u: goto L_089870FC;
    case 763u: goto L_08987108;
    case 764u: goto L_08987134;
    case 765u: goto L_0898714C;
    case 766u: goto L_08987164;
    case 767u: goto L_08987174;
    case 768u: goto L_08987184;
    case 769u: goto L_08987194;
    case 770u: goto L_089871A4;
    case 771u: goto L_089871B4;
    case 772u: goto L_089871C4;
    case 773u: goto L_089871D4;
    case 774u: goto L_089871E4;
    case 775u: goto L_089871F4;
    case 776u: goto L_08987204;
    case 777u: goto L_08987214;
    case 778u: goto L_08987224;
    case 779u: goto L_08987234;
    case 780u: goto L_08987244;
    case 781u: goto L_08987254;
    case 782u: goto L_08987264;
    case 783u: goto L_08987274;
    case 784u: goto L_08987284;
    case 785u: goto L_08987294;
    case 786u: goto L_089872A4;
    case 787u: goto L_089872B4;
    case 788u: goto L_089872C4;
    case 789u: goto L_089872D4;
    case 790u: goto L_089872E4;
    case 791u: goto L_089872F4;
    case 792u: goto L_08987304;
    case 793u: goto L_08987314;
    case 794u: goto L_08987324;
    case 795u: goto L_08987334;
    case 796u: goto L_08987344;
    case 797u: goto L_08987354;
    case 798u: goto L_08987364;
    case 799u: goto L_08987374;
    case 800u: goto L_08987384;
    case 801u: goto L_08987394;
    case 802u: goto L_089873A4;
    case 803u: goto L_089873B4;
    case 804u: goto L_089873C4;
    case 805u: goto L_089873D4;
    case 806u: goto L_089873E4;
    case 807u: goto L_089873F4;
    case 808u: goto L_08987404;
    case 809u: goto L_08987414;
    case 810u: goto L_08987424;
    case 811u: goto L_08987434;
    case 812u: goto L_08987440;
    case 813u: goto L_0898744C;
    case 814u: goto L_08987458;
    case 815u: goto L_08987464;
    case 816u: goto L_08987470;
    case 817u: goto L_08987484;
    case 818u: goto L_089874AC;
    case 819u: goto L_089874B8;
    case 820u: goto L_089874C4;
    case 821u: goto L_089874D0;
    case 822u: goto L_089874D8;
    case 823u: goto L_089874E4;
    case 824u: goto L_089874EC;
    case 825u: goto L_089874F8;
    case 826u: goto L_08987518;
    case 827u: goto L_0898751C;
    case 828u: goto L_08987520;
    case 829u: goto L_08987528;
    case 830u: goto L_08987534;
    case 831u: goto L_08987540;
    case 832u: goto L_0898754C;
    case 833u: goto L_08987558;
    case 834u: goto L_08987564;
    case 835u: goto L_08987570;
    case 836u: goto L_0898757C;
    case 837u: goto L_08987588;
    case 838u: goto L_08987594;
    case 839u: goto L_089875A0;
    case 840u: goto L_089875AC;
    case 841u: goto L_089875B8;
    case 842u: goto L_089875F8;
    case 843u: goto L_0898761C;
    case 844u: goto L_08987634;
    case 845u: goto L_08987638;
    case 846u: goto L_08987640;
    case 847u: goto L_0898764C;
    case 848u: goto L_0898765C;
    case 849u: goto L_08987674;
    case 850u: goto L_08987678;
    case 851u: goto L_08987680;
    case 852u: goto L_08987698;
    case 853u: goto L_089876A4;
    case 854u: goto L_089876C4;
    case 855u: goto L_089876D0;
    case 856u: goto L_089876DC;
    case 857u: goto L_089876E8;
    case 858u: goto L_089876F4;
    case 859u: goto L_08987704;
    case 860u: goto L_0898770C;
    case 861u: goto L_08987720;
    case 862u: goto L_0898772C;
    case 863u: goto L_08987738;
    case 864u: goto L_08987744;
    case 865u: goto L_08987750;
    case 866u: goto L_08987760;
    case 867u: goto L_08987778;
    case 868u: goto L_0898777C;
    case 869u: goto L_08987784;
    case 870u: goto L_0898779C;
    case 871u: goto L_089877A8;
    case 872u: goto L_089877B4;
    case 873u: goto L_089877DC;
    case 874u: goto L_089877F0;
    case 875u: goto L_08987808;
    case 876u: goto L_0898780C;
    case 877u: goto L_08987814;
    case 878u: goto L_0898782C;
    case 879u: goto L_08987838;
    case 880u: goto L_08987844;
    case 881u: goto L_08987854;
    case 882u: goto L_0898786C;
    case 883u: goto L_08987870;
    case 884u: goto L_08987878;
    case 885u: goto L_08987890;
    case 886u: goto L_0898789C;
    case 887u: goto L_089878A0;
    case 888u: goto L_089878C8;
    case 889u: goto L_089878D8;
    case 890u: goto L_089878E8;
    case 891u: goto L_089878F8;
    case 892u: goto L_08987908;
    case 893u: goto L_08987918;
    case 894u: goto L_08987928;
    case 895u: goto L_08987938;
    case 896u: goto L_08987948;
    case 897u: goto L_08987958;
    case 898u: goto L_08987968;
    case 899u: goto L_08987978;
    case 900u: goto L_08987988;
    case 901u: goto L_08987998;
    case 902u: goto L_089879A8;
    case 903u: goto L_089879B8;
    case 904u: goto L_089879C8;
    case 905u: goto L_089879D8;
    case 906u: goto L_089879E8;
    case 907u: goto L_089879F8;
    case 908u: goto L_08987A08;
    case 909u: goto L_08987A18;
    case 910u: goto L_08987A28;
    case 911u: goto L_08987A38;
    case 912u: goto L_08987A48;
    case 913u: goto L_08987A58;
    case 914u: goto L_08987A68;
    case 915u: goto L_08987A78;
    case 916u: goto L_08987A88;
    case 917u: goto L_08987A98;
    case 918u: goto L_08987AA8;
    case 919u: goto L_08987AB8;
    case 920u: goto L_08987AC8;
    case 921u: goto L_08987AD8;
    case 922u: goto L_08987AE8;
    case 923u: goto L_08987AF8;
    case 924u: goto L_08987B08;
    case 925u: goto L_08987B18;
    case 926u: goto L_08987B28;
    case 927u: goto L_08987B38;
    case 928u: goto L_08987B48;
    case 929u: goto L_08987B58;
    case 930u: goto L_08987B68;
    case 931u: goto L_08987B78;
    case 932u: goto L_08987B94;
    case 933u: goto L_08987BA0;
    case 934u: goto L_08987BB0;
    case 935u: goto L_08987BCC;
    case 936u: goto L_08987BD8;
    case 937u: goto L_08987BE8;
    case 938u: goto L_08987C04;
    case 939u: goto L_08987C10;
    case 940u: goto L_08987C20;
    case 941u: goto L_08987C3C;
    case 942u: goto L_08987C48;
    case 943u: goto L_08987C58;
    case 944u: goto L_08987C74;
    case 945u: goto L_08987C80;
    case 946u: goto L_08987C90;
    case 947u: goto L_08987CAC;
    case 948u: goto L_08987CB8;
    case 949u: goto L_08987CC8;
    case 950u: goto L_08987CE4;
    case 951u: goto L_08987CF0;
    case 952u: goto L_08987D00;
    case 953u: goto L_08987D1C;
    case 954u: goto L_08987D28;
    case 955u: goto L_08987D38;
    case 956u: goto L_08987D54;
    case 957u: goto L_08987D60;
    case 958u: goto L_08987D70;
    case 959u: goto L_08987D8C;
    case 960u: goto L_08987D98;
    case 961u: goto L_08987DA8;
    case 962u: goto L_08987DC4;
    case 963u: goto L_08987DD0;
    case 964u: goto L_08987DE0;
    case 965u: goto L_08987DFC;
    case 966u: goto L_08987E08;
    case 967u: goto L_08987E18;
    case 968u: goto L_08987E34;
    case 969u: goto L_08987E40;
    case 970u: goto L_08987E50;
    case 971u: goto L_08987E6C;
    case 972u: goto L_08987E78;
    case 973u: goto L_08987E88;
    case 974u: goto L_08987EA4;
    case 975u: goto L_08987EB0;
    case 976u: goto L_08987EC0;
    case 977u: goto L_08987EDC;
    case 978u: goto L_08987EE8;
    case 979u: goto L_08987EF8;
    case 980u: goto L_08987F18;
    case 981u: goto L_08987F24;
    case 982u: goto L_08987F40;
    case 983u: goto L_08987F48;
    case 984u: goto L_08987F54;
    case 985u: goto L_08987F60;
    case 986u: goto L_08987F7C;
    case 987u: goto L_08987F88;
    case 988u: goto L_08987F90;
    case 989u: goto L_08987F98;
    case 990u: goto L_08987FB0;
    case 991u: goto L_08987FC4;
    case 992u: goto L_08987FD8;
    case 993u: goto L_08987FF0;
    case 994u: goto L_08987FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08984000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(31, 0x08984024u);
    // nop
    goto L_089840D8;
L_08984024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08984048u);
    // nop
    goto L_08984008;
L_08984048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08984074u);
    // nop
    ctx.pc = 0x08B0DD9Cu;
    return;
L_08984074:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898408Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898408Cu) goto L_0898408C;
    return;
L_0898408C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30248)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089840A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945B84u>(ctx, &aot_mem) && ctx.pc == 0x089840A4u) goto L_089840A4;
    return;
L_089840A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089840BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089840BCu) goto L_089840BC;
    return;
L_089840BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089840D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08984100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984100u) goto L_08984100;
    return;
L_08984100:
    ctx.set_gpr(31, 0x08984108u);
    // nop
    ctx.pc = 0x08B0DD9Cu;
    return;
L_08984108:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984140;
      }
      goto L_08984134;
    }
L_08984134:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08984140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08984140u) goto L_08984140;
    return;
L_08984140:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0898415C;
      }
      goto L_08984148;
    }
L_08984148:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08984154u);
    // nop
    ctx.pc = 0x08B0DE34u;
    return;
L_08984154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984168;
      }
      goto L_0898415C;
    }
L_0898415C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08984168u);
    // nop
    ctx.pc = 0x08B0DDC4u;
    return;
L_08984168:
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
L_08984184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31988)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089841A4;
      }
      goto L_0898419C;
    }
L_0898419C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089841A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089841A4u) goto L_089841A4;
    return;
L_089841A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089841B4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31988), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089841C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984208;
      }
      goto L_089841EC;
    }
L_089841EC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11804));
    ctx.set_gpr(31, 0x089841FCu);
    // nop
    goto L_08984184;
L_089841FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984408;
      }
      goto L_08984208;
    }
L_08984208:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31976), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31984), 0u);
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31980), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-100));
    ctx.set_gpr(31, 0x0898423Cu);
    // nop
    goto L_089850C0;
L_0898423C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0898424Cu);
    // nop
    goto L_08984428;
L_0898424C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984260;
      }
      goto L_08984254;
    }
L_08984254:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984408;
      }
      goto L_08984260;
    }
L_08984260:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31984)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 32767 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984290;
      }
      goto L_08984274;
    }
L_08984274:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11820));
    ctx.set_gpr(31, 0x08984284u);
    // nop
    goto L_08984184;
L_08984284:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984408;
      }
      goto L_08984290;
    }
L_08984290:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089842A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089842A8u) goto L_089842A8;
    return;
L_089842A8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089842D0;
      }
      goto L_089842B4;
    }
L_089842B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11836));
    ctx.set_gpr(31, 0x089842C4u);
    // nop
    goto L_08984184;
L_089842C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984408;
      }
      goto L_089842D0;
    }
L_089842D0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31976), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31980), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-100));
    ctx.set_gpr(31, 0x089842FCu);
    // nop
    goto L_089850C0;
L_089842FC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0898430Cu);
    // nop
    goto L_08984428;
L_0898430C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984320;
      }
      goto L_08984314;
    }
L_08984314:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984408;
      }
      goto L_08984320;
    }
L_08984320:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(93));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08984340u);
    // nop
    goto L_08985A50;
L_08984340:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984404;
      }
      goto L_0898434C;
    }
L_0898434C:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984370;
      }
      goto L_08984360;
    }
L_08984360:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984388;
      }
      goto L_08984370;
    }
L_08984370:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984388;
      }
      goto L_0898437C;
    }
L_0898437C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(81))))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08984388;
L_08984388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984404;
      }
      goto L_08984398;
    }
L_08984398:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089843F4;
      }
      goto L_089843A8;
    }
L_089843A8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089843E4;
      }
      goto L_089843B8;
    }
L_089843B8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089843C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089843C4u) goto L_089843C4;
    return;
L_089843C4:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089843E4;
      }
      goto L_089843D0;
    }
L_089843D0:
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089843E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089843E0u) goto L_089843E0;
    return;
L_089843E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089843E4;
L_089843E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089843F0u);
    // nop
    goto L_08985A50;
L_089843F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_089843F4;
L_089843F4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089843A8;
      }
      goto L_089843FC;
    }
L_089843FC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    goto L_08984404;
L_08984404:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08984408;
L_08984408:
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
L_08984428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089844B8;
      }
      goto L_08984460;
    }
L_08984460:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31976)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984490;
      }
      goto L_08984474;
    }
L_08984474:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11852));
    ctx.set_gpr(31, 0x08984484u);
    // nop
    goto L_08984184;
L_08984484:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_08984490;
    }
L_08984490:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31976), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089844ACu);
    // nop
    goto L_08985070;
L_089844AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089844BC;
      }
      goto L_089844B8;
    }
L_089844B8:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089844BC;
L_089844BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089844C8u);
    // nop
    goto L_08984710;
L_089844C8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089844E0;
      }
      goto L_089844D4;
    }
L_089844D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_089844E0;
    }
L_089844E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984500;
      }
      goto L_089844E8;
    }
L_089844E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089844F8u);
    // nop
    goto L_08985184;
L_089844F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984504;
      }
      goto L_08984500;
    }
L_08984500:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    goto L_08984504;
L_08984504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984524;
      }
      goto L_08984514;
    }
L_08984514:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08984524;
L_08984524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089845BC;
      }
      goto L_08984540;
    }
L_08984540:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08984560u);
    // nop
    goto L_08984710;
L_08984560:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984578;
      }
      goto L_0898456C;
    }
L_0898456C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_08984578;
    }
L_08984578:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08984588u);
    // nop
    goto L_08985184;
L_08984588:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089845A8;
      }
      goto L_08984598;
    }
L_08984598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089845A8;
L_089845A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089845BC;
L_089845BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(124));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984540;
      }
      goto L_089845D4;
    }
L_089845D4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845E8;
      }
      goto L_089845DC;
    }
L_089845DC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089845EC;
      }
      goto L_089845E8;
    }
L_089845E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089845EC;
L_089845EC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089845F8u);
    // nop
    goto L_08985070;
L_089845F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898460Cu);
    // nop
    goto L_08985184;
L_0898460C:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984638;
      }
      goto L_08984618;
    }
L_08984618:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08984628u);
    // nop
    goto L_0898520C;
L_08984628:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08984634u);
    // nop
    goto L_08985A50;
L_08984634:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08984638;
L_08984638:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984618;
      }
      goto L_08984640;
    }
L_08984640:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984688;
      }
      goto L_08984648;
    }
L_08984648:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984688;
      }
      goto L_0898466C;
    }
L_0898466C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11864));
    ctx.set_gpr(31, 0x0898467Cu);
    // nop
    goto L_08984184;
L_0898467C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_08984688;
    }
L_08984688:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089846E8;
      }
      goto L_08984690;
    }
L_08984690:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846E8;
      }
      goto L_089846A4;
    }
L_089846A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089846CC;
      }
      goto L_089846B0;
    }
L_089846B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11864));
    ctx.set_gpr(31, 0x089846C0u);
    // nop
    goto L_08984184;
L_089846C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_089846CC;
    }
L_089846CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11880));
    ctx.set_gpr(31, 0x089846DCu);
    // nop
    goto L_08984184;
L_089846DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_089846E8;
    }
L_089846E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089846EC;
L_089846EC:
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
L_08984710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898473Cu);
    // nop
    goto L_08985070;
L_0898473C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089847BC;
      }
      goto L_0898474C;
    }
L_0898474C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08984758u);
    // nop
    goto L_08984820;
L_08984758:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984770;
      }
      goto L_08984764;
    }
L_08984764:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984800;
      }
      goto L_08984770;
    }
L_08984770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089847A8;
      }
      goto L_0898478C;
    }
L_0898478C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089847B8;
      }
      goto L_089847A8;
    }
L_089847A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089847B8u);
    // nop
    goto L_08985184;
L_089847B8:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_089847BC;
L_089847BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089847E8;
      }
      goto L_089847D0;
    }
L_089847D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(124));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089847E8;
      }
      goto L_089847DC;
    }
L_089847DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898474C;
      }
      goto L_089847E8;
    }
L_089847E8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089847FC;
      }
      goto L_089847F0;
    }
L_089847F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x089847FCu);
    // nop
    goto L_08985070;
L_089847FC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08984800;
L_08984800:
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
L_08984820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08984840u);
    // nop
    goto L_08984B44;
L_08984840:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984858;
      }
      goto L_0898484C;
    }
L_0898484C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984B2C;
      }
      goto L_08984858;
    }
L_08984858:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984870;
    }
L_08984870:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_0898487C;
    }
L_0898487C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984888;
    }
L_08984888:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984B2C;
      }
      goto L_08984898;
    }
L_08984898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089848D0;
      }
      goto L_089848A8;
    }
L_089848A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089848D0;
      }
      goto L_089848B4;
    }
L_089848B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11892));
    ctx.set_gpr(31, 0x089848C4u);
    // nop
    goto L_08984184;
L_089848C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984B2C;
      }
      goto L_089848D0;
    }
L_089848D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089848E8;
      }
      goto L_089848DC;
    }
L_089848DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089848EC;
      }
      goto L_089848E8;
    }
L_089848E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089848EC;
L_089848EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984924;
      }
      goto L_089848FC;
    }
L_089848FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984924;
      }
      goto L_0898490C;
    }
L_0898490C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898491Cu);
    // nop
    goto L_08985110;
L_0898491C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984AD0;
      }
      goto L_08984924;
    }
L_08984924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089849AC;
      }
      goto L_08984930;
    }
L_08984930:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08984940u);
    // nop
    goto L_08985110;
L_08984940:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0898494Cu);
    // nop
    goto L_08985070;
L_0898494C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898495Cu);
    // nop
    goto L_0898520C;
L_0898495C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898496Cu);
    // nop
    goto L_0898520C;
L_0898496C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08984978u);
    // nop
    goto L_08985070;
L_08984978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08984988u);
    // nop
    goto L_08985184;
L_08984988:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08984994u);
    // nop
    goto L_08985070;
L_08984994:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089849A4u);
    // nop
    goto L_08985184;
L_089849A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984AD0;
      }
      goto L_089849AC;
    }
L_089849AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089849E0;
      }
      goto L_089849B8;
    }
L_089849B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089849E0;
      }
      goto L_089849C8;
    }
L_089849C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089849D8u);
    // nop
    goto L_08985110;
L_089849D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984AD0;
      }
      goto L_089849E0;
    }
L_089849E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984A68;
      }
      goto L_089849EC;
    }
L_089849EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x089849F8u);
    // nop
    goto L_08985070;
L_089849F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08984A0Cu);
    // nop
    goto L_08985184;
L_08984A0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08984A18u);
    // nop
    goto L_08985070;
L_08984A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08984A28u);
    // nop
    goto L_08985184;
L_08984A28:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08984A34u);
    // nop
    goto L_08985070;
L_08984A34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08984A44u);
    // nop
    goto L_08985184;
L_08984A44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08984A50u);
    // nop
    goto L_08985070;
L_08984A50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08984A60u);
    // nop
    goto L_08985184;
L_08984A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984AD0;
      }
      goto L_08984A68;
    }
L_08984A68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984AD0;
      }
      goto L_08984A74;
    }
L_08984A74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08984A84u);
    // nop
    goto L_08985110;
L_08984A84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08984A90u);
    // nop
    goto L_08985070;
L_08984A90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08984AA0u);
    // nop
    goto L_08985184;
L_08984AA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08984AACu);
    // nop
    goto L_08985070;
L_08984AAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08984AC0u);
    // nop
    goto L_08985184;
L_08984AC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08984AD0u);
    // nop
    goto L_0898520C;
L_08984AD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984B0C;
      }
      goto L_08984AF4;
    }
L_08984AF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984B0C;
      }
      goto L_08984B00;
    }
L_08984B00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984B28;
      }
      goto L_08984B0C;
    }
L_08984B0C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11920));
    ctx.set_gpr(31, 0x08984B1Cu);
    // nop
    goto L_08984184;
L_08984B1C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984B2C;
      }
      goto L_08984B28;
    }
L_08984B28:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08984B2C;
L_08984B2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984B44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984ED4;
      }
      goto L_08984B88;
    }
L_08984B88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984EB8;
      }
      goto L_08984B94;
    }
L_08984B94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984EB8;
      }
      goto L_08984BA0;
    }
L_08984BA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984EB8;
      }
      goto L_08984BAC;
    }
L_08984BAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984E9C;
      }
      goto L_08984BB8;
    }
L_08984BB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(124));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984E9C;
      }
      goto L_08984BC4;
    }
L_08984BC4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E9C;
      }
      goto L_08984BCC;
    }
L_08984BCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984E58;
      }
      goto L_08984BD8;
    }
L_08984BD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(91));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984C64;
      }
      goto L_08984BE4;
    }
L_08984BE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984C40;
      }
      goto L_08984BF0;
    }
L_08984BF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984C28;
      }
      goto L_08984BFC;
    }
L_08984BFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984C10;
      }
      goto L_08984C08;
    }
L_08984C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984F4C;
      }
      goto L_08984C10;
    }
L_08984C10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08984C1Cu);
    // nop
    goto L_08985070;
L_08984C1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984C28;
    }
L_08984C28:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08984C34u);
    // nop
    goto L_08985070;
L_08984C34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984C40;
    }
L_08984C40:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08984C4Cu);
    // nop
    goto L_08985070;
L_08984C4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 3u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984C64;
    }
L_08984C64:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984CA0;
      }
      goto L_08984C74;
    }
L_08984C74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08984C80u);
    // nop
    goto L_08985070;
L_08984C80:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984CB0;
      }
      goto L_08984CA0;
    }
L_08984CA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08984CACu);
    // nop
    goto L_08985070;
L_08984CAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08984CB0;
L_08984CB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984CD4;
      }
      goto L_08984CC8;
    }
L_08984CC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984DD8;
      }
      goto L_08984CD4;
    }
L_08984CD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08984CF4u);
    // nop
    goto L_089850C0;
L_08984CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984DD8;
      }
      goto L_08984CFC;
    }
L_08984CFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984DB8;
      }
      goto L_08984D08;
    }
L_08984D08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984D34;
      }
      goto L_08984D2C;
    }
L_08984D2C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984D48;
      }
      goto L_08984D34;
    }
L_08984D34:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x08984D40u);
    // nop
    goto L_089850C0;
L_08984D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984DD8;
      }
      goto L_08984D48;
    }
L_08984D48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984D90;
      }
      goto L_08984D64;
    }
L_08984D64:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11932));
    ctx.set_gpr(31, 0x08984D74u);
    // nop
    goto L_08984184;
L_08984D74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984D80;
    }
L_08984D80:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[19]))));
    ctx.set_gpr(31, 0x08984D8Cu);
    // nop
    goto L_089850C0;
L_08984D8C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08984D90;
L_08984D90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984D80;
      }
      goto L_08984D9C;
    }
L_08984D9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984DD8;
      }
      goto L_08984DB8;
    }
L_08984DB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08984DD8u);
    // nop
    goto L_089850C0;
L_08984DD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984DF8;
      }
      goto L_08984DEC;
    }
L_08984DEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984CFC;
      }
      goto L_08984DF8;
    }
L_08984DF8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08984E04u);
    // nop
    goto L_089850C0;
L_08984E04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984E38;
      }
      goto L_08984E1C;
    }
L_08984E1C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11952));
    ctx.set_gpr(31, 0x08984E2Cu);
    // nop
    goto L_08984184;
L_08984E2C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984E38;
    }
L_08984E38:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 3u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984E58;
    }
L_08984E58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08984E68u);
    // nop
    goto L_08984428;
L_08984E68:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984E80;
      }
      goto L_08984E74;
    }
L_08984E74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984E80;
    }
L_08984E80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 5u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984E9C;
    }
L_08984E9C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11968));
    ctx.set_gpr(31, 0x08984EACu);
    // nop
    goto L_08984184;
L_08984EAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984EB8;
    }
L_08984EB8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11984));
    ctx.set_gpr(31, 0x08984EC8u);
    // nop
    goto L_08984184;
L_08984EC8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984ED4;
    }
L_08984ED4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984EE0;
    }
L_08984EE0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12004));
    ctx.set_gpr(31, 0x08984EF0u);
    // nop
    goto L_08984184;
L_08984EF0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984EFC;
    }
L_08984EFC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08984F08u);
    // nop
    goto L_08985070;
L_08984F08:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08984F2Cu);
    // nop
    goto L_089850C0;
L_08984F2C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08984F38u);
    // nop
    goto L_089850C0;
L_08984F38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 3u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898504C;
      }
      goto L_08984F4C;
    }
L_08984F4C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[4]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12016));
    ctx.set_gpr(31, 0x08984F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 497u, 0x08816704u>(ctx, &aot_mem) && ctx.pc == 0x08984F68u) goto L_08984F68;
    return;
L_08984F68:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08984F90;
      }
      goto L_08984F74;
    }
L_08984F74:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12028));
    ctx.set_gpr(31, 0x08984F84u);
    // nop
    goto L_08984184;
L_08984F84:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985050;
      }
      goto L_08984F90;
    }
L_08984F90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984FD8;
      }
      goto L_08984FAC;
    }
L_08984FAC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984FD4;
      }
      goto L_08984FBC;
    }
L_08984FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984FD4;
      }
      goto L_08984FC8;
    }
L_08984FC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984FD8;
      }
      goto L_08984FD4;
    }
L_08984FD4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08984FD8;
L_08984FD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08984FFC;
      }
      goto L_08984FF0;
    }
L_08984FF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08984FFC;
L_08984FFC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08985008u);
    // nop
    goto L_08985070;
L_08985008:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985038;
      }
      goto L_08985014;
    }
L_08985014:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31972)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31972), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08985034u);
    // nop
    goto L_089850C0;
L_08985034:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08985038;
L_08985038:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08985014;
      }
      goto L_08985040;
    }
L_08985040:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0898504Cu);
    // nop
    goto L_089850C0;
L_0898504C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08985050;
L_08985050:
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
L_08985070:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31980)));
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089850A0;
      }
      goto L_08985084;
    }
L_08985084:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31984)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31984), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089850B8;
      }
      goto L_089850A0;
    }
L_089850A0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31980), ctx.gpr[4]);
    goto L_089850B8;
L_089850B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089850C0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31980)));
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089850F4;
      }
      goto L_089850D4;
    }
L_089850D4:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31980)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31980), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985108;
      }
      goto L_089850F4;
    }
L_089850F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31984)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31984), ctx.gpr[4]);
    goto L_08985108;
L_08985108:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985110:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31980)));
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08985140;
      }
      goto L_08985124;
    }
L_08985124:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31984)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31984), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898517C;
      }
      goto L_08985140;
    }
L_08985140:
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31980), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985164;
      }
      goto L_08985154;
    }
L_08985154:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08985164;
L_08985164:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985154;
      }
      goto L_08985170;
    }
L_08985170:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0898517C;
L_0898517C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089851F4;
      }
      goto L_089851A4;
    }
L_089851A4:
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_089851A8;
L_089851A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089851B4u);
    // nop
    goto L_08985A50;
L_089851B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089851C8;
      }
      goto L_089851BC;
    }
L_089851BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089851A8;
      }
      goto L_089851C8;
    }
L_089851C8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089851E4;
      }
      goto L_089851D8;
    }
L_089851D8:
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089851E8;
      }
      goto L_089851E4;
    }
L_089851E4:
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[16]);
    goto L_089851E8;
L_089851E8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089851F4;
L_089851F4:
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
L_0898520C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985238;
      }
      goto L_0898521C;
    }
L_0898521C:
    ctx.set_gpr(3, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08985238;
      }
      goto L_08985228;
    }
L_08985228:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08985240;
      }
      goto L_08985238;
    }
L_08985238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898524C;
      }
      goto L_08985240;
    }
L_08985240:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898524Cu);
    // nop
    goto L_08985184;
L_0898524C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898525C:
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
          goto L_08985288;
      }
      goto L_08985280;
    }
L_08985280:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089852A4;
      }
      goto L_08985288;
    }
L_08985288:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12048));
    ctx.set_gpr(31, 0x08985298u);
    // nop
    goto L_08984184;
L_08985298:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_089852A4;
    }
L_089852A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(156));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089852D0;
      }
      goto L_089852B4;
    }
L_089852B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12064));
    ctx.set_gpr(31, 0x089852C4u);
    // nop
    goto L_08984184;
L_089852C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_089852D0;
    }
L_089852D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898533C;
      }
      goto L_089852DC;
    }
L_089852DC:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985308;
      }
      goto L_089852E8;
    }
L_089852E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x089852FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x089852FCu) goto L_089852FC;
    return;
L_089852FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985328;
      }
      goto L_08985304;
    }
L_08985304:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08985308;
L_08985308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x0898531Cu) goto L_0898531C;
    return;
L_0898531C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089852E8;
      }
      goto L_08985328;
    }
L_08985328:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898533C;
      }
      goto L_08985330;
    }
L_08985330:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_0898533C;
    }
L_0898533C:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31996), ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(81))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985368;
      }
      goto L_08985350;
    }
L_08985350:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08985360u);
    // nop
    goto L_08985424;
L_08985360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_08985368;
    }
L_08985368:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089853CC;
      }
      goto L_08985378;
    }
L_08985378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089853A8;
      }
      goto L_08985380;
    }
L_08985380:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08985390u);
    // nop
    goto L_08985424;
L_08985390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089853A4;
      }
      goto L_08985398;
    }
L_08985398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_089853A4;
    }
L_089853A4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089853A8;
L_089853A8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089853B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089853B8u) goto L_089853B8;
    return;
L_089853B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985380;
      }
      goto L_089853C4;
    }
L_089853C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985404;
      }
      goto L_089853CC;
    }
L_089853CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089853DCu);
    // nop
    goto L_08985424;
L_089853DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089853F0;
      }
      goto L_089853E4;
    }
L_089853E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985408;
      }
      goto L_089853F0;
    }
L_089853F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089853CC;
      }
      goto L_08985404;
    }
L_08985404:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08985408;
L_08985408:
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
L_08985424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32000), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32004), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898547C;
      }
      goto L_08985468;
    }
L_08985468:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_0898547C;
L_0898547C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08985468;
      }
      goto L_08985484;
    }
L_08985484:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08985490u);
    // nop
    goto L_089854D0;
L_08985490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089854B4;
      }
      goto L_08985498;
    }
L_08985498:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089854B8;
      }
      goto L_089854B4;
    }
L_089854B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089854B8;
L_089854B8:
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
L_089854D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858DC;
      }
      goto L_089854F8;
    }
L_089854F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08985504u);
    // nop
    goto L_08985A50;
L_08985504:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089858BC;
      }
      goto L_08985518;
    }
L_08985518:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32452));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985534:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31996)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_0898554C;
    }
L_0898554C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985558;
    }
L_08985558:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_0898556C;
    }
L_0898556C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985578;
    }
L_08985578:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985598;
      }
      goto L_0898558C;
    }
L_0898558C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985598;
    }
L_08985598:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_089855AC;
    }
L_089855AC:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089855D4;
      }
      goto L_089855C8;
    }
L_089855C8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089855D4;
    }
L_089855D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089855E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089855E0u) goto L_089855E0;
    return;
L_089855E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898561C;
      }
      goto L_089855F0;
    }
L_089855F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08985608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08985608u) goto L_08985608;
    return;
L_08985608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898561C;
      }
      goto L_08985610;
    }
L_08985610:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_0898561C;
    }
L_0898561C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_08985638;
    }
L_08985638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985660;
      }
      goto L_0898564C;
    }
L_0898564C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08985658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08985658u) goto L_08985658;
    return;
L_08985658:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898566C;
      }
      goto L_08985660;
    }
L_08985660:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_0898566C;
    }
L_0898566C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_08985688;
    }
L_08985688:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089856B0;
      }
      goto L_0898569C;
    }
L_0898569C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089856A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089856A8u) goto L_089856A8;
    return;
L_089856A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089856BC;
      }
      goto L_089856B0;
    }
L_089856B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089856BC;
    }
L_089856BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_089856D8;
    }
L_089856D8:
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089856F0u);
    // nop
    goto L_089854D0;
L_089856F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985724;
      }
      goto L_089856F8;
    }
L_089856F8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32000)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985718;
      }
      goto L_08985714;
    }
L_08985714:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08985718;
L_08985718:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985724;
    }
L_08985724:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985730;
    }
L_08985730:
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08985748u);
    // nop
    goto L_089854D0;
L_08985748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_08985750;
    }
L_08985750:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32004)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985770;
      }
      goto L_0898576C;
    }
L_0898576C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08985770;
L_08985770:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_0898577C;
    }
L_0898577C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985788;
    }
L_08985788:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089857A4;
      }
      goto L_08985798;
    }
L_08985798:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858D8;
      }
      goto L_089857A4;
    }
L_089857A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089857B8u);
    // nop
    goto L_089854D0;
L_089857B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089857CC;
      }
      goto L_089857C0;
    }
L_089857C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089857CC;
    }
L_089857CC:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089857E0u);
    // nop
    goto L_08985A50;
L_089857E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089857FC;
      }
      goto L_089857EC;
    }
L_089857EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089857A4;
      }
      goto L_089857FC;
    }
L_089857FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985808;
    }
L_08985808:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08985820;
      }
      goto L_0898581C;
    }
L_0898581C:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    goto L_08985820;
L_08985820:
    ctx.set_gpr(2, ctx.gpr[4] ^ 10u);
    ctx.set_gpr(19, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898583Cu);
    // nop
    goto L_0898591C;
L_0898583C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985898;
      }
      goto L_08985848;
    }
L_08985848:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[20]))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985868;
      }
      goto L_08985854;
    }
L_08985854:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08985888;
      }
      goto L_08985868;
    }
L_08985868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08985874u);
    // nop
    goto L_089854D0;
L_08985874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985888;
      }
      goto L_0898587C;
    }
L_0898587C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_08985888;
    }
L_08985888:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[3]);
    goto L_08985898;
L_08985898:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985848;
      }
      goto L_089858A4;
    }
L_089858A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089858B0;
    }
L_089858B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089858BC;
    }
L_089858BC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12084));
    ctx.set_gpr(31, 0x089858CCu);
    // nop
    goto L_08984184;
L_089858CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089858F8;
      }
      goto L_089858D8;
    }
L_089858D8:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_089858DC;
L_089858DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089854F8;
      }
      goto L_089858E4;
    }
L_089858E4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12104));
    ctx.set_gpr(31, 0x089858F4u);
    // nop
    goto L_08984184;
L_089858F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089858F8;
L_089858F8:
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
L_0898591C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31992)));
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089859F0;
      }
      goto L_08985950;
    }
L_08985950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089859C0;
      }
      goto L_0898595C;
    }
L_0898595C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089859A0;
      }
      goto L_08985968;
    }
L_08985968:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898597C;
      }
      goto L_08985974;
    }
L_08985974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A18;
      }
      goto L_0898597C;
    }
L_0898597C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08985988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08985988u) goto L_08985988;
    return;
L_08985988:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_08985998;
    }
L_08985998:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089859A0;
L_089859A0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08985998;
      }
      goto L_089859B0;
    }
L_089859B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_089859B8;
    }
L_089859B8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089859C0;
L_089859C0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_089859CC;
    }
L_089859CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089859D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089859D8u) goto L_089859D8;
    return;
L_089859D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089859B8;
      }
      goto L_089859E0;
    }
L_089859E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_089859E8;
    }
L_089859E8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089859F0;
L_089859F0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_089859FC;
    }
L_089859FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08985A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08985A08u) goto L_08985A08;
    return;
L_08985A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089859E8;
      }
      goto L_08985A10;
    }
L_08985A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A28;
      }
      goto L_08985A18;
    }
L_08985A18:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12124));
    ctx.set_gpr(31, 0x08985A28u);
    // nop
    goto L_08984184;
L_08985A28:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31992), ctx.gpr[17]);
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
L_08985A50:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32184));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08985A68;
      }
      goto L_08985A5C;
    }
L_08985A5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985AB4;
      }
      goto L_08985A68;
    }
L_08985A68:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985A94;
      }
      goto L_08985A88;
    }
L_08985A88:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985AB4;
      }
      goto L_08985A94;
    }
L_08985A94:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08985AB0;
      }
      goto L_08985AA4;
    }
L_08985AA4:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985AB4;
      }
      goto L_08985AB0;
    }
L_08985AB0:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08985AB4;
L_08985AB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985ABC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30240)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985ACC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30244)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985ADC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985AE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985AF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985B00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08985B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985B3Cu) goto L_08985B3C;
    return;
L_08985B3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985B84;
      }
      goto L_08985B44;
    }
L_08985B44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985B68;
      }
      goto L_08985B50;
    }
L_08985B50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985B68;
      }
      goto L_08985B5C;
    }
L_08985B5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08985B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08985B68u) goto L_08985B68;
    return;
L_08985B68:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985B88;
      }
      goto L_08985B84;
    }
L_08985B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08985B88;
L_08985B88:
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
L_08985BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30328)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30276)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08985C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985C38u) goto L_08985C38;
    return;
L_08985C38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08985C5Cu) goto L_08985C5C;
    return;
L_08985C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985C6Cu) goto L_08985C6C;
    return;
L_08985C6C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08985C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08985C84u) goto L_08985C84;
    return;
L_08985C84:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08985C9Cu) goto L_08985C9C;
    return;
L_08985C9C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08985CC0u) goto L_08985CC0;
    return;
L_08985CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985CD0u) goto L_08985CD0;
    return;
L_08985CD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08985CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08985CE8u) goto L_08985CE8;
    return;
L_08985CE8:
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
L_08985D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08985D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985D30u) goto L_08985D30;
    return;
L_08985D30:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08985D54u) goto L_08985D54;
    return;
L_08985D54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985D64u) goto L_08985D64;
    return;
L_08985D64:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08985D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08985D7Cu) goto L_08985D7C;
    return;
L_08985D7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08985D94u) goto L_08985D94;
    return;
L_08985D94:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08985DB8u) goto L_08985DB8;
    return;
L_08985DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985DC8u) goto L_08985DC8;
    return;
L_08985DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08985DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08985DE0u) goto L_08985DE0;
    return;
L_08985DE0:
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
L_08985E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08985E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08985E30u) goto L_08985E30;
    return;
L_08985E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08985E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08985E48u) goto L_08985E48;
    return;
L_08985E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08985E58u) goto L_08985E58;
    return;
L_08985E58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08985E74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985E74u) goto L_08985E74;
    return;
L_08985E74:
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
L_08985E90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985EA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08985ED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985ED8u) goto L_08985ED8;
    return;
L_08985ED8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08985EFCu) goto L_08985EFC;
    return;
L_08985EFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985F0Cu) goto L_08985F0C;
    return;
L_08985F0C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08985F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08985F24u) goto L_08985F24;
    return;
L_08985F24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08985F3Cu) goto L_08985F3C;
    return;
L_08985F3C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08985F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08985F60u) goto L_08985F60;
    return;
L_08985F60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08985F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08985F70u) goto L_08985F70;
    return;
L_08985F70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08985F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08985F88u) goto L_08985F88;
    return;
L_08985F88:
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
L_08985FA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30304)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985FB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30308)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985FC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30336)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898601C;
      }
      goto L_08986000;
    }
L_08986000:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898601C;
      }
      goto L_08986018;
    }
L_08986018:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0898601C;
L_0898601C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986030;
      }
      goto L_08986024;
    }
L_08986024:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08986030;
L_08986030:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898605C;
      }
      goto L_08986040;
    }
L_08986040:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898605C;
      }
      goto L_08986058;
    }
L_08986058:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0898605C;
L_0898605C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986088;
      }
      goto L_08986064;
    }
L_08986064:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986088;
      }
      goto L_0898607C;
    }
L_0898607C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08986088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08986088u) goto L_08986088;
    return;
L_08986088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
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
L_089860A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30480)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089860B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30364)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089860C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30512)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089860D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089860F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089860F4u) goto L_089860F4;
    return;
L_089860F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986104:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986114:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986124:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30376)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986134:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986140:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30440)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986150:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30420)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986160:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27192)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986170:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27196)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986180:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27172)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986190:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27176)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27152)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27132)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27136)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27124)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089861F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986200:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986210:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27116)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986220:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26416)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986230:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986240:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28352)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986250:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986260:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986270:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986280:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089862A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089862A8u) goto L_089862A8;
    return;
L_089862A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089862B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089862E0;
      }
      goto L_089862D4;
    }
L_089862D4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089862E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089862E0u) goto L_089862E0;
    return;
L_089862E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089862F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28428)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986300:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27060)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986310:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27064)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986320:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27040)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986330:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27044)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986340:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28536)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986350:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986360:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28652)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986370:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986380:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986390:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27004)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27008)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26476)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26972)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26976)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986400:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28880)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986410:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26968)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986420:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986430:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986440:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28916)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986450:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986460:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986470:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986480:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986490:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29200)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26820)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986500:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26796)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986510:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26800)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986520:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986530:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29348)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986540:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898655C;
      }
      goto L_08986550;
    }
L_08986550:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0898655C;
L_0898655C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986564:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986580;
      }
      goto L_08986574;
    }
L_08986574:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08986580;
L_08986580:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986588:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986598:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26776)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986608:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29400)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986618:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29416)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986628:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986648:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26752)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986658:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26756)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986668:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29636)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986678:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986688:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986698:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30188)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986708:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986710:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30192)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986720:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26680)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986730:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986740:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986750:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986770:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986780:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986790:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30404)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30348)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30332)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986800:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30296)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986810:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30220)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986820:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986830:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30160)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986840:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986850:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30144)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986860:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30124)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986870:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30120)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986880:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30104)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986890:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30096)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30084)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30080)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30076)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986900:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30068)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986910:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30060)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986920:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986930:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30048)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986940:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986950:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30036)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986960:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986970:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986980:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986990:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30012)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089869F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29960)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29900)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29884)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29308)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29244)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29124)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29080)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29000)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28900)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28896)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28800)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986BF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28776)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28508)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986C90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28192)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28152)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28068)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28064)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27948)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08986D94u);
    // nop
    goto L_08986DE4;
L_08986D94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08986DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 400u, 0x08841620u>(ctx, &aot_mem) && ctx.pc == 0x08986DA8u) goto L_08986DA8;
    return;
L_08986DA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08986DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 375u, 0x088414ACu>(ctx, &aot_mem) && ctx.pc == 0x08986DBCu) goto L_08986DBC;
    return;
L_08986DBC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08986DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08986DD0u) goto L_08986DD0;
    return;
L_08986DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986DE4:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986EFC;
      }
      goto L_08986E20;
    }
L_08986E20:
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986EF8;
      }
      goto L_08986E38;
    }
L_08986E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986E90;
      }
      goto L_08986E48;
    }
L_08986E48:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986E7C;
      }
      goto L_08986E74;
    }
L_08986E74:
    ctx.set_gpr(31, 0x08986E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08986E7Cu) goto L_08986E7C;
    return;
L_08986E7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08986E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08986E8Cu) goto L_08986E8C;
    return;
L_08986E8C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08986E90;
L_08986E90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08986E48;
      }
      goto L_08986E98;
    }
L_08986E98:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986EE8;
      }
      goto L_08986EAC;
    }
L_08986EAC:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08986EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x08986EC0u) goto L_08986EC0;
    return;
L_08986EC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08986ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08986ED0u) goto L_08986ED0;
    return;
L_08986ED0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08986EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08986EE0u) goto L_08986EE0;
    return;
L_08986EE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08986EE8;
L_08986EE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986EAC;
      }
      goto L_08986EF4;
    }
L_08986EF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08986EF8;
L_08986EF8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08986EFC;
L_08986EFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986F08;
    }
L_08986F08:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
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
L_08986F3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26464)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27924)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27920)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27728)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27400)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27396)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08986FF4u);
    // nop
    goto L_08987044;
L_08986FF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08987008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 400u, 0x08841620u>(ctx, &aot_mem) && ctx.pc == 0x08987008u) goto L_08987008;
    return;
L_08987008:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0898701Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 375u, 0x088414ACu>(ctx, &aot_mem) && ctx.pc == 0x0898701Cu) goto L_0898701C;
    return;
L_0898701C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08987030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08987030u) goto L_08987030;
    return;
L_08987030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089870FC;
      }
      goto L_08987078;
    }
L_08987078:
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089870F8;
      }
      goto L_08987090;
    }
L_08987090:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089870EC;
      }
      goto L_089870A4;
    }
L_089870A4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089870D8;
      }
      goto L_089870D0;
    }
L_089870D0:
    ctx.set_gpr(31, 0x089870D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089870D8u) goto L_089870D8;
    return;
L_089870D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089870E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089870E8u) goto L_089870E8;
    return;
L_089870E8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089870EC;
L_089870EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089870A4;
      }
      goto L_089870F4;
    }
L_089870F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089870F8;
L_089870F8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089870FC;
L_089870FC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987078;
      }
      goto L_08987108;
    }
L_08987108:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
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
L_08987134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898714Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 266u, 0x089492B4u>(ctx, &aot_mem) && ctx.pc == 0x0898714Cu) goto L_0898714C;
    return;
L_0898714C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987164:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27380)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27392)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987184:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27388)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987194:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27376)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27184)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27144)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987204:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987214:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987224:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987234:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987244:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987254:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987264:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987274:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987284:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987294:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987304:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987314:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987324:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987334:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26696)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987344:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987354:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26548)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987364:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26532)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987374:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26472)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987384:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987394:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26456)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26452)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26440)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089873F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26412)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987404:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26388)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987414:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987424:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987440:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898744C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987464:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987470:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D8;
      }
      goto L_08987484;
    }
L_08987484:
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
          goto L_089874B8;
      }
      goto L_089874AC;
    }
L_089874AC:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D8;
      }
      goto L_089874B8;
    }
L_089874B8:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089874C4;
    }
L_089874C4:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D8;
      }
      goto L_089874D0;
    }
L_089874D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987520;
      }
      goto L_089874D8;
    }
L_089874D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987484;
      }
      goto L_089874E4;
    }
L_089874E4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089874F8;
      }
      goto L_089874EC;
    }
L_089874EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987520;
      }
      goto L_089874F8;
    }
L_089874F8:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898751C;
      }
      goto L_08987518;
    }
L_08987518:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0898751C;
L_0898751C:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    goto L_08987520;
L_08987520:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987534:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898754C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987558:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987570:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898757C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987588:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987594:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089875A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089875AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089875B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_089875F8;
    }
L_089875F8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987638;
      }
      goto L_0898761C;
    }
L_0898761C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987638;
      }
      goto L_08987634;
    }
L_08987634:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08987638;
L_08987638:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898764C;
      }
      goto L_08987640;
    }
L_08987640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0898764C;
L_0898764C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987678;
      }
      goto L_0898765C;
    }
L_0898765C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987678;
      }
      goto L_08987674;
    }
L_08987674:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08987678;
L_08987678:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089876A4;
      }
      goto L_08987680;
    }
L_08987680:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089876A4;
      }
      goto L_08987698;
    }
L_08987698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089876A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089876A4u) goto L_089876A4;
    return;
L_089876A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089876D0;
      }
      goto L_089876C4;
    }
L_089876C4:
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_089876D0;
    }
L_089876D0:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089876E8;
      }
      goto L_089876DC;
    }
L_089876DC:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_089876E8;
    }
L_089876E8:
    ctx.set_gpr(2, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987704;
      }
      goto L_089876F4;
    }
L_089876F4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08987704;
L_08987704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898772C;
      }
      goto L_0898770C;
    }
L_0898770C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898772C;
      }
      goto L_08987720;
    }
L_08987720:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898772Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898772Cu) goto L_0898772C;
    return;
L_0898772C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089878A0;
      }
      goto L_08987738;
    }
L_08987738:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089875F8;
      }
      goto L_08987744;
    }
L_08987744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089877B4;
      }
      goto L_08987750;
    }
L_08987750:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898777C;
      }
      goto L_08987760;
    }
L_08987760:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898777C;
      }
      goto L_08987778;
    }
L_08987778:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898777C;
L_0898777C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089877A8;
      }
      goto L_08987784;
    }
L_08987784:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089877A8;
      }
      goto L_0898779C;
    }
L_0898779C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089877A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089877A8u) goto L_089877A8;
    return;
L_089877A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089878A0;
      }
      goto L_089877B4;
    }
L_089877B4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987844;
      }
      goto L_089877DC;
    }
L_089877DC:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898780C;
      }
      goto L_089877F0;
    }
L_089877F0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898780C;
      }
      goto L_08987808;
    }
L_08987808:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898780C;
L_0898780C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987838;
      }
      goto L_08987814;
    }
L_08987814:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987838;
      }
      goto L_0898782C;
    }
L_0898782C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08987838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987838u) goto L_08987838;
    return;
L_08987838:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089878A0;
      }
      goto L_08987844;
    }
L_08987844:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987870;
      }
      goto L_08987854;
    }
L_08987854:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987870;
      }
      goto L_0898786C;
    }
L_0898786C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08987870;
L_08987870:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898789C;
      }
      goto L_08987878;
    }
L_08987878:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898789C;
      }
      goto L_08987890;
    }
L_08987890:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898789Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898789Cu) goto L_0898789C;
    return;
L_0898789C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_089878A0;
L_089878A0:
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
L_089878C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26388)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089878D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089878E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089878F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987908:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987918:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987928:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987938:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987948:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987958:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28916)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987968:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987978:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987988:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29240)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987998:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30104)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089879F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26432)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30060)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BA0;
      }
      goto L_08987B94;
    }
L_08987B94:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08987BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987BA0u) goto L_08987BA0;
    return;
L_08987BA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987BB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BD8;
      }
      goto L_08987BCC;
    }
L_08987BCC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08987BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987BD8u) goto L_08987BD8;
    return;
L_08987BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C10;
      }
      goto L_08987C04;
    }
L_08987C04:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08987C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987C10u) goto L_08987C10;
    return;
L_08987C10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C48;
      }
      goto L_08987C3C;
    }
L_08987C3C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08987C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987C48u) goto L_08987C48;
    return;
L_08987C48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C80;
      }
      goto L_08987C74;
    }
L_08987C74:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08987C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987C80u) goto L_08987C80;
    return;
L_08987C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987CB8;
      }
      goto L_08987CAC;
    }
L_08987CAC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08987CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987CB8u) goto L_08987CB8;
    return;
L_08987CB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987CC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987CF0;
      }
      goto L_08987CE4;
    }
L_08987CE4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08987CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987CF0u) goto L_08987CF0;
    return;
L_08987CF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987D00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D28;
      }
      goto L_08987D1C;
    }
L_08987D1C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08987D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987D28u) goto L_08987D28;
    return;
L_08987D28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D60;
      }
      goto L_08987D54;
    }
L_08987D54:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08987D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987D60u) goto L_08987D60;
    return;
L_08987D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D98;
      }
      goto L_08987D8C;
    }
L_08987D8C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08987D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987D98u) goto L_08987D98;
    return;
L_08987D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987DA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987DD0;
      }
      goto L_08987DC4;
    }
L_08987DC4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08987DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987DD0u) goto L_08987DD0;
    return;
L_08987DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987E08;
      }
      goto L_08987DFC;
    }
L_08987DFC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08987E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987E08u) goto L_08987E08;
    return;
L_08987E08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987E40;
      }
      goto L_08987E34;
    }
L_08987E34:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08987E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987E40u) goto L_08987E40;
    return;
L_08987E40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987E78;
      }
      goto L_08987E6C;
    }
L_08987E6C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08987E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987E78u) goto L_08987E78;
    return;
L_08987E78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987EB0;
      }
      goto L_08987EA4;
    }
L_08987EA4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08987EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987EB0u) goto L_08987EB0;
    return;
L_08987EB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987EE8;
      }
      goto L_08987EDC;
    }
L_08987EDC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08987EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987EE8u) goto L_08987EE8;
    return;
L_08987EE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987F60;
      }
      goto L_08987F18;
    }
L_08987F18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987F48;
      }
      goto L_08987F24;
    }
L_08987F24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987F48;
      }
      goto L_08987F40;
    }
L_08987F40:
    ctx.set_gpr(31, 0x08987F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08987F48u) goto L_08987F48;
    return;
L_08987F48:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08987F60;
      }
      goto L_08987F54;
    }
L_08987F54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08987F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08987F60u) goto L_08987F60;
    return;
L_08987F60:
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
L_08987F7C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32183)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987F90;
      }
      goto L_08987F88;
    }
L_08987F88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32183), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08987F90;
L_08987F90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987F98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08987FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 8u, 0x0898807Cu>(ctx, &aot_mem) && ctx.pc == 0x08987FB0u) goto L_08987FB0;
    return;
L_08987FB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08987FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08987FC4u) goto L_08987FC4;
    return;
L_08987FC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 3u, 0x08988018u>(ctx, &aot_mem); return;
      }
      goto L_08987FF0;
    }
L_08987FF0:
    ctx.set_gpr(31, 0x08987FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08987FF8u) goto L_08987FF8;
    return;
L_08987FF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08988004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08984000u, 16384u, &recomp_unit_0096, &recomp_unit_0096_entry);
    runtime.register_function(0x08984000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984008u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984024u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984048u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984058u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984074u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898408Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984100u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984140u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984148u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984154u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898415Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984168u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898419Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984208u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898423Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898424Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984254u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984260u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984274u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984284u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984290u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898430Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984314u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984320u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984340u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898434Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984360u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984370u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898437Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984388u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984398u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984408u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984428u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984460u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984474u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984484u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984490u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984500u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984504u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984514u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984524u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984540u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984560u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898456Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984578u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984588u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984598u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898460Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984618u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984628u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984634u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984640u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898466Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898467Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984690u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984710u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898473Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898474Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984758u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984764u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984770u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898478Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984800u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984840u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898484Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984858u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898487Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984888u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984898u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898490Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898491Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984924u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984930u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984940u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898494Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898495Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898496Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984978u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984994u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ED4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985008u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985014u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985038u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985040u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898504Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985050u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985070u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985084u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985110u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985140u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985154u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985164u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898517Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898520Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898521Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985238u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898524Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898525Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985280u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985288u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985298u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985308u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898531Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985328u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985330u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898533Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985350u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985360u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985368u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985378u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985380u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985390u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985398u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985408u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985424u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985468u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898547Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985484u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985490u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985498u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985504u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985518u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985534u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898554Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985558u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898556Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985578u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898558Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985598u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985608u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985610u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898561Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898564Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985658u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985660u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898566Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898569Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985714u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985718u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985724u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985730u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985748u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898576Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985770u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898577Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985788u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985798u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985808u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898581Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898583Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985848u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985868u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985874u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898587Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985888u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985898u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898591Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985950u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898595Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985974u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898597Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985998u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ACCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ADCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898601Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986024u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986040u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986058u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898605Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986064u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898607Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986088u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986104u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986140u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986150u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986160u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986180u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986190u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986200u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986210u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986220u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986230u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986250u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986260u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986270u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986280u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986290u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986320u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986330u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986340u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986350u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986360u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986370u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986380u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986390u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986400u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986410u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986430u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986440u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986450u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986460u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986480u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986490u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986500u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986510u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986520u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986530u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986540u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986550u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898655Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986564u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986574u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986580u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986588u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986598u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986608u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986618u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986628u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986658u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986668u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986698u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986708u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986710u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986730u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986740u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986760u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986770u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986780u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986790u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986800u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986810u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986830u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986840u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986850u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986860u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986880u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986890u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986900u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986910u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986920u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986930u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986940u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986950u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986960u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986970u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986980u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986990u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986ED0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987008u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898701Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987044u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987078u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987090u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898714Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987164u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987174u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987194u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987214u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987224u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987234u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987244u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987254u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987264u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987274u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987284u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987294u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987314u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987324u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987334u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987354u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987364u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987374u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987384u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987394u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987414u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987424u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987434u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987440u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898744Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987458u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987464u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987484u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987518u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898751Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987520u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987528u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987534u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987540u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898754Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987558u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987564u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987570u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898757Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987588u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987594u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898761Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987634u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987640u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898764Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898765Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987674u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987680u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987698u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987704u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898770Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898772Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987738u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987744u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987760u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987778u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898777Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987784u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898779Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987808u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898780Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987814u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898782Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987838u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987844u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898786Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987878u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987890u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898789Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987908u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987918u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987928u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987938u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987948u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987958u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987978u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987998u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FF8u, &recomp_unit_0096, "recomp_unit_0096");
}
} // namespace psprecomp
