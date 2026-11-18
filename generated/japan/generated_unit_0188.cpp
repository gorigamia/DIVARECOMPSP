#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0188[4091] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27,
    0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35,
    0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43,
    44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0,
    54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0,
    79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0,
    91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 106, 0, 107, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209,
    0, 0, 210, 0, 0, 0, 0, 211, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221,
    0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230,
    0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0,
    0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275,
    0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0,
    0, 0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308,
    0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350,
    0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360,
    0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 406,
    0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 423,
    0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0,
    0, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0,
    444, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475,
    0, 476, 0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0,
    0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 497,
    0, 0, 498, 0, 0, 0, 0, 499, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 513,
    0, 514, 0, 515, 0, 516, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0,
    521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527, 0,
    0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0,
    0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    538, 0, 0, 539, 0, 0, 540, 0, 541, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0,
    548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 568, 0, 569, 0,
    0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0,
    573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 578, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0,
    0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 589, 590, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0,
    601, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0,
    0, 609, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 622, 0, 0, 623, 0, 0, 0, 0, 0,
    624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0,
    0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638, 639, 0, 0, 0, 0, 640, 0, 641,
    0, 0, 0, 642, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646,
    0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661,
    0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0,
    0, 668, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0,
    0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 689, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 696,
    0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0,
    0, 0, 0, 711, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 718, 0, 0,
    0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 722, 0, 0,
    0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736,
    0, 0, 0, 0, 737, 738, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0,
    0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755,
    756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0,
    760, 0, 0, 761, 0, 762, 763, 0, 764, 0, 0, 765, 0, 766, 767, 0, 768, 0, 0, 769, 0, 770, 771, 0, 772, 0, 0, 773, 0, 774, 775, 0,
    776, 0, 0, 777, 0, 778, 779, 0, 780, 0, 0, 781, 0, 782, 783, 0, 784, 0, 0, 785, 0, 786, 787, 0, 788, 0, 0, 789, 0, 790, 791, 0,
    792, 0, 0, 793, 0, 794, 795, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804,
    0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 816, 0, 0, 817, 0, 818, 0, 0,
    819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    828, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 834, 0, 835, 0, 0, 836, 0, 837, 0, 838,
    0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 847,
    0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0,
    0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 0, 864, 0,
    865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 871, 0, 872, 0, 873, 0,
    874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    886, 0, 887, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891,
    0, 892, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0,
    898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 0, 903, 0, 904, 0, 0, 905, 0, 906, 0,
    0, 907, 908, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 911, 0, 912, 0, 913, 0, 0, 0, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 920, 0, 0, 0, 921, 0,
    0, 922, 0, 0, 923, 0, 0, 924, 0, 925, 0, 926, 0, 0, 927, 0, 928, 0, 0, 929, 0, 930, 0, 0, 931, 0, 932, 0, 0, 933, 0, 934,
    0, 0, 935, 936, 937, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 939, 940, 0, 0, 0, 0, 0, 941, 0, 0, 942, 0, 943, 0, 944, 945, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 946, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 951, 0, 0, 0, 0,
    0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0,
    0, 957, 0, 958, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 961, 0, 962, 0, 963,
};
void recomp_unit_0188_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF4000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0188[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF4000;
    case 2u: goto L_08AF4008;
    case 3u: goto L_08AF4010;
    case 4u: goto L_08AF4018;
    case 5u: goto L_08AF4024;
    case 6u: goto L_08AF402C;
    case 7u: goto L_08AF4034;
    case 8u: goto L_08AF4040;
    case 9u: goto L_08AF4048;
    case 10u: goto L_08AF4068;
    case 11u: goto L_08AF4070;
    case 12u: goto L_08AF4090;
    case 13u: goto L_08AF4098;
    case 14u: goto L_08AF40B4;
    case 15u: goto L_08AF40BC;
    case 16u: goto L_08AF40D0;
    case 17u: goto L_08AF40D8;
    case 18u: goto L_08AF40E4;
    case 19u: goto L_08AF40EC;
    case 20u: goto L_08AF410C;
    case 21u: goto L_08AF4114;
    case 22u: goto L_08AF4134;
    case 23u: goto L_08AF413C;
    case 24u: goto L_08AF4158;
    case 25u: goto L_08AF4160;
    case 26u: goto L_08AF4174;
    case 27u: goto L_08AF417C;
    case 28u: goto L_08AF4184;
    case 29u: goto L_08AF4190;
    case 30u: goto L_08AF4198;
    case 31u: goto L_08AF41B8;
    case 32u: goto L_08AF41C0;
    case 33u: goto L_08AF41E0;
    case 34u: goto L_08AF41E8;
    case 35u: goto L_08AF41FC;
    case 36u: goto L_08AF4204;
    case 37u: goto L_08AF4210;
    case 38u: goto L_08AF4218;
    case 39u: goto L_08AF4238;
    case 40u: goto L_08AF4240;
    case 41u: goto L_08AF4260;
    case 42u: goto L_08AF4268;
    case 43u: goto L_08AF427C;
    case 44u: goto L_08AF4280;
    case 45u: goto L_08AF4288;
    case 46u: goto L_08AF4290;
    case 47u: goto L_08AF4298;
    case 48u: goto L_08AF42A4;
    case 49u: goto L_08AF42B4;
    case 50u: goto L_08AF42D4;
    case 51u: goto L_08AF42DC;
    case 52u: goto L_08AF42F0;
    case 53u: goto L_08AF42F8;
    case 54u: goto L_08AF4300;
    case 55u: goto L_08AF430C;
    case 56u: goto L_08AF431C;
    case 57u: goto L_08AF433C;
    case 58u: goto L_08AF4344;
    case 59u: goto L_08AF4358;
    case 60u: goto L_08AF435C;
    case 61u: goto L_08AF4378;
    case 62u: goto L_08AF4384;
    case 63u: goto L_08AF4390;
    case 64u: goto L_08AF4398;
    case 65u: goto L_08AF43A0;
    case 66u: goto L_08AF43AC;
    case 67u: goto L_08AF43B4;
    case 68u: goto L_08AF43C4;
    case 69u: goto L_08AF43D0;
    case 70u: goto L_08AF43D8;
    case 71u: goto L_08AF4418;
    case 72u: goto L_08AF4420;
    case 73u: goto L_08AF4440;
    case 74u: goto L_08AF4448;
    case 75u: goto L_08AF4450;
    case 76u: goto L_08AF445C;
    case 77u: goto L_08AF4464;
    case 78u: goto L_08AF4474;
    case 79u: goto L_08AF4480;
    case 80u: goto L_08AF4488;
    case 81u: goto L_08AF44B8;
    case 82u: goto L_08AF44C0;
    case 83u: goto L_08AF44E0;
    case 84u: goto L_08AF44E4;
    case 85u: goto L_08AF44F4;
    case 86u: goto L_08AF4500;
    case 87u: goto L_08AF454C;
    case 88u: goto L_08AF4568;
    case 89u: goto L_08AF4570;
    case 90u: goto L_08AF4578;
    case 91u: goto L_08AF4580;
    case 92u: goto L_08AF4588;
    case 93u: goto L_08AF4590;
    case 94u: goto L_08AF4598;
    case 95u: goto L_08AF460C;
    case 96u: goto L_08AF4618;
    case 97u: goto L_08AF463C;
    case 98u: goto L_08AF4650;
    case 99u: goto L_08AF467C;
    case 100u: goto L_08AF4698;
    case 101u: goto L_08AF46A4;
    case 102u: goto L_08AF46B0;
    case 103u: goto L_08AF46B8;
    case 104u: goto L_08AF46DC;
    case 105u: goto L_08AF4704;
    case 106u: goto L_08AF4708;
    case 107u: goto L_08AF4710;
    case 108u: goto L_08AF4714;
    case 109u: goto L_08AF471C;
    case 110u: goto L_08AF4724;
    case 111u: goto L_08AF4744;
    case 112u: goto L_08AF474C;
    case 113u: goto L_08AF4758;
    case 114u: goto L_08AF476C;
    case 115u: goto L_08AF4790;
    case 116u: goto L_08AF4798;
    case 117u: goto L_08AF47A4;
    case 118u: goto L_08AF47B8;
    case 119u: goto L_08AF47DC;
    case 120u: goto L_08AF47E4;
    case 121u: goto L_08AF47F0;
    case 122u: goto L_08AF4804;
    case 123u: goto L_08AF4824;
    case 124u: goto L_08AF482C;
    case 125u: goto L_08AF4838;
    case 126u: goto L_08AF484C;
    case 127u: goto L_08AF486C;
    case 128u: goto L_08AF4874;
    case 129u: goto L_08AF4880;
    case 130u: goto L_08AF4894;
    case 131u: goto L_08AF48B8;
    case 132u: goto L_08AF48C0;
    case 133u: goto L_08AF48CC;
    case 134u: goto L_08AF48E0;
    case 135u: goto L_08AF4904;
    case 136u: goto L_08AF490C;
    case 137u: goto L_08AF4918;
    case 138u: goto L_08AF492C;
    case 139u: goto L_08AF4938;
    case 140u: goto L_08AF4940;
    case 141u: goto L_08AF4948;
    case 142u: goto L_08AF4968;
    case 143u: goto L_08AF497C;
    case 144u: goto L_08AF4984;
    case 145u: goto L_08AF498C;
    case 146u: goto L_08AF49AC;
    case 147u: goto L_08AF49C0;
    case 148u: goto L_08AF49C8;
    case 149u: goto L_08AF49D0;
    case 150u: goto L_08AF49F0;
    case 151u: goto L_08AF4A04;
    case 152u: goto L_08AF4A14;
    case 153u: goto L_08AF4A1C;
    case 154u: goto L_08AF4A24;
    case 155u: goto L_08AF4A48;
    case 156u: goto L_08AF4A5C;
    case 157u: goto L_08AF4A64;
    case 158u: goto L_08AF4A6C;
    case 159u: goto L_08AF4A90;
    case 160u: goto L_08AF4AA4;
    case 161u: goto L_08AF4AAC;
    case 162u: goto L_08AF4AB4;
    case 163u: goto L_08AF4AD8;
    case 164u: goto L_08AF4AEC;
    case 165u: goto L_08AF4AF8;
    case 166u: goto L_08AF4B00;
    case 167u: goto L_08AF4B24;
    case 168u: goto L_08AF4B38;
    case 169u: goto L_08AF4B40;
    case 170u: goto L_08AF4B48;
    case 171u: goto L_08AF4B6C;
    case 172u: goto L_08AF4B80;
    case 173u: goto L_08AF4B88;
    case 174u: goto L_08AF4B90;
    case 175u: goto L_08AF4BB4;
    case 176u: goto L_08AF4BC8;
    case 177u: goto L_08AF4BD4;
    case 178u: goto L_08AF4BE0;
    case 179u: goto L_08AF4BE8;
    case 180u: goto L_08AF4BF0;
    case 181u: goto L_08AF4BFC;
    case 182u: goto L_08AF4C1C;
    case 183u: goto L_08AF4C24;
    case 184u: goto L_08AF4C2C;
    case 185u: goto L_08AF4C38;
    case 186u: goto L_08AF4C58;
    case 187u: goto L_08AF4C60;
    case 188u: goto L_08AF4C68;
    case 189u: goto L_08AF4C74;
    case 190u: goto L_08AF4C94;
    case 191u: goto L_08AF4CA0;
    case 192u: goto L_08AF4CAC;
    case 193u: goto L_08AF4CB4;
    case 194u: goto L_08AF4CBC;
    case 195u: goto L_08AF4CC4;
    case 196u: goto L_08AF4CCC;
    case 197u: goto L_08AF4CD8;
    case 198u: goto L_08AF4CEC;
    case 199u: goto L_08AF4CF4;
    case 200u: goto L_08AF4CFC;
    case 201u: goto L_08AF4D08;
    case 202u: goto L_08AF4D28;
    case 203u: goto L_08AF4D30;
    case 204u: goto L_08AF4D38;
    case 205u: goto L_08AF4D40;
    case 206u: goto L_08AF4D4C;
    case 207u: goto L_08AF4D6C;
    case 208u: goto L_08AF4D74;
    case 209u: goto L_08AF4D7C;
    case 210u: goto L_08AF4D88;
    case 211u: goto L_08AF4D9C;
    case 212u: goto L_08AF4DA0;
    case 213u: goto L_08AF4DA8;
    case 214u: goto L_08AF4DB4;
    case 215u: goto L_08AF4DBC;
    case 216u: goto L_08AF4DC4;
    case 217u: goto L_08AF4DCC;
    case 218u: goto L_08AF4DD4;
    case 219u: goto L_08AF4DE0;
    case 220u: goto L_08AF4DF4;
    case 221u: goto L_08AF4DFC;
    case 222u: goto L_08AF4E04;
    case 223u: goto L_08AF4E10;
    case 224u: goto L_08AF4E30;
    case 225u: goto L_08AF4E38;
    case 226u: goto L_08AF4E40;
    case 227u: goto L_08AF4E48;
    case 228u: goto L_08AF4E54;
    case 229u: goto L_08AF4E74;
    case 230u: goto L_08AF4E7C;
    case 231u: goto L_08AF4E84;
    case 232u: goto L_08AF4E90;
    case 233u: goto L_08AF4EA4;
    case 234u: goto L_08AF4EA8;
    case 235u: goto L_08AF4F7C;
    case 236u: goto L_08AF4F8C;
    case 237u: goto L_08AF4F94;
    case 238u: goto L_08AF4F9C;
    case 239u: goto L_08AF4FBC;
    case 240u: goto L_08AF4FDC;
    case 241u: goto L_08AF4FE4;
    case 242u: goto L_08AF4FEC;
    case 243u: goto L_08AF500C;
    case 244u: goto L_08AF502C;
    case 245u: goto L_08AF5034;
    case 246u: goto L_08AF503C;
    case 247u: goto L_08AF505C;
    case 248u: goto L_08AF507C;
    case 249u: goto L_08AF5094;
    case 250u: goto L_08AF50A0;
    case 251u: goto L_08AF50A8;
    case 252u: goto L_08AF50B0;
    case 253u: goto L_08AF50C0;
    case 254u: goto L_08AF50FC;
    case 255u: goto L_08AF5104;
    case 256u: goto L_08AF5110;
    case 257u: goto L_08AF5120;
    case 258u: goto L_08AF5128;
    case 259u: goto L_08AF5130;
    case 260u: goto L_08AF513C;
    case 261u: goto L_08AF514C;
    case 262u: goto L_08AF5154;
    case 263u: goto L_08AF515C;
    case 264u: goto L_08AF5168;
    case 265u: goto L_08AF5178;
    case 266u: goto L_08AF518C;
    case 267u: goto L_08AF5194;
    case 268u: goto L_08AF51A0;
    case 269u: goto L_08AF51B8;
    case 270u: goto L_08AF51C0;
    case 271u: goto L_08AF51C8;
    case 272u: goto L_08AF51D4;
    case 273u: goto L_08AF51EC;
    case 274u: goto L_08AF51F4;
    case 275u: goto L_08AF51FC;
    case 276u: goto L_08AF5208;
    case 277u: goto L_08AF5220;
    case 278u: goto L_08AF5228;
    case 279u: goto L_08AF5230;
    case 280u: goto L_08AF523C;
    case 281u: goto L_08AF5254;
    case 282u: goto L_08AF525C;
    case 283u: goto L_08AF5264;
    case 284u: goto L_08AF5270;
    case 285u: goto L_08AF5288;
    case 286u: goto L_08AF5290;
    case 287u: goto L_08AF5298;
    case 288u: goto L_08AF52A4;
    case 289u: goto L_08AF52BC;
    case 290u: goto L_08AF52C4;
    case 291u: goto L_08AF52CC;
    case 292u: goto L_08AF5308;
    case 293u: goto L_08AF5334;
    case 294u: goto L_08AF533C;
    case 295u: goto L_08AF5340;
    case 296u: goto L_08AF5348;
    case 297u: goto L_08AF5350;
    case 298u: goto L_08AF535C;
    case 299u: goto L_08AF537C;
    case 300u: goto L_08AF5384;
    case 301u: goto L_08AF538C;
    case 302u: goto L_08AF5398;
    case 303u: goto L_08AF53B8;
    case 304u: goto L_08AF53C0;
    case 305u: goto L_08AF53C8;
    case 306u: goto L_08AF53D4;
    case 307u: goto L_08AF53F4;
    case 308u: goto L_08AF53FC;
    case 309u: goto L_08AF5404;
    case 310u: goto L_08AF5410;
    case 311u: goto L_08AF5430;
    case 312u: goto L_08AF5438;
    case 313u: goto L_08AF5440;
    case 314u: goto L_08AF544C;
    case 315u: goto L_08AF546C;
    case 316u: goto L_08AF5474;
    case 317u: goto L_08AF547C;
    case 318u: goto L_08AF5488;
    case 319u: goto L_08AF54A8;
    case 320u: goto L_08AF54AC;
    case 321u: goto L_08AF54BC;
    case 322u: goto L_08AF54C8;
    case 323u: goto L_08AF54D8;
    case 324u: goto L_08AF54F0;
    case 325u: goto L_08AF550C;
    case 326u: goto L_08AF5518;
    case 327u: goto L_08AF5524;
    case 328u: goto L_08AF552C;
    case 329u: goto L_08AF5534;
    case 330u: goto L_08AF553C;
    case 331u: goto L_08AF5548;
    case 332u: goto L_08AF5558;
    case 333u: goto L_08AF5564;
    case 334u: goto L_08AF556C;
    case 335u: goto L_08AF5574;
    case 336u: goto L_08AF5594;
    case 337u: goto L_08AF55A4;
    case 338u: goto L_08AF55AC;
    case 339u: goto L_08AF55B4;
    case 340u: goto L_08AF55D4;
    case 341u: goto L_08AF55E4;
    case 342u: goto L_08AF55EC;
    case 343u: goto L_08AF55F4;
    case 344u: goto L_08AF5600;
    case 345u: goto L_08AF5638;
    case 346u: goto L_08AF5640;
    case 347u: goto L_08AF5648;
    case 348u: goto L_08AF5654;
    case 349u: goto L_08AF5674;
    case 350u: goto L_08AF567C;
    case 351u: goto L_08AF5684;
    case 352u: goto L_08AF568C;
    case 353u: goto L_08AF5698;
    case 354u: goto L_08AF56A8;
    case 355u: goto L_08AF56B4;
    case 356u: goto L_08AF56BC;
    case 357u: goto L_08AF56C4;
    case 358u: goto L_08AF56E4;
    case 359u: goto L_08AF56F4;
    case 360u: goto L_08AF56FC;
    case 361u: goto L_08AF5704;
    case 362u: goto L_08AF5724;
    case 363u: goto L_08AF5734;
    case 364u: goto L_08AF573C;
    case 365u: goto L_08AF5744;
    case 366u: goto L_08AF5750;
    case 367u: goto L_08AF5780;
    case 368u: goto L_08AF5788;
    case 369u: goto L_08AF5790;
    case 370u: goto L_08AF579C;
    case 371u: goto L_08AF57BC;
    case 372u: goto L_08AF57C0;
    case 373u: goto L_08AF57CC;
    case 374u: goto L_08AF57D8;
    case 375u: goto L_08AF5818;
    case 376u: goto L_08AF5820;
    case 377u: goto L_08AF5828;
    case 378u: goto L_08AF5830;
    case 379u: goto L_08AF58A0;
    case 380u: goto L_08AF58A8;
    case 381u: goto L_08AF58B4;
    case 382u: goto L_08AF58C8;
    case 383u: goto L_08AF58E8;
    case 384u: goto L_08AF58F0;
    case 385u: goto L_08AF58FC;
    case 386u: goto L_08AF5910;
    case 387u: goto L_08AF5930;
    case 388u: goto L_08AF5938;
    case 389u: goto L_08AF5944;
    case 390u: goto L_08AF5958;
    case 391u: goto L_08AF5978;
    case 392u: goto L_08AF5980;
    case 393u: goto L_08AF598C;
    case 394u: goto L_08AF59A0;
    case 395u: goto L_08AF59C0;
    case 396u: goto L_08AF59C8;
    case 397u: goto L_08AF59D4;
    case 398u: goto L_08AF59E8;
    case 399u: goto L_08AF5A08;
    case 400u: goto L_08AF5A10;
    case 401u: goto L_08AF5A1C;
    case 402u: goto L_08AF5A30;
    case 403u: goto L_08AF5A58;
    case 404u: goto L_08AF5A68;
    case 405u: goto L_08AF5A74;
    case 406u: goto L_08AF5A7C;
    case 407u: goto L_08AF5A88;
    case 408u: goto L_08AF5A90;
    case 409u: goto L_08AF5A98;
    case 410u: goto L_08AF5AA0;
    case 411u: goto L_08AF5AA8;
    case 412u: goto L_08AF5AB4;
    case 413u: goto L_08AF5AC4;
    case 414u: goto L_08AF5AD0;
    case 415u: goto L_08AF5B24;
    case 416u: goto L_08AF5B2C;
    case 417u: goto L_08AF5B38;
    case 418u: goto L_08AF5B48;
    case 419u: goto L_08AF5B50;
    case 420u: goto L_08AF5B58;
    case 421u: goto L_08AF5B64;
    case 422u: goto L_08AF5B74;
    case 423u: goto L_08AF5B7C;
    case 424u: goto L_08AF5B84;
    case 425u: goto L_08AF5B90;
    case 426u: goto L_08AF5BA0;
    case 427u: goto L_08AF5BA8;
    case 428u: goto L_08AF5BB0;
    case 429u: goto L_08AF5BBC;
    case 430u: goto L_08AF5BD4;
    case 431u: goto L_08AF5BDC;
    case 432u: goto L_08AF5BE4;
    case 433u: goto L_08AF5BF0;
    case 434u: goto L_08AF5C08;
    case 435u: goto L_08AF5C10;
    case 436u: goto L_08AF5C18;
    case 437u: goto L_08AF5C24;
    case 438u: goto L_08AF5C3C;
    case 439u: goto L_08AF5C44;
    case 440u: goto L_08AF5C4C;
    case 441u: goto L_08AF5C58;
    case 442u: goto L_08AF5C70;
    case 443u: goto L_08AF5C78;
    case 444u: goto L_08AF5C80;
    case 445u: goto L_08AF5C8C;
    case 446u: goto L_08AF5CA4;
    case 447u: goto L_08AF5CAC;
    case 448u: goto L_08AF5CB4;
    case 449u: goto L_08AF5CC0;
    case 450u: goto L_08AF5CD8;
    case 451u: goto L_08AF5D14;
    case 452u: goto L_08AF5D1C;
    case 453u: goto L_08AF5D24;
    case 454u: goto L_08AF5D30;
    case 455u: goto L_08AF5D50;
    case 456u: goto L_08AF5D58;
    case 457u: goto L_08AF5D60;
    case 458u: goto L_08AF5D6C;
    case 459u: goto L_08AF5D8C;
    case 460u: goto L_08AF5D94;
    case 461u: goto L_08AF5D9C;
    case 462u: goto L_08AF5DA8;
    case 463u: goto L_08AF5DC8;
    case 464u: goto L_08AF5DD0;
    case 465u: goto L_08AF5DD8;
    case 466u: goto L_08AF5DE4;
    case 467u: goto L_08AF5E04;
    case 468u: goto L_08AF5E0C;
    case 469u: goto L_08AF5E14;
    case 470u: goto L_08AF5E20;
    case 471u: goto L_08AF5E40;
    case 472u: goto L_08AF5E48;
    case 473u: goto L_08AF5E50;
    case 474u: goto L_08AF5E5C;
    case 475u: goto L_08AF5E7C;
    case 476u: goto L_08AF5E84;
    case 477u: goto L_08AF5E8C;
    case 478u: goto L_08AF5E98;
    case 479u: goto L_08AF5EAC;
    case 480u: goto L_08AF5EB4;
    case 481u: goto L_08AF5EBC;
    case 482u: goto L_08AF5EC8;
    case 483u: goto L_08AF5EDC;
    case 484u: goto L_08AF5EE4;
    case 485u: goto L_08AF5EEC;
    case 486u: goto L_08AF5EF8;
    case 487u: goto L_08AF5F0C;
    case 488u: goto L_08AF5F14;
    case 489u: goto L_08AF5F1C;
    case 490u: goto L_08AF5F28;
    case 491u: goto L_08AF5F3C;
    case 492u: goto L_08AF5F44;
    case 493u: goto L_08AF5F4C;
    case 494u: goto L_08AF5F58;
    case 495u: goto L_08AF5F6C;
    case 496u: goto L_08AF5F74;
    case 497u: goto L_08AF5F7C;
    case 498u: goto L_08AF5F88;
    case 499u: goto L_08AF5F9C;
    case 500u: goto L_08AF5FA0;
    case 501u: goto L_08AF5FDC;
    case 502u: goto L_08AF5FF8;
    case 503u: goto L_08AF6020;
    case 504u: goto L_08AF602C;
    case 505u: goto L_08AF6038;
    case 506u: goto L_08AF6044;
    case 507u: goto L_08AF6050;
    case 508u: goto L_08AF6058;
    case 509u: goto L_08AF6060;
    case 510u: goto L_08AF6068;
    case 511u: goto L_08AF6070;
    case 512u: goto L_08AF6078;
    case 513u: goto L_08AF607C;
    case 514u: goto L_08AF6084;
    case 515u: goto L_08AF608C;
    case 516u: goto L_08AF6094;
    case 517u: goto L_08AF6098;
    case 518u: goto L_08AF60A8;
    case 519u: goto L_08AF60EC;
    case 520u: goto L_08AF60F8;
    case 521u: goto L_08AF6100;
    case 522u: goto L_08AF6108;
    case 523u: goto L_08AF6138;
    case 524u: goto L_08AF6140;
    case 525u: goto L_08AF6158;
    case 526u: goto L_08AF6170;
    case 527u: goto L_08AF6178;
    case 528u: goto L_08AF6194;
    case 529u: goto L_08AF619C;
    case 530u: goto L_08AF61A4;
    case 531u: goto L_08AF61A8;
    case 532u: goto L_08AF61B0;
    case 533u: goto L_08AF61C8;
    case 534u: goto L_08AF61E4;
    case 535u: goto L_08AF61E8;
    case 536u: goto L_08AF6204;
    case 537u: goto L_08AF620C;
    case 538u: goto L_08AF6280;
    case 539u: goto L_08AF628C;
    case 540u: goto L_08AF6298;
    case 541u: goto L_08AF62A0;
    case 542u: goto L_08AF62A4;
    case 543u: goto L_08AF62B4;
    case 544u: goto L_08AF62C0;
    case 545u: goto L_08AF62D8;
    case 546u: goto L_08AF62E4;
    case 547u: goto L_08AF62F8;
    case 548u: goto L_08AF6300;
    case 549u: goto L_08AF6308;
    case 550u: goto L_08AF6320;
    case 551u: goto L_08AF6334;
    case 552u: goto L_08AF633C;
    case 553u: goto L_08AF634C;
    case 554u: goto L_08AF6350;
    case 555u: goto L_08AF6358;
    case 556u: goto L_08AF6368;
    case 557u: goto L_08AF6370;
    case 558u: goto L_08AF6390;
    case 559u: goto L_08AF63A4;
    case 560u: goto L_08AF63AC;
    case 561u: goto L_08AF63B4;
    case 562u: goto L_08AF63C8;
    case 563u: goto L_08AF63D0;
    case 564u: goto L_08AF63E4;
    case 565u: goto L_08AF63F8;
    case 566u: goto L_08AF6460;
    case 567u: goto L_08AF6464;
    case 568u: goto L_08AF6470;
    case 569u: goto L_08AF6478;
    case 570u: goto L_08AF648C;
    case 571u: goto L_08AF64A0;
    case 572u: goto L_08AF64F8;
    case 573u: goto L_08AF6500;
    case 574u: goto L_08AF6508;
    case 575u: goto L_08AF6510;
    case 576u: goto L_08AF653C;
    case 577u: goto L_08AF6550;
    case 578u: goto L_08AF6554;
    case 579u: goto L_08AF655C;
    case 580u: goto L_08AF6568;
    case 581u: goto L_08AF6594;
    case 582u: goto L_08AF65A0;
    case 583u: goto L_08AF65B0;
    case 584u: goto L_08AF65EC;
    case 585u: goto L_08AF6604;
    case 586u: goto L_08AF660C;
    case 587u: goto L_08AF6614;
    case 588u: goto L_08AF6620;
    case 589u: goto L_08AF6638;
    case 590u: goto L_08AF663C;
    case 591u: goto L_08AF6640;
    case 592u: goto L_08AF6670;
    case 593u: goto L_08AF6678;
    case 594u: goto L_08AF6684;
    case 595u: goto L_08AF6694;
    case 596u: goto L_08AF66A4;
    case 597u: goto L_08AF66AC;
    case 598u: goto L_08AF66B8;
    case 599u: goto L_08AF66C8;
    case 600u: goto L_08AF66F0;
    case 601u: goto L_08AF6700;
    case 602u: goto L_08AF6708;
    case 603u: goto L_08AF6710;
    case 604u: goto L_08AF6724;
    case 605u: goto L_08AF672C;
    case 606u: goto L_08AF6740;
    case 607u: goto L_08AF675C;
    case 608u: goto L_08AF6774;
    case 609u: goto L_08AF6784;
    case 610u: goto L_08AF678C;
    case 611u: goto L_08AF67A0;
    case 612u: goto L_08AF67B0;
    case 613u: goto L_08AF67C8;
    case 614u: goto L_08AF67E0;
    case 615u: goto L_08AF67E8;
    case 616u: goto L_08AF67F4;
    case 617u: goto L_08AF67FC;
    case 618u: goto L_08AF6810;
    case 619u: goto L_08AF6828;
    case 620u: goto L_08AF6840;
    case 621u: goto L_08AF6858;
    case 622u: goto L_08AF685C;
    case 623u: goto L_08AF6868;
    case 624u: goto L_08AF6880;
    case 625u: goto L_08AF6884;
    case 626u: goto L_08AF68C8;
    case 627u: goto L_08AF6930;
    case 628u: goto L_08AF693C;
    case 629u: goto L_08AF6948;
    case 630u: goto L_08AF696C;
    case 631u: goto L_08AF6978;
    case 632u: goto L_08AF6990;
    case 633u: goto L_08AF699C;
    case 634u: goto L_08AF69A8;
    case 635u: goto L_08AF69B0;
    case 636u: goto L_08AF69C0;
    case 637u: goto L_08AF69C8;
    case 638u: goto L_08AF69DC;
    case 639u: goto L_08AF69E0;
    case 640u: goto L_08AF69F4;
    case 641u: goto L_08AF69FC;
    case 642u: goto L_08AF6A0C;
    case 643u: goto L_08AF6A10;
    case 644u: goto L_08AF6A18;
    case 645u: goto L_08AF6A58;
    case 646u: goto L_08AF6A7C;
    case 647u: goto L_08AF6A84;
    case 648u: goto L_08AF6A90;
    case 649u: goto L_08AF6AA0;
    case 650u: goto L_08AF6AA8;
    case 651u: goto L_08AF6AB0;
    case 652u: goto L_08AF6ABC;
    case 653u: goto L_08AF6ACC;
    case 654u: goto L_08AF6AD8;
    case 655u: goto L_08AF6B08;
    case 656u: goto L_08AF6B10;
    case 657u: goto L_08AF6B24;
    case 658u: goto L_08AF6B34;
    case 659u: goto L_08AF6B64;
    case 660u: goto L_08AF6B74;
    case 661u: goto L_08AF6B7C;
    case 662u: goto L_08AF6B90;
    case 663u: goto L_08AF6BA0;
    case 664u: goto L_08AF6BC0;
    case 665u: goto L_08AF6BC4;
    case 666u: goto L_08AF6BE0;
    case 667u: goto L_08AF6BF0;
    case 668u: goto L_08AF6C04;
    case 669u: goto L_08AF6C10;
    case 670u: goto L_08AF6C20;
    case 671u: goto L_08AF6C44;
    case 672u: goto L_08AF6C6C;
    case 673u: goto L_08AF6C74;
    case 674u: goto L_08AF6C7C;
    case 675u: goto L_08AF6C9C;
    case 676u: goto L_08AF6CAC;
    case 677u: goto L_08AF6CB4;
    case 678u: goto L_08AF6CBC;
    case 679u: goto L_08AF6CDC;
    case 680u: goto L_08AF6CEC;
    case 681u: goto L_08AF6CF8;
    case 682u: goto L_08AF6D1C;
    case 683u: goto L_08AF6D24;
    case 684u: goto L_08AF6D2C;
    case 685u: goto L_08AF6D40;
    case 686u: goto L_08AF6D48;
    case 687u: goto L_08AF6D5C;
    case 688u: goto L_08AF6D6C;
    case 689u: goto L_08AF6D9C;
    case 690u: goto L_08AF6DA0;
    case 691u: goto L_08AF6DAC;
    case 692u: goto L_08AF6DB4;
    case 693u: goto L_08AF6DC8;
    case 694u: goto L_08AF6DD8;
    case 695u: goto L_08AF6DF8;
    case 696u: goto L_08AF6DFC;
    case 697u: goto L_08AF6E08;
    case 698u: goto L_08AF6E20;
    case 699u: goto L_08AF6E60;
    case 700u: goto L_08AF6E68;
    case 701u: goto L_08AF6ECC;
    case 702u: goto L_08AF6ED8;
    case 703u: goto L_08AF6EE4;
    case 704u: goto L_08AF6F40;
    case 705u: goto L_08AF6F4C;
    case 706u: goto L_08AF6F58;
    case 707u: goto L_08AF6F60;
    case 708u: goto L_08AF6F68;
    case 709u: goto L_08AF6F70;
    case 710u: goto L_08AF6F78;
    case 711u: goto L_08AF6F8C;
    case 712u: goto L_08AF6F90;
    case 713u: goto L_08AF6FA4;
    case 714u: goto L_08AF6FB4;
    case 715u: goto L_08AF6FCC;
    case 716u: goto L_08AF6FD8;
    case 717u: goto L_08AF6FE4;
    case 718u: goto L_08AF6FF4;
    case 719u: goto L_08AF7018;
    case 720u: goto L_08AF7038;
    case 721u: goto L_08AF7070;
    case 722u: goto L_08AF7074;
    case 723u: goto L_08AF7088;
    case 724u: goto L_08AF70A0;
    case 725u: goto L_08AF70DC;
    case 726u: goto L_08AF7144;
    case 727u: goto L_08AF7150;
    case 728u: goto L_08AF715C;
    case 729u: goto L_08AF7164;
    case 730u: goto L_08AF71C4;
    case 731u: goto L_08AF71D0;
    case 732u: goto L_08AF71DC;
    case 733u: goto L_08AF71E4;
    case 734u: goto L_08AF71EC;
    case 735u: goto L_08AF71F4;
    case 736u: goto L_08AF71FC;
    case 737u: goto L_08AF7210;
    case 738u: goto L_08AF7214;
    case 739u: goto L_08AF7218;
    case 740u: goto L_08AF722C;
    case 741u: goto L_08AF723C;
    case 742u: goto L_08AF7258;
    case 743u: goto L_08AF7264;
    case 744u: goto L_08AF7270;
    case 745u: goto L_08AF7280;
    case 746u: goto L_08AF72A8;
    case 747u: goto L_08AF72C8;
    case 748u: goto L_08AF72E8;
    case 749u: goto L_08AF72F0;
    case 750u: goto L_08AF72F8;
    case 751u: goto L_08AF7314;
    case 752u: goto L_08AF7344;
    case 753u: goto L_08AF7348;
    case 754u: goto L_08AF735C;
    case 755u: goto L_08AF737C;
    case 756u: goto L_08AF7380;
    case 757u: goto L_08AF7394;
    case 758u: goto L_08AF73AC;
    case 759u: goto L_08AF73EC;
    case 760u: goto L_08AF7400;
    case 761u: goto L_08AF740C;
    case 762u: goto L_08AF7414;
    case 763u: goto L_08AF7418;
    case 764u: goto L_08AF7420;
    case 765u: goto L_08AF742C;
    case 766u: goto L_08AF7434;
    case 767u: goto L_08AF7438;
    case 768u: goto L_08AF7440;
    case 769u: goto L_08AF744C;
    case 770u: goto L_08AF7454;
    case 771u: goto L_08AF7458;
    case 772u: goto L_08AF7460;
    case 773u: goto L_08AF746C;
    case 774u: goto L_08AF7474;
    case 775u: goto L_08AF7478;
    case 776u: goto L_08AF7480;
    case 777u: goto L_08AF748C;
    case 778u: goto L_08AF7494;
    case 779u: goto L_08AF7498;
    case 780u: goto L_08AF74A0;
    case 781u: goto L_08AF74AC;
    case 782u: goto L_08AF74B4;
    case 783u: goto L_08AF74B8;
    case 784u: goto L_08AF74C0;
    case 785u: goto L_08AF74CC;
    case 786u: goto L_08AF74D4;
    case 787u: goto L_08AF74D8;
    case 788u: goto L_08AF74E0;
    case 789u: goto L_08AF74EC;
    case 790u: goto L_08AF74F4;
    case 791u: goto L_08AF74F8;
    case 792u: goto L_08AF7500;
    case 793u: goto L_08AF750C;
    case 794u: goto L_08AF7514;
    case 795u: goto L_08AF7518;
    case 796u: goto L_08AF7520;
    case 797u: goto L_08AF752C;
    case 798u: goto L_08AF7534;
    case 799u: goto L_08AF753C;
    case 800u: goto L_08AF754C;
    case 801u: goto L_08AF7588;
    case 802u: goto L_08AF75B0;
    case 803u: goto L_08AF75E0;
    case 804u: goto L_08AF75FC;
    case 805u: goto L_08AF7604;
    case 806u: goto L_08AF760C;
    case 807u: goto L_08AF7614;
    case 808u: goto L_08AF761C;
    case 809u: goto L_08AF7624;
    case 810u: goto L_08AF762C;
    case 811u: goto L_08AF7634;
    case 812u: goto L_08AF763C;
    case 813u: goto L_08AF7644;
    case 814u: goto L_08AF764C;
    case 815u: goto L_08AF7658;
    case 816u: goto L_08AF7660;
    case 817u: goto L_08AF766C;
    case 818u: goto L_08AF7674;
    case 819u: goto L_08AF7680;
    case 820u: goto L_08AF7688;
    case 821u: goto L_08AF7694;
    case 822u: goto L_08AF769C;
    case 823u: goto L_08AF76A8;
    case 824u: goto L_08AF76B0;
    case 825u: goto L_08AF76BC;
    case 826u: goto L_08AF76C4;
    case 827u: goto L_08AF76D0;
    case 828u: goto L_08AF7700;
    case 829u: goto L_08AF770C;
    case 830u: goto L_08AF7718;
    case 831u: goto L_08AF7720;
    case 832u: goto L_08AF7748;
    case 833u: goto L_08AF7750;
    case 834u: goto L_08AF7758;
    case 835u: goto L_08AF7760;
    case 836u: goto L_08AF776C;
    case 837u: goto L_08AF7774;
    case 838u: goto L_08AF777C;
    case 839u: goto L_08AF7790;
    case 840u: goto L_08AF77B8;
    case 841u: goto L_08AF77C0;
    case 842u: goto L_08AF77D4;
    case 843u: goto L_08AF77DC;
    case 844u: goto L_08AF77E4;
    case 845u: goto L_08AF77EC;
    case 846u: goto L_08AF77F4;
    case 847u: goto L_08AF77FC;
    case 848u: goto L_08AF7810;
    case 849u: goto L_08AF7838;
    case 850u: goto L_08AF7840;
    case 851u: goto L_08AF784C;
    case 852u: goto L_08AF7854;
    case 853u: goto L_08AF7860;
    case 854u: goto L_08AF7868;
    case 855u: goto L_08AF7870;
    case 856u: goto L_08AF7884;
    case 857u: goto L_08AF78AC;
    case 858u: goto L_08AF78B4;
    case 859u: goto L_08AF78C8;
    case 860u: goto L_08AF78D0;
    case 861u: goto L_08AF78D8;
    case 862u: goto L_08AF78E4;
    case 863u: goto L_08AF78EC;
    case 864u: goto L_08AF78F8;
    case 865u: goto L_08AF7900;
    case 866u: goto L_08AF7908;
    case 867u: goto L_08AF791C;
    case 868u: goto L_08AF7944;
    case 869u: goto L_08AF794C;
    case 870u: goto L_08AF7960;
    case 871u: goto L_08AF7968;
    case 872u: goto L_08AF7970;
    case 873u: goto L_08AF7978;
    case 874u: goto L_08AF7980;
    case 875u: goto L_08AF79A8;
    case 876u: goto L_08AF79B0;
    case 877u: goto L_08AF79C0;
    case 878u: goto L_08AF79C8;
    case 879u: goto L_08AF79DC;
    case 880u: goto L_08AF7A24;
    case 881u: goto L_08AF7A2C;
    case 882u: goto L_08AF7A34;
    case 883u: goto L_08AF7A3C;
    case 884u: goto L_08AF7A44;
    case 885u: goto L_08AF7A4C;
    case 886u: goto L_08AF7A80;
    case 887u: goto L_08AF7A88;
    case 888u: goto L_08AF7A98;
    case 889u: goto L_08AF7AA0;
    case 890u: goto L_08AF7AB4;
    case 891u: goto L_08AF7AFC;
    case 892u: goto L_08AF7B04;
    case 893u: goto L_08AF7B08;
    case 894u: goto L_08AF7B34;
    case 895u: goto L_08AF7B50;
    case 896u: goto L_08AF7B6C;
    case 897u: goto L_08AF7B74;
    case 898u: goto L_08AF7B80;
    case 899u: goto L_08AF7BA8;
    case 900u: goto L_08AF7BB4;
    case 901u: goto L_08AF7BC0;
    case 902u: goto L_08AF7BD0;
    case 903u: goto L_08AF7BDC;
    case 904u: goto L_08AF7BE4;
    case 905u: goto L_08AF7BF0;
    case 906u: goto L_08AF7BF8;
    case 907u: goto L_08AF7C04;
    case 908u: goto L_08AF7C08;
    case 909u: goto L_08AF7C14;
    case 910u: goto L_08AF7C30;
    case 911u: goto L_08AF7C98;
    case 912u: goto L_08AF7CA0;
    case 913u: goto L_08AF7CA8;
    case 914u: goto L_08AF7CBC;
    case 915u: goto L_08AF7CC4;
    case 916u: goto L_08AF7CCC;
    case 917u: goto L_08AF7CD4;
    case 918u: goto L_08AF7CDC;
    case 919u: goto L_08AF7CE4;
    case 920u: goto L_08AF7CE8;
    case 921u: goto L_08AF7CF8;
    case 922u: goto L_08AF7D04;
    case 923u: goto L_08AF7D10;
    case 924u: goto L_08AF7D1C;
    case 925u: goto L_08AF7D24;
    case 926u: goto L_08AF7D2C;
    case 927u: goto L_08AF7D38;
    case 928u: goto L_08AF7D40;
    case 929u: goto L_08AF7D4C;
    case 930u: goto L_08AF7D54;
    case 931u: goto L_08AF7D60;
    case 932u: goto L_08AF7D68;
    case 933u: goto L_08AF7D74;
    case 934u: goto L_08AF7D7C;
    case 935u: goto L_08AF7D88;
    case 936u: goto L_08AF7D8C;
    case 937u: goto L_08AF7D90;
    case 938u: goto L_08AF7DB4;
    case 939u: goto L_08AF7E28;
    case 940u: goto L_08AF7E2C;
    case 941u: goto L_08AF7E44;
    case 942u: goto L_08AF7E50;
    case 943u: goto L_08AF7E58;
    case 944u: goto L_08AF7E60;
    case 945u: goto L_08AF7E64;
    case 946u: goto L_08AF7E90;
    case 947u: goto L_08AF7E98;
    case 948u: goto L_08AF7EBC;
    case 949u: goto L_08AF7EDC;
    case 950u: goto L_08AF7EE4;
    case 951u: goto L_08AF7EEC;
    case 952u: goto L_08AF7F10;
    case 953u: goto L_08AF7F30;
    case 954u: goto L_08AF7F38;
    case 955u: goto L_08AF7F40;
    case 956u: goto L_08AF7F64;
    case 957u: goto L_08AF7F84;
    case 958u: goto L_08AF7F8C;
    case 959u: goto L_08AF7F94;
    case 960u: goto L_08AF7FB8;
    case 961u: goto L_08AF7FD8;
    case 962u: goto L_08AF7FE0;
    case 963u: goto L_08AF7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF4000:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF4280;
    }
    goto L_08AF4008;
L_08AF4008:
    ctx.set_gpr(31, 0x08AF4010u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4568;
L_08AF4010:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF427C;
      }
      goto L_08AF4018;
    }
L_08AF4018:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF4024u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AF454C;
L_08AF4024:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF417C;
      }
      goto L_08AF402C;
    }
L_08AF402C:
    ctx.set_gpr(31, 0x08AF4034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4034u) goto L_08AF4034;
    return;
L_08AF4034:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08AF4040u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4040u) goto L_08AF4040;
    return;
L_08AF4040:
    ctx.set_gpr(31, 0x08AF4048u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4048u) goto L_08AF4048;
    return;
L_08AF4048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF4068u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF4068u) goto L_08AF4068;
    return;
L_08AF4068:
    ctx.set_gpr(31, 0x08AF4070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4070u) goto L_08AF4070;
    return;
L_08AF4070:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4090u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4090u) goto L_08AF4090;
    return;
L_08AF4090:
    ctx.set_gpr(31, 0x08AF4098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4098u) goto L_08AF4098;
    return;
L_08AF4098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF40B4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF40B4u) goto L_08AF40B4;
    return;
L_08AF40B4:
    ctx.set_gpr(31, 0x08AF40BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF40BCu) goto L_08AF40BC;
    return;
L_08AF40BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF40D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF40D0u) goto L_08AF40D0;
    return;
L_08AF40D0:
    ctx.set_gpr(31, 0x08AF40D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF40D8u) goto L_08AF40D8;
    return;
L_08AF40D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AF40E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF40E4u) goto L_08AF40E4;
    return;
L_08AF40E4:
    ctx.set_gpr(31, 0x08AF40ECu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF40ECu) goto L_08AF40EC;
    return;
L_08AF40EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF410Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF410Cu) goto L_08AF410C;
    return;
L_08AF410C:
    ctx.set_gpr(31, 0x08AF4114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4114u) goto L_08AF4114;
    return;
L_08AF4114:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4134u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4134u) goto L_08AF4134;
    return;
L_08AF4134:
    ctx.set_gpr(31, 0x08AF413Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF413Cu) goto L_08AF413C;
    return;
L_08AF413C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF4158u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4158u) goto L_08AF4158;
    return;
L_08AF4158:
    ctx.set_gpr(31, 0x08AF4160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4160u) goto L_08AF4160;
    return;
L_08AF4160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4174u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4174u) goto L_08AF4174;
    return;
L_08AF4174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF427C;
      }
      goto L_08AF417C;
    }
L_08AF417C:
    ctx.set_gpr(31, 0x08AF4184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4184u) goto L_08AF4184;
    return;
L_08AF4184:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08AF4190u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4190u) goto L_08AF4190;
    return;
L_08AF4190:
    ctx.set_gpr(31, 0x08AF4198u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4198u) goto L_08AF4198;
    return;
L_08AF4198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF41B8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF41B8u) goto L_08AF41B8;
    return;
L_08AF41B8:
    ctx.set_gpr(31, 0x08AF41C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF41C0u) goto L_08AF41C0;
    return;
L_08AF41C0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF41E0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF41E0u) goto L_08AF41E0;
    return;
L_08AF41E0:
    ctx.set_gpr(31, 0x08AF41E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF41E8u) goto L_08AF41E8;
    return;
L_08AF41E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF41FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF41FCu) goto L_08AF41FC;
    return;
L_08AF41FC:
    ctx.set_gpr(31, 0x08AF4204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4204u) goto L_08AF4204;
    return;
L_08AF4204:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AF4210u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4210u) goto L_08AF4210;
    return;
L_08AF4210:
    ctx.set_gpr(31, 0x08AF4218u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4218u) goto L_08AF4218;
    return;
L_08AF4218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF4238u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF4238u) goto L_08AF4238;
    return;
L_08AF4238:
    ctx.set_gpr(31, 0x08AF4240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4240u) goto L_08AF4240;
    return;
L_08AF4240:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4260u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4260u) goto L_08AF4260;
    return;
L_08AF4260:
    ctx.set_gpr(31, 0x08AF4268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4268u) goto L_08AF4268;
    return;
L_08AF4268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF427Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF427Cu) goto L_08AF427C;
    return;
L_08AF427C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4280;
L_08AF4280:
    ctx.set_gpr(31, 0x08AF4288u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AF454C;
L_08AF4288:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF42F8;
      }
      goto L_08AF4290;
    }
L_08AF4290:
    ctx.set_gpr(31, 0x08AF4298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4298u) goto L_08AF4298;
    return;
L_08AF4298:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF42A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF42A4u) goto L_08AF42A4;
    return;
L_08AF42A4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF42B4u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF42B4u) goto L_08AF42B4;
    return;
L_08AF42B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF42D4u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF42D4u) goto L_08AF42D4;
    return;
L_08AF42D4:
    ctx.set_gpr(31, 0x08AF42DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF42DCu) goto L_08AF42DC;
    return;
L_08AF42DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF42F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF42F0u) goto L_08AF42F0;
    return;
L_08AF42F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08AF435C;
      }
      goto L_08AF42F8;
    }
L_08AF42F8:
    ctx.set_gpr(31, 0x08AF4300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4300u) goto L_08AF4300;
    return;
L_08AF4300:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AF430Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF430Cu) goto L_08AF430C;
    return;
L_08AF430C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF431Cu);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF431Cu) goto L_08AF431C;
    return;
L_08AF431C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF433Cu);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF433Cu) goto L_08AF433C;
    return;
L_08AF433C:
    ctx.set_gpr(31, 0x08AF4344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4344u) goto L_08AF4344;
    return;
L_08AF4344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4358u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4358u) goto L_08AF4358;
    return;
L_08AF4358:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08AF435C;
L_08AF435C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(31, 0x08AF4378u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 603u, 0x08AF2640u>(ctx, &aot_mem) && ctx.pc == 0x08AF4378u) goto L_08AF4378;
    return;
L_08AF4378:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF4448;
      }
      goto L_08AF4384;
    }
L_08AF4384:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF4398;
      }
      goto L_08AF4390;
    }
L_08AF4390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF44E0;
      }
      goto L_08AF4398;
    }
L_08AF4398:
    ctx.set_gpr(31, 0x08AF43A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF43A0u) goto L_08AF43A0;
    return;
L_08AF43A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08AF43ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF43ACu) goto L_08AF43AC;
    return;
L_08AF43AC:
    ctx.set_gpr(31, 0x08AF43B4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF43B4u) goto L_08AF43B4;
    return;
L_08AF43B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF43C4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF43C4u) goto L_08AF43C4;
    return;
L_08AF43C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF44E0;
      }
      goto L_08AF43D0;
    }
L_08AF43D0:
    ctx.set_gpr(31, 0x08AF43D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF43D8u) goto L_08AF43D8;
    return;
L_08AF43D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_gpr(2, 16138u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 15729u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF4418u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF4418u) goto L_08AF4418;
    return;
L_08AF4418:
    ctx.set_gpr(31, 0x08AF4420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4420u) goto L_08AF4420;
    return;
L_08AF4420:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4440u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4440u) goto L_08AF4440;
    return;
L_08AF4440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF44E0;
      }
      goto L_08AF4448;
    }
L_08AF4448:
    ctx.set_gpr(31, 0x08AF4450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4450u) goto L_08AF4450;
    return;
L_08AF4450:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08AF445Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF445Cu) goto L_08AF445C;
    return;
L_08AF445C:
    ctx.set_gpr(31, 0x08AF4464u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4464u) goto L_08AF4464;
    return;
L_08AF4464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4474u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF4474u) goto L_08AF4474;
    return;
L_08AF4474:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF44E0;
      }
      goto L_08AF4480;
    }
L_08AF4480:
    ctx.set_gpr(31, 0x08AF4488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4488u) goto L_08AF4488;
    return;
L_08AF4488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16138u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 15729u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF44B8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF44B8u) goto L_08AF44B8;
    return;
L_08AF44B8:
    ctx.set_gpr(31, 0x08AF44C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF44C0u) goto L_08AF44C0;
    return;
L_08AF44C0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF44E0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF44E0u) goto L_08AF44E0;
    return;
L_08AF44E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08AF44E4;
L_08AF44E4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        (void)rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 948u, 0x08AF3D44u>(ctx, &aot_mem); return;
    }
    goto L_08AF44F4;
L_08AF44F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF4500u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 648u, 0x08AF29A4u>(ctx, &aot_mem) && ctx.pc == 0x08AF4500u) goto L_08AF4500;
    return;
L_08AF4500:
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
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF454C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(17))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4568:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4570:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4578:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4580:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4588:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4590:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(22, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08AF460Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF460Cu) goto L_08AF460C;
    return;
L_08AF460C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF4618u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4618u) goto L_08AF4618;
    return;
L_08AF4618:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF463Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF463Cu) goto L_08AF463C;
    return;
L_08AF463C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF4650u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF4650u) goto L_08AF4650;
    return;
L_08AF4650:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x08AF467Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    goto L_08AF5828;
L_08AF467C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AF46DC;
      }
      goto L_08AF4698;
    }
L_08AF4698:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(255));
        goto L_08AF4704;
    }
    goto L_08AF46A4;
L_08AF46A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AF46B8;
    }
    goto L_08AF46B0;
L_08AF46B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF4708;
      }
      goto L_08AF46B8;
    }
L_08AF46B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF4704;
      }
      goto L_08AF46DC;
    }
L_08AF46DC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF4704;
L_08AF4704:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
    goto L_08AF4708;
L_08AF4708:
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4714;
      }
      goto L_08AF4710;
    }
L_08AF4710:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(255));
    goto L_08AF4714;
L_08AF4714:
    if (static_cast<std::int32_t>(ctx.gpr[20]) >= 0) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
        goto L_08AF4724;
    }
    goto L_08AF471C;
L_08AF471C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    goto L_08AF4724;
L_08AF4724:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AF4744u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4744u) goto L_08AF4744;
    return;
L_08AF4744:
    ctx.set_gpr(31, 0x08AF474Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF474Cu) goto L_08AF474C;
    return;
L_08AF474C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AF4758u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4758u) goto L_08AF4758;
    return;
L_08AF4758:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF476Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF476Cu) goto L_08AF476C;
    return;
L_08AF476C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AF4790u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4790u) goto L_08AF4790;
    return;
L_08AF4790:
    ctx.set_gpr(31, 0x08AF4798u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4798u) goto L_08AF4798;
    return;
L_08AF4798:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08AF47A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF47A4u) goto L_08AF47A4;
    return;
L_08AF47A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF47B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF47B8u) goto L_08AF47B8;
    return;
L_08AF47B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-840)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AF47DCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF47DCu) goto L_08AF47DC;
    return;
L_08AF47DC:
    ctx.set_gpr(31, 0x08AF47E4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF47E4u) goto L_08AF47E4;
    return;
L_08AF47E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AF47F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF47F0u) goto L_08AF47F0;
    return;
L_08AF47F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4804u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4804u) goto L_08AF4804;
    return;
L_08AF4804:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1728)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4824u);
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4824u) goto L_08AF4824;
    return;
L_08AF4824:
    ctx.set_gpr(31, 0x08AF482Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF482Cu) goto L_08AF482C;
    return;
L_08AF482C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF4838u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4838u) goto L_08AF4838;
    return;
L_08AF4838:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF484Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF484Cu) goto L_08AF484C;
    return;
L_08AF484C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1680)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF486Cu);
    ctx.set_gpr(30, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF486Cu) goto L_08AF486C;
    return;
L_08AF486C:
    ctx.set_gpr(31, 0x08AF4874u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4874u) goto L_08AF4874;
    return;
L_08AF4874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF4880u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4880u) goto L_08AF4880;
    return;
L_08AF4880:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4894u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4894u) goto L_08AF4894;
    return;
L_08AF4894:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1704)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AF48B8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF48B8u) goto L_08AF48B8;
    return;
L_08AF48B8:
    ctx.set_gpr(31, 0x08AF48C0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF48C0u) goto L_08AF48C0;
    return;
L_08AF48C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08AF48CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF48CCu) goto L_08AF48CC;
    return;
L_08AF48CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF48E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF48E0u) goto L_08AF48E0;
    return;
L_08AF48E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1656)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AF4904u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4904u) goto L_08AF4904;
    return;
L_08AF4904:
    ctx.set_gpr(31, 0x08AF490Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF490Cu) goto L_08AF490C;
    return;
L_08AF490C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AF4918u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4918u) goto L_08AF4918;
    return;
L_08AF4918:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF492Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF492Cu) goto L_08AF492C;
    return;
L_08AF492C:
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1872));
    goto L_08AF4938;
L_08AF4938:
    ctx.set_gpr(31, 0x08AF4940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4940u) goto L_08AF4940;
    return;
L_08AF4940:
    ctx.set_gpr(31, 0x08AF4948u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4948u) goto L_08AF4948;
    return;
L_08AF4948:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4968u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4968u) goto L_08AF4968;
    return;
L_08AF4968:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF497Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF497Cu) goto L_08AF497C;
    return;
L_08AF497C:
    ctx.set_gpr(31, 0x08AF4984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4984u) goto L_08AF4984;
    return;
L_08AF4984:
    ctx.set_gpr(31, 0x08AF498Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF498Cu) goto L_08AF498C;
    return;
L_08AF498C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF49ACu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF49ACu) goto L_08AF49AC;
    return;
L_08AF49AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF49C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF49C0u) goto L_08AF49C0;
    return;
L_08AF49C0:
    ctx.set_gpr(31, 0x08AF49C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF49C8u) goto L_08AF49C8;
    return;
L_08AF49C8:
    ctx.set_gpr(31, 0x08AF49D0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF49D0u) goto L_08AF49D0;
    return;
L_08AF49D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF49F0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF49F0u) goto L_08AF49F0;
    return;
L_08AF49F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4A04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4A04u) goto L_08AF4A04;
    return;
L_08AF4A04:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF4938;
      }
      goto L_08AF4A14;
    }
L_08AF4A14:
    ctx.set_gpr(31, 0x08AF4A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A1Cu) goto L_08AF4A1C;
    return;
L_08AF4A1C:
    ctx.set_gpr(31, 0x08AF4A24u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A24u) goto L_08AF4A24;
    return;
L_08AF4A24:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1848)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4A48u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A48u) goto L_08AF4A48;
    return;
L_08AF4A48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4A5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4A5Cu) goto L_08AF4A5C;
    return;
L_08AF4A5C:
    ctx.set_gpr(31, 0x08AF4A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A64u) goto L_08AF4A64;
    return;
L_08AF4A64:
    ctx.set_gpr(31, 0x08AF4A6Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A6Cu) goto L_08AF4A6C;
    return;
L_08AF4A6C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1800)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4A90u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4A90u) goto L_08AF4A90;
    return;
L_08AF4A90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4AA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4AA4u) goto L_08AF4AA4;
    return;
L_08AF4AA4:
    ctx.set_gpr(31, 0x08AF4AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4AACu) goto L_08AF4AAC;
    return;
L_08AF4AAC:
    ctx.set_gpr(31, 0x08AF4AB4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4AB4u) goto L_08AF4AB4;
    return;
L_08AF4AB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1752)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4AD8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4AD8u) goto L_08AF4AD8;
    return;
L_08AF4AD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4AECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4AECu) goto L_08AF4AEC;
    return;
L_08AF4AEC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x08AF4AF8u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1872)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4AF8u) goto L_08AF4AF8;
    return;
L_08AF4AF8:
    ctx.set_gpr(31, 0x08AF4B00u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B00u) goto L_08AF4B00;
    return;
L_08AF4B00:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1872)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4B24u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B24u) goto L_08AF4B24;
    return;
L_08AF4B24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4B38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4B38u) goto L_08AF4B38;
    return;
L_08AF4B38:
    ctx.set_gpr(31, 0x08AF4B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B40u) goto L_08AF4B40;
    return;
L_08AF4B40:
    ctx.set_gpr(31, 0x08AF4B48u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B48u) goto L_08AF4B48;
    return;
L_08AF4B48:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1824)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4B6Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B6Cu) goto L_08AF4B6C;
    return;
L_08AF4B6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4B80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4B80u) goto L_08AF4B80;
    return;
L_08AF4B80:
    ctx.set_gpr(31, 0x08AF4B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B88u) goto L_08AF4B88;
    return;
L_08AF4B88:
    ctx.set_gpr(31, 0x08AF4B90u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4B90u) goto L_08AF4B90;
    return;
L_08AF4B90:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1776)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4BB4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4BB4u) goto L_08AF4BB4;
    return;
L_08AF4BB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4BC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4BC8u) goto L_08AF4BC8;
    return;
L_08AF4BC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08AF4BD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 453u, 0x08AFE944u>(ctx, &aot_mem) && ctx.pc == 0x08AF4BD4u) goto L_08AF4BD4;
    return;
L_08AF4BD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
        goto L_08AF4EA8;
    }
    goto L_08AF4BE0;
L_08AF4BE0:
    ctx.set_gpr(31, 0x08AF4BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4BE8u) goto L_08AF4BE8;
    return;
L_08AF4BE8:
    ctx.set_gpr(31, 0x08AF4BF0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4BF0u) goto L_08AF4BF0;
    return;
L_08AF4BF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AF4BFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4BFCu) goto L_08AF4BFC;
    return;
L_08AF4BFC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4C1Cu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4C1Cu) goto L_08AF4C1C;
    return;
L_08AF4C1C:
    ctx.set_gpr(31, 0x08AF4C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C24u) goto L_08AF4C24;
    return;
L_08AF4C24:
    ctx.set_gpr(31, 0x08AF4C2Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C2Cu) goto L_08AF4C2C;
    return;
L_08AF4C2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08AF4C38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C38u) goto L_08AF4C38;
    return;
L_08AF4C38:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4C58u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4C58u) goto L_08AF4C58;
    return;
L_08AF4C58:
    ctx.set_gpr(31, 0x08AF4C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C60u) goto L_08AF4C60;
    return;
L_08AF4C60:
    ctx.set_gpr(31, 0x08AF4C68u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C68u) goto L_08AF4C68;
    return;
L_08AF4C68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AF4C74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4C74u) goto L_08AF4C74;
    return;
L_08AF4C74:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4C94u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4C94u) goto L_08AF4C94;
    return;
L_08AF4C94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08AF4CA0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 529u, 0x08AFEE60u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CA0u) goto L_08AF4CA0;
    return;
L_08AF4CA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF4D30;
      }
      goto L_08AF4CAC;
    }
L_08AF4CAC:
    ctx.set_gpr(31, 0x08AF4CB4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF5820;
L_08AF4CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4D30;
      }
      goto L_08AF4CBC;
    }
L_08AF4CBC:
    ctx.set_gpr(31, 0x08AF4CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CC4u) goto L_08AF4CC4;
    return;
L_08AF4CC4:
    ctx.set_gpr(31, 0x08AF4CCCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CCCu) goto L_08AF4CCC;
    return;
L_08AF4CCC:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08AF4CD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CD8u) goto L_08AF4CD8;
    return;
L_08AF4CD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4CECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4CECu) goto L_08AF4CEC;
    return;
L_08AF4CEC:
    ctx.set_gpr(31, 0x08AF4CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CF4u) goto L_08AF4CF4;
    return;
L_08AF4CF4:
    ctx.set_gpr(31, 0x08AF4CFCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4CFCu) goto L_08AF4CFC;
    return;
L_08AF4CFC:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08AF4D08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D08u) goto L_08AF4D08;
    return;
L_08AF4D08:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4D28u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4D28u) goto L_08AF4D28;
    return;
L_08AF4D28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08AF4DA0;
      }
      goto L_08AF4D30;
    }
L_08AF4D30:
    ctx.set_gpr(31, 0x08AF4D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D38u) goto L_08AF4D38;
    return;
L_08AF4D38:
    ctx.set_gpr(31, 0x08AF4D40u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D40u) goto L_08AF4D40;
    return;
L_08AF4D40:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08AF4D4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D4Cu) goto L_08AF4D4C;
    return;
L_08AF4D4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4D6Cu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4D6Cu) goto L_08AF4D6C;
    return;
L_08AF4D6C:
    ctx.set_gpr(31, 0x08AF4D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D74u) goto L_08AF4D74;
    return;
L_08AF4D74:
    ctx.set_gpr(31, 0x08AF4D7Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D7Cu) goto L_08AF4D7C;
    return;
L_08AF4D7C:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08AF4D88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4D88u) goto L_08AF4D88;
    return;
L_08AF4D88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4D9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4D9Cu) goto L_08AF4D9C;
    return;
L_08AF4D9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_08AF4DA0;
L_08AF4DA0:
    ctx.set_gpr(31, 0x08AF4DA8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 517u, 0x08AFEDA0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4DA8u) goto L_08AF4DA8;
    return;
L_08AF4DA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF4E38;
      }
      goto L_08AF4DB4;
    }
L_08AF4DB4:
    ctx.set_gpr(31, 0x08AF4DBCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF5820;
L_08AF4DBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4E38;
      }
      goto L_08AF4DC4;
    }
L_08AF4DC4:
    ctx.set_gpr(31, 0x08AF4DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4DCCu) goto L_08AF4DCC;
    return;
L_08AF4DCC:
    ctx.set_gpr(31, 0x08AF4DD4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4DD4u) goto L_08AF4DD4;
    return;
L_08AF4DD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08AF4DE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4DE0u) goto L_08AF4DE0;
    return;
L_08AF4DE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4DF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4DF4u) goto L_08AF4DF4;
    return;
L_08AF4DF4:
    ctx.set_gpr(31, 0x08AF4DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4DFCu) goto L_08AF4DFC;
    return;
L_08AF4DFC:
    ctx.set_gpr(31, 0x08AF4E04u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E04u) goto L_08AF4E04;
    return;
L_08AF4E04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AF4E10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E10u) goto L_08AF4E10;
    return;
L_08AF4E10:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4E30u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4E30u) goto L_08AF4E30;
    return;
L_08AF4E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4EA4;
      }
      goto L_08AF4E38;
    }
L_08AF4E38:
    ctx.set_gpr(31, 0x08AF4E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E40u) goto L_08AF4E40;
    return;
L_08AF4E40:
    ctx.set_gpr(31, 0x08AF4E48u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E48u) goto L_08AF4E48;
    return;
L_08AF4E48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08AF4E54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E54u) goto L_08AF4E54;
    return;
L_08AF4E54:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4E74u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4E74u) goto L_08AF4E74;
    return;
L_08AF4E74:
    ctx.set_gpr(31, 0x08AF4E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E7Cu) goto L_08AF4E7C;
    return;
L_08AF4E7C:
    ctx.set_gpr(31, 0x08AF4E84u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E84u) goto L_08AF4E84;
    return;
L_08AF4E84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AF4E90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4E90u) goto L_08AF4E90;
    return;
L_08AF4E90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF4EA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4EA4u) goto L_08AF4EA4;
    return;
L_08AF4EA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_08AF4EA8;
L_08AF4EA8:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1848)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1872));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1800)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[6], 1u));
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1752)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1824)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[4], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1776)));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[6];
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(30, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[5];
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[1];
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    goto L_08AF4F7C;
L_08AF4F7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AF54AC;
    }
    goto L_08AF4F8C;
L_08AF4F8C:
    ctx.set_gpr(31, 0x08AF4F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4F94u) goto L_08AF4F94;
    return;
L_08AF4F94:
    ctx.set_gpr(31, 0x08AF4F9Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4F9Cu) goto L_08AF4F9C;
    return;
L_08AF4F9C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF4FBCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF4FBCu) goto L_08AF4FBC;
    return;
L_08AF4FBC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF4FDCu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4FDCu) goto L_08AF4FDC;
    return;
L_08AF4FDC:
    ctx.set_gpr(31, 0x08AF4FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4FE4u) goto L_08AF4FE4;
    return;
L_08AF4FE4:
    ctx.set_gpr(31, 0x08AF4FECu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF4FECu) goto L_08AF4FEC;
    return;
L_08AF4FEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF500Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF500Cu) goto L_08AF500C;
    return;
L_08AF500C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF502Cu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF502Cu) goto L_08AF502C;
    return;
L_08AF502C:
    ctx.set_gpr(31, 0x08AF5034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5034u) goto L_08AF5034;
    return;
L_08AF5034:
    ctx.set_gpr(31, 0x08AF503Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF503Cu) goto L_08AF503C;
    return;
L_08AF503C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF505Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF505Cu) goto L_08AF505C;
    return;
L_08AF505C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF507Cu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF507Cu) goto L_08AF507C;
    return;
L_08AF507C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF54A8;
      }
      goto L_08AF5094;
    }
L_08AF5094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF54A8;
      }
      goto L_08AF50A0;
    }
L_08AF50A0:
    ctx.set_gpr(31, 0x08AF50A8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF4568;
L_08AF50A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF54A8;
      }
      goto L_08AF50B0;
    }
L_08AF50B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08AF50C0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFF154u>(ctx, &aot_mem) && ctx.pc == 0x08AF50C0u) goto L_08AF50C0;
    return;
L_08AF50C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x08AF50FCu);
    ctx.fpr[23] = ctx.fpr[2] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF50FCu) goto L_08AF50FC;
    return;
L_08AF50FC:
    ctx.set_gpr(31, 0x08AF5104u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5104u) goto L_08AF5104;
    return;
L_08AF5104:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x08AF5110u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5110u) goto L_08AF5110;
    return;
L_08AF5110:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5120u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF5120u) goto L_08AF5120;
    return;
L_08AF5120:
    ctx.set_gpr(31, 0x08AF5128u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5128u) goto L_08AF5128;
    return;
L_08AF5128:
    ctx.set_gpr(31, 0x08AF5130u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5130u) goto L_08AF5130;
    return;
L_08AF5130:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AF513Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF513Cu) goto L_08AF513C;
    return;
L_08AF513C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF514Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF514Cu) goto L_08AF514C;
    return;
L_08AF514C:
    ctx.set_gpr(31, 0x08AF5154u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5154u) goto L_08AF5154;
    return;
L_08AF5154:
    ctx.set_gpr(31, 0x08AF515Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF515Cu) goto L_08AF515C;
    return;
L_08AF515C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x08AF5168u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5168u) goto L_08AF5168;
    return;
L_08AF5168:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5178u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF5178u) goto L_08AF5178;
    return;
L_08AF5178:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AF518Cu);
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF518Cu) goto L_08AF518C;
    return;
L_08AF518C:
    ctx.set_gpr(31, 0x08AF5194u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5194u) goto L_08AF5194;
    return;
L_08AF5194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF51A0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF51A0u) goto L_08AF51A0;
    return;
L_08AF51A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF51B8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF51B8u) goto L_08AF51B8;
    return;
L_08AF51B8:
    ctx.set_gpr(31, 0x08AF51C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF51C0u) goto L_08AF51C0;
    return;
L_08AF51C0:
    ctx.set_gpr(31, 0x08AF51C8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF51C8u) goto L_08AF51C8;
    return;
L_08AF51C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08AF51D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF51D4u) goto L_08AF51D4;
    return;
L_08AF51D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF51ECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF51ECu) goto L_08AF51EC;
    return;
L_08AF51EC:
    ctx.set_gpr(31, 0x08AF51F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF51F4u) goto L_08AF51F4;
    return;
L_08AF51F4:
    ctx.set_gpr(31, 0x08AF51FCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF51FCu) goto L_08AF51FC;
    return;
L_08AF51FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08AF5208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5208u) goto L_08AF5208;
    return;
L_08AF5208:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF5220u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5220u) goto L_08AF5220;
    return;
L_08AF5220:
    ctx.set_gpr(31, 0x08AF5228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5228u) goto L_08AF5228;
    return;
L_08AF5228:
    ctx.set_gpr(31, 0x08AF5230u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5230u) goto L_08AF5230;
    return;
L_08AF5230:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08AF523Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF523Cu) goto L_08AF523C;
    return;
L_08AF523C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5254u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5254u) goto L_08AF5254;
    return;
L_08AF5254:
    ctx.set_gpr(31, 0x08AF525Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF525Cu) goto L_08AF525C;
    return;
L_08AF525C:
    ctx.set_gpr(31, 0x08AF5264u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5264u) goto L_08AF5264;
    return;
L_08AF5264:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08AF5270u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5270u) goto L_08AF5270;
    return;
L_08AF5270:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5288u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5288u) goto L_08AF5288;
    return;
L_08AF5288:
    ctx.set_gpr(31, 0x08AF5290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5290u) goto L_08AF5290;
    return;
L_08AF5290:
    ctx.set_gpr(31, 0x08AF5298u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5298u) goto L_08AF5298;
    return;
L_08AF5298:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08AF52A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF52A4u) goto L_08AF52A4;
    return;
L_08AF52A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AF52BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF52BCu) goto L_08AF52BC;
    return;
L_08AF52BC:
    ctx.set_gpr(31, 0x08AF52C4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF5818;
L_08AF52C4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 129 ? 1u : 0u);
        goto L_08AF5334;
    }
    goto L_08AF52CC;
L_08AF52CC:
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16281u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 39322u);
    ctx.set_gpr(2, 17280u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5308u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AF5308u) goto L_08AF5308;
    return;
L_08AF5308:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF5340;
      }
      goto L_08AF5334;
    }
L_08AF5334:
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AF5340;
      }
      goto L_08AF533C;
    }
L_08AF533C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(128));
    goto L_08AF5340;
L_08AF5340:
    ctx.set_gpr(31, 0x08AF5348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5348u) goto L_08AF5348;
    return;
L_08AF5348:
    ctx.set_gpr(31, 0x08AF5350u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5350u) goto L_08AF5350;
    return;
L_08AF5350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF535Cu);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF535Cu) goto L_08AF535C;
    return;
L_08AF535C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF537Cu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF537Cu) goto L_08AF537C;
    return;
L_08AF537C:
    ctx.set_gpr(31, 0x08AF5384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5384u) goto L_08AF5384;
    return;
L_08AF5384:
    ctx.set_gpr(31, 0x08AF538Cu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF538Cu) goto L_08AF538C;
    return;
L_08AF538C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08AF5398u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5398u) goto L_08AF5398;
    return;
L_08AF5398:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF53B8u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF53B8u) goto L_08AF53B8;
    return;
L_08AF53B8:
    ctx.set_gpr(31, 0x08AF53C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF53C0u) goto L_08AF53C0;
    return;
L_08AF53C0:
    ctx.set_gpr(31, 0x08AF53C8u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF53C8u) goto L_08AF53C8;
    return;
L_08AF53C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08AF53D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF53D4u) goto L_08AF53D4;
    return;
L_08AF53D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF53F4u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF53F4u) goto L_08AF53F4;
    return;
L_08AF53F4:
    ctx.set_gpr(31, 0x08AF53FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF53FCu) goto L_08AF53FC;
    return;
L_08AF53FC:
    ctx.set_gpr(31, 0x08AF5404u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5404u) goto L_08AF5404;
    return;
L_08AF5404:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08AF5410u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5410u) goto L_08AF5410;
    return;
L_08AF5410:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5430u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5430u) goto L_08AF5430;
    return;
L_08AF5430:
    ctx.set_gpr(31, 0x08AF5438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5438u) goto L_08AF5438;
    return;
L_08AF5438:
    ctx.set_gpr(31, 0x08AF5440u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5440u) goto L_08AF5440;
    return;
L_08AF5440:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08AF544Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF544Cu) goto L_08AF544C;
    return;
L_08AF544C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF546Cu);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF546Cu) goto L_08AF546C;
    return;
L_08AF546C:
    ctx.set_gpr(31, 0x08AF5474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5474u) goto L_08AF5474;
    return;
L_08AF5474:
    ctx.set_gpr(31, 0x08AF547Cu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF547Cu) goto L_08AF547C;
    return;
L_08AF547C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08AF5488u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5488u) goto L_08AF5488;
    return;
L_08AF5488:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF54A8u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF54A8u) goto L_08AF54A8;
    return;
L_08AF54A8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AF54AC;
L_08AF54AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08AF4F7C;
      }
      goto L_08AF54BC;
    }
L_08AF54BC:
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1872));
    goto L_08AF54C8;
L_08AF54C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AF57C0;
    }
    goto L_08AF54D8;
L_08AF54D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF57BC;
      }
      goto L_08AF54F0;
    }
L_08AF54F0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    ctx.set_gpr(31, 0x08AF550Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 603u, 0x08AF2640u>(ctx, &aot_mem) && ctx.pc == 0x08AF550Cu) goto L_08AF550C;
    return;
L_08AF550C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF567C;
      }
      goto L_08AF5518;
    }
L_08AF5518:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF552C;
      }
      goto L_08AF5524;
    }
L_08AF5524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF57BC;
      }
      goto L_08AF552C;
    }
L_08AF552C:
    ctx.set_gpr(31, 0x08AF5534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5534u) goto L_08AF5534;
    return;
L_08AF5534:
    ctx.set_gpr(31, 0x08AF553Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF553Cu) goto L_08AF553C;
    return;
L_08AF553C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF5548u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5548u) goto L_08AF5548;
    return;
L_08AF5548:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5558u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF5558u) goto L_08AF5558;
    return;
L_08AF5558:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF5638;
      }
      goto L_08AF5564;
    }
L_08AF5564:
    ctx.set_gpr(31, 0x08AF556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF556Cu) goto L_08AF556C;
    return;
L_08AF556C:
    ctx.set_gpr(31, 0x08AF5574u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5574u) goto L_08AF5574;
    return;
L_08AF5574:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5594u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5594u) goto L_08AF5594;
    return;
L_08AF5594:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF55A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF55A4u) goto L_08AF55A4;
    return;
L_08AF55A4:
    ctx.set_gpr(31, 0x08AF55ACu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF55ACu) goto L_08AF55AC;
    return;
L_08AF55AC:
    ctx.set_gpr(31, 0x08AF55B4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF55B4u) goto L_08AF55B4;
    return;
L_08AF55B4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF55D4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF55D4u) goto L_08AF55D4;
    return;
L_08AF55D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF55E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AF55E4u) goto L_08AF55E4;
    return;
L_08AF55E4:
    ctx.set_gpr(31, 0x08AF55ECu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF55ECu) goto L_08AF55EC;
    return;
L_08AF55EC:
    ctx.set_gpr(31, 0x08AF55F4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF55F4u) goto L_08AF55F4;
    return;
L_08AF55F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF5600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5600u) goto L_08AF5600;
    return;
L_08AF5600:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(2, 16138u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 15729u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AF5638u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF5638u) goto L_08AF5638;
    return;
L_08AF5638:
    ctx.set_gpr(31, 0x08AF5640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5640u) goto L_08AF5640;
    return;
L_08AF5640:
    ctx.set_gpr(31, 0x08AF5648u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5648u) goto L_08AF5648;
    return;
L_08AF5648:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF5654u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5654u) goto L_08AF5654;
    return;
L_08AF5654:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5674u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5674u) goto L_08AF5674;
    return;
L_08AF5674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF57BC;
      }
      goto L_08AF567C;
    }
L_08AF567C:
    ctx.set_gpr(31, 0x08AF5684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5684u) goto L_08AF5684;
    return;
L_08AF5684:
    ctx.set_gpr(31, 0x08AF568Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF568Cu) goto L_08AF568C;
    return;
L_08AF568C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF5698u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5698u) goto L_08AF5698;
    return;
L_08AF5698:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF56A8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF56A8u) goto L_08AF56A8;
    return;
L_08AF56A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF5780;
      }
      goto L_08AF56B4;
    }
L_08AF56B4:
    ctx.set_gpr(31, 0x08AF56BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF56BCu) goto L_08AF56BC;
    return;
L_08AF56BC:
    ctx.set_gpr(31, 0x08AF56C4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF56C4u) goto L_08AF56C4;
    return;
L_08AF56C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF56E4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF56E4u) goto L_08AF56E4;
    return;
L_08AF56E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF56F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF56F4u) goto L_08AF56F4;
    return;
L_08AF56F4:
    ctx.set_gpr(31, 0x08AF56FCu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF56FCu) goto L_08AF56FC;
    return;
L_08AF56FC:
    ctx.set_gpr(31, 0x08AF5704u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5704u) goto L_08AF5704;
    return;
L_08AF5704:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5724u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5724u) goto L_08AF5724;
    return;
L_08AF5724:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5734u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5734u) goto L_08AF5734;
    return;
L_08AF5734:
    ctx.set_gpr(31, 0x08AF573Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF573Cu) goto L_08AF573C;
    return;
L_08AF573C:
    ctx.set_gpr(31, 0x08AF5744u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5744u) goto L_08AF5744;
    return;
L_08AF5744:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF5750u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5750u) goto L_08AF5750;
    return;
L_08AF5750:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16138u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 15729u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AF5780u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AF5780u) goto L_08AF5780;
    return;
L_08AF5780:
    ctx.set_gpr(31, 0x08AF5788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5788u) goto L_08AF5788;
    return;
L_08AF5788:
    ctx.set_gpr(31, 0x08AF5790u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5790u) goto L_08AF5790;
    return;
L_08AF5790:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AF579Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF579Cu) goto L_08AF579C;
    return;
L_08AF579C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF57BCu);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF57BCu) goto L_08AF57BC;
    return;
L_08AF57BC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF57C0;
L_08AF57C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF54C8;
      }
      goto L_08AF57CC;
    }
L_08AF57CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08AF57D8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 822u, 0x08AFFEA8u>(ctx, &aot_mem) && ctx.pc == 0x08AF57D8u) goto L_08AF57D8;
    return;
L_08AF57D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5818:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5820:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5828:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(21, ctx.gpr[2] << 3u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, 0x08AF58A0u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF58A0u) goto L_08AF58A0;
    return;
L_08AF58A0:
    ctx.set_gpr(31, 0x08AF58A8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF58A8u) goto L_08AF58A8;
    return;
L_08AF58A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF58B4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF58B4u) goto L_08AF58B4;
    return;
L_08AF58B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF58C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF58C8u) goto L_08AF58C8;
    return;
L_08AF58C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-216)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF58E8u);
    ctx.set_gpr(22, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF58E8u) goto L_08AF58E8;
    return;
L_08AF58E8:
    ctx.set_gpr(31, 0x08AF58F0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF58F0u) goto L_08AF58F0;
    return;
L_08AF58F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF58FCu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF58FCu) goto L_08AF58FC;
    return;
L_08AF58FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5910u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5910u) goto L_08AF5910;
    return;
L_08AF5910:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-144)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5930u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5930u) goto L_08AF5930;
    return;
L_08AF5930:
    ctx.set_gpr(31, 0x08AF5938u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5938u) goto L_08AF5938;
    return;
L_08AF5938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5944u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5944u) goto L_08AF5944;
    return;
L_08AF5944:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5958u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5958u) goto L_08AF5958;
    return;
L_08AF5958:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-168)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5978u);
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5978u) goto L_08AF5978;
    return;
L_08AF5978:
    ctx.set_gpr(31, 0x08AF5980u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5980u) goto L_08AF5980;
    return;
L_08AF5980:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF598Cu);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF598Cu) goto L_08AF598C;
    return;
L_08AF598C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF59A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF59A0u) goto L_08AF59A0;
    return;
L_08AF59A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-96)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF59C0u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF59C0u) goto L_08AF59C0;
    return;
L_08AF59C0:
    ctx.set_gpr(31, 0x08AF59C8u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF59C8u) goto L_08AF59C8;
    return;
L_08AF59C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF59D4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF59D4u) goto L_08AF59D4;
    return;
L_08AF59D4:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF59E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF59E8u) goto L_08AF59E8;
    return;
L_08AF59E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-120)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5A08u);
    ctx.set_gpr(21, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5A08u) goto L_08AF5A08;
    return;
L_08AF5A08:
    ctx.set_gpr(31, 0x08AF5A10u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5A10u) goto L_08AF5A10;
    return;
L_08AF5A10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5A1Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5A1Cu) goto L_08AF5A1C;
    return;
L_08AF5A1C:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5A30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5A30u) goto L_08AF5A30;
    return;
L_08AF5A30:
    ctx.set_gpr(3, ctx.gpr[19] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(30, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[30] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AF5FA0;
    }
    goto L_08AF5A58;
L_08AF5A58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF5A68u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5A68u) goto L_08AF5A68;
    return;
L_08AF5A68:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5A74u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5A74u) goto L_08AF5A74;
    return;
L_08AF5A74:
    ctx.set_gpr(31, 0x08AF5A7Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF5A7Cu) goto L_08AF5A7C;
    return;
L_08AF5A7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF5A88u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF5A88u) goto L_08AF5A88;
    return;
L_08AF5A88:
    ctx.set_gpr(31, 0x08AF5A90u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AF4568;
L_08AF5A90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5F9C;
      }
      goto L_08AF5A98;
    }
L_08AF5A98:
    ctx.set_gpr(31, 0x08AF5AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5AA0u) goto L_08AF5AA0;
    return;
L_08AF5AA0:
    ctx.set_gpr(31, 0x08AF5AA8u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5AA8u) goto L_08AF5AA8;
    return;
L_08AF5AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5AB4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5AB4u) goto L_08AF5AB4;
    return;
L_08AF5AB4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5AC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AF5AC4u) goto L_08AF5AC4;
    return;
L_08AF5AC4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5AD0u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF5AD0u) goto L_08AF5AD0;
    return;
L_08AF5AD0:
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[20]);
    ctx.set_gpr(4, 16840u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AF5B24u);
    ctx.fpr[23] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B24u) goto L_08AF5B24;
    return;
L_08AF5B24:
    ctx.set_gpr(31, 0x08AF5B2Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B2Cu) goto L_08AF5B2C;
    return;
L_08AF5B2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5B38u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B38u) goto L_08AF5B38;
    return;
L_08AF5B38:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5B48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF5B48u) goto L_08AF5B48;
    return;
L_08AF5B48:
    ctx.set_gpr(31, 0x08AF5B50u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B50u) goto L_08AF5B50;
    return;
L_08AF5B50:
    ctx.set_gpr(31, 0x08AF5B58u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B58u) goto L_08AF5B58;
    return;
L_08AF5B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5B64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B64u) goto L_08AF5B64;
    return;
L_08AF5B64:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5B74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF5B74u) goto L_08AF5B74;
    return;
L_08AF5B74:
    ctx.set_gpr(31, 0x08AF5B7Cu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B7Cu) goto L_08AF5B7C;
    return;
L_08AF5B7C:
    ctx.set_gpr(31, 0x08AF5B84u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B84u) goto L_08AF5B84;
    return;
L_08AF5B84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5B90u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5B90u) goto L_08AF5B90;
    return;
L_08AF5B90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5BA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF5BA0u) goto L_08AF5BA0;
    return;
L_08AF5BA0:
    ctx.set_gpr(31, 0x08AF5BA8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BA8u) goto L_08AF5BA8;
    return;
L_08AF5BA8:
    ctx.set_gpr(31, 0x08AF5BB0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BB0u) goto L_08AF5BB0;
    return;
L_08AF5BB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5BBCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BBCu) goto L_08AF5BBC;
    return;
L_08AF5BBC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF5BD4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BD4u) goto L_08AF5BD4;
    return;
L_08AF5BD4:
    ctx.set_gpr(31, 0x08AF5BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BDCu) goto L_08AF5BDC;
    return;
L_08AF5BDC:
    ctx.set_gpr(31, 0x08AF5BE4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BE4u) goto L_08AF5BE4;
    return;
L_08AF5BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5BF0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5BF0u) goto L_08AF5BF0;
    return;
L_08AF5BF0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5C08u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C08u) goto L_08AF5C08;
    return;
L_08AF5C08:
    ctx.set_gpr(31, 0x08AF5C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C10u) goto L_08AF5C10;
    return;
L_08AF5C10:
    ctx.set_gpr(31, 0x08AF5C18u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C18u) goto L_08AF5C18;
    return;
L_08AF5C18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5C24u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C24u) goto L_08AF5C24;
    return;
L_08AF5C24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF5C3Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C3Cu) goto L_08AF5C3C;
    return;
L_08AF5C3C:
    ctx.set_gpr(31, 0x08AF5C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C44u) goto L_08AF5C44;
    return;
L_08AF5C44:
    ctx.set_gpr(31, 0x08AF5C4Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C4Cu) goto L_08AF5C4C;
    return;
L_08AF5C4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5C58u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C58u) goto L_08AF5C58;
    return;
L_08AF5C58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5C70u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C70u) goto L_08AF5C70;
    return;
L_08AF5C70:
    ctx.set_gpr(31, 0x08AF5C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C78u) goto L_08AF5C78;
    return;
L_08AF5C78:
    ctx.set_gpr(31, 0x08AF5C80u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C80u) goto L_08AF5C80;
    return;
L_08AF5C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5C8Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5C8Cu) goto L_08AF5C8C;
    return;
L_08AF5C8C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF5CA4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5CA4u) goto L_08AF5CA4;
    return;
L_08AF5CA4:
    ctx.set_gpr(31, 0x08AF5CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5CACu) goto L_08AF5CAC;
    return;
L_08AF5CAC:
    ctx.set_gpr(31, 0x08AF5CB4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5CB4u) goto L_08AF5CB4;
    return;
L_08AF5CB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5CC0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5CC0u) goto L_08AF5CC0;
    return;
L_08AF5CC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AF5CD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF5CD8u) goto L_08AF5CD8;
    return;
L_08AF5CD8:
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16281u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 39322u);
    ctx.set_gpr(2, 17280u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF5D14u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D14u) goto L_08AF5D14;
    return;
L_08AF5D14:
    ctx.set_gpr(31, 0x08AF5D1Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D1Cu) goto L_08AF5D1C;
    return;
L_08AF5D1C:
    ctx.set_gpr(31, 0x08AF5D24u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D24u) goto L_08AF5D24;
    return;
L_08AF5D24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5D30u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D30u) goto L_08AF5D30;
    return;
L_08AF5D30:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5D50u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5D50u) goto L_08AF5D50;
    return;
L_08AF5D50:
    ctx.set_gpr(31, 0x08AF5D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D58u) goto L_08AF5D58;
    return;
L_08AF5D58:
    ctx.set_gpr(31, 0x08AF5D60u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D60u) goto L_08AF5D60;
    return;
L_08AF5D60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5D6Cu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D6Cu) goto L_08AF5D6C;
    return;
L_08AF5D6C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5D8Cu);
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5D8Cu) goto L_08AF5D8C;
    return;
L_08AF5D8C:
    ctx.set_gpr(31, 0x08AF5D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D94u) goto L_08AF5D94;
    return;
L_08AF5D94:
    ctx.set_gpr(31, 0x08AF5D9Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5D9Cu) goto L_08AF5D9C;
    return;
L_08AF5D9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5DA8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5DA8u) goto L_08AF5DA8;
    return;
L_08AF5DA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5DC8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5DC8u) goto L_08AF5DC8;
    return;
L_08AF5DC8:
    ctx.set_gpr(31, 0x08AF5DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5DD0u) goto L_08AF5DD0;
    return;
L_08AF5DD0:
    ctx.set_gpr(31, 0x08AF5DD8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5DD8u) goto L_08AF5DD8;
    return;
L_08AF5DD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5DE4u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5DE4u) goto L_08AF5DE4;
    return;
L_08AF5DE4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5E04u);
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5E04u) goto L_08AF5E04;
    return;
L_08AF5E04:
    ctx.set_gpr(31, 0x08AF5E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E0Cu) goto L_08AF5E0C;
    return;
L_08AF5E0C:
    ctx.set_gpr(31, 0x08AF5E14u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E14u) goto L_08AF5E14;
    return;
L_08AF5E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5E20u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E20u) goto L_08AF5E20;
    return;
L_08AF5E20:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5E40u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5E40u) goto L_08AF5E40;
    return;
L_08AF5E40:
    ctx.set_gpr(31, 0x08AF5E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E48u) goto L_08AF5E48;
    return;
L_08AF5E48:
    ctx.set_gpr(31, 0x08AF5E50u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E50u) goto L_08AF5E50;
    return;
L_08AF5E50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5E5Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E5Cu) goto L_08AF5E5C;
    return;
L_08AF5E5C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF5E7Cu);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5E7Cu) goto L_08AF5E7C;
    return;
L_08AF5E7C:
    ctx.set_gpr(31, 0x08AF5E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E84u) goto L_08AF5E84;
    return;
L_08AF5E84:
    ctx.set_gpr(31, 0x08AF5E8Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E8Cu) goto L_08AF5E8C;
    return;
L_08AF5E8C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF5E98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5E98u) goto L_08AF5E98;
    return;
L_08AF5E98:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5EACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5EACu) goto L_08AF5EAC;
    return;
L_08AF5EAC:
    ctx.set_gpr(31, 0x08AF5EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EB4u) goto L_08AF5EB4;
    return;
L_08AF5EB4:
    ctx.set_gpr(31, 0x08AF5EBCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EBCu) goto L_08AF5EBC;
    return;
L_08AF5EBC:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AF5EC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EC8u) goto L_08AF5EC8;
    return;
L_08AF5EC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5EDCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5EDCu) goto L_08AF5EDC;
    return;
L_08AF5EDC:
    ctx.set_gpr(31, 0x08AF5EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EE4u) goto L_08AF5EE4;
    return;
L_08AF5EE4:
    ctx.set_gpr(31, 0x08AF5EECu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EECu) goto L_08AF5EEC;
    return;
L_08AF5EEC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF5EF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5EF8u) goto L_08AF5EF8;
    return;
L_08AF5EF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5F0Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5F0Cu) goto L_08AF5F0C;
    return;
L_08AF5F0C:
    ctx.set_gpr(31, 0x08AF5F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F14u) goto L_08AF5F14;
    return;
L_08AF5F14:
    ctx.set_gpr(31, 0x08AF5F1Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F1Cu) goto L_08AF5F1C;
    return;
L_08AF5F1C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08AF5F28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F28u) goto L_08AF5F28;
    return;
L_08AF5F28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5F3Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5F3Cu) goto L_08AF5F3C;
    return;
L_08AF5F3C:
    ctx.set_gpr(31, 0x08AF5F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F44u) goto L_08AF5F44;
    return;
L_08AF5F44:
    ctx.set_gpr(31, 0x08AF5F4Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F4Cu) goto L_08AF5F4C;
    return;
L_08AF5F4C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF5F58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F58u) goto L_08AF5F58;
    return;
L_08AF5F58:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF5F6Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5F6Cu) goto L_08AF5F6C;
    return;
L_08AF5F6C:
    ctx.set_gpr(31, 0x08AF5F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F74u) goto L_08AF5F74;
    return;
L_08AF5F74:
    ctx.set_gpr(31, 0x08AF5F7Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F7Cu) goto L_08AF5F7C;
    return;
L_08AF5F7C:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF5F88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF5F88u) goto L_08AF5F88;
    return;
L_08AF5F88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF5F9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF5F9Cu) goto L_08AF5F9C;
    return;
L_08AF5F9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AF5FA0;
L_08AF5FA0:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AF5FF8u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08AF60A8;
L_08AF5FF8:
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
        goto L_08AF608C;
    }
    goto L_08AF6020;
L_08AF6020:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF607C;
    }
    goto L_08AF602C;
L_08AF602C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF6078;
      }
      goto L_08AF6038;
    }
L_08AF6038:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF6068;
    }
    goto L_08AF6044;
L_08AF6044:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AF6058;
    }
    goto L_08AF6050;
L_08AF6050:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF6098;
      }
      goto L_08AF6058;
    }
L_08AF6058:
    ctx.set_gpr(31, 0x08AF6060u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AF620C;
L_08AF6060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6094;
      }
      goto L_08AF6068;
    }
L_08AF6068:
    ctx.set_gpr(31, 0x08AF6070u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AF68C8;
L_08AF6070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6094;
      }
      goto L_08AF6078;
    }
L_08AF6078:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF607C;
L_08AF607C:
    ctx.set_gpr(31, 0x08AF6084u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AF6E68;
L_08AF6084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6094;
      }
      goto L_08AF608C;
    }
L_08AF608C:
    ctx.set_gpr(31, 0x08AF6094u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AF70DC;
L_08AF6094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AF6098;
L_08AF6098:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF60A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF60ECu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF60ECu) goto L_08AF60EC;
    return;
L_08AF60EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF60F8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 816u, 0x08AF3464u>(ctx, &aot_mem) && ctx.pc == 0x08AF60F8u) goto L_08AF60F8;
    return;
L_08AF60F8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AF61E8;
    }
    goto L_08AF6100;
L_08AF6100:
    ctx.set_gpr(31, 0x08AF6108u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AF6204;
L_08AF6108:
    ctx.set_gpr(2, 17315u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2692)));
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF6158;
      }
      goto L_08AF6138;
    }
L_08AF6138:
    ctx.set_gpr(31, 0x08AF6140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AF6140u) goto L_08AF6140;
    return;
L_08AF6140:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    goto L_08AF6158;
L_08AF6158:
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AF6194;
    }
    goto L_08AF6170;
L_08AF6170:
    ctx.set_gpr(31, 0x08AF6178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AF6178u) goto L_08AF6178;
    return;
L_08AF6178:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AF6194;
L_08AF6194:
    ctx.set_gpr(31, 0x08AF619Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF619Cu) goto L_08AF619C;
    return;
L_08AF619C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF61A8;
      }
      goto L_08AF61A4;
    }
L_08AF61A4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AF61A8;
L_08AF61A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF61E4;
      }
      goto L_08AF61B0;
    }
L_08AF61B0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF61C8u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF61C8u) goto L_08AF61C8;
    return;
L_08AF61C8:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8856));
    ctx.set_gpr(31, 0x08AF61E4u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF61E4u) goto L_08AF61E4;
    return;
L_08AF61E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF61E8;
L_08AF61E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6204:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF620C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[21]);
        goto L_08AF62A4;
    }
    goto L_08AF6280;
L_08AF6280:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF62A0;
      }
      goto L_08AF628C;
    }
L_08AF628C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF62A0;
      }
      goto L_08AF6298;
    }
L_08AF6298:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08AF6884;
      }
      goto L_08AF62A0;
    }
L_08AF62A0:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[21]);
    goto L_08AF62A4;
L_08AF62A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF62B4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF62B4u) goto L_08AF62B4;
    return;
L_08AF62B4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF62C0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF62C0u) goto L_08AF62C0;
    return;
L_08AF62C0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[2] << 3u);
    ctx.set_gpr(31, 0x08AF62D8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF62D8u) goto L_08AF62D8;
    return;
L_08AF62D8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF62E4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF5828;
L_08AF62E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF62F8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4578;
L_08AF62F8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF6320;
    }
    goto L_08AF6300;
L_08AF6300:
    ctx.set_gpr(31, 0x08AF6308u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4570;
L_08AF6308:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[23] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF6320;
L_08AF6320:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[23]) || std::isnan(ctx.fpr[0])) || ctx.fpr[23] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AF633C;
    }
    goto L_08AF6334;
L_08AF6334:
    ctx.set_fpr_bits(23, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AF633C;
L_08AF633C:
    ctx.set_fpu_condition((ctx.fpr[23] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF6350;
      }
      goto L_08AF634C;
    }
L_08AF634C:
    ctx.set_fpr_bits(23, ctx.fpr_bits(0));
    goto L_08AF6350;
L_08AF6350:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6500;
      }
      goto L_08AF6358;
    }
L_08AF6358:
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(31, 0x08AF6368u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6368u) goto L_08AF6368;
    return;
L_08AF6368:
    ctx.set_gpr(31, 0x08AF6370u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6370u) goto L_08AF6370;
    return;
L_08AF6370:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6390u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6390u) goto L_08AF6390;
    return;
L_08AF6390:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF63A4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF63A4u) goto L_08AF63A4;
    return;
L_08AF63A4:
    ctx.set_gpr(31, 0x08AF63ACu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4568;
L_08AF63AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF6464;
    }
    goto L_08AF63B4;
L_08AF63B4:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF63C8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF63C8u) goto L_08AF63C8;
    return;
L_08AF63C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF63E4;
    }
    goto L_08AF63D0;
L_08AF63D0:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF63E4;
L_08AF63E4:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF63F8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF63F8u) goto L_08AF63F8;
    return;
L_08AF63F8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2556));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(2, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2552));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6460u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6460u) goto L_08AF6460;
    return;
L_08AF6460:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF6464;
L_08AF6464:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6470u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6470u) goto L_08AF6470;
    return;
L_08AF6470:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF648C;
    }
    goto L_08AF6478;
L_08AF6478:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF648C;
L_08AF648C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF64A0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF64A0u) goto L_08AF64A0;
    return;
L_08AF64A0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2556));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2552));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF64F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF64F8u) goto L_08AF64F8;
    return;
L_08AF64F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08AF6554;
      }
      goto L_08AF6500;
    }
L_08AF6500:
    ctx.set_gpr(31, 0x08AF6508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6508u) goto L_08AF6508;
    return;
L_08AF6508:
    ctx.set_gpr(31, 0x08AF6510u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6510u) goto L_08AF6510;
    return;
L_08AF6510:
    ctx.set_gpr(3, ctx.gpr[22] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF653Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF653Cu) goto L_08AF653C;
    return;
L_08AF653C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF6550u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6550u) goto L_08AF6550;
    return;
L_08AF6550:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF6554;
L_08AF6554:
    ctx.set_gpr(31, 0x08AF655Cu);
    // nop
    goto L_08AF4590;
L_08AF655C:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF6868;
      }
      goto L_08AF6568;
    }
L_08AF6568:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF6594;
L_08AF6594:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF65A0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 775u, 0x08AF3204u>(ctx, &aot_mem) && ctx.pc == 0x08AF65A0u) goto L_08AF65A0;
    return;
L_08AF65A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AF685C;
    }
    goto L_08AF65B0;
L_08AF65B0:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2688));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 16816u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[30];
    ctx.fpr[21] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AF663C;
      }
      goto L_08AF65EC;
    }
L_08AF65EC:
    ctx.set_gpr(2, 16972u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) || ctx.fpr[21] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
        goto L_08AF6640;
    }
    goto L_08AF6604;
L_08AF6604:
    ctx.set_gpr(31, 0x08AF660Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4568;
L_08AF660C:
    if (ctx.gpr[2] != 0u) {
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
        goto L_08AF6620;
    }
    goto L_08AF6614;
L_08AF6614:
    ctx.set_gpr(2, 16972u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF663C;
      }
      goto L_08AF6620;
    }
L_08AF6620:
    ctx.set_gpr(2, 16972u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF663C;
      }
      goto L_08AF6638;
    }
L_08AF6638:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08AF663C;
L_08AF663C:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    goto L_08AF6640;
L_08AF6640:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6670u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6670u) goto L_08AF6670;
    return;
L_08AF6670:
    ctx.set_gpr(31, 0x08AF6678u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6678u) goto L_08AF6678;
    return;
L_08AF6678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6684u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6684u) goto L_08AF6684;
    return;
L_08AF6684:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6694u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF6694u) goto L_08AF6694;
    return;
L_08AF6694:
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF66A4u);
    ctx.fpr[24] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF66A4u) goto L_08AF66A4;
    return;
L_08AF66A4:
    ctx.set_gpr(31, 0x08AF66ACu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF66ACu) goto L_08AF66AC;
    return;
L_08AF66AC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AF66B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF66B8u) goto L_08AF66B8;
    return;
L_08AF66B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF66C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AF66C8u) goto L_08AF66C8;
    return;
L_08AF66C8:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[24], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AF66F0u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AF66F0u) goto L_08AF66F0;
    return;
L_08AF66F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6858;
      }
      goto L_08AF6700;
    }
L_08AF6700:
    ctx.set_gpr(31, 0x08AF6708u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF6708u) goto L_08AF6708;
    return;
L_08AF6708:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF67E8;
    }
    goto L_08AF6710;
L_08AF6710:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6724u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6724u) goto L_08AF6724;
    return;
L_08AF6724:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 17279u << 16u);
        goto L_08AF6740;
    }
    goto L_08AF672C;
L_08AF672C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    goto L_08AF6740;
L_08AF6740:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[25] = ctx.fpr[21] / ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(24));
    ctx.set_fpr_bits(14, ctx.fpr_bits(24));
    ctx.set_gpr(31, 0x08AF675Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(25));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF675Cu) goto L_08AF675C;
    return;
L_08AF675C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF6774u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6774u) goto L_08AF6774;
    return;
L_08AF6774:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6784u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6784u) goto L_08AF6784;
    return;
L_08AF6784:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(15, ctx.fpr_bits(25));
        goto L_08AF67A0;
    }
    goto L_08AF678C;
L_08AF678C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_fpr_bits(15, ctx.fpr_bits(25));
    goto L_08AF67A0;
L_08AF67A0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF67B0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF67B0u) goto L_08AF67B0;
    return;
L_08AF67B0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AF67C8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF67C8u) goto L_08AF67C8;
    return;
L_08AF67C8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF67E0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF67E0u) goto L_08AF67E0;
    return;
L_08AF67E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6858;
      }
      goto L_08AF67E8;
    }
L_08AF67E8:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF67F4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF67F4u) goto L_08AF67F4;
    return;
L_08AF67F4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 17279u << 16u);
        goto L_08AF6810;
    }
    goto L_08AF67FC;
L_08AF67FC:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    goto L_08AF6810;
L_08AF6810:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = ctx.fpr[21] / ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(24));
    ctx.set_gpr(31, 0x08AF6828u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(24));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6828u) goto L_08AF6828;
    return;
L_08AF6828:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF6840u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6840u) goto L_08AF6840;
    return;
L_08AF6840:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF6858u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6858u) goto L_08AF6858;
    return;
L_08AF6858:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AF685C;
L_08AF685C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AF6594;
    }
    goto L_08AF6868;
L_08AF6868:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF6880u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6880u) goto L_08AF6880;
    return;
L_08AF6880:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AF6884;
L_08AF6884:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF68C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF6930u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6930u) goto L_08AF6930;
    return;
L_08AF6930:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF693Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF693Cu) goto L_08AF693C;
    return;
L_08AF693C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6948u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF6948u) goto L_08AF6948;
    return;
L_08AF6948:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AF696Cu);
    ctx.set_gpr(22, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF696Cu) goto L_08AF696C;
    return;
L_08AF696C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6978u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF5828;
L_08AF6978:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AF69C8;
      }
      goto L_08AF6990;
    }
L_08AF6990:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF69C0;
    }
    goto L_08AF699C;
L_08AF699C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08AF69B0;
    }
    goto L_08AF69A8;
L_08AF69A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AF69E0;
      }
      goto L_08AF69B0;
    }
L_08AF69B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[1] / ctx.fpr[0];
      if (branch_taken) {
          goto L_08AF69DC;
      }
      goto L_08AF69C0;
    }
L_08AF69C0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF69DC;
      }
      goto L_08AF69C8;
    }
L_08AF69C8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[1];
    goto L_08AF69DC;
L_08AF69DC:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF69E0;
L_08AF69E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AF69FC;
    }
    goto L_08AF69F4;
L_08AF69F4:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AF69FC;
L_08AF69FC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF6A10;
      }
      goto L_08AF6A0C;
    }
L_08AF6A0C:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    goto L_08AF6A10;
L_08AF6A10:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[16]);
        goto L_08AF6BC4;
    }
    goto L_08AF6A18;
L_08AF6A18:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 16800u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16832u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6A58u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 61u, 0x08B00528u>(ctx, &aot_mem) && ctx.pc == 0x08AF6A58u) goto L_08AF6A58;
    return;
L_08AF6A58:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6A7Cu);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6A7Cu) goto L_08AF6A7C;
    return;
L_08AF6A7C:
    ctx.set_gpr(31, 0x08AF6A84u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6A84u) goto L_08AF6A84;
    return;
L_08AF6A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6A90u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6A90u) goto L_08AF6A90;
    return;
L_08AF6A90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6AA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6AA0u) goto L_08AF6AA0;
    return;
L_08AF6AA0:
    ctx.set_gpr(31, 0x08AF6AA8u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6AA8u) goto L_08AF6AA8;
    return;
L_08AF6AA8:
    ctx.set_gpr(31, 0x08AF6AB0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6AB0u) goto L_08AF6AB0;
    return;
L_08AF6AB0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF6ABCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6ABCu) goto L_08AF6ABC;
    return;
L_08AF6ABC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6ACCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AF6ACCu) goto L_08AF6ACC;
    return;
L_08AF6ACC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6AD8u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF6AD8u) goto L_08AF6AD8;
    return;
L_08AF6AD8:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[23] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08AF6B08u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6B08u) goto L_08AF6B08;
    return;
L_08AF6B08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AF6B24;
    }
    goto L_08AF6B10;
L_08AF6B10:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_08AF6B24;
L_08AF6B24:
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF6B34u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6B34u) goto L_08AF6B34;
    return;
L_08AF6B34:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[23];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6B64u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6B64u) goto L_08AF6B64;
    return;
L_08AF6B64:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6B74u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6B74u) goto L_08AF6B74;
    return;
L_08AF6B74:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AF6B90;
    }
    goto L_08AF6B7C;
L_08AF6B7C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_08AF6B90;
L_08AF6B90:
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF6BA0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6BA0u) goto L_08AF6BA0;
    return;
L_08AF6BA0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[23], 1u));
    ctx.set_gpr(31, 0x08AF6BC0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6BC0u) goto L_08AF6BC0;
    return;
L_08AF6BC0:
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[16]);
    goto L_08AF6BC4;
L_08AF6BC4:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08AF6BE0;
L_08AF6BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AF6DFC;
    }
    goto L_08AF6BF0;
L_08AF6BF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6DF8;
      }
      goto L_08AF6C04;
    }
L_08AF6C04:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF6C10u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AF6C10u) goto L_08AF6C10;
    return;
L_08AF6C10:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6DF8;
      }
      goto L_08AF6C20;
    }
L_08AF6C20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AF6C44u);
    ctx.fpr[20] = ctx.fpr[21] + ctx.fpr[0];
    goto L_08AF6E60;
L_08AF6C44:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16832u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(2, 16800u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6C6Cu);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 61u, 0x08B00528u>(ctx, &aot_mem) && ctx.pc == 0x08AF6C6Cu) goto L_08AF6C6C;
    return;
L_08AF6C6C:
    ctx.set_gpr(31, 0x08AF6C74u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6C74u) goto L_08AF6C74;
    return;
L_08AF6C74:
    ctx.set_gpr(31, 0x08AF6C7Cu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6C7Cu) goto L_08AF6C7C;
    return;
L_08AF6C7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6C9Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6C9Cu) goto L_08AF6C9C;
    return;
L_08AF6C9C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6CACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CACu) goto L_08AF6CAC;
    return;
L_08AF6CAC:
    ctx.set_gpr(31, 0x08AF6CB4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CB4u) goto L_08AF6CB4;
    return;
L_08AF6CB4:
    ctx.set_gpr(31, 0x08AF6CBCu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CBCu) goto L_08AF6CBC;
    return;
L_08AF6CBC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6CDCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CDCu) goto L_08AF6CDC;
    return;
L_08AF6CDC:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6CECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CECu) goto L_08AF6CEC;
    return;
L_08AF6CEC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6CF8u);
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF6CF8u) goto L_08AF6CF8;
    return;
L_08AF6CF8:
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AF6D9C;
      }
      goto L_08AF6D1C;
    }
L_08AF6D1C:
    ctx.set_gpr(31, 0x08AF6D24u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4568;
L_08AF6D24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF6DA0;
    }
    goto L_08AF6D2C;
L_08AF6D2C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6D40u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6D40u) goto L_08AF6D40;
    return;
L_08AF6D40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
        goto L_08AF6D5C;
    }
    goto L_08AF6D48;
L_08AF6D48:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_08AF6D5C;
L_08AF6D5C:
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_fpr_bits(14, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AF6D6Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6D6Cu) goto L_08AF6D6C;
    return;
L_08AF6D6C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[21];
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF6D9Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6D9Cu) goto L_08AF6D9C;
    return;
L_08AF6D9C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF6DA0;
L_08AF6DA0:
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AF6DACu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6DACu) goto L_08AF6DAC;
    return;
L_08AF6DAC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
        goto L_08AF6DC8;
    }
    goto L_08AF6DB4;
L_08AF6DB4:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_08AF6DC8;
L_08AF6DC8:
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_fpr_bits(14, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AF6DD8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6DD8u) goto L_08AF6DD8;
    return;
L_08AF6DD8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(31, 0x08AF6DF8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF6DF8u) goto L_08AF6DF8;
    return;
L_08AF6DF8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AF6DFC;
L_08AF6DFC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF6BE0;
      }
      goto L_08AF6E08;
    }
L_08AF6E08:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF6E20u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6E20u) goto L_08AF6E20;
    return;
L_08AF6E20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6E60:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF6ECCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6ECCu) goto L_08AF6ECC;
    return;
L_08AF6ECC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6ED8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6ED8u) goto L_08AF6ED8;
    return;
L_08AF6ED8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF6EE4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF6EE4u) goto L_08AF6EE4;
    return;
L_08AF6EE4:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2892)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[21]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[4] = ctx.fpr[1] / ctx.fpr[3];
    ctx.set_gpr(5, 17302u << 16u);
    ctx.set_gpr(4, 17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[2];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AF6F78;
      }
      goto L_08AF6F40;
    }
L_08AF6F40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF6F70;
    }
    goto L_08AF6F4C;
L_08AF6F4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_08AF6F60;
    }
    goto L_08AF6F58;
L_08AF6F58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AF6F90;
      }
      goto L_08AF6F60;
    }
L_08AF6F60:
    ctx.set_gpr(31, 0x08AF6F68u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 363u, 0x08B01D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6F68u) goto L_08AF6F68;
    return;
L_08AF6F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6F8C;
      }
      goto L_08AF6F70;
    }
L_08AF6F70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6F8C;
      }
      goto L_08AF6F78;
    }
L_08AF6F78:
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF6F8Cu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 363u, 0x08B01D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF6F8Cu) goto L_08AF6F8C;
    return;
L_08AF6F8C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF6F90;
L_08AF6F90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF6FA4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF6FA4u) goto L_08AF6FA4;
    return;
L_08AF6FA4:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF7088;
      }
      goto L_08AF6FB4;
    }
L_08AF6FB4:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(23, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(30, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08AF6FCC;
L_08AF6FCC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AF7074;
    }
    goto L_08AF6FD8;
L_08AF6FD8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF6FE4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AF6FE4u) goto L_08AF6FE4;
    return;
L_08AF6FE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7070;
      }
      goto L_08AF6FF4;
    }
L_08AF6FF4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AF7018u);
    ctx.fpr[21] = ctx.fpr[22] + ctx.fpr[1];
    goto L_08AF6E60;
L_08AF7018:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF7038u);
    ctx.fpr[13] = ctx.fpr[21] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 61u, 0x08B00528u>(ctx, &aot_mem) && ctx.pc == 0x08AF7038u) goto L_08AF7038;
    return;
L_08AF7038:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7070u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF7070u) goto L_08AF7070;
    return;
L_08AF7070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AF7074;
L_08AF7074:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AF6FCC;
      }
      goto L_08AF7088;
    }
L_08AF7088:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF70A0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF70A0u) goto L_08AF70A0;
    return;
L_08AF70A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
L_08AF70DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF7144u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7144u) goto L_08AF7144;
    return;
L_08AF7144:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF7150u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7150u) goto L_08AF7150;
    return;
L_08AF7150:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF715Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF715Cu) goto L_08AF715C;
    return;
L_08AF715C:
    ctx.set_gpr(31, 0x08AF7164u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF7164u) goto L_08AF7164;
    return;
L_08AF7164:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2884)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[21]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[2];
    ctx.set_gpr(5, 17302u << 16u);
    ctx.set_gpr(4, 17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AF71FC;
      }
      goto L_08AF71C4;
    }
L_08AF71C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF71F4;
    }
    goto L_08AF71D0;
L_08AF71D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_08AF71E4;
    }
    goto L_08AF71DC;
L_08AF71DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AF7218;
      }
      goto L_08AF71E4;
    }
L_08AF71E4:
    ctx.set_gpr(31, 0x08AF71ECu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 363u, 0x08B01D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF71ECu) goto L_08AF71EC;
    return;
L_08AF71EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08AF7214;
      }
      goto L_08AF71F4;
    }
L_08AF71F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF7214;
      }
      goto L_08AF71FC;
    }
L_08AF71FC:
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF7210u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 363u, 0x08B01D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7210u) goto L_08AF7210;
    return;
L_08AF7210:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08AF7214;
L_08AF7214:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF7218;
L_08AF7218:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF722Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF722Cu) goto L_08AF722C;
    return;
L_08AF722C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF7394;
      }
      goto L_08AF723C;
    }
L_08AF723C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(30, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_08AF7258;
L_08AF7258:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08AF7380;
    }
    goto L_08AF7264;
L_08AF7264:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF7270u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AF7270u) goto L_08AF7270;
    return;
L_08AF7270:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF737C;
      }
      goto L_08AF7280;
    }
L_08AF7280:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[23] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AF72A8u);
    ctx.fpr[22] = ctx.fpr[23] + ctx.fpr[1];
    goto L_08AF6E60;
L_08AF72A8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[23];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF72C8u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 61u, 0x08B00528u>(ctx, &aot_mem) && ctx.pc == 0x08AF72C8u) goto L_08AF72C8;
    return;
L_08AF72C8:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16840u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[21];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    ctx.fpr[21] = ctx.fpr[1] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AF7344;
      }
      goto L_08AF72E8;
    }
L_08AF72E8:
    ctx.set_gpr(31, 0x08AF72F0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF4568;
L_08AF72F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AF7348;
    }
    goto L_08AF72F8;
L_08AF72F8:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF7314u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF7314u) goto L_08AF7314;
    return;
L_08AF7314:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[22];
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[21];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7344u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF7344u) goto L_08AF7344;
    return;
L_08AF7344:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AF7348;
L_08AF7348:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF735Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF735Cu) goto L_08AF735C;
    return;
L_08AF735C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[22], 1u));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8852));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(31, 0x08AF737Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AF737Cu) goto L_08AF737C;
    return;
L_08AF737C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08AF7380;
L_08AF7380:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AF7258;
      }
      goto L_08AF7394;
    }
L_08AF7394:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AF73ACu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AF73ACu) goto L_08AF73AC;
    return;
L_08AF73AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF73EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF7400u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7400u) goto L_08AF7400;
    return;
L_08AF7400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF740Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF740Cu) goto L_08AF740C;
    return;
L_08AF740C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7418;
      }
      goto L_08AF7414;
    }
L_08AF7414:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7418;
L_08AF7418:
    ctx.set_gpr(31, 0x08AF7420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7420u) goto L_08AF7420;
    return;
L_08AF7420:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF742Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF742Cu) goto L_08AF742C;
    return;
L_08AF742C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7438;
      }
      goto L_08AF7434;
    }
L_08AF7434:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7438;
L_08AF7438:
    ctx.set_gpr(31, 0x08AF7440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7440u) goto L_08AF7440;
    return;
L_08AF7440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF744Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF744Cu) goto L_08AF744C;
    return;
L_08AF744C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7458;
      }
      goto L_08AF7454;
    }
L_08AF7454:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7458;
L_08AF7458:
    ctx.set_gpr(31, 0x08AF7460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7460u) goto L_08AF7460;
    return;
L_08AF7460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF746Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF746Cu) goto L_08AF746C;
    return;
L_08AF746C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7478;
      }
      goto L_08AF7474;
    }
L_08AF7474:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7478;
L_08AF7478:
    ctx.set_gpr(31, 0x08AF7480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7480u) goto L_08AF7480;
    return;
L_08AF7480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF748Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF748Cu) goto L_08AF748C;
    return;
L_08AF748C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7498;
      }
      goto L_08AF7494;
    }
L_08AF7494:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7498;
L_08AF7498:
    ctx.set_gpr(31, 0x08AF74A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF74A0u) goto L_08AF74A0;
    return;
L_08AF74A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF74ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF74ACu) goto L_08AF74AC;
    return;
L_08AF74AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF74B8;
      }
      goto L_08AF74B4;
    }
L_08AF74B4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF74B8;
L_08AF74B8:
    ctx.set_gpr(31, 0x08AF74C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF74C0u) goto L_08AF74C0;
    return;
L_08AF74C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF74CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF74CCu) goto L_08AF74CC;
    return;
L_08AF74CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF74D8;
      }
      goto L_08AF74D4;
    }
L_08AF74D4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF74D8;
L_08AF74D8:
    ctx.set_gpr(31, 0x08AF74E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF74E0u) goto L_08AF74E0;
    return;
L_08AF74E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF74ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF74ECu) goto L_08AF74EC;
    return;
L_08AF74EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF74F8;
      }
      goto L_08AF74F4;
    }
L_08AF74F4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF74F8;
L_08AF74F8:
    ctx.set_gpr(31, 0x08AF7500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7500u) goto L_08AF7500;
    return;
L_08AF7500:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF750Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF750Cu) goto L_08AF750C;
    return;
L_08AF750C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7518;
      }
      goto L_08AF7514;
    }
L_08AF7514:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF7518;
L_08AF7518:
    ctx.set_gpr(31, 0x08AF7520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7520u) goto L_08AF7520;
    return;
L_08AF7520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF752Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF752Cu) goto L_08AF752C;
    return;
L_08AF752C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AF753C;
    }
    goto L_08AF7534;
L_08AF7534:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AF753C;
L_08AF753C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF754C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7588;
    }
L_08AF7588:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AF7B08;
    }
    goto L_08AF75B0;
L_08AF75B0:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(244), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7644;
      }
      goto L_08AF75E0;
    }
L_08AF75E0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1444));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF75FC:
    ctx.set_gpr(31, 0x08AF7604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 606u, 0x08AFF388u>(ctx, &aot_mem) && ctx.pc == 0x08AF7604u) goto L_08AF7604;
    return;
L_08AF7604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7644;
      }
      goto L_08AF760C;
    }
L_08AF760C:
    ctx.set_gpr(31, 0x08AF7614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 697u, 0x08AFF7D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7614u) goto L_08AF7614;
    return;
L_08AF7614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7644;
      }
      goto L_08AF761C;
    }
L_08AF761C:
    ctx.set_gpr(31, 0x08AF7624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 790u, 0x08AFFC68u>(ctx, &aot_mem) && ctx.pc == 0x08AF7624u) goto L_08AF7624;
    return;
L_08AF7624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF762C;
    }
L_08AF762C:
    ctx.set_gpr(31, 0x08AF7634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 806u, 0x08AFFD88u>(ctx, &aot_mem) && ctx.pc == 0x08AF7634u) goto L_08AF7634;
    return;
L_08AF7634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF763C;
    }
L_08AF763C:
    ctx.set_gpr(31, 0x08AF7644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 606u, 0x08AFF388u>(ctx, &aot_mem) && ctx.pc == 0x08AF7644u) goto L_08AF7644;
    return;
L_08AF7644:
    ctx.set_gpr(31, 0x08AF764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF764Cu) goto L_08AF764C;
    return;
L_08AF764C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF7658u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF7658u) goto L_08AF7658;
    return;
L_08AF7658:
    ctx.set_gpr(31, 0x08AF7660u);
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7660u) goto L_08AF7660;
    return;
L_08AF7660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF766Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF766Cu) goto L_08AF766C;
    return;
L_08AF766C:
    ctx.set_gpr(31, 0x08AF7674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7674u) goto L_08AF7674;
    return;
L_08AF7674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF7680u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF7680u) goto L_08AF7680;
    return;
L_08AF7680:
    ctx.set_gpr(31, 0x08AF7688u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7688u) goto L_08AF7688;
    return;
L_08AF7688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF7694u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF7694u) goto L_08AF7694;
    return;
L_08AF7694:
    ctx.set_gpr(31, 0x08AF769Cu);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF769Cu) goto L_08AF769C;
    return;
L_08AF769C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF76A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF76A8u) goto L_08AF76A8;
    return;
L_08AF76A8:
    ctx.set_gpr(31, 0x08AF76B0u);
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF76B0u) goto L_08AF76B0;
    return;
L_08AF76B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF76BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF76BCu) goto L_08AF76BC;
    return;
L_08AF76BC:
    ctx.set_gpr(31, 0x08AF76C4u);
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF76C4u) goto L_08AF76C4;
    return;
L_08AF76C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF76D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AF76D0u) goto L_08AF76D0;
    return;
L_08AF76D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(30, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08AF7700u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7700u) goto L_08AF7700;
    return;
L_08AF7700:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF770Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF770Cu) goto L_08AF770C;
    return;
L_08AF770C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF7718u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF7B74;
L_08AF7718:
    ctx.set_gpr(31, 0x08AF7720u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AF7720u) goto L_08AF7720;
    return;
L_08AF7720:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AF7748u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 58u, 0x08AFC418u>(ctx, &aot_mem) && ctx.pc == 0x08AF7748u) goto L_08AF7748;
    return;
L_08AF7748:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF77DC;
      }
      goto L_08AF7750;
    }
L_08AF7750:
    ctx.set_gpr(31, 0x08AF7758u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF7B6C;
L_08AF7758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7760;
    }
L_08AF7760:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF776Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF776Cu) goto L_08AF776C;
    return;
L_08AF776C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF77B8;
      }
      goto L_08AF7774;
    }
L_08AF7774:
    ctx.set_gpr(31, 0x08AF777Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF777Cu) goto L_08AF777C;
    return;
L_08AF777C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF7790u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7790u) goto L_08AF7790;
    return;
L_08AF7790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF77B8;
    }
L_08AF77B8:
    ctx.set_gpr(31, 0x08AF77C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF77C0u) goto L_08AF77C0;
    return;
L_08AF77C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF77D4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF77D4u) goto L_08AF77D4;
    return;
L_08AF77D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF77DC;
    }
L_08AF77DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7838;
      }
      goto L_08AF77E4;
    }
L_08AF77E4:
    ctx.set_gpr(31, 0x08AF77ECu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 402u, 0x08A81280u>(ctx, &aot_mem) && ctx.pc == 0x08AF77ECu) goto L_08AF77EC;
    return;
L_08AF77EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF77F4;
    }
L_08AF77F4:
    ctx.set_gpr(31, 0x08AF77FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF77FCu) goto L_08AF77FC;
    return;
L_08AF77FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF7810u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7810u) goto L_08AF7810;
    return;
L_08AF7810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7838;
    }
L_08AF7838:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF78D0;
      }
      goto L_08AF7840;
    }
L_08AF7840:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF784Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 690u, 0x08AF2C34u>(ctx, &aot_mem) && ctx.pc == 0x08AF784Cu) goto L_08AF784C;
    return;
L_08AF784C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7854;
    }
L_08AF7854:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF7860u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08AF7B50;
L_08AF7860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF78AC;
      }
      goto L_08AF7868;
    }
L_08AF7868:
    ctx.set_gpr(31, 0x08AF7870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7870u) goto L_08AF7870;
    return;
L_08AF7870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF7884u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7884u) goto L_08AF7884;
    return;
L_08AF7884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF78AC;
    }
L_08AF78AC:
    ctx.set_gpr(31, 0x08AF78B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF78B4u) goto L_08AF78B4;
    return;
L_08AF78B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF78C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF78C8u) goto L_08AF78C8;
    return;
L_08AF78C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF78D0;
    }
L_08AF78D0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7968;
      }
      goto L_08AF78D8;
    }
L_08AF78D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF78E4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 691u, 0x08AF2C50u>(ctx, &aot_mem) && ctx.pc == 0x08AF78E4u) goto L_08AF78E4;
    return;
L_08AF78E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF78EC;
    }
L_08AF78EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AF78F8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08AF7B34;
L_08AF78F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7944;
      }
      goto L_08AF7900;
    }
L_08AF7900:
    ctx.set_gpr(31, 0x08AF7908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7908u) goto L_08AF7908;
    return;
L_08AF7908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF791Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF791Cu) goto L_08AF791C;
    return;
L_08AF791C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7944;
    }
L_08AF7944:
    ctx.set_gpr(31, 0x08AF794Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF794Cu) goto L_08AF794C;
    return;
L_08AF794C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF7960u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7960u) goto L_08AF7960;
    return;
L_08AF7960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7968;
    }
L_08AF7968:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7A34;
      }
      goto L_08AF7970;
    }
L_08AF7970:
    ctx.set_gpr(31, 0x08AF7978u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF5820;
L_08AF7978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7980;
    }
L_08AF7980:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF79A8;
    }
L_08AF79A8:
    ctx.set_gpr(31, 0x08AF79B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 529u, 0x08AFEE60u>(ctx, &aot_mem) && ctx.pc == 0x08AF79B0u) goto L_08AF79B0;
    return;
L_08AF79B0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF79C0;
    }
L_08AF79C0:
    ctx.set_gpr(31, 0x08AF79C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF79C8u) goto L_08AF79C8;
    return;
L_08AF79C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF79DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF79DCu) goto L_08AF79DC;
    return;
L_08AF79DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF7A24u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7A24u) goto L_08AF7A24;
    return;
L_08AF7A24:
    ctx.set_gpr(31, 0x08AF7A2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 869u, 0x0884B448u>(ctx, &aot_mem) && ctx.pc == 0x08AF7A2Cu) goto L_08AF7A2C;
    return;
L_08AF7A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7A34;
    }
L_08AF7A34:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7A3C;
    }
L_08AF7A3C:
    ctx.set_gpr(31, 0x08AF7A44u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AF5820;
L_08AF7A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7A4C;
    }
L_08AF7A4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7A80;
    }
L_08AF7A80:
    ctx.set_gpr(31, 0x08AF7A88u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 517u, 0x08AFEDA0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7A88u) goto L_08AF7A88;
    return;
L_08AF7A88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF7B04;
      }
      goto L_08AF7A98;
    }
L_08AF7A98:
    ctx.set_gpr(31, 0x08AF7AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7AA0u) goto L_08AF7AA0;
    return;
L_08AF7AA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AF7AB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7AB4u) goto L_08AF7AB4;
    return;
L_08AF7AB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AF7AFCu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7AFCu) goto L_08AF7AFC;
    return;
L_08AF7AFC:
    ctx.set_gpr(31, 0x08AF7B04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 869u, 0x0884B448u>(ctx, &aot_mem) && ctx.pc == 0x08AF7B04u) goto L_08AF7B04;
    return;
L_08AF7B04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AF7B08;
L_08AF7B08:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B34:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(21)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B50:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(19)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B6C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(43)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B74:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B80:
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
    goto L_08AF7BA8;
L_08AF7BA8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AF7C08;
    }
    goto L_08AF7BB4;
L_08AF7BB4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7C04;
      }
      goto L_08AF7BC0;
    }
L_08AF7BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7BF8;
    }
    goto L_08AF7BD0;
L_08AF7BD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7BE4;
    }
    goto L_08AF7BDC;
L_08AF7BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7C04;
      }
      goto L_08AF7BE4;
    }
L_08AF7BE4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7BF0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF7C30;
L_08AF7BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7C04;
      }
      goto L_08AF7BF8;
    }
L_08AF7BF8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7C04u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF9B10u>(ctx, &aot_mem) && ctx.pc == 0x08AF7C04u) goto L_08AF7C04;
    return;
L_08AF7C04:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF7C08;
L_08AF7C08:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08AF7BA8;
      }
      goto L_08AF7C14;
    }
L_08AF7C14:
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
L_08AF7C30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    ctx.set_gpr(16, 0u + 0u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[1];
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF7CE4;
      }
      goto L_08AF7C98;
    }
L_08AF7C98:
    ctx.set_gpr(31, 0x08AF7CA0u);
    // nop
    goto L_08AF73EC;
L_08AF7CA0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
        goto L_08AF7CE8;
    }
    goto L_08AF7CA8;
L_08AF7CA8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AF7CBCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 815u, 0x08AFBF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7CBCu) goto L_08AF7CBC;
    return;
L_08AF7CBC:
    ctx.set_gpr(31, 0x08AF7CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7CC4u) goto L_08AF7CC4;
    return;
L_08AF7CC4:
    ctx.set_gpr(31, 0x08AF7CCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 211u, 0x08AF0E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7CCCu) goto L_08AF7CCC;
    return;
L_08AF7CCC:
    ctx.set_gpr(31, 0x08AF7CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7CD4u) goto L_08AF7CD4;
    return;
L_08AF7CD4:
    ctx.set_gpr(31, 0x08AF7CDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 213u, 0x08AF0E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7CDCu) goto L_08AF7CDC;
    return;
L_08AF7CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7D90;
      }
      goto L_08AF7CE4;
    }
L_08AF7CE4:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AF7CE8;
L_08AF7CE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7D7C;
    }
    goto L_08AF7CF8;
L_08AF7CF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7D68;
    }
    goto L_08AF7D04;
L_08AF7D04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7D54;
    }
    goto L_08AF7D10;
L_08AF7D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7D40;
    }
    goto L_08AF7D1C;
L_08AF7D1C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AF7D2C;
    }
    goto L_08AF7D24;
L_08AF7D24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AF7D90;
      }
      goto L_08AF7D2C;
    }
L_08AF7D2C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7D38u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF7DB4;
L_08AF7D38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF7D8C;
      }
      goto L_08AF7D40;
    }
L_08AF7D40:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7D4Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 172u, 0x08AF8E08u>(ctx, &aot_mem) && ctx.pc == 0x08AF7D4Cu) goto L_08AF7D4C;
    return;
L_08AF7D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF7D8C;
      }
      goto L_08AF7D54;
    }
L_08AF7D54:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7D60u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 298u, 0x08AF96C0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7D60u) goto L_08AF7D60;
    return;
L_08AF7D60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF7D8C;
      }
      goto L_08AF7D68;
    }
L_08AF7D68:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7D74u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 314u, 0x08AF9830u>(ctx, &aot_mem) && ctx.pc == 0x08AF7D74u) goto L_08AF7D74;
    return;
L_08AF7D74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF7D8C;
      }
      goto L_08AF7D7C;
    }
L_08AF7D7C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AF7D88u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF99A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7D88u) goto L_08AF7D88;
    return;
L_08AF7D88:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AF7D8C;
L_08AF7D8C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AF7D90;
L_08AF7D90:
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
L_08AF7DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AF7E2C;
      }
      goto L_08AF7E28;
    }
L_08AF7E28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08AF7E2C;
L_08AF7E2C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 77u, 0x08AF8634u>(ctx, &aot_mem); return;
      }
      goto L_08AF7E44;
    }
L_08AF7E44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
        goto L_08AF7E64;
    }
    goto L_08AF7E50;
L_08AF7E50:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF7E60;
    }
    goto L_08AF7E58;
L_08AF7E58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 171u, 0x08AF8DE0u>(ctx, &aot_mem); return;
      }
      goto L_08AF7E60;
    }
L_08AF7E60:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    goto L_08AF7E64;
L_08AF7E64:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[20];
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7E90u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7E90u) goto L_08AF7E90;
    return;
L_08AF7E90:
    ctx.set_gpr(31, 0x08AF7E98u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF7E98u) goto L_08AF7E98;
    return;
L_08AF7E98:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7EBCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF7EBCu) goto L_08AF7EBC;
    return;
L_08AF7EBC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF7EDCu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7EDCu) goto L_08AF7EDC;
    return;
L_08AF7EDC:
    ctx.set_gpr(31, 0x08AF7EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7EE4u) goto L_08AF7EE4;
    return;
L_08AF7EE4:
    ctx.set_gpr(31, 0x08AF7EECu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF7EECu) goto L_08AF7EEC;
    return;
L_08AF7EEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7F10u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F10u) goto L_08AF7F10;
    return;
L_08AF7F10:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF7F30u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7F30u) goto L_08AF7F30;
    return;
L_08AF7F30:
    ctx.set_gpr(31, 0x08AF7F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F38u) goto L_08AF7F38;
    return;
L_08AF7F38:
    ctx.set_gpr(31, 0x08AF7F40u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F40u) goto L_08AF7F40;
    return;
L_08AF7F40:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-768)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7F64u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F64u) goto L_08AF7F64;
    return;
L_08AF7F64:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF7F84u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7F84u) goto L_08AF7F84;
    return;
L_08AF7F84:
    ctx.set_gpr(31, 0x08AF7F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F8Cu) goto L_08AF7F8C;
    return;
L_08AF7F8C:
    ctx.set_gpr(31, 0x08AF7F94u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF7F94u) goto L_08AF7F94;
    return;
L_08AF7F94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF7FB8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF7FB8u) goto L_08AF7FB8;
    return;
L_08AF7FB8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF7FD8u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF7FD8u) goto L_08AF7FD8;
    return;
L_08AF7FD8:
    ctx.set_gpr(31, 0x08AF7FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7FE0u) goto L_08AF7FE0;
    return;
L_08AF7FE0:
    ctx.set_gpr(31, 0x08AF7FE8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF7FE8u) goto L_08AF7FE8;
    return;
L_08AF7FE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-720)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.pc = 0x08AF8000u; return;
}

void recomp_unit_0188(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0188_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_188(Runtime &runtime) {
    runtime.register_generated_unit(188u, 0x08AF4000u, 16384u, &recomp_unit_0188, &recomp_unit_0188_entry);
    runtime.register_function(0x08AF4000u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4008u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4010u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4018u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4024u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF402Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4040u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4048u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4068u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4070u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4090u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4098u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF410Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4114u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4134u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF413Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4158u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4160u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4174u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF417Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4184u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4190u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4198u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4204u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4210u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4218u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4238u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4240u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4260u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4268u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF427Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4280u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4290u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4300u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF430Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF431Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF433Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4344u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4358u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF435Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4378u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4384u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4390u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4418u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4420u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4448u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4450u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF445Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4464u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4474u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4480u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4500u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF454Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4568u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4570u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4578u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4580u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4588u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4590u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4598u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF460Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4618u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF463Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4650u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF467Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4698u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4704u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4708u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4710u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4714u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF471Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4744u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF474Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4758u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF476Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4790u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4798u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4804u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4824u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF482Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4838u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF484Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF486Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4874u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4880u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4894u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4904u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF490Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4918u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF492Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4938u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4940u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4948u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4968u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF497Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4984u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF498Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4EA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4EA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF500Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF502Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF503Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF505Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF507Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5094u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5104u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5110u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5120u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5128u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5130u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF513Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF514Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5154u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF515Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5168u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5178u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF518Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5194u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5208u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5220u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5228u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5230u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF523Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5254u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF525Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5264u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5270u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5290u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5308u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5334u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF533Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5340u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5348u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5350u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF535Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF537Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5384u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF538Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5404u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5410u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5430u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5438u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF544Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF546Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5474u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF547Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF550Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5518u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5524u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF552Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5534u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF553Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5548u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5558u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5564u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF556Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5574u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5594u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5638u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5640u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5648u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5654u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5674u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF567Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5684u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF568Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5698u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5704u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5734u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF573Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5744u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5750u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5780u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5788u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5790u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF579Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5818u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5820u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5828u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5830u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5910u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5930u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5938u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5944u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5958u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5978u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5980u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF598Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6020u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF602Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6038u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6044u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6050u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6058u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6060u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6068u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6070u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6078u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF607Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6084u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF608Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6094u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6098u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6100u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6108u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6138u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6140u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6158u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6178u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6194u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF619Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6204u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF620Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6280u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF628Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6300u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6308u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6320u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6334u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF633Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF634Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6350u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6358u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6368u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6370u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6390u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6464u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6470u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6478u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF648Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6500u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6508u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6510u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF653Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6550u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6554u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF655Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6568u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6594u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6604u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF660Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6614u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6620u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6638u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF663Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6640u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6670u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6678u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6684u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6694u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6700u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6708u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6710u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF672Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6740u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF675Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6774u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6784u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF678Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6810u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6828u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6840u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6858u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF685Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6868u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6880u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6884u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6930u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF693Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6948u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF696Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6978u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6990u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF699Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ABCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ACCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ECCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ED8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7018u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7038u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7070u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7074u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7088u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7144u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7150u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF715Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7164u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7210u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7214u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7218u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF722Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF723Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7258u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7264u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7270u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7280u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7314u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7344u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7348u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF735Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF737Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7380u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7394u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7400u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF740Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7414u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7418u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7420u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF742Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7434u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7438u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF744Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7454u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7458u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF746Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7474u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7478u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7480u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF748Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7494u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7498u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7500u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF750Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7514u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7518u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7520u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF752Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7534u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF753Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF754Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7588u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7604u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF760Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7614u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF761Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7624u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF762Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7634u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF763Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7644u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF764Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7658u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7660u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF766Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7674u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7680u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7688u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7694u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF769Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7700u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF770Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7718u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7720u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7748u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7750u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7758u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7760u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF776Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7774u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF777Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7790u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7810u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7838u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7840u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF784Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7854u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7860u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7868u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7870u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7884u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7900u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7908u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF791Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7944u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF794Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7960u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7968u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7970u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7978u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7980u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FE8u, &recomp_unit_0188, "recomp_unit_0188");
}
} // namespace psprecomp
